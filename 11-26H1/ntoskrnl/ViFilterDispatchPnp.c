/*
 * XREFs of ViFilterDispatchPnp @ 0x140C420B0
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x140264B10 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     IoDetachDevice @ 0x140426A30 (IoDetachDevice.c)
 *     IoDeleteDevice @ 0x140426AC0 (IoDeleteDevice.c)
 *     IoAcquireRemoveLockEx @ 0x14044F150 (IoAcquireRemoveLockEx.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1404E0F80 (IoReleaseRemoveLockAndWaitEx.c)
 *     ViFilterYieldInitialization @ 0x14064BAD0 (ViFilterYieldInitialization.c)
 */

NTSTATUS __fastcall ViFilterDispatchPnp(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  PVOID v4; // rdx
  int v5; // eax
  int v6; // edi
  struct _DEVICE_OBJECT *v8; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  UCHAR MinorFunction; // cl
  struct _IO_STACK_LOCATION *v11; // rax
  IRP *v12; // rdx
  __int64 (__fastcall *v13)(__int64, __int64); // rcx
  struct _IO_STACK_LOCATION *v14; // rax
  NTSTATUS Status; // esi
  char *DeviceExtension; // [rsp+40h] [rbp+8h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  ViFilterYieldInitialization((__int64)DeviceExtension);
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 1, v4, &byte_140C4FFA0, 1u, 0x20u);
  v6 = v5;
  if ( v5 < 0 )
  {
    Irp->IoStatus.Status = v5;
    IofCompleteRequest(Irp, 0);
    return v6;
  }
  v8 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 1);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( !MinorFunction )
  {
    v11 = Irp->Tail.Overlay.CurrentStackLocation;
    v13 = (__int64 (__fastcall *)(__int64, __int64))ViFilterStartCompletionRoutine;
    v12 = Irp;
    v11[-1].Control = -32;
LABEL_12:
    v11[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)v13;
    v11[-1].Context = &DeviceExtension;
    return IofCallDriver(v8, v12);
  }
  if ( MinorFunction != 2 )
  {
    v11 = Irp->Tail.Overlay.CurrentStackLocation;
    v12 = Irp;
    v11[-1].Control = -32;
    if ( MinorFunction == 22 )
      v13 = ViFilterDeviceUsageNotificationCompletion;
    else
      v13 = (__int64 (__fastcall *)(__int64, __int64))ViFilterGenericCompletionRoutine;
    goto LABEL_12;
  }
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 64), NotificationEvent, 0);
  v14 = Irp->Tail.Overlay.CurrentStackLocation;
  v14[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)ViFilterRemoveNotificationCompletion;
  v14[-1].Context = &DeviceExtension;
  v14[-1].Control = -32;
  Status = IofCallDriver(v8, Irp);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(DeviceExtension + 64, Executive, 0, 0, 0LL);
    Status = Irp->IoStatus.Status;
  }
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)DeviceExtension + 1, Irp, 0x20u);
  IoDetachDevice(v8);
  IoDeleteDevice(DeviceObject);
  IofCompleteRequest(Irp, 0);
  return Status;
}
