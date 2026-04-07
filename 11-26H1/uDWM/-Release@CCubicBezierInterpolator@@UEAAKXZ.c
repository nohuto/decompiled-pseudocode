/*
 * XREFs of ?Release@CCubicBezierInterpolator@@UEAAKXZ @ 0x1800A9CB0
 * Callers:
 *     ?CreateTransition@CCubicBezierInterpolator@@SAJPEAUIUIAnimationTransitionFactory2@@NPEANIMMMMPEAPEAUIUIAnimationTransition2@@@Z @ 0x180085EC8 (-CreateTransition@CCubicBezierInterpolator@@SAJPEAUIUIAnimationTransitionFactory2@@NPEANIMMMMPEA.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 *     ??1CCubicBezierInterpolator@@IEAA@XZ @ 0x1800A97A4 (--1CCubicBezierInterpolator@@IEAA@XZ.c)
 */

__int64 __fastcall CCubicBezierInterpolator::Release(CCubicBezierInterpolator *this)
{
  unsigned int v2; // edi

  v2 = *((_DWORD *)this + 19) - 1;
  *((_DWORD *)this + 19) = v2;
  if ( !v2 )
  {
    CCubicBezierInterpolator::~CCubicBezierInterpolator(this);
    operator delete(this, (const struct std::nothrow_t *)0x50);
  }
  return v2;
}
