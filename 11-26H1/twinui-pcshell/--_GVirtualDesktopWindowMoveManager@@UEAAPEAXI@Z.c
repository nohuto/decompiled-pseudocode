/*
 * XREFs of ??_GVirtualDesktopWindowMoveManager@@UEAAPEAXI@Z @ 0x180566B40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopWindowMoveManager@@UEAA@XZ @ 0x180566AB8 (--1VirtualDesktopWindowMoveManager@@UEAA@XZ.c)
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
