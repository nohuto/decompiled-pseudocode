/*
 * XREFs of HalpIsEFIRuntimeActive @ 0x140586EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HalpIsEFIRuntimeActive()
{
  return HIDWORD(HalpDeviceBlockUnblockPushLock.OtherTransferCount) != 0;
}
