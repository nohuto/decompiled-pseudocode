/*
 * XREFs of DxgkGetDeviceObjectPointerSessionAware @ 0x140061A58
 * Callers:
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x140274780 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     ?HandleDeviceRemoveCancelled@MonitorPnpState@DxgMonitor@@QEAAXXZ @ 0x140279A3C (-HandleDeviceRemoveCancelled@MonitorPnpState@DxgMonitor@@QEAAXXZ.c)
 *     ?RegisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJPEBU_UNICODE_STRING@@P6AJPEAX1@Z@Z @ 0x1403E251C (-RegisterPnPTargetDeviceNotification@MonitorPnpState@DxgMonitor@@QEAAJPEBU_UNICODE_STRING@@P6AJP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkGetDeviceObjectPointerSessionAware(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        PVOID *a3,
        PDEVICE_OBJECT *a4)
{
  NTSTATUS v6; // ebx
  NTSTATUS v7; // eax
  struct _FILE_OBJECT *v8; // rcx
  PVOID Object; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  void *FileHandle; // [rsp+90h] [rbp+10h] BYREF

  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  KeEnterCriticalRegion();
  v6 = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 3u, 0x40040u);
  if ( v6 >= 0 )
  {
    Object = 0LL;
    v7 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v8 = (struct _FILE_OBJECT *)Object;
    v6 = v7;
    if ( v7 >= 0 )
    {
      *a3 = Object;
      *a4 = IoGetRelatedDeviceObject(v8);
    }
    ZwClose(FileHandle);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
