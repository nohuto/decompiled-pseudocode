/*
 * XREFs of ??_ECVirtualDesktopSwitcherService@@UEAAPEAXI@Z @ 0x1801A9B30
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVirtualDesktopSwitcherService@@UEAA@XZ @ 0x1801A9B6C (--1CVirtualDesktopSwitcherService@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CVirtualDesktopSwitcherService *__fastcall CVirtualDesktopSwitcherService::`vector deleting destructor'(
        CVirtualDesktopSwitcherService *this,
        char a2)
{
  CVirtualDesktopSwitcherService::~CVirtualDesktopSwitcherService(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
