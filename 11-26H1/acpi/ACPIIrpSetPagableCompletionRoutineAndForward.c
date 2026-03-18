/*
 * XREFs of ACPIIrpSetPagableCompletionRoutineAndForward @ 0x1400C2C7C
 * Callers:
 *     ACPIFilterIrpEject @ 0x1400B0E30 (ACPIFilterIrpEject.c)
 *     ACPIFilterIrpQueryInterface @ 0x1400B1080 (ACPIFilterIrpQueryInterface.c)
 *     ACPIFilterIrpSetLock @ 0x1400B1330 (ACPIFilterIrpSetLock.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1400C0080 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIFilterIrpQueryPnpDeviceState @ 0x1400C2C50 (ACPIFilterIrpQueryPnpDeviceState.c)
 *     ACPIFilterIrpQueryId @ 0x1400CFE10 (ACPIFilterIrpQueryId.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     AcpiGetDriverProxyWrappedEndpoint @ 0x140055AD8 (AcpiGetDriverProxyWrappedEndpoint.c)
 */

__int64 __fastcall ACPIIrpSetPagableCompletionRoutineAndForward(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7)
{
  __int64 DeviceExtension; // rbp
  _BYTE *Pool2; // rbx
  PIO_WORKITEM WorkItem; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v14; // rcx
  int (__fastcall *v16)(_DEVICE_OBJECT *, _IRP *, void *); // [rsp+58h] [rbp+20h] BYREF

  v16 = 0LL;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  Pool2 = (_BYTE *)ExAllocatePool2(64LL, 48LL, 1232102209LL);
  if ( Pool2 )
  {
    WorkItem = IoAllocateWorkItem(DeviceObject);
    if ( WorkItem )
    {
      Pool2[24] = a5;
      Pool2[25] = a6;
      Pool2[26] = a7;
      *((_QWORD *)Pool2 + 2) = a3;
      *(_QWORD *)Pool2 = DeviceObject;
      *((_QWORD *)Pool2 + 5) = 0LL;
      Pool2[27] = 0;
      *((_QWORD *)Pool2 + 1) = Irp;
      *((_QWORD *)Pool2 + 4) = WorkItem;
      _InterlockedIncrement((volatile signed __int32 *)(DeviceExtension + 728));
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                                 + 6);
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      AcpiGetDriverProxyWrappedEndpoint(&v16, (__int64)ACPIIrpGenericFilterCompletionHandler);
      v14 = Irp->Tail.Overlay.CurrentStackLocation;
      v14[-1].CompletionRoutine = v16;
      v14[-1].Context = Pool2;
      v14[-1].Control = -32;
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 776), Irp);
      return 259LL;
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  Irp->IoStatus.Status = -1073741670;
  IofCompleteRequest(Irp, 0);
  return 3221225626LL;
}
