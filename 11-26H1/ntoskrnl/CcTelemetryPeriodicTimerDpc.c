/*
 * XREFs of CcTelemetryPeriodicTimerDpc @ 0x1404F8F30
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 */

void CcTelemetryPeriodicTimerDpc()
{
  _InterlockedExchange((_DWORD *)&EmpParseLock.AffinityVersion + 1, 0);
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)&EmpParseLock.Affinity, 1, 0) )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)&EmpParseLock.SchedulerApcFill5[64], NormalWorkQueue);
}
