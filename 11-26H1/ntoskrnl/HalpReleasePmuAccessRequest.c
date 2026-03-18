/*
 * XREFs of HalpReleasePmuAccessRequest @ 0x1405807A0
 * Callers:
 *     HalAllocateHardwareCounters @ 0x140780E50 (HalAllocateHardwareCounters.c)
 *     HalpPmuArbiterPeriodicWorkItem @ 0x1407816F0 (HalpPmuArbiterPeriodicWorkItem.c)
 *     HalpNotifyActorIfPmuAvailable @ 0x140B110C8 (HalpNotifyActorIfPmuAvailable.c)
 * Callees:
 *     <none>
 */

__int64 HalpReleasePmuAccessRequest()
{
  return (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)&HalpPmuArbiter.Header.WaitListHead, 0, 1);
}
