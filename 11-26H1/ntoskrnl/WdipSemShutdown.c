/*
 * XREFs of WdipSemShutdown @ 0x140826AD4
 * Callers:
 *     WdipSemUpdate @ 0x140824E7C (WdipSemUpdate.c)
 *     WdipSemCleanStart @ 0x140825700 (WdipSemCleanStart.c)
 *     WdipSemEnableScenario @ 0x140AD5DB4 (WdipSemEnableScenario.c)
 *     WdipSemDisableScenario @ 0x140AD6000 (WdipSemDisableScenario.c)
 * Callees:
 *     WdipSemClearFrequentScenarioTable @ 0x1406C7058 (WdipSemClearFrequentScenarioTable.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     WdipSemFreePool @ 0x140826FAC (WdipSemFreePool.c)
 *     WdipSemDisableAllProviders @ 0x1408279C0 (WdipSemDisableAllProviders.c)
 */

__int64 WdipSemShutdown()
{
  LOBYTE(stru_140F042A0.Timer.DueTime.LowPart) = 0;
  LOBYTE(stru_140F042A0.PropagateBoostsEntry.Next) = 0;
  HIDWORD(stru_140F06A28.SListFaultAddress) = 600;
  stru_140F042A0.Timer.Header.WaitListHead.Blink = 0LL;
  WdipSemDisableAllProviders();
  stru_140F06A28.QuantumTarget = 0LL;
  memset_0(&stru_140F042A0.Timer.TimerListEntry, 0, 0x208uLL);
  memset_0(&stru_140F049E8.StackBase, 0, 0x2008uLL);
  *(_QWORD *)&stru_140F06A28.Header.Lock = 0LL;
  stru_140F049E8.QuantumTarget = (unsigned __int64)&stru_140F049E8.SListFaultAddress;
  stru_140F049E8.SListFaultAddress = &stru_140F049E8.SListFaultAddress;
  LODWORD(stru_140F049E8.InitialStack) = 0;
  stru_140F049E8.StackLimit = 0LL;
  WdipSemClearFrequentScenarioTable();
  return WdipSemFreePool();
}
