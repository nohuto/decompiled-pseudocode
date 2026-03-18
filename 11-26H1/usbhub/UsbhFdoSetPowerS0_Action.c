/*
 * XREFs of UsbhFdoSetPowerS0_Action @ 0x14004B144
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x140028454 (UsbhFdoSystemPowerState.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhReleaseFdoPwrLock @ 0x14002B05C (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x14002B0B8 (UsbhSetFdoPowerState.c)
 */

__int64 __fastcall UsbhFdoSetPowerS0_Action(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  __int64 v3; // rbx
  PDEVICE_OBJECT *v7; // r14
  __int64 v8; // r9
  int v9; // r10d
  int v10; // r10d
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v12; // rax

  v3 = Context[9];
  v7 = (PDEVICE_OBJECT *)FdoExt((__int64)DeviceObject);
  Log((__int64)DeviceObject, 16, 1350005355, 0LL, (__int64)Irp);
  Log((__int64)DeviceObject, v9, 1348824676, v8, (__int64)Irp);
  UsbhSetFdoPowerState((__int64)DeviceObject, 0, v10 + 192, v10 + 88);
  UsbhReleaseFdoPwrLock((__int64)DeviceObject, v3);
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(
         DeviceObject,
         Irp,
         (PIO_COMPLETION_ROUTINE)UsbhFdoS0IoComplete_Action,
         Context,
         1u,
         1u,
         1u) < 0 )
  {
    v12 = Irp->Tail.Overlay.CurrentStackLocation;
    v12[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhFdoS0IoComplete_Action;
    v12[-1].Context = Context;
    v12[-1].Control = -32;
  }
  PoCallDriver(v7[151], Irp);
  return 259LL;
}
