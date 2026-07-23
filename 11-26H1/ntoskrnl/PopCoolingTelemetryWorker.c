/*
 * XREFs of PopCoolingTelemetryWorker @ 0x1404244F8
 * Callers:
 *     PopThermalTelemetryWorker @ 0x1404245E0 (PopThermalTelemetryWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalRequestActiveActivity @ 0x1404255AC (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1404258E0 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140B31158 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140B43630 (PopThermalUpdateActiveTimeTracking.c)
 */

__int64 PopCoolingTelemetryWorker()
{
  __int64 i; // rbx
  __int64 v2; // rdx
  __int64 *j; // rdi

  PopAcquireRwLockExclusive(&PopCoolingExtensionLock);
  for ( i = PopCoolingExtensionList; (__int64 *)i != &PopCoolingExtensionList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 64) )
    {
      PopAcquireRwLockExclusive(i + 32);
      for ( j = *(__int64 **)(i + 16); j != (__int64 *)(i + 16); j = (__int64 *)*j )
      {
        if ( *((_BYTE *)j + 18) )
        {
          if ( *(_QWORD *)(i + 136) )
          {
            LOBYTE(v2) = *((_BYTE *)j + 16);
            PopThermalUpdatePassiveTimeTracking(j + 5, v2);
            PopTraceThermalRequestPassiveHistogram(j);
          }
          if ( *(_QWORD *)(i + 128) )
          {
            LOBYTE(v2) = *((_BYTE *)j + 17) == 0;
            PopThermalUpdateActiveTimeTracking(j + 5, v2);
            PopTraceThermalRequestActiveActivity(j);
          }
        }
      }
      PopReleaseRwLock((struct _KTHREAD *)(i + 32));
    }
  }
  return PopReleaseRwLock((struct _KTHREAD *)&PopCoolingExtensionLock);
}
