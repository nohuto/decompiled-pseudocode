/*
 * XREFs of CheckWheaIpmiContext @ 0x1406D4250
 * Callers:
 *     EnterWheaIpmiContextLock @ 0x1406D4278 (EnterWheaIpmiContextLock.c)
 *     EnterWheaIpmiContextNoLock @ 0x1406D4318 (EnterWheaIpmiContextNoLock.c)
 * Callees:
 *     IpmiHwContextInitialized @ 0x140532728 (IpmiHwContextInitialized.c)
 */

__int64 CheckWheaIpmiContext()
{
  return IpmiHwContextInitialized((__int64)&WheapConfigTableLock.WaitListEntry.Blink) == 0 ? 0xC0000001 : 0;
}
