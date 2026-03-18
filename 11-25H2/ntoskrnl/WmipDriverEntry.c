/*
 * XREFs of WmipDriverEntry @ 0x140C2B6E0
 * Callers:
 *     <none>
 * Callees:
 *     IoDeleteDevice @ 0x1402FDA50 (IoDeleteDevice.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ?KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z @ 0x14044F2EC (-KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z.c)
 *     RtlInitAnsiString @ 0x14046B2E0 (RtlInitAnsiString.c)
 *     IoRegisterShutdownNotification @ 0x140708680 (IoRegisterShutdownNotification.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408E5A80 (RtlAnsiStringToUnicodeString.c)
 *     IoCreateDevice @ 0x14099E640 (IoCreateDevice.c)
 *     IoWMIRegistrationControl @ 0x1409B8940 (IoWMIRegistrationControl.c)
 *     IoCreateSymbolicLink @ 0x140A1FD70 (IoCreateSymbolicLink.c)
 *     WmipInitializeRegistration @ 0x140C2B580 (WmipInitializeRegistration.c)
 *     WmipInitializeDataStructs @ 0x140C2B90C (WmipInitializeDataStructs.c)
 *     WmipInitializeSecurity @ 0x140C2BA90 (WmipInitializeSecurity.c)
 */

NTSTATUS __fastcall WmipDriverEntry(PDRIVER_OBJECT DriverObject)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  UNICODE_STRING DeviceName; // [rsp+40h] [rbp-38h] BYREF
  STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+60h] [rbp-18h] BYREF

  DeviceName = 0LL;
  SymbolicLinkName = 0LL;
  DestinationString = 0LL;
  KiInitializeMutant((struct _KMUTANT *)&WmipSMMutex, 0, 1u, 0);
  WmipInitializeRegistration(0);
  WmipEventWorkQueueItem.Parameter = 0LL;
  WmipEventWorkQueueItem.List.Flink = 0LL;
  WmipNPNotificationSpinlock = 0LL;
  WmipEventWorkQueueItem.WorkerRoutine = (void (__fastcall *)(void *))WmipEventNotification;
  result = WmipInitializeDataStructs();
  if ( result >= 0 )
  {
    RtlInitAnsiString(&DestinationString, "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\WMI");
    RtlAnsiStringToUnicodeString(&WmipRegistryPath, &DestinationString, 1u);
    result = WmipInitializeSecurity();
    if ( result >= 0 )
    {
      RtlInitUnicodeString(&DeviceName, L"\\Device\\WMIDataDevice");
      result = IoCreateDevice(DriverObject, 0, &DeviceName, 0x22u, 0x100u, 0, &WmipServiceDeviceObject);
      if ( result >= 0 )
      {
        RtlInitUnicodeString(&SymbolicLinkName, L"\\DosDevices\\WMIDataDevice");
        v3 = IoCreateSymbolicLink(&SymbolicLinkName, &DeviceName);
        if ( v3 >= 0 )
        {
          WmipServiceDeviceObject->StackSize = 2;
          DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)WmipIoControl;
          DriverObject->MajorFunction[23] = (PDRIVER_DISPATCH)WmipSystemControl;
          DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)WmipOpenCloseCleanup;
          DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)WmipOpenCloseCleanup;
          DriverObject->MajorFunction[18] = (PDRIVER_DISPATCH)WmipOpenCloseCleanup;
          WmipServiceDeviceObject->Flags &= ~0x80u;
          IoWMIRegistrationControl(WmipServiceDeviceObject, 1u);
          IoRegisterShutdownNotification(WmipServiceDeviceObject);
        }
        else
        {
          IoDeleteDevice(WmipServiceDeviceObject);
        }
        return v3;
      }
    }
  }
  return result;
}
