/*
 * XREFs of CcTelemetryPeriodicTimerCallback @ 0x140B114C0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219CA0 (KeSetCoalescableTimer.c)
 *     CcForEachPartition @ 0x140259934 (CcForEachPartition.c)
 *     CcPostVolumeTelemetry @ 0x140495AE0 (CcPostVolumeTelemetry.c)
 *     CcHasGlobalTelemetryChanged @ 0x1404EBA50 (CcHasGlobalTelemetryChanged.c)
 */

void CcTelemetryPeriodicTimerCallback()
{
  char HasGlobalTelemetryChanged; // di
  char v1; // r8

  if ( *((_BYTE *)&EmpParseLock.SwapListEntry + 8) )
  {
    _InterlockedExchange((volatile __int32 *)&EmpParseLock.AffinityPrimaryGroup, 0);
    if ( _InterlockedIncrement((volatile signed __int32 *)&EmpParseLock.Affinity) == 1
      && !_InterlockedCompareExchange((_DWORD *)&EmpParseLock.Affinity + 1, 1, 0) )
    {
      ++EmpParseLock.Timer.Dpc;
      *(_QWORD *)&EmpParseLock.Timer.Processor += (unsigned int)CcNumberOfMappedVacbs;
      HasGlobalTelemetryChanged = CcHasGlobalTelemetryChanged();
      CcForEachPartition((__int64)CcPartitionTelemetryCallback, 0LL, v1, v1);
      CcPostVolumeTelemetry();
      if ( BYTE1(EmpParseLock.Timer.TimerListEntry.Flink) || !HasGlobalTelemetryChanged )
        _InterlockedExchange((_DWORD *)&EmpParseLock.Affinity + 1, 0);
      else
        KeSetCoalescableTimer(
          (PKTIMER)&EmpParseLock.SchedulerApcFill5[8],
          *(LARGE_INTEGER *)&EmpParseLock.Timer.Header.Lock,
          0,
          0x3A98u,
          (PKDPC)&EmpParseLock.NpxState);
    }
    _InterlockedDecrement((volatile signed __int32 *)&EmpParseLock.Affinity);
  }
}
