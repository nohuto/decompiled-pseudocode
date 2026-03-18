/*
 * XREFs of CcTelemetryPeriodicTimerCallback @ 0x140B0FC90
 * Callers:
 *     <none>
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219B40 (KeSetCoalescableTimer.c)
 *     CcForEachPartition @ 0x140258154 (CcForEachPartition.c)
 *     CcPostVolumeTelemetry @ 0x14049BF90 (CcPostVolumeTelemetry.c)
 *     CcHasGlobalTelemetryChanged @ 0x1404F2470 (CcHasGlobalTelemetryChanged.c)
 */

void CcTelemetryPeriodicTimerCallback()
{
  char HasGlobalTelemetryChanged; // di
  char v1; // r8

  if ( LOBYTE(EmpParseLock.WaitListEntry.Flink) )
  {
    _InterlockedExchange((volatile __int32 *)&EmpParseLock.Affinity, 0);
    if ( _InterlockedIncrement((volatile signed __int32 *)&EmpParseLock.AffinityVersion) == 1
      && !_InterlockedCompareExchange((_DWORD *)&EmpParseLock.AffinityVersion + 1, 1, 0) )
    {
      ++EmpParseLock.Timer.TimerListEntry.Blink;
      EmpParseLock.Timer.Dpc = (_KDPC *)((char *)EmpParseLock.Timer.Dpc + (unsigned int)CcNumberOfMappedVacbs);
      HasGlobalTelemetryChanged = CcHasGlobalTelemetryChanged();
      CcForEachPartition((__int64)CcPartitionTelemetryCallback, 0LL, v1, v1);
      CcPostVolumeTelemetry();
      if ( BYTE1(EmpParseLock.Timer.DueTime.LowPart) || !HasGlobalTelemetryChanged )
        _InterlockedExchange((_DWORD *)&EmpParseLock.AffinityVersion + 1, 0);
      else
        KeSetCoalescableTimer(
          (PKTIMER)&EmpParseLock.648,
          (LARGE_INTEGER)EmpParseLock.RelativeTimerBias,
          0,
          0x3A98u,
          (PKDPC)&EmpParseLock.AffinityPrimaryGroup);
    }
    _InterlockedDecrement((volatile signed __int32 *)&EmpParseLock.AffinityVersion);
  }
}
