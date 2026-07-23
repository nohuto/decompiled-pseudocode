/*
 * XREFs of WdipSemInitializeGlobalState @ 0x14082576C
 * Callers:
 *     WdipSemInitialize @ 0x140824DA8 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x140824E7C (WdipSemUpdate.c)
 * Callees:
 *     InitializeSListHead @ 0x140492D50 (InitializeSListHead.c)
 *     WdipSemClearFrequentScenarioTable @ 0x1406C7058 (WdipSemClearFrequentScenarioTable.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *WdipSemInitializeGlobalState()
{
  __int64 v0; // rdi
  struct _LIST_ENTRY **p_Blink; // rbx
  void *result; // rax

  stru_140F06A28.Header.WaitListHead.Blink = 0LL;
  stru_140F06A28.Header.WaitListHead.Flink = 0LL;
  LOBYTE(stru_140F042A0.Timer.DueTime.LowPart) = 0;
  LOBYTE(stru_140F042A0.PropagateBoostsEntry.Next) = 0;
  HIDWORD(stru_140F06A28.SListFaultAddress) = 0;
  stru_140F042A0.Timer.Header.WaitListHead.Blink = 0LL;
  stru_140F06A28.QuantumTarget = 0LL;
  memset_0(&WdipSemPool, 0, 0x90uLL);
  qword_140E285A8 = (__int64)&WdipSemPool;
  v0 = 6LL;
  WdipSemPool = &WdipSemPool;
  p_Blink = &stru_140E285C0.Header.WaitListHead.Blink;
  *(_QWORD *)&stru_140E285C0.Header.Lock = 0LL;
  do
  {
    InitializeSListHead((PSLIST_HEADER)p_Blink);
    p_Blink += 2;
    --v0;
  }
  while ( v0 );
  memset_0(&stru_140F042A0.Timer.TimerListEntry, 0, 0x208uLL);
  memset_0(&stru_140F049E8.StackBase, 0, 0x2008uLL);
  *(_QWORD *)&stru_140F06A28.Header.Lock = 0LL;
  stru_140F049E8.QuantumTarget = (unsigned __int64)&stru_140F049E8.SListFaultAddress;
  stru_140F049E8.SListFaultAddress = &stru_140F049E8.SListFaultAddress;
  LODWORD(stru_140F049E8.InitialStack) = 0;
  stru_140F049E8.StackLimit = 0LL;
  result = WdipSemClearFrequentScenarioTable();
  LOBYTE(stru_140F06A28.SListFaultAddress) = 1;
  return result;
}
