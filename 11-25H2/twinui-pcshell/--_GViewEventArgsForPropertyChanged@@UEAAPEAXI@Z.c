/*
 * XREFs of ??_GViewEventArgsForPropertyChanged@@UEAAPEAXI@Z @ 0x1801EA720
 * Callers:
 *     <none>
 * Callees:
 *     ??1ViewEventArgsForPropertyChanged@@UEAA@XZ @ 0x1801EA75C (--1ViewEventArgsForPropertyChanged@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ViewEventArgsForPropertyChanged *__fastcall ViewEventArgsForPropertyChanged::`scalar deleting destructor'(
        ViewEventArgsForPropertyChanged *this,
        char a2)
{
  ViewEventArgsForPropertyChanged::~ViewEventArgsForPropertyChanged(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
