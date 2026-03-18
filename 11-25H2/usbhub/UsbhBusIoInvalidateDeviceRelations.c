/*
 * XREFs of UsbhBusIoInvalidateDeviceRelations @ 0x14001B990
 * Callers:
 *     UsbhBusConnectPdo @ 0x14002DB28 (UsbhBusConnectPdo.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x140030B9C (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhDeregisterPdo @ 0x140046C6C (UsbhDeregisterPdo.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 */

void __fastcall UsbhBusIoInvalidateDeviceRelations(__int64 a1, __int64 a2)
{
  int v3; // edi
  PDEVICE_OBJECT *v4; // rsi

  v3 = a1;
  v4 = (PDEVICE_OBJECT *)FdoExt(a1);
  Log(v3, 16, 4812662, v3, a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids);
  IoInvalidateDeviceRelations(v4[149], BusRelations);
}
