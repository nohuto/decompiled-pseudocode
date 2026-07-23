/*
 * XREFs of PopThermalTelemetryWorker @ 0x1404245E0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopCoolingTelemetryWorker @ 0x1404244F8 (PopCoolingTelemetryWorker.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 *     PopPowerLimitTelemetryWorker @ 0x140424A9C (PopPowerLimitTelemetryWorker.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x14050A090 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x14060CD80 (PopTraceThermalZoneActiveActivity.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140B31158 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140B43630 (PopThermalUpdateActiveTimeTracking.c)
 */

__int64 PopThermalTelemetryWorker()
{
  struct _SINGLE_LIST_ENTRY *i; // rbx
  __int64 v1; // rdx
  __int64 result; // rax

  PopAcquireRwLockShared(&PopPolicyDeviceLock);
  for ( i = PpmIdlePolicyLock.SystemAffinityTokenListHead.Next;
        i != &PpmIdlePolicyLock.SystemAffinityTokenListHead;
        i = i->Next )
  {
    PopAcquireRwLockExclusive(&i[54]);
    if ( BYTE1(i[18].Next) )
    {
      LOBYTE(v1) = i[10].Next;
      PopThermalUpdatePassiveTimeTracking(&i[63], v1);
      PopTraceThermalZonePassiveHistogram(i);
    }
    if ( BYTE1(i[63].Next) )
    {
      LOBYTE(v1) = BYTE5(i[8].Next);
      PopThermalUpdateActiveTimeTracking(&i[63], v1);
      PopTraceThermalZoneActiveActivity(i);
    }
    PopReleaseRwLock((struct _KTHREAD *)&i[54]);
  }
  PopReleaseRwLock((struct _KTHREAD *)&PopPolicyDeviceLock);
  PopCoolingTelemetryWorker();
  result = PopPowerLimitTelemetryWorker();
  _InterlockedExchange(&dword_140F0FE48, 0);
  return result;
}
