/*
 * XREFs of ??_EHotkeyHandler@@UEAAPEAXI@Z @ 0x18058A660
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1HotkeyHandler@@UEAA@XZ @ 0x18058A458 (--1HotkeyHandler@@UEAA@XZ.c)
 */

HotkeyHandler *__fastcall HotkeyHandler::`vector deleting destructor'(HotkeyHandler *this, char a2)
{
  HotkeyHandler::~HotkeyHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1F0);
  return this;
}
