/*
 * XREFs of PopPowerLimitTelemetryWorker @ 0x140424A9C
 * Callers:
 *     PopThermalTelemetryWorker @ 0x1404245E0 (PopThermalTelemetryWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopUpdatePowerLimitTimeTracking @ 0x140606528 (PopUpdatePowerLimitTimeTracking.c)
 *     PopTracePowerLimitHistogram @ 0x14060C8BC (PopTracePowerLimitHistogram.c)
 */

__int64 PopPowerLimitTelemetryWorker()
{
  __int64 i; // rdi
  __int64 *j; // rbx
  unsigned int k; // esi

  PopAcquireRwLockExclusive(&PopPowerLimitExtensionLock);
  for ( i = PopPowerLimitExtensionList; (__int64 *)i != &PopPowerLimitExtensionList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 48) )
    {
      PopAcquireRwLockExclusive(i + 32);
      for ( j = *(__int64 **)(i + 16); j != (__int64 *)(i + 16); j = (__int64 *)*j )
      {
        if ( *((_BYTE *)j + 16) && *((_BYTE *)j + 48) )
        {
          for ( k = 0; k < *((_DWORD *)j + 8); ++k )
            PopUpdatePowerLimitTimeTracking(j, k);
          PopTracePowerLimitHistogram(j);
        }
      }
      PopReleaseRwLock((struct _KTHREAD *)(i + 32));
    }
  }
  return PopReleaseRwLock((struct _KTHREAD *)&PopPowerLimitExtensionLock);
}
