/*
 * XREFs of ?AddRef@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAKXZ @ 0x180099150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CThemeAnimationScheduleHelper::CCubicBezierChopper::AddRef(
        CThemeAnimationScheduleHelper::CCubicBezierChopper *this)
{
  return (unsigned int)++*((_DWORD *)this + 2);
}
