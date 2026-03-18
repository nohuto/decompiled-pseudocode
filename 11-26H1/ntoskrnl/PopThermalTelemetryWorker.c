/*
 * XREFs of PopThermalTelemetryWorker @ 0x140435450
 * Callers:
 *     <none>
 * Callees:
 *     PopCoolingTelemetryWorker @ 0x140435360 (PopCoolingTelemetryWorker.c)
 *     PopPowerLimitTelemetryWorker @ 0x140435524 (PopPowerLimitTelemetryWorker.c)
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140510620 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x14060A1C0 (PopTraceThermalZoneActiveActivity.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140B2F378 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140B41620 (PopThermalUpdateActiveTimeTracking.c)
 */

__int64 PopThermalTelemetryWorker()
{
  void **i; // rbx
  __int64 v1; // rdx
  __int64 result; // rax

  PopAcquireRwLockShared(&unk_140F10E30);
  for ( i = (void **)stru_140F10828.FirstArgument; i != &stru_140F10828.FirstArgument; i = (void **)*i )
  {
    PopAcquireRwLockExclusive(i + 54);
    if ( *((_BYTE *)i + 145) )
    {
      LOBYTE(v1) = *((_BYTE *)i + 80);
      PopThermalUpdatePassiveTimeTracking(i + 63, v1);
      PopTraceThermalZonePassiveHistogram(i);
    }
    if ( *((_BYTE *)i + 505) )
    {
      LOBYTE(v1) = *((_BYTE *)i + 69);
      PopThermalUpdateActiveTimeTracking(i + 63, v1);
      PopTraceThermalZoneActiveActivity(i);
    }
    PopReleaseRwLock((struct _KTHREAD *)(i + 54));
  }
  PopReleaseRwLock(&unk_140F10E30);
  PopCoolingTelemetryWorker();
  result = PopPowerLimitTelemetryWorker();
  _InterlockedExchange((volatile __int32 *)&stru_140F0F620.UserWaitTime, 0);
  return result;
}
