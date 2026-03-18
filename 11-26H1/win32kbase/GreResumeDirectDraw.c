/*
 * XREFs of GreResumeDirectDraw @ 0x14013B5F0
 * Callers:
 *     <none>
 * Callees:
 *     GreIncrementDisplaySettingsUniqueness @ 0x14013B610 (GreIncrementDisplaySettingsUniqueness.c)
 */

__int64 __fastcall GreResumeDirectDraw(__int64 a1)
{
  return GreIncrementDisplaySettingsUniqueness(a1);
}
