/*
 * XREFs of UsbhFdoSelectInterfacePdo @ 0x14003838C
 * Callers:
 *     UsbhFdoUrbPdoFilter @ 0x140008670 (UsbhFdoUrbPdoFilter.c)
 *     UsbhPdoInternalDeviceControl @ 0x1400089B0 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 */

NTSTATUS __fastcall UsbhFdoSelectInterfacePdo(PDEVICE_OBJECT DeviceObject, PVOID Context, PIRP Irp)
{
  PDEVICE_OBJECT *v6; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  _IO_STACK_LOCATION *v9; // rax

  v6 = (PDEVICE_OBJECT *)FdoExt((__int64)DeviceObject);
  PdoExt((__int64)Context);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(DeviceObject, Irp, UsbhSelectConfigOrInterfaceComplete, Context, 1u, 1u, 1u) < 0 )
  {
    v9 = Irp->Tail.Overlay.CurrentStackLocation;
    v9[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhSelectConfigOrInterfaceComplete;
    v9[-1].Context = Context;
    v9[-1].Control = -32;
  }
  return IofCallDriver(v6[152], Irp);
}
