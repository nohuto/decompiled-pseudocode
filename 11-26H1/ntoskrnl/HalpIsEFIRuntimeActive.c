/*
 * XREFs of HalpIsEFIRuntimeActive @ 0x1405893D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HalpIsEFIRuntimeActive()
{
  return HIDWORD(HalpDeviceBlockUnblockPushLock.WriteOperationCount) != 0;
}
