/*
 * XREFs of WdipSemFreeFrequentScenarioTable @ 0x140AD5AF8
 * Callers:
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x140AD59BC (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 * Callees:
 *     WdipSemFastFree @ 0x140AD7F00 (WdipSemFastFree.c)
 */

__int64 WdipSemFreeFrequentScenarioTable()
{
  __int64 i; // rdi
  __int64 result; // rax

  for ( i = 0LL; (unsigned int)i < dword_140F049E0; i = (unsigned int)(i + 1) )
  {
    result = WdipSemFastFree(5LL, *(_QWORD *)&stru_140F042A0.PriorityFloorCounts[8 * i + 8]);
    *(_QWORD *)&stru_140F042A0.PriorityFloorCounts[8 * i + 8] = 0LL;
  }
  dword_140F049E0 = 0;
  return result;
}
