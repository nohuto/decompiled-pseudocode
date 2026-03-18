/*
 * XREFs of IoAttachDeviceToDeviceStack @ 0x14044EE80
 * Callers:
 *     HalpAddDevice @ 0x140781BF0 (HalpAddDevice.c)
 *     VfFilterAttach @ 0x140C3BD80 (VfFilterAttach.c)
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x14044EEC4 (IopAttachDeviceToDeviceStackSafe.c)
 */

PDEVICE_OBJECT __stdcall IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  return (PDEVICE_OBJECT)IopAttachDeviceToDeviceStackSafe(SourceDevice, TargetDevice, 0LL);
}
