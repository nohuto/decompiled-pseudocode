/*
 * XREFs of ACPIFilterIrpQueryIommuInterface @ 0x1400D2004
 * Callers:
 *     ACPIFilterIrpQueryInterface @ 0x1400B1080 (ACPIFilterIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     AcpiGetDriverProxyWrappedEndpoint @ 0x140055AD8 (AcpiGetDriverProxyWrappedEndpoint.c)
 *     ACPIBusIommuBusInterface @ 0x1400A8774 (ACPIBusIommuBusInterface.c)
 */

__int64 __fastcall ACPIFilterIrpQueryIommuInterface(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v6; // rcx
  unsigned int Status; // ebx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  int (__fastcall *v10)(_DEVICE_OBJECT *, _IRP *, void *); // [rsp+68h] [rbp+10h] BYREF

  v10 = 0LL;
  memset(&Event, 0, sizeof(Event));
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  AcpiGetDriverProxyWrappedEndpoint(&v10, (__int64)ACPIRootIrpCompleteRoutine);
  v6 = a2->Tail.Overlay.CurrentStackLocation;
  v6[-1].CompletionRoutine = v10;
  v6[-1].Context = &Event;
  v6[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 776), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  if ( Status == -1073741637 )
    Status = ACPIBusIommuBusInterface(a1, (__int64)a2);
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return Status;
}
