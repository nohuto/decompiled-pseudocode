/*
 * XREFs of ??_GViewEventArgsForShowAsViewMode@@UEAAPEAXI@Z @ 0x180413BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ViewEventArgsForShowAsViewMode@@UEAA@XZ @ 0x1804131D8 (--1ViewEventArgsForShowAsViewMode@@UEAA@XZ.c)
 */

ViewEventArgsForShowAsViewMode *__fastcall ViewEventArgsForShowAsViewMode::`scalar deleting destructor'(
        ViewEventArgsForShowAsViewMode *this,
        char a2)
{
  ViewEventArgsForShowAsViewMode::~ViewEventArgsForShowAsViewMode(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB0);
  return this;
}
