/*
 * XREFs of ??_GViewEventArgsForShowAsStandalone@@UEAAPEAXI@Z @ 0x180413BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ViewEventArgsForShowAsStandalone@@UEAA@XZ @ 0x180413190 (--1ViewEventArgsForShowAsStandalone@@UEAA@XZ.c)
 */

ViewEventArgsForShowAsStandalone *__fastcall ViewEventArgsForShowAsStandalone::`scalar deleting destructor'(
        ViewEventArgsForShowAsStandalone *this,
        char a2)
{
  ViewEventArgsForShowAsStandalone::~ViewEventArgsForShowAsStandalone(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA0);
  return this;
}
