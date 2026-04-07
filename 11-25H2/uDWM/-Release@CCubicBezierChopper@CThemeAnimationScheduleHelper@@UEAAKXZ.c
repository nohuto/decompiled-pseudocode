/*
 * XREFs of ?Release@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAKXZ @ 0x1800A71E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA@XZ @ 0x1800A66EC (--1CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA@XZ.c)
 */

__int64 __fastcall CThemeAnimationScheduleHelper::CCubicBezierChopper::Release(
        CThemeAnimationScheduleHelper::CCubicBezierChopper *this)
{
  __int64 result; // rax
  const struct std::nothrow_t *v3; // rdx

  result = (unsigned int)(*((_DWORD *)this + 2) - 1);
  *((_DWORD *)this + 2) = result;
  if ( !(_DWORD)result )
  {
    CThemeAnimationScheduleHelper::CCubicBezierChopper::~CCubicBezierChopper(this);
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v3);
    return 0LL;
  }
  return result;
}
