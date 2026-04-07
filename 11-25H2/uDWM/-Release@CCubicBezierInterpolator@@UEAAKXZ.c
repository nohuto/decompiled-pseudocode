/*
 * XREFs of ?Release@CCubicBezierInterpolator@@UEAAKXZ @ 0x1800ABD40
 * Callers:
 *     ?CreateTransition@CCubicBezierInterpolator@@SAJPEAUIUIAnimationTransitionFactory2@@NPEANIMMMMPEAPEAUIUIAnimationTransition2@@@Z @ 0x1800AB780 (-CreateTransition@CCubicBezierInterpolator@@SAJPEAUIUIAnimationTransitionFactory2@@NPEANIMMMMPEA.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CCubicBezierInterpolator@@IEAA@XZ @ 0x1800AB6FC (--1CCubicBezierInterpolator@@IEAA@XZ.c)
 */

__int64 __fastcall CCubicBezierInterpolator::Release(CCubicBezierInterpolator *this)
{
  bool v1; // zf
  unsigned int v3; // edi
  const struct std::nothrow_t *v4; // rdx

  v1 = (*((_DWORD *)this + 19))-- == 1;
  v3 = *((_DWORD *)this + 19);
  if ( v1 )
  {
    CCubicBezierInterpolator::~CCubicBezierInterpolator(this);
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  }
  return v3;
}
