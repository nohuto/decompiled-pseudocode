/*
 * XREFs of CrmComparisonRoutineFanNoiseBelowHigh @ 0x180069C60
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutineFanNoiseUnderLimit @ 0x18006EDEC (CrmStateRoutineFanNoiseUnderLimit.c)
 */

__int64 __fastcall CrmComparisonRoutineFanNoiseBelowHigh(__int64 a1, __int64 a2)
{
  return (unsigned int)CrmStateRoutineFanNoiseUnderLimit(a2, 3LL) != 0 ? 2 : 0;
}
