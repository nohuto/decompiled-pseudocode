/*
 * XREFs of CheckWheaIpmiContext @ 0x1406D82D0
 * Callers:
 *     EnterWheaIpmiContextLock @ 0x1406D82F8 (EnterWheaIpmiContextLock.c)
 *     EnterWheaIpmiContextNoLock @ 0x1406D8398 (EnterWheaIpmiContextNoLock.c)
 * Callees:
 *     IpmiHwContextInitialized @ 0x140534BC8 (IpmiHwContextInitialized.c)
 */

__int64 CheckWheaIpmiContext()
{
  return IpmiHwContextInitialized((__int64)&WheapConfigTableLock.WaitListEntry.Blink) == 0 ? 0xC0000001 : 0;
}
