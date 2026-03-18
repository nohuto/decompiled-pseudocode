/*
 * XREFs of PopNotifyCsStateExited @ 0x140ABB270
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorDiagTraceEvent @ 0x140ABB3B8 (PopPowerAggregatorDiagTraceEvent.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140ABB41C (PopPowerAggregatorScheduleWorker.c)
 */

__int64 __fastcall PopNotifyCsStateExited(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, a2, a3, a4);
  PopPowerAggregatorScheduleWorker(&PopPowerAggregatorLock.Header.WaitListHead.Blink);
  PopPowerAggregatorDiagTraceEvent(&POP_ETW_EVENT_POWER_AGGREGATOR_PDC_PHASES_EXITED, 0, 0LL);
  return PopReleaseRwLock(&PopPowerAggregatorLock);
}
