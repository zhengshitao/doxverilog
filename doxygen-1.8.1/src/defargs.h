/******************************************************************************
 *
 * $Id: declinfo.h,v 1.1 1998/09/09 21:32:19 root Exp $
 *
 * Copyright (C) 1997-2012 by Dimitri van Heesch.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation under the terms of the GNU General Public License is hereby 
 * granted. No representations are made about the suitability of this software 
 * for any purpose. It is provided "as is" without express or implied warranty.
 * See the GNU General Public License for more details.
 *
 * Documents produced by Doxygen are derivative works derived from the
 * input used in their production; they are not affected by this license.
 *
 */

#ifndef DEFARGS_H
#define DEFARGS_H

#include "qtbc.h"
#include <stdio.h>

class ArgumentList;

extern void stringToArgumentList(const char *argsString,ArgumentList* argList,
                                 QCString *extraTypeChars=0);

#endif
