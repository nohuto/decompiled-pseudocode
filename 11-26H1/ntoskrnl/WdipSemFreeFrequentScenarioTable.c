/*
 * XREFs of WdipSemFreeFrequentScenarioTable @ 0x140AD9048
 * Callers:
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x140AD8F0C (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 * Callees:
 *     WdipSemFastFree @ 0x140ADB450 (WdipSemFastFree.c)
 */

__int64 WdipSemFreeFrequentScenarioTable()
{
  __int64 i; // rdi
  __int64 result; // rax

  for ( i = 0LL; (unsigned int)i < dword_140F066E0; i = (unsigned int)(i + 1) )
  {
    result = WdipSemFastFree(5LL, *(&stru_140F060A8.AffinityVersion + i));
    *(&stru_140F060A8.AffinityVersion + i) = 0LL;
  }
  dword_140F066E0 = 0;
  return result;
}
