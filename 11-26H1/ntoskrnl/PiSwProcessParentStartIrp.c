/*
 * XREFs of PiSwProcessParentStartIrp @ 0x140B26E4C
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1409AF320 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PnpStartDeviceNode @ 0x1409B2B5C (PnpStartDeviceNode.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     IoInvalidateDeviceRelations @ 0x1404CC3D0 (IoInvalidateDeviceRelations.c)
 *     PiSwLock @ 0x1409AFD6C (PiSwLock.c)
 *     PiSwFindChildren @ 0x1409AFD9C (PiSwFindChildren.c)
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
