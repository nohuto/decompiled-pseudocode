/*
 * XREFs of ?Release@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAKXZ @ 0x180099B50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 *     ??1CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA@XZ @ 0x18009904C (--1CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA@XZ.c)
 */

__int64 __fastcall CThemeAnimationScheduleHelper::CCubicBezierChopper::Release(
        CThemeAnimationScheduleHelper::CCubicBezierChopper *this)
{
  __int64 result; // rax

  result = (unsigned int)(*((_DWORD *)this + 2) - 1);
  *((_DWORD *)this + 2) = result;
  if ( !(_DWORD)result )
  {
    CThemeAnimationScheduleHelper::CCubicBezierChopper::~CCubicBezierChopper(this);
    operator delete(this, (const struct std::nothrow_t *)0x88);
    return 0LL;
  }
  return result;
}
