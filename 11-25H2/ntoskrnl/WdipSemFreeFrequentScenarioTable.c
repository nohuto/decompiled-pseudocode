/*
 * XREFs of WdipSemFreeFrequentScenarioTable @ 0x140A42E40
 * Callers:
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x140A42D20 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 * Callees:
 *     WdipSemFastFree @ 0x1406EDCC4 (WdipSemFastFree.c)
 */

PSLIST_ENTRY WdipSemFreeFrequentScenarioTable()
{
  __int64 i; // rdi
  PSLIST_ENTRY result; // rax

  for ( i = 0LL; (unsigned int)i < dword_140F01960; i = (unsigned int)(i + 1) )
  {
    result = WdipSemFastFree(5, (_SLIST_ENTRY *)WdipSemFrequentScenarioTable[i]);
    WdipSemFrequentScenarioTable[i] = 0LL;
  }
  dword_140F01960 = 0;
  return result;
}
