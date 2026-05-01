/*
 * XREFs of CrmComparisonRoutineFanNoiseBelowMed @ 0x18006AD10
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateRoutineFanNoiseUnderLimit @ 0x18006EDEC (CrmStateRoutineFanNoiseUnderLimit.c)
 */

__int64 __fastcall CrmComparisonRoutineFanNoiseBelowMed(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // edx

  v2 = CrmStateRoutineFanNoiseUnderLimit(a2, 2LL);
  return v3 & (unsigned int)-(v2 != 0);
}
