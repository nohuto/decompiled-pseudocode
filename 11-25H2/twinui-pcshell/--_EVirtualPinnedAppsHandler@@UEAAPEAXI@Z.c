/*
 * XREFs of ??_EVirtualPinnedAppsHandler@@UEAAPEAXI@Z @ 0x1805401C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualPinnedAppsHandler@@UEAA@XZ @ 0x180540160 (--1VirtualPinnedAppsHandler@@UEAA@XZ.c)
 */

VirtualPinnedAppsHandler *__fastcall VirtualPinnedAppsHandler::`vector deleting destructor'(
        VirtualPinnedAppsHandler *this,
        char a2)
{
  VirtualPinnedAppsHandler::~VirtualPinnedAppsHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
