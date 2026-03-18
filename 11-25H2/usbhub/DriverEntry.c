/*
 * XREFs of DriverEntry @ 0x14004EBB0
 * Callers:
 *     GsDriverEntry @ 0x140078010 (GsDriverEntry.c)
 * Callees:
 *     USBHUB_InitBugCheck @ 0x14004EE44 (USBHUB_InitBugCheck.c)
 *     UsbhInitGlobal @ 0x140050C48 (UsbhInitGlobal.c)
 *     UsbhModuleDispatch @ 0x140050E7C (UsbhModuleDispatch.c)
 *     UsbhInitializeHighResTimer @ 0x1400600A8 (UsbhInitializeHighResTimer.c)
 *     WppInitKm @ 0x1400770B8 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x140077194 (WppLoadTracingSupport.c)
 *     wil_InitializeFeatureStaging @ 0x140078078 (wil_InitializeFeatureStaging.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  unsigned int v2; // ebx
  int v5; // edx
  __int64 (__fastcall *v6)(PDRIVER_OBJECT, PDEVICE_OBJECT); // rcx
  int v7; // edx
  NTSTATUS v8; // edi
  NTSTATUS result; // eax

  v2 = 1;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_usbhub;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm(DriverObject, RegistryPath);
  wil_InitializeFeatureStaging();
  UsbhInitGlobal();
  UsbhDriverObject = DriverObject;
  if ( (unsigned __int8)UsbhInitializeHighResTimer() )
    dword_14006F6D4 = 1;
  DriverObject->MajorFunction[15] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))UsbhGenDispatch;
  v6 = UsbhAddDevice;
  DriverObject->MajorFunction[22] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))UsbhGenDispatch;
  DriverObject->MajorFunction[27] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))UsbhGenDispatch;
  DriverObject->MajorFunction[23] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))UsbhGenDispatch;
  DriverObject->MajorFunction[14] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))UsbhGenDispatch;
  DriverObject->MajorFunction[2] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))UsbhGenDispatch;
  DriverObject->MajorFunction[0] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))UsbhGenDispatch;
  DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))UsbhDriverUnload;
  DriverObject->DriverExtension->AddDevice = (int (__fastcall *)(_DRIVER_OBJECT *, _DEVICE_OBJECT *))UsbhAddDevice;
  LOBYTE(v6) = 1;
  DriverObject->MajorFunction[16] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))&UsbhDeviceShutdown;
  v8 = UsbhModuleDispatch((_DWORD)v6, v5, 0, 3, (__int64)RegistryPath, 0LL);
  if ( (unsigned int)dword_14006F588 > 1 )
  {
    do
    {
      if ( v2 > 0x10 )
        break;
      v2 *= 2;
    }
    while ( v2 < dword_14006F588 );
  }
  dword_14006F588 = v2;
  if ( (v8 & 0xC0000000) == 0xC0000000 )
    UsbhModuleDispatch(0, v7, 0, 4, 0LL, 0LL);
  USBHUB_BugCheckPortArray = (PVOID)USBHUB_InitBugCheck(USBHUB_BugCheckSavePortArrayData);
  USBHUB_BugCheckHubExt = (PVOID)USBHUB_InitBugCheck(USBHUB_BugCheckSaveHubExtData);
  result = v8;
  WPP_MAIN_CB.Queue.ListEntry.Flink = 0LL;
  return result;
}
