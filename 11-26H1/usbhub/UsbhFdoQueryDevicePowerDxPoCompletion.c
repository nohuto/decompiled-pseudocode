/*
 * XREFs of UsbhFdoQueryDevicePowerDxPoCompletion @ 0x14004ADA0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x14002A57C (UsbhPoStartNextPowerIrp_Fdo.c)
 */

void __fastcall UsbhFdoQueryDevicePowerDxPoCompletion(
        __int64 DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        IRP *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  _DWORD *v7; // rdi
  __int64 Status; // rsi

  v7 = FdoExt(DeviceObject);
  Status = IoStatus->Status;
  Context->IoStatus.Status = Status;
  Log(DeviceObject, 16, 1902409795, Status, (__int64)Context);
  UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Context, 1218);
  IofCompleteRequest(Context, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v7 + 306), Context, 0x20u);
}
