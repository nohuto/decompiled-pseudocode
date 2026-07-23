/*
 * XREFs of PopPowerAggregatorWorker @ 0x140ABC780
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopBSDiagSetTriageThread @ 0x140ABC830 (PopBSDiagSetTriageThread.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x140ABC878 (PopPowerAggregatorDiagTraceEvent.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x140ABC910 (PopPowerAggregatorInvokeStateMachine.c)
 */

__int64 __fastcall PopPowerAggregatorWorker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, a2, a3, a4);
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_START, 0, 0LL);
  PopBSDiagSetTriageThread(0LL, KeGetCurrentThread());
  qword_140F0EEB0 = (__int64)KeGetCurrentThread();
  while ( (dword_140F0D8C8 & 2) != 0 )
  {
    dword_140F0D8C8 &= ~2u;
    PopPowerAggregatorInvokeStateMachine();
  }
  qword_140F0EEB0 = 0LL;
  dword_140F0D8C8 &= ~1u;
  PopBSDiagSetTriageThread(0LL, 0LL);
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_WORKER_END, 0, 0LL);
  return PopReleaseRwLock((struct _KTHREAD *)&PopPowerAggregatorLock);
}
