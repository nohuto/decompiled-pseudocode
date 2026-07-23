/*
 * XREFs of IoAttachDeviceToDeviceStack @ 0x140446FB0
 * Callers:
 *     HalpAddDevice @ 0x1407846F0 (HalpAddDevice.c)
 *     VfFilterAttach @ 0x140C41D90 (VfFilterAttach.c)
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x140446FF4 (IopAttachDeviceToDeviceStackSafe.c)
 */

PDEVICE_OBJECT __stdcall IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  return (PDEVICE_OBJECT)IopAttachDeviceToDeviceStackSafe(SourceDevice, TargetDevice, 0LL);
}
