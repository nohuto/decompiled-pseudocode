/*
 * XREFs of UsbhFdoQuerySystemPowerSxIoCompletion @ 0x14004B3D0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x140030C98 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhCanSuspend @ 0x14004A4A4 (UsbhCanSuspend.c)
 */

__int64 __fastcall UsbhFdoQuerySystemPowerSxIoCompletion(PDEVICE_OBJECT DeviceObject, PIRP Irp, PVOID Context)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  _DWORD *v6; // rbp
  int v7; // r10d
  bool CanSuspend; // al
  NTSTATUS v9; // eax
  unsigned int v10; // ebx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = FdoExt((__int64)DeviceObject);
  Log(
    (__int64)DeviceObject,
    16,
    1901295731,
    (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
    (__int64)Irp);
  CanSuspend = UsbhCanSuspend((__int64)DeviceObject, v7);
  v9 = PoRequestPowerIrp(
         DeviceObject,
         3u,
         (POWER_STATE)(4 - CanSuspend),
         (PREQUEST_POWER_COMPLETE)UsbhFdoQueryDevicePowerDxPoCompletion,
         Irp,
         0LL);
  v10 = v9;
  if ( v9 == 259 )
    return 3221225494LL;
  Irp->IoStatus.Status = v9;
  UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 1273);
  IofCompleteRequest(Irp, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 306), Irp, 0x20u);
  return v10;
}
