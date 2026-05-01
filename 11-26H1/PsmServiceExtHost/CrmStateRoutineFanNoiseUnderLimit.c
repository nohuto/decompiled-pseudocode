/*
 * XREFs of CrmStateRoutineFanNoiseUnderLimit @ 0x18006EDEC
 * Callers:
 *     CrmComparisonRoutineFanNoiseBelowHigh @ 0x180069C60 (CrmComparisonRoutineFanNoiseBelowHigh.c)
 *     CrmComparisonRoutineFanNoiseBelowMed @ 0x18006AD10 (CrmComparisonRoutineFanNoiseBelowMed.c)
 *     CrmComparisonRoutineFanNoiseBelowLow @ 0x18006BC00 (CrmComparisonRoutineFanNoiseBelowLow.c)
 * Callees:
 *     <none>
 */

bool __fastcall CrmStateRoutineFanNoiseUnderLimit(_DWORD *a1, unsigned int a2)
{
  return !*a1 || a1[2] < a2;
}
