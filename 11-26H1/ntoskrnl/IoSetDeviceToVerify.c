/*
 * XREFs of IoSetDeviceToVerify @ 0x1404ED3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall IoSetDeviceToVerify(PETHREAD Thread, PDEVICE_OBJECT DeviceObject)
{
  Thread[1].ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)DeviceObject;
}
