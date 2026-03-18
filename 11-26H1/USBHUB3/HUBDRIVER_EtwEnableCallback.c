/*
 * XREFs of HUBDRIVER_EtwEnableCallback @ 0x140079008
 * Callers:
 *     McGenControlCallbackV2 @ 0x140001890 (McGenControlCallbackV2.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x140001A84 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0ppuq_EtwWriteTransfer @ 0x140001F34 (McTemplateK0ppuq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     HUBDRIVER_EtwRundownHub @ 0x140079248 (HUBDRIVER_EtwRundownHub.c)
 *     HUBDRIVER_EtwRundownUsbDevice @ 0x140079930 (HUBDRIVER_EtwRundownUsbDevice.c)
 */

__int64 __fastcall HUBDRIVER_EtwEnableCallback(__int64 a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 i; // rax
  __int64 j; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]
  GUID ActivityId; // [rsp+40h] [rbp-28h] BYREF

  ActivityId = 0LL;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_14006D2C0);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 32),
    0LL);
  if ( a2 == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(v3 + 4), 0x1000u);
    EtwActivityIdControl(3u, &ActivityId);
    if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 1) != 0 )
      McTemplateK0_EtwWriteTransfer(v4, &USBHUB3_ETW_EVENT_RUNDOWN_START, &ActivityId);
    for ( i = *(_QWORD *)(v3 + 16); ; i = *(_QWORD *)(v11 + 2448) )
    {
      v11 = i - 2448;
      if ( v3 + 16 == i )
        break;
      HUBDRIVER_EtwRundownHub(&ActivityId, i - 2448);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(
        WdfDriverGlobals,
        *(_QWORD *)(v11 + 16));
      for ( j = 0LL; ; j = v10 )
      {
        v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
               WdfDriverGlobals,
               *(_QWORD *)(v11 + 16),
               j,
               1LL);
        v10 = v9;
        if ( !v9 )
          break;
        if ( v9 == *(_QWORD *)(v11 + 2672) )
        {
          v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                 WdfDriverGlobals,
                 v9,
                 off_14006D248);
          if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 1) != 0 )
          {
            LODWORD(v14) = *(_DWORD *)(v7 + 28);
            LOBYTE(v13) = *(_BYTE *)(v11 + 160);
            McTemplateK0ppuq_EtwWriteTransfer(
              v8,
              &USBHUB3_ETW_EVENT_RUNDOWN_FIRMWARE_UPDATE_DEVICE_INFORMATION,
              &ActivityId,
              *(_QWORD *)(v11 + 248),
              *(_QWORD *)(v11 + 2672),
              v13,
              v14);
          }
        }
        else
        {
          HUBDRIVER_EtwRundownUsbDevice(&ActivityId, v9);
        }
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
        WdfDriverGlobals,
        *(_QWORD *)(v11 + 16));
    }
    if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 1) != 0 )
      McTemplateK0_EtwWriteTransfer(v4, &USBHUB3_ETW_EVENT_RUNDOWN_COMPLETE, &ActivityId);
  }
  else if ( !a2 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v3 + 4), 0xFFFFEFFF);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
           WdfDriverGlobals,
           *(_QWORD *)(v3 + 32));
}
