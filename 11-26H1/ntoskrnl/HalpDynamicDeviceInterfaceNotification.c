/*
 * XREFs of HalpDynamicDeviceInterfaceNotification @ 0x140784AB0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     IoGetDeviceObjectPointer @ 0x140A30960 (IoGetDeviceObjectPointer.c)
 */

__int64 __fastcall HalpDynamicDeviceInterfaceNotification(char *NotificationStructure, PVOID Context)
{
  int v2; // ebx
  __int64 v3; // rax
  void *v4; // rcx
  __int64 v5; // rax
  PDEVICE_OBJECT v6; // rbx
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp+8h] BYREF
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp+10h] BYREF

  v2 = (int)Context;
  v3 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
  DeviceObject = 0LL;
  FileObject = 0LL;
  if ( !v3 )
    v3 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
  if ( v3 )
  {
    if ( IoGetDeviceObjectPointer(
           *((PUNICODE_STRING *)NotificationStructure + 5),
           0x100003u,
           &FileObject,
           &DeviceObject) >= 0 )
    {
      KeWaitForSingleObject((PVOID)&HalpDeviceBlockUnblockPushLock.AbCompletedIoQoSBoostCount, WrExecutive, 0, 0, 0LL);
      v5 = v2;
      v6 = DeviceObject;
      HalpDynamicDevices[v5] = (__int64)DeviceObject;
      KeSetEvent((PRKEVENT)&HalpDeviceBlockUnblockPushLock.AbCompletedIoQoSBoostCount, 0, 0);
      PsReferenceSiloContext(v6);
      ObfDereferenceObject(FileObject);
    }
  }
  else
  {
    KeWaitForSingleObject((PVOID)&HalpDeviceBlockUnblockPushLock.AbCompletedIoQoSBoostCount, WrExecutive, 0, 0, 0LL);
    v4 = (void *)HalpDynamicDevices[v2];
    if ( v4 )
    {
      ObfDereferenceObject(v4);
      HalpDynamicDevices[v2] = 0LL;
    }
    KeSetEvent((PRKEVENT)&HalpDeviceBlockUnblockPushLock.AbCompletedIoQoSBoostCount, 0, 0);
  }
  return 0LL;
}
