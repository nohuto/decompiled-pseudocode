/*
 * XREFs of ??_ECVirtualDesktop@@UEAAPEAXI@Z @ 0x180545260
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CVirtualDesktop@@UEAA@XZ @ 0x180545204 (--1CVirtualDesktop@@UEAA@XZ.c)
 */

CVirtualDesktop *__fastcall CVirtualDesktop::`vector deleting destructor'(CVirtualDesktop *this, char a2)
{
  CVirtualDesktop::~CVirtualDesktop(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x90);
  return this;
}
