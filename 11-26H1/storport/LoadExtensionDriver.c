/*
 * XREFs of LoadExtensionDriver @ 0x1400758B4
 * Callers:
 *     RaidDriverDeviceControlIrp @ 0x140073D34 (RaidDriverDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x140075BB0 (McTemplateK0d_EtwWriteTransfer.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 LoadExtensionDriver()
{
  unsigned int v0; // ebx
  char v1; // si
  NTSTATUS DeviceObjectPointer; // edi
  PDEVICE_OBJECT v3; // rcx
  __int64 v4; // r8
  IRP *v5; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING ObjectName; // [rsp+78h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  __int64 InputBuffer; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v12; // [rsp+A8h] [rbp-58h]
  __int64 v13; // [rsp+B0h] [rbp-50h]
  __int64 v14; // [rsp+B8h] [rbp-48h]
  __int64 v15; // [rsp+C0h] [rbp-40h]
  __int64 v16; // [rsp+C8h] [rbp-38h]
  __int64 v17; // [rsp+D0h] [rbp-30h]
  __int64 v18; // [rsp+D8h] [rbp-28h]
  __int64 v19; // [rsp+E0h] [rbp-20h]
  __int64 v20; // [rsp+E8h] [rbp-18h]
  __int64 v21; // [rsp+F0h] [rbp-10h]
  __int64 v22; // [rsp+F8h] [rbp-8h]
  __int64 v23; // [rsp+100h] [rbp+0h]
  __int64 v24; // [rsp+108h] [rbp+8h]
  __int64 v25; // [rsp+110h] [rbp+10h]
  __int64 v26; // [rsp+118h] [rbp+18h]
  PDEVICE_OBJECT DeviceObject; // [rsp+140h] [rbp+40h] BYREF
  PFILE_OBJECT FileObject; // [rsp+148h] [rbp+48h] BYREF

  v0 = 0;
  DeviceObject = 0LL;
  FileObject = 0LL;
  v1 = 0;
  DestinationString = 0LL;
  ObjectName = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  memset_0(&InputBuffer, 0, 0x80uLL);
  DeviceObjectPointer = 0;
  if ( DisableExtensionDriver )
  {
    DeviceObjectPointer = -1073741637;
  }
  else
  {
    if ( !ExtDeviceObject )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\StorportExt");
      DeviceObjectPointer = ZwLoadDriver(&DestinationString);
      if ( DeviceObjectPointer >= 0 )
      {
        v1 = 1;
        RtlInitUnicodeString(&ObjectName, L"\\Device\\StorportExt");
        DeviceObjectPointer = IoGetDeviceObjectPointer(&ObjectName, 3u, &FileObject, &DeviceObject);
        if ( DeviceObjectPointer >= 0 )
        {
          InputBuffer = 0x53544F5250455854LL;
          KeInitializeEvent(&Event, NotificationEvent, 0);
          v5 = IoBuildDeviceIoControlRequest(
                 0xE68003u,
                 DeviceObject,
                 &InputBuffer,
                 0x80u,
                 0LL,
                 0,
                 1u,
                 &Event,
                 &IoStatusBlock);
          if ( v5 )
          {
            DeviceObjectPointer = IofCallDriver(DeviceObject, v5);
            if ( DeviceObjectPointer == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              DeviceObjectPointer = IoStatusBlock.Status;
            }
            if ( DeviceObjectPointer >= 0 )
            {
              if ( v12 >= 0x80 )
              {
                _InterlockedCompareExchange64(&ExtDeviceObject, (signed __int64)DeviceObject, 0LL);
                v3 = DeviceObject;
                if ( (PDEVICE_OBJECT)ExtDeviceObject == DeviceObject )
                {
                  ExtFileObject = FileObject;
                  DeviceObject = 0LL;
                  FileObject = 0LL;
                  ExtRefCount = 0;
                  ExtSendStorportData = v13;
                  ExtSendMiniportData = v14;
                  ExtAdapterIoctlPre = v15;
                  ExtAdapterIoctlPost = v16;
                  ExtAdapterIoctlReplace = v17;
                  ExtUnitIoctlPre = v18;
                  ExtUnitIoctlPost = v19;
                  ExtUnitIoctlReplace = v20;
                  ExtNotificationPre = v21;
                  ExtNotificationPost = v22;
                  ExtNotificationReplace = v23;
                  ExtExtendedFuncPre = v24;
                  ExtExtendedFuncPost = v25;
                  ExtExtendedFuncReplace = v26;
                  EnableExtensionCalls = 1;
                  v1 = 0;
                }
                DeviceObjectPointer = 0;
              }
              else
              {
                DeviceObjectPointer = -1073741823;
              }
            }
          }
          else
          {
            DeviceObjectPointer = -1073741670;
          }
        }
      }
      if ( (byte_140173446 & 0x20) != 0 )
        McTemplateK0d_EtwWriteTransfer(v3, &EventExtensionDriverLoad, v4, (unsigned int)DeviceObjectPointer);
    }
    if ( FileObject )
      ObfDereferenceObject(FileObject);
    if ( v1 )
      ZwUnloadDriver(&DestinationString);
  }
  if ( DeviceObjectPointer != -1073741554 )
    return (unsigned int)DeviceObjectPointer;
  return v0;
}
