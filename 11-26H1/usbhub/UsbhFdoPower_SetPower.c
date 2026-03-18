/*
 * XREFs of UsbhFdoPower_SetPower @ 0x14004ACE0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhFdoSystemPowerState @ 0x140028454 (UsbhFdoSystemPowerState.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x14002A57C (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhFdoDevicePowerState @ 0x14004A658 (UsbhFdoDevicePowerState.c)
 *     UsbhStartThisPowerIrp_Fdo @ 0x14004B65C (UsbhStartThisPowerIrp_Fdo.c)
 */

NTSTATUS __fastcall UsbhFdoPower_SetPower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  PDEVICE_OBJECT *v5; // rbp
  unsigned int Options; // edx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = (PDEVICE_OBJECT *)FdoExt((__int64)DeviceObject);
  Log((__int64)DeviceObject, 16, 1349739892, 0LL, (__int64)Irp);
  UsbhStartThisPowerIrp_Fdo(DeviceObject, Irp, 1743LL);
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( !Options )
    return UsbhFdoSystemPowerState(DeviceObject, Irp);
  if ( Options == 1 )
    return UsbhFdoDevicePowerState(DeviceObject, Irp);
  UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 1753);
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  return PoCallDriver(v5[151], Irp);
}
