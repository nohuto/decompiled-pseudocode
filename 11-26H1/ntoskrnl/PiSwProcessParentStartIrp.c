/*
 * XREFs of PiSwProcessParentStartIrp @ 0x140B249AC
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x14090D1F0 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PnpStartDeviceNode @ 0x140910A7C (PnpStartDeviceNode.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     IoInvalidateDeviceRelations @ 0x1404D2B60 (IoInvalidateDeviceRelations.c)
 *     PiSwLock @ 0x14090DC3C (PiSwLock.c)
 *     PiSwFindChildren @ 0x14090DC6C (PiSwFindChildren.c)
 */

void __fastcall PiSwProcessParentStartIrp(PDEVICE_OBJECT DeviceObject)
{
  __int64 Children; // rbx

  PiSwLock();
  Children = PiSwFindChildren();
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
  if ( Children )
    IoInvalidateDeviceRelations(DeviceObject, SingleBusRelations);
}
