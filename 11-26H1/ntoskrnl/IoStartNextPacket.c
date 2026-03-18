/*
 * XREFs of IoStartNextPacket @ 0x140478FC0
 * Callers:
 *     DifIoStartNextPacketWrapper @ 0x14065ECC0 (DifIoStartNextPacketWrapper.c)
 * Callees:
 *     IopStartNextPacketByKeyEx @ 0x140479004 (IopStartNextPacketByKeyEx.c)
 *     IopStartNextPacket @ 0x1404790D0 (IopStartNextPacket.c)
 */

void __stdcall IoStartNextPacket(PDEVICE_OBJECT DeviceObject, BOOLEAN Cancelable)
{
  if ( (DeviceObject->DeviceObjectExtension->StartIoFlags & 0x100) != 0 )
    IopStartNextPacketByKeyEx(DeviceObject, 0LL, Cancelable != 0 ? 160 : 32);
  else
    IopStartNextPacket(DeviceObject, Cancelable);
}
