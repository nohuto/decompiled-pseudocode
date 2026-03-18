/*
 * XREFs of WdipSemShutdown @ 0x1408208C4
 * Callers:
 *     WdipSemUpdate @ 0x14081EC6C (WdipSemUpdate.c)
 *     WdipSemCleanStart @ 0x14081F4F0 (WdipSemCleanStart.c)
 *     WdipSemEnableScenario @ 0x140AD9304 (WdipSemEnableScenario.c)
 *     WdipSemDisableScenario @ 0x140AD9550 (WdipSemDisableScenario.c)
 * Callees:
 *     WdipSemClearFrequentScenarioTable @ 0x1406C3478 (WdipSemClearFrequentScenarioTable.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     WdipSemFreePool @ 0x140820D9C (WdipSemFreePool.c)
 *     WdipSemDisableAllProviders @ 0x1408217B0 (WdipSemDisableAllProviders.c)
 */

__int64 WdipSemShutdown()
{
  LOBYTE(stru_140F066E8.Header.WaitListHead.Flink) = 0;
  LOBYTE(stru_140F060A8.Process) = 0;
  HIDWORD(stru_140F03F40.Timer.Header.WaitListHead.Blink) = 600;
  stru_140F066E8.Header.WaitListHead.Blink = 0LL;
  WdipSemDisableAllProviders();
  stru_140F066E8.SListFaultAddress = 0LL;
  memset_0(&stru_140F060A8.SListFaultAddress, 0, 0x208uLL);
  memset_0(&stru_140F03F40.WaitBlockFill11[32], 0, 0x2008uLL);
  *(_QWORD *)&stru_140F060A8.Header.Lock = 0LL;
  stru_140F03F40.WaitBlock[0].WaitListEntry.Blink = (struct _LIST_ENTRY *)&stru_140F03F40.320;
  stru_140F03F40.WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)&stru_140F03F40.320;
  *(_DWORD *)&stru_140F03F40.WaitBlockFill11[16] = 0;
  stru_140F03F40.WaitBlock[0].Thread = 0LL;
  WdipSemClearFrequentScenarioTable();
  return WdipSemFreePool();
}
