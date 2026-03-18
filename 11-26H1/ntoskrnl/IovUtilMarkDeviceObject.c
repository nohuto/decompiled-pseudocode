/*
 * XREFs of IovUtilMarkDeviceObject @ 0x1404E8824
 * Callers:
 *     IovUtilMarkStack @ 0x1404E87AC (IovUtilMarkStack.c)
 *     VfIoDeleteDevice @ 0x140C306C0 (VfIoDeleteDevice.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140C3AEC0 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     IovpUtilMarkDeviceObject @ 0x140C3120C (IovpUtilMarkDeviceObject.c)
 */

__int64 IovUtilMarkDeviceObject()
{
  __int64 result; // rax

  if ( IovUtilVerifierEnabled )
    return IovpUtilMarkDeviceObject();
  return result;
}
