/*
 * XREFs of CrmComparisonRoutineFanNoiseBelowLow @ 0x18006BC00
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutineFanNoiseUnderLimit @ 0x18006EDEC (CrmStateRoutineFanNoiseUnderLimit.c)
 */

__int64 __fastcall CrmComparisonRoutineFanNoiseBelowLow(__int64 a1, __int64 a2)
{
  return (unsigned int)CrmStateRoutineFanNoiseUnderLimit(a2, 1LL) != 0 ? 2 : 0;
}
