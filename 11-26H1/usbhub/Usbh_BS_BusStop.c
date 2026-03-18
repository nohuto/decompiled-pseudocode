/*
 * XREFs of Usbh_BS_BusStop @ 0x1400415A4
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x140012A78 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhReleaseBusStateLock @ 0x1400111B8 (UsbhReleaseBusStateLock.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     Usbh_BusRemove_PdoEvent @ 0x140049018 (Usbh_BusRemove_PdoEvent.c)
 */

__int64 __fastcall Usbh_BS_BusStop(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned int v6; // edi
  __int64 v7; // r9
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx

  v3 = a3;
  FdoExt((__int64)a1);
  FdoExt(*(_QWORD *)(a2 + 8));
  v6 = *(_DWORD *)(a2 + 80);
  Log((__int64)a1, 2048, 1651725140, a2, v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xBu,
      (__int64)&WPP_c14d5bcd548e31c8cc373c847eff1ef0_Traceguids,
      v3);
  if ( (int)v3 > 7 )
  {
    v11 = v3 - 8;
    if ( !v11 )
      return UsbhReleaseBusStateLock(a1, a2, v6, v7);
    v12 = v11 - 1;
    if ( !v12 )
    {
LABEL_17:
      v6 = 4;
      return UsbhReleaseBusStateLock(a1, a2, v6, v7);
    }
    if ( v12 != 3 )
      return UsbhReleaseBusStateLock(a1, a2, v6, v7);
    Usbh_BusRemove_PdoEvent(*(_QWORD *)(a2 + 8), a2);
LABEL_16:
    v6 = 2;
    return UsbhReleaseBusStateLock(a1, a2, v6, v7);
  }
  if ( (_DWORD)v3 == 7 )
    return UsbhReleaseBusStateLock(a1, a2, v6, v7);
  v8 = v3 - 2;
  if ( !v8 )
  {
    v6 = 6;
    return UsbhReleaseBusStateLock(a1, a2, v6, v7);
  }
  v9 = v8 - 1;
  if ( !v9 )
    goto LABEL_16;
  v10 = v9 - 1;
  if ( !v10 )
    goto LABEL_17;
  if ( v10 == 1 )
    v6 = 3;
  return UsbhReleaseBusStateLock(a1, a2, v6, v7);
}
