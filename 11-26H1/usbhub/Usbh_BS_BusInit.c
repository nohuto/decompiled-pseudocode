/*
 * XREFs of Usbh_BS_BusInit @ 0x140039B00
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x140012A78 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhReleaseBusStateLock @ 0x1400111B8 (UsbhReleaseBusStateLock.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Usbh_BS_BusInit(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  unsigned int v6; // edi
  __int64 v7; // r9

  v4 = a3;
  FdoExt(*(_QWORD *)(a2 + 8));
  v6 = *(_DWORD *)(a2 + 80);
  Log((__int64)a1, 2048, 1651722574, a2, v4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_c14d5bcd548e31c8cc373c847eff1ef0_Traceguids,
      v4);
  if ( (_DWORD)v4 == 1 )
    v6 = 2;
  return UsbhReleaseBusStateLock(a1, a2, v6, v7);
}
