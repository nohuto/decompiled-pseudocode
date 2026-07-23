/*
 * XREFs of WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x1406D86F4
 * Callers:
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 *     WheaSelLogSetNtSchedulerAvailability @ 0x1406D8638 (WheaSelLogSetNtSchedulerAvailability.c)
 * Callees:
 *     IpmiHwContextInitialized @ 0x140534BC8 (IpmiHwContextInitialized.c)
 */

signed __int8 WheapSelLogSetNtSchedulerAvailabilityNoLock()
{
  signed __int8 result; // al

  result = IpmiHwContextInitialized((__int64)&WheapConfigTableLock.WaitListEntry.Blink);
  if ( result )
    WheapConfigTableLock.Timer.Header.LockNV |= 4u;
  return result;
}
