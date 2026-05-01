/*
 * XREFs of ??_GVirtualDesktopWindowMoveManager@@UEAAPEAXI@Z @ 0x180542C60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopWindowMoveManager@@UEAA@XZ @ 0x180542BDC (--1VirtualDesktopWindowMoveManager@@UEAA@XZ.c)
 */

VirtualDesktopWindowMoveManager *__fastcall VirtualDesktopWindowMoveManager::`scalar deleting destructor'(
        VirtualDesktopWindowMoveManager *this,
        char a2)
{
  VirtualDesktopWindowMoveManager::~VirtualDesktopWindowMoveManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x78);
  return this;
}
