/*
 * XREFs of ??_ETabletModeViewManagerProxy@@UEAAPEAXI@Z @ 0x18049E1D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TabletModeViewManagerProxy@@UEAA@XZ @ 0x18049E1A8 (--1TabletModeViewManagerProxy@@UEAA@XZ.c)
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
