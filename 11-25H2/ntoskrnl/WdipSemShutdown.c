/*
 * XREFs of WdipSemShutdown @ 0x140792DAC
 * Callers:
 *     WdipSemUpdate @ 0x140791198 (WdipSemUpdate.c)
 *     WdipSemCleanStart @ 0x1407919E8 (WdipSemCleanStart.c)
 *     WdipSemDisableScenario @ 0x140A42EA0 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140A4370C (WdipSemEnableScenario.c)
 * Callees:
 *     WdipSemClearFrequentScenarioTable @ 0x14064031C (WdipSemClearFrequentScenarioTable.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     WdipSemFreePool @ 0x140793420 (WdipSemFreePool.c)
 *     WdipSemDisableAllProviders @ 0x140793DC0 (WdipSemDisableAllProviders.c)
 */

__int64 WdipSemShutdown()
{
  WdipSemDisabledScenarioTable = 0LL;
  WdipSemEnabled = 0;
  WdipSemTimeoutEnabled = 0;
  WdipSemTimeoutValue = 600;
  WdipSemDisableAllProviders();
  WdipDiagLoggerId = 0;
  WdipContextLoggerId = 0;
  memset_0(WdipSemScenarioTable, 0, 0x208uLL);
  memset_0(&WdipSemProviderTable, 0, 0x2008uLL);
  qword_140F01508 = 0LL;
  dword_140F01530 = 0;
  qword_140F01538 = 0LL;
  qword_140F01528 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemClearFrequentScenarioTable();
  return WdipSemFreePool();
}
