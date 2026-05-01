/*
 * XREFs of ??_ECVirtualDesktopComponent@@UEAAPEAXI@Z @ 0x18022EAC0
 * Callers:
 *     ??_ECVirtualDesktopComponent@@WCI@EAAPEAXI@Z @ 0x18054B4F0 (--_ECVirtualDesktopComponent@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CVirtualDesktopComponent@@UEAA@XZ @ 0x180295B74 (--1CVirtualDesktopComponent@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CVirtualDesktopComponent *__fastcall CVirtualDesktopComponent::`vector deleting destructor'(
        CVirtualDesktopComponent *this,
        char a2)
{
  CVirtualDesktopComponent::~CVirtualDesktopComponent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x128);
  return this;
}
