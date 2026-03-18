/*
 * XREFs of WdipSemClearFrequentScenarioTable @ 0x1406C3478
 * Callers:
 *     WdipSemInitializeGlobalState @ 0x14081F55C (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x1408208C4 (WdipSemShutdown.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void *WdipSemClearFrequentScenarioTable()
{
  void *result; // rax

  result = memset_0(&stru_140F060A8.AffinityVersion, 0, 0x408uLL);
  *(_QWORD *)&stru_140F066E8.Header.Lock = 0LL;
  return result;
}
