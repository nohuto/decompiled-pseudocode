/*
 * XREFs of ??_ECDWMDXGIAdapter@@EEAAPEAXI@Z @ 0x180074C00
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CDWMDXGIAdapter@@EEAA@XZ @ 0x180074C38 (--1CDWMDXGIAdapter@@EEAA@XZ.c)
 */

CDWMDXGIAdapter *__fastcall CDWMDXGIAdapter::`vector deleting destructor'(CDWMDXGIAdapter *this, char a2)
{
  const struct std::nothrow_t *v4; // rdx

  CDWMDXGIAdapter::~CDWMDXGIAdapter(this);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  return this;
}
