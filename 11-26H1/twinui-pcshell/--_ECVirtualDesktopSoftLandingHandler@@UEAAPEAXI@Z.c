/*
 * XREFs of ??_ECVirtualDesktopSoftLandingHandler@@UEAAPEAXI@Z @ 0x180568660
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CVirtualDesktopSoftLandingHandler@@UEAA@XZ @ 0x1805685D0 (--1CVirtualDesktopSoftLandingHandler@@UEAA@XZ.c)
 */

CVirtualDesktopSoftLandingHandler *__fastcall CVirtualDesktopSoftLandingHandler::`vector deleting destructor'(
        CVirtualDesktopSoftLandingHandler *this,
        char a2)
{
  CVirtualDesktopSoftLandingHandler::~CVirtualDesktopSoftLandingHandler(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC8);
  return this;
}
