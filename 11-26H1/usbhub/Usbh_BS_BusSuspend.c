/*
 * XREFs of Usbh_BS_BusSuspend @ 0x1400416B0
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x140012A78 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhReleaseBusStateLock @ 0x1400111B8 (UsbhReleaseBusStateLock.c)
 *     UsbhBusPnpStop_Action @ 0x140011CAC (UsbhBusPnpStop_Action.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     UsbhBusDisconnect_Action @ 0x14004118C (UsbhBusDisconnect_Action.c)
 *     UsbhBusReset_Action @ 0x140041224 (UsbhBusReset_Action.c)
 */

__int64 __fastcall Usbh_BS_BusSuspend(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned int v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx

  v3 = a3;
  FdoExt((__int64)a1);
  FdoExt(*(_QWORD *)(a2 + 8));
  v6 = *(_DWORD *)(a2 + 80);
  Log((__int64)a1, 2048, 1651724371, a2, v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xEu,
      (__int64)&WPP_c14d5bcd548e31c8cc373c847eff1ef0_Traceguids,
      v3);
  v9 = v3 - 3;
  if ( !v9 )
  {
    UsbhBusPnpStop_Action((__int64)a1, a2, v7, v8);
    v6 = 2;
    return UsbhReleaseBusStateLock(a1, a2, v6, v8);
  }
  v10 = v9 - 4;
  if ( !v10 )
  {
    v6 = 4;
    return UsbhReleaseBusStateLock(a1, a2, v6, v8);
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v6 = 3;
    return UsbhReleaseBusStateLock(a1, a2, v6, v8);
  }
  v12 = v11 - 2;
  if ( !v12 )
  {
    UsbhBusReset_Action((__int64)a1, a2);
    goto LABEL_11;
  }
  if ( v12 == 1 )
  {
    UsbhBusDisconnect_Action((__int64)a1, a2);
LABEL_11:
    v6 = 5;
  }
  return UsbhReleaseBusStateLock(a1, a2, v6, v8);
}
