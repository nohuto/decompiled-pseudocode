/*
 * XREFs of IoStartNextPacket @ 0x140472920
 * Callers:
 *     DifIoStartNextPacketWrapper @ 0x1406628A0 (DifIoStartNextPacketWrapper.c)
 * Callees:
 *     IopStartNextPacketByKeyEx @ 0x140472964 (IopStartNextPacketByKeyEx.c)
 *     IopStartNextPacket @ 0x140472A30 (IopStartNextPacket.c)
 */

void __stdcall IoStartNextPacket(PDEVICE_OBJECT DeviceObject, BOOLEAN Cancelable)
{
  if ( (DeviceObject->DeviceObjectExtension->StartIoFlags & 0x100) != 0 )
    IopStartNextPacketByKeyEx(DeviceObject, 0LL, Cancelable != 0 ? 160 : 32);
  else
    IopStartNextPacket(DeviceObject, Cancelable);
}
