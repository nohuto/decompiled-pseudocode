/*
 * XREFs of WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x14064F754
 * Callers:
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 *     WheaSelLogSetNtSchedulerAvailability @ 0x14064F6B8 (WheaSelLogSetNtSchedulerAvailability.c)
 * Callees:
 *     IpmiHwContextInitialized @ 0x1406942CC (IpmiHwContextInitialized.c)
 */

__int64 WheapSelLogSetNtSchedulerAvailabilityNoLock()
{
  __int64 result; // rax

  result = IpmiHwContextInitialized(&WheaIpmiContext);
  if ( (_BYTE)result )
    dword_140EF98A0 |= 4u;
  return result;
}
