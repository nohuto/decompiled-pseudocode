/*
 * XREFs of ??_ETabletModeInputHandler@@EEAAPEAXI@Z @ 0x18050CFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TabletModeInputHandler@@EEAA@XZ @ 0x18050CF74 (--1TabletModeInputHandler@@EEAA@XZ.c)
 */

TabletModeInputHandler *__fastcall TabletModeInputHandler::`vector deleting destructor'(
        TabletModeInputHandler *this,
        char a2)
{
  TabletModeInputHandler::~TabletModeInputHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
