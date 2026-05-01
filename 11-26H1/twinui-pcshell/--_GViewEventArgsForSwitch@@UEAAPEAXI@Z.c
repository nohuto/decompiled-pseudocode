/*
 * XREFs of ??_GViewEventArgsForSwitch@@UEAAPEAXI@Z @ 0x180413C20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ViewEventArgsForSwitch@@UEAA@XZ @ 0x180413220 (--1ViewEventArgsForSwitch@@UEAA@XZ.c)
 */

ViewEventArgsForSwitch *__fastcall ViewEventArgsForSwitch::`scalar deleting destructor'(
        ViewEventArgsForSwitch *this,
        char a2)
{
  ViewEventArgsForSwitch::~ViewEventArgsForSwitch(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
