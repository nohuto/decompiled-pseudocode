/*
 * XREFs of HalpDynamicDeviceInterfaceNotification @ 0x140781FB0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     IoGetDeviceObjectPointer @ 0x140908800 (IoGetDeviceObjectPointer.c)
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
      KeWaitForSingleObject(&HalpDeviceBlockUnblockPushLock.ReadOperationCount, WrExecutive, 0, 0, 0LL);
      v5 = v2;
      v6 = DeviceObject;
      HalpDynamicDevices[v5] = (__int64)DeviceObject;
      KeSetEvent((PRKEVENT)&HalpDeviceBlockUnblockPushLock.ReadOperationCount, 0, 0);
      PsReferenceSiloContext(v6);
      ObfDereferenceObject(FileObject);
    }
  }
  else
  {
    KeWaitForSingleObject(&HalpDeviceBlockUnblockPushLock.ReadOperationCount, WrExecutive, 0, 0, 0LL);
    v4 = (void *)HalpDynamicDevices[v2];
    if ( v4 )
    {
      ObfDereferenceObject(v4);
      HalpDynamicDevices[v2] = 0LL;
    }
    KeSetEvent((PRKEVENT)&HalpDeviceBlockUnblockPushLock.ReadOperationCount, 0, 0);
  }
  return 0LL;
}
