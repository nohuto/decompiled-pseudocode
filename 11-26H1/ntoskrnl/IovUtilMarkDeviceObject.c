/*
 * XREFs of IovUtilMarkDeviceObject @ 0x1404E1BE4
 * Callers:
 *     IovUtilMarkStack @ 0x1404E1B6C (IovUtilMarkStack.c)
 *     VfIoDeleteDevice @ 0x140C366D0 (VfIoDeleteDevice.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140C40ED0 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     IovpUtilMarkDeviceObject @ 0x140C3721C (IovpUtilMarkDeviceObject.c)
 */

__int64 IovUtilMarkDeviceObject()
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return IovpUtilMarkDeviceObject();
  return result;
}
