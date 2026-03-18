/*
 * XREFs of IoOpenDeviceRegistryKey @ 0x140A12550
 * Callers:
 *     DifIoOpenDeviceRegistryKeyWrapper @ 0x14065D450 (DifIoOpenDeviceRegistryKeyWrapper.c)
 *     PipDmgGetDeviceDmarRegistryValue @ 0x140B387B8 (PipDmgGetDeviceDmarRegistryValue.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     _CmOpenDeviceRegKey @ 0x140996B50 (_CmOpenDeviceRegKey.c)
 *     IopApplyMutableTagToRegistryKey @ 0x140A12668 (IopApplyMutableTagToRegistryKey.c)
 */

NTSTATUS __stdcall IoOpenDeviceRegistryKey(
        PDEVICE_OBJECT DeviceObject,
        ULONG DevInstKeyType,
        ACCESS_MASK DesiredAccess,
        PHANDLE DeviceRegKey)
{
  _DWORD *DeviceNode; // rax
  int v8; // eax
  int v9; // ebx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v11; // ebx

  if ( !DeviceObject )
    return -1073741811;
  DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
    return -1073741811;
  if ( (DevInstKeyType & 1) != 0 )
  {
    v8 = 17;
    goto LABEL_7;
  }
  if ( (DevInstKeyType & 2) == 0 )
    return -1073741811;
  v8 = 18;
LABEL_7:
  v9 = v8 | 0x200;
  if ( (DevInstKeyType & 4) == 0 )
    v9 = v8;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v11 = CmOpenDeviceRegKey(
          *(__int64 *)&PiPnpRtlCtx,
          *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 6),
          v9,
          0,
          DesiredAccess,
          1,
          (__int64)DeviceRegKey,
          0LL);
  if ( v11 >= 0 )
  {
    if ( DeviceRegKey )
      IopApplyMutableTagToRegistryKey(*DeviceRegKey);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  return v11;
}
