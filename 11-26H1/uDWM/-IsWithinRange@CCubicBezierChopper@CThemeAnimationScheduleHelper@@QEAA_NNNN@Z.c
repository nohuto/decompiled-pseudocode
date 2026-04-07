/*
 * XREFs of ?IsWithinRange@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA_NNNN@Z @ 0x1800999F4
 * Callers:
 *     ?ContinueTo@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNN@Z @ 0x180099394 (-ContinueTo@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNN@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(
        CThemeAnimationScheduleHelper::CCubicBezierChopper *this,
        double a2,
        double a3,
        double a4)
{
  __int64 v4; // xmm4_8
  bool v5; // cf

  COERCE_DOUBLE(v4 = _mm_load_si128((const __m128i *)&_xmm).m128i_i64[0]);
  if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a4 - a2) & v4) < 0.0001
    || COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a4 - a3) & v4) < 0.0001 )
  {
    return 1;
  }
  if ( a3 > a2 )
  {
    if ( a4 >= a2 )
    {
      v5 = a3 < a4;
      return !v5;
    }
    return 0;
  }
  if ( a2 <= a3 )
    return a4 == a2;
  if ( a4 < a3 )
    return 0;
  v5 = a2 < a4;
  return !v5;
}
