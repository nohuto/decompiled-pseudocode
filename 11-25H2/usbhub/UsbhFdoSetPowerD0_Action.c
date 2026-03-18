/*
 * XREFs of UsbhFdoSetPowerD0_Action @ 0x14004B4C0
 * Callers:
 *     UsbhFdoDevicePowerState @ 0x14004AAA8 (UsbhFdoDevicePowerState.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x140030C98 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 */

NTSTATUS __fastcall UsbhFdoSetPowerD0_Action(__int64 a1, __int64 a2, IRP *a3)
{
  PDEVICE_OBJECT *v6; // rbx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x1Eu,
      (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids);
  v6 = (PDEVICE_OBJECT *)FdoExt(a1);
  Log(a1, 16, 1885291568, a2, (__int64)a3);
  UsbhPoStartNextPowerIrp_Fdo(a1, a3, 4566);
  ++a3->CurrentLocation;
  ++a3->Tail.Overlay.CurrentStackLocation;
  return PoCallDriver(v6[151], a3);
}
