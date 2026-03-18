/*
 * XREFs of WdipSemClearFrequentScenarioTable @ 0x14064031C
 * Callers:
 *     WdipSemInitializeGlobalState @ 0x140791A54 (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x140792DAC (WdipSemShutdown.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void *WdipSemClearFrequentScenarioTable()
{
  void *result; // rax

  result = memset_0(&WdipSemFrequentScenarioTable, 0, 0x408uLL);
  qword_140F01968 = 0LL;
  return result;
}
