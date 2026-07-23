/*
 * XREFs of HalpReleasePmuAccessRequest @ 0x140582CC0
 * Callers:
 *     HalAllocateHardwareCounters @ 0x140783950 (HalAllocateHardwareCounters.c)
 *     HalpPmuArbiterPeriodicWorkItem @ 0x1407841F0 (HalpPmuArbiterPeriodicWorkItem.c)
 *     HalpNotifyActorIfPmuAvailable @ 0x140B12E48 (HalpNotifyActorIfPmuAvailable.c)
 * Callees:
 *     <none>
 */

__int64 HalpReleasePmuAccessRequest()
{
  return (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)&HalpPmuArbiter.Header.WaitListHead, 0, 1);
}
