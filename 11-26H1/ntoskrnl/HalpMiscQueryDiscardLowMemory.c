/*
 * XREFs of HalpMiscQueryDiscardLowMemory @ 0x140587640
 * Callers:
 *     HalpMmInitSystem @ 0x140BEB980 (HalpMmInitSystem.c)
 * Callees:
 *     <none>
 */

unsigned __int8 HalpMiscQueryDiscardLowMemory()
{
  return HalpDeviceBlockUnblockPushLock.WaitBlockFill5[48];
}
