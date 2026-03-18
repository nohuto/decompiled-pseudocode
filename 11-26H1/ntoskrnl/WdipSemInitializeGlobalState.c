/*
 * XREFs of WdipSemInitializeGlobalState @ 0x14081F55C
 * Callers:
 *     WdipSemInitialize @ 0x14081EB98 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x14081EC6C (WdipSemUpdate.c)
 * Callees:
 *     InitializeSListHead @ 0x140499200 (InitializeSListHead.c)
 *     WdipSemClearFrequentScenarioTable @ 0x1406C3478 (WdipSemClearFrequentScenarioTable.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void *WdipSemInitializeGlobalState()
{
  __int64 v0; // rdi
  struct _LIST_ENTRY **p_Blink; // rbx
  void *result; // rax

  stru_140F03F40.Timer.DueTime.QuadPart = 0LL;
  stru_140F03F40.Timer.TimerListEntry.Flink = 0LL;
  LOBYTE(stru_140F066E8.Header.WaitListHead.Flink) = 0;
  LOBYTE(stru_140F060A8.Process) = 0;
  HIDWORD(stru_140F03F40.Timer.Header.WaitListHead.Blink) = 0;
  stru_140F066E8.Header.WaitListHead.Blink = 0LL;
  stru_140F066E8.SListFaultAddress = 0LL;
  memset_0(&WdipSemPool, 0, 0x90uLL);
  qword_140E28428 = (__int64)&WdipSemPool;
  v0 = 6LL;
  WdipSemPool = &WdipSemPool;
  p_Blink = &stru_140E28440.Header.WaitListHead.Blink;
  *(_QWORD *)&stru_140E28440.Header.Lock = 0LL;
  do
  {
    InitializeSListHead((PSLIST_HEADER)p_Blink);
    p_Blink += 2;
    --v0;
  }
  while ( v0 );
  memset_0(&stru_140F060A8.SListFaultAddress, 0, 0x208uLL);
  memset_0(&stru_140F03F40.WaitBlockFill11[32], 0, 0x2008uLL);
  *(_QWORD *)&stru_140F060A8.Header.Lock = 0LL;
  stru_140F03F40.WaitBlock[0].WaitListEntry.Blink = (struct _LIST_ENTRY *)&stru_140F03F40.320;
  stru_140F03F40.WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)&stru_140F03F40.320;
  *(_DWORD *)&stru_140F03F40.WaitBlockFill11[16] = 0;
  stru_140F03F40.WaitBlock[0].Thread = 0LL;
  result = WdipSemClearFrequentScenarioTable();
  LOBYTE(stru_140F03F40.Timer.Header.WaitListHead.Blink) = 1;
  return result;
}
