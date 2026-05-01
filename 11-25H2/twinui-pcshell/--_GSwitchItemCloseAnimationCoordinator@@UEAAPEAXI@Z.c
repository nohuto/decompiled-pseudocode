/*
 * XREFs of ??_GSwitchItemCloseAnimationCoordinator@@UEAAPEAXI@Z @ 0x1804C5330
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ItemAnimationCoordinatorBase@@QEAA@XZ @ 0x1804C50E8 (--1ItemAnimationCoordinatorBase@@QEAA@XZ.c)
 */

SwitchItemCloseAnimationCoordinator *__fastcall SwitchItemCloseAnimationCoordinator::`scalar deleting destructor'(
        SwitchItemCloseAnimationCoordinator *this,
        char a2)
{
  *((_DWORD *)this + 61) = -1073741823;
  ItemAnimationCoordinatorBase::~ItemAnimationCoordinatorBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF8);
  return this;
}
