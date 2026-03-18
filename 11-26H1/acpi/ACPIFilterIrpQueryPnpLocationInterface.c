/*
 * XREFs of ACPIFilterIrpQueryPnpLocationInterface @ 0x1400CF900
 * Callers:
 *     ACPIFilterIrpQueryInterface @ 0x1400B1080 (ACPIFilterIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     AcpiGetDriverProxyWrappedEndpoint @ 0x140055AD8 (AcpiGetDriverProxyWrappedEndpoint.c)
 *     ACPIEjectPnpLocationInterface @ 0x1400A8DD8 (ACPIEjectPnpLocationInterface.c)
 */

__int64 __fastcall ACPIFilterIrpQueryPnpLocationInterface(ULONG_PTR a1, IRP *a2)
{
  unsigned int v2; // edi
  __int64 DeviceExtension; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v7; // rcx
  NTSTATUS Status; // ebp
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF
  int (__fastcall *v11)(_DEVICE_OBJECT *, _IRP *, void *); // [rsp+78h] [rbp+10h] BYREF

  memset(&Event, 0, sizeof(Event));
  v2 = 0;
  v11 = 0LL;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  AcpiGetDriverProxyWrappedEndpoint(&v11, (__int64)ACPIRootIrpCompleteRoutine);
  v7 = a2->Tail.Overlay.CurrentStackLocation;
  v7[-1].CompletionRoutine = v11;
  v7[-1].Context = &Event;
  v7[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 776), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  if ( (int)ACPIEjectPnpLocationInterface(a1, (__int64)a2) < 0 )
    v2 = Status;
  a2->IoStatus.Status = v2;
  IofCompleteRequest(a2, 0);
  return v2;
}
