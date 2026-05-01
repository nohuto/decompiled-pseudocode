/*
 * XREFs of ??_GCFrameApplicationPresentation@@UEAAPEAXI@Z @ 0x180309670
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CFrameApplicationPresentation@@UEAA@XZ @ 0x180308B7C (--1CFrameApplicationPresentation@@UEAA@XZ.c)
 */

CFrameApplicationPresentation *__fastcall CFrameApplicationPresentation::`scalar deleting destructor'(
        CFrameApplicationPresentation *this,
        char a2)
{
  CFrameApplicationPresentation::~CFrameApplicationPresentation(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x288);
  return this;
}
