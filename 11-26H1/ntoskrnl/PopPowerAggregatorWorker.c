/*
 * XREFs of PopPowerAggregatorWorker @ 0x140ABB2C0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopBSDiagSetTriageThread @ 0x140ABB370 (PopBSDiagSetTriageThread.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x140ABB3B8 (PopPowerAggregatorDiagTraceEvent.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x140ABB450 (PopPowerAggregatorInvokeStateMachine.c)
 */

__int64 __fastcall PopPowerAggregatorWorker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, a2, a3, a4);
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_START, 0, 0LL);
  PopBSDiagSetTriageThread(0LL, KeGetCurrentThread());
  qword_140F0EAF0 = (__int64)KeGetCurrentThread();
  while ( ((__int64)PopPowerAggregatorLock.SListFaultAddress & 2) != 0 )
  {
    LODWORD(PopPowerAggregatorLock.SListFaultAddress) &= ~2u;
    PopPowerAggregatorInvokeStateMachine();
  }
  qword_140F0EAF0 = 0LL;
  LODWORD(PopPowerAggregatorLock.SListFaultAddress) &= ~1u;
  PopBSDiagSetTriageThread(0LL, 0LL);
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_END, 0, 0LL);
  return PopReleaseRwLock(&PopPowerAggregatorLock);
}
