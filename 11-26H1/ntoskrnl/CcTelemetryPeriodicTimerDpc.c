/*
 * XREFs of CcTelemetryPeriodicTimerDpc @ 0x1404F2540
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 */

void CcTelemetryPeriodicTimerDpc()
{
  _InterlockedExchange((_DWORD *)&EmpParseLock.Affinity + 1, 0);
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)&EmpParseLock.AffinityPrimaryGroup, 1, 0) )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)&EmpParseLock.SchedulerApcFill5[72], NormalWorkQueue);
}
