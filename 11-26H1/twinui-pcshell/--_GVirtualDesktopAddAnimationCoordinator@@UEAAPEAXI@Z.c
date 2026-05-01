/*
 * XREFs of ??_GVirtualDesktopAddAnimationCoordinator@@UEAAPEAXI@Z @ 0x1804E11B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ItemAnimationCoordinatorBase@@QEAA@XZ @ 0x1804D7144 (--1ItemAnimationCoordinatorBase@@QEAA@XZ.c)
 */

VirtualDesktopAddAnimationCoordinator *__fastcall VirtualDesktopAddAnimationCoordinator::`scalar deleting destructor'(
        VirtualDesktopAddAnimationCoordinator *this,
        char a2)
{
  *((_DWORD *)this + 61) = -1073741823;
  ItemAnimationCoordinatorBase::~ItemAnimationCoordinatorBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x100);
  return this;
}
