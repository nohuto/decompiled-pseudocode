/*
 * XREFs of UsbhSetPortIndicator @ 0x14003F768
 * Callers:
 *     Usbh_PIND_Disable_Action @ 0x14003F93C (Usbh_PIND_Disable_Action.c)
 *     Usbh_PIND_Enable_Action @ 0x14003FA0C (Usbh_PIND_Enable_Action.c)
 *     Usbh_PIND_SetAuto_Action @ 0x14003FAA4 (Usbh_PIND_SetAuto_Action.c)
 *     Usbh_PIND_SetBlink_Action @ 0x14003FB70 (Usbh_PIND_SetBlink_Action.c)
 *     Usbh_PIND_Timeout_Action @ 0x14003FC60 (Usbh_PIND_Timeout_Action.c)
 * Callees:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhSyncSendCommand @ 0x140007D40 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     WPP_RECORDER_SF_dd @ 0x14003EAFC (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall UsbhSetPortIndicator(__int64 a1, unsigned __int16 a2, __int16 a3)
{
  __int64 v3; // rsi
  _DWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdi
  int v9; // r10d
  __int64 v11; // [rsp+20h] [rbp-58h]
  int v12; // [rsp+28h] [rbp-50h]
  int v13; // [rsp+30h] [rbp-48h]
  __int16 v14; // [rsp+88h] [rbp+10h] BYREF
  int v15; // [rsp+90h] [rbp+18h] BYREF
  int v16; // [rsp+98h] [rbp+20h] BYREF
  __int16 v17; // [rsp+9Ch] [rbp+24h]
  __int16 v18; // [rsp+9Eh] [rbp+26h]

  v3 = a2;
  v15 = 0;
  v14 = 0;
  v6 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v13 = v3;
    v12 = v6[344];
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      1u,
      0xAu,
      (__int64)&WPP_346fba89075f3ddfe8308178e462e0c2_Traceguids,
      v12,
      v13);
  }
  Log(a1, 0x8000, 1885957680, v3, 0LL);
  v16 = 1442595;
  v18 = 0;
  v17 = a3 | v3;
  v8 = (int)UsbhSyncSendCommand(a1, (unsigned __int8 *)&v16, 0LL, &v14, v11, &v15);
  Log(a1, 8, 1937076273, v8, v15);
  if ( (v8 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v8) )
    UsbhException(a1, v3, 119, 0LL, 0, v8, v9, usbfile_pind_c, 96, 0);
  Log(a1, 8, 1937077072, v8, v3);
  return (unsigned int)v8;
}
