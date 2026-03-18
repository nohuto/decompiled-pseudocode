/*
 * XREFs of UsbhFdoPower_QueryPower @ 0x14004ABF0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x14002A57C (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhFdoQuerySystemPowerState @ 0x14004AE44 (UsbhFdoQuerySystemPowerState.c)
 *     UsbhStartThisPowerIrp_Fdo @ 0x14004B65C (UsbhStartThisPowerIrp_Fdo.c)
 */

NTSTATUS __fastcall UsbhFdoPower_QueryPower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  _DWORD *v5; // rbp
  unsigned int Options; // ecx
  struct _DEVICE_OBJECT *v7; // rcx
  _DWORD *v8; // rbx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = FdoExt((__int64)DeviceObject);
  UsbhStartThisPowerIrp_Fdo(DeviceObject, Irp, 1161LL);
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( !Options )
    return UsbhFdoQuerySystemPowerState(DeviceObject, Irp);
  if ( Options == 1 )
  {
    v8 = FdoExt((__int64)DeviceObject);
    Log((__int64)DeviceObject, 16, 1365536883, 0LL, (__int64)Irp);
    UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 1386);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    v7 = (struct _DEVICE_OBJECT *)*((_QWORD *)v8 + 151);
  }
  else
  {
    UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 1172);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    v7 = (struct _DEVICE_OBJECT *)*((_QWORD *)v5 + 151);
  }
  return PoCallDriver(v7, Irp);
}
