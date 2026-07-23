/*
 * XREFs of HalpMiscQueryDiscardLowMemory @ 0x140589B60
 * Callers:
 *     HalpMmInitSystem @ 0x140BF1980 (HalpMmInitSystem.c)
 * Callees:
 *     <none>
 */

char HalpMiscQueryDiscardLowMemory()
{
  return BYTE2(HalpDeviceBlockUnblockPushLock.Timer.DueTime.u.LowPart);
}
