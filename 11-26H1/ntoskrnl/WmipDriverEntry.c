/*
 * XREFs of WmipDriverEntry @ 0x140CE01C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     IoDeleteDevice @ 0x140437BA0 (IoDeleteDevice.c)
 *     RtlInitAnsiString @ 0x14046C9A0 (RtlInitAnsiString.c)
 *     ?KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z @ 0x1404A3A7C (-KiInitializeMutant@@YAXPEAU_KMUTANT@@EEK@Z.c)
 *     RtlAnsiStringToUnicodeString @ 0x14096BA30 (RtlAnsiStringToUnicodeString.c)
 *     IoCreateDevice @ 0x1409FEBC0 (IoCreateDevice.c)
 *     IoCreateSymbolicLink @ 0x140AB52F0 (IoCreateSymbolicLink.c)
 *     IoWMIRegistrationControl @ 0x140ACD740 (IoWMIRegistrationControl.c)
 *     IoRegisterShutdownNotification @ 0x140B4AEC0 (IoRegisterShutdownNotification.c)
 *     WmipInitializeRegistration @ 0x140CDFEE8 (WmipInitializeRegistration.c)
 *     WmipInitializeDataStructs @ 0x140CE03F8 (WmipInitializeDataStructs.c)
 *     WmipInitializeSecurity @ 0x140CE0570 (WmipInitializeSecurity.c)
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
  KiInitializeMutant((struct _KMUTANT *)&EtwpSecurityLock.IoSelfBoostsEntry, 0LL, 1u, 0LL);
  WmipInitializeRegistration(0);
  EtwpSecurityLock.OtherTransferCount = 0LL;
  EtwpSecurityLock.WriteTransferCount = (__int64)WmipEventNotification;
  EtwpSecurityLock.OtherOperationCount = 0LL;
  EtwpSecurityLock.QueuedScb = 0LL;
  result = WmipInitializeDataStructs();
  if ( result >= 0 )
  {
    RtlInitAnsiString(&DestinationString, "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\WMI");
    RtlAnsiStringToUnicodeString((PUNICODE_STRING)&EtwpSecurityLock.SchedulerSharedSystemSlot, &DestinationString, 1u);
    result = WmipInitializeSecurity();
    if ( result >= 0 )
    {
      RtlInitUnicodeString(&DeviceName, L"\\Device\\WMIDataDevice");
      result = IoCreateDevice(
                 DriverObject,
                 0,
                 &DeviceName,
                 0x22u,
                 0x100u,
                 0,
                 (PDEVICE_OBJECT *)&EtwpSecurityLock.ForegroundLossTime);
      if ( result >= 0 )
      {
        RtlInitUnicodeString(&SymbolicLinkName, L"\\DosDevices\\WMIDataDevice");
        v3 = IoCreateSymbolicLink(&SymbolicLinkName, &DeviceName);
        if ( v3 >= 0 )
        {
          *(_BYTE *)(*(_QWORD *)&EtwpSecurityLock.ForegroundLossTime + 76LL) = 2;
          DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)WmipIoControl;
          DriverObject->MajorFunction[23] = (PDRIVER_DISPATCH)WmipSystemControl;
          DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)WmipOpenCloseCleanup;
          DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)WmipOpenCloseCleanup;
          DriverObject->MajorFunction[18] = (PDRIVER_DISPATCH)WmipOpenCloseCleanup;
          *(_DWORD *)(*(_QWORD *)&EtwpSecurityLock.ForegroundLossTime + 48LL) &= ~0x80u;
          IoWMIRegistrationControl(*(PDEVICE_OBJECT *)&EtwpSecurityLock.ForegroundLossTime, 1u);
          IoRegisterShutdownNotification(*(PDEVICE_OBJECT *)&EtwpSecurityLock.ForegroundLossTime);
        }
        else
        {
          IoDeleteDevice(*(PDEVICE_OBJECT *)&EtwpSecurityLock.ForegroundLossTime);
        }
        return v3;
      }
    }
  }
  return result;
}
