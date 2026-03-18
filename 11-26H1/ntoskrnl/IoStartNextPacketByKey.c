/*
 * XREFs of IoStartNextPacketByKey @ 0x1405CB430
 * Callers:
 *     <none>
 * Callees:
 *     IopStartNextPacketByKeyEx @ 0x140479004 (IopStartNextPacketByKeyEx.c)
 *     IopStartNextPacketByKey @ 0x140479198 (IopStartNextPacketByKey.c)
 */

void __stdcall IoStartNextPacketByKey(PDEVICE_OBJECT DeviceObject, BOOLEAN Cancelable, ULONG Key)
{
  if ( (DeviceObject->DeviceObjectExtension->StartIoFlags & 0x100) != 0 )
    IopStartNextPacketByKeyEx((__int64)DeviceObject, Key, Cancelable != 0 ? 192 : 64);
  else
    IopStartNextPacketByKey((__int64)DeviceObject, Cancelable, Key);
}
