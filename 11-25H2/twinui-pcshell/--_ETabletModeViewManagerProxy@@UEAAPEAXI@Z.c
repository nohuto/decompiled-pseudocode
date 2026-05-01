/*
 * XREFs of ??_ETabletModeViewManagerProxy@@UEAAPEAXI@Z @ 0x18048D590
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TabletModeViewManagerProxy@@UEAA@XZ @ 0x18048D564 (--1TabletModeViewManagerProxy@@UEAA@XZ.c)
 */

TabletModeViewManagerProxy *__fastcall TabletModeViewManagerProxy::`vector deleting destructor'(
        TabletModeViewManagerProxy *this,
        char a2)
{
  TabletModeViewManagerProxy::~TabletModeViewManagerProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
