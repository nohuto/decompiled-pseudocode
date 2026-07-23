/*
 * XREFs of PopThermalPollingPowerSettingCallback @ 0x140425040
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopThermalUpdateTimerPolicy @ 0x140425390 (PopThermalUpdateTimerPolicy.c)
 */

__int64 PopThermalPollingPowerSettingCallback()
{
  __int64 v0; // rcx

  PopAcquireRwLockExclusive(&PopThermalLock);
  LOBYTE(v0) = 0;
  if ( HIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) != 1 || !PopPdcIdleResiliency )
    LOBYTE(v0) = 1;
  PopThermalUpdateTimerPolicy(v0);
  PopReleaseRwLock((struct _KTHREAD *)&PopThermalLock);
  return 0LL;
}
