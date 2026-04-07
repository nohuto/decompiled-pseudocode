/*
 * XREFs of ??_ECHolographicSlate@@UEAAPEAXI@Z @ 0x1800B6A30
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CHolographicSlate@@UEAA@XZ @ 0x1800B69F8 (--1CHolographicSlate@@UEAA@XZ.c)
 */

CHolographicSlate *__fastcall CHolographicSlate::`vector deleting destructor'(CHolographicSlate *this, char a2)
{
  const struct std::nothrow_t *v4; // rdx

  CHolographicSlate::~CHolographicSlate(this);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  return this;
}
