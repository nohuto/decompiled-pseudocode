/*
 * XREFs of WdipSemClearFrequentScenarioTable @ 0x1406C7058
 * Callers:
 *     WdipSemInitializeGlobalState @ 0x14082576C (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x140826AD4 (WdipSemShutdown.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *WdipSemClearFrequentScenarioTable()
{
  void *result; // rax

  result = memset_0(&stru_140F042A0.PriorityFloorCounts[8], 0, 0x408uLL);
  *(_QWORD *)&stru_140F049E8.Header.Lock = 0LL;
  return result;
}
