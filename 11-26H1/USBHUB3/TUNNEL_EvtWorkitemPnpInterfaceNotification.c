/*
 * XREFs of TUNNEL_EvtWorkitemPnpInterfaceNotification @ 0x140092B90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x14000FA34 (RtlUnicodeStringPrintf.c)
 *     McTemplateK0pqhhh_EtwWriteTransfer @ 0x14001CE30 (McTemplateK0pqhhh_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x140042AE4 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qqq @ 0x140042BEC (WPP_RECORDER_SF_qqq.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 *     TUNNEL_UpdateUsb4HostPowerRelations @ 0x1400938FC (TUNNEL_UpdateUsb4HostPowerRelations.c)
 */

__int64 __fastcall TUNNEL_EvtWorkitemPnpInterfaceNotification(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 *v9; // rsi
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r15d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // [rsp+28h] [rbp-E0h]
  __int64 v20; // [rsp+30h] [rbp-D8h]
  NTSTATUS v21; // [rsp+30h] [rbp-D8h]
  __int64 v22; // [rsp+38h] [rbp-D0h]
  __int64 DestinationString; // [rsp+40h] [rbp-C8h]
  struct _UNICODE_STRING DestinationString_8; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v25[9]; // [rsp+58h] [rbp-B0h] BYREF
  char v26; // [rsp+E8h] [rbp-20h] BYREF

  memset(v25, 0, 0x88uLL);
  DestinationString_8.Buffer = (wchar_t *)&v26;
  *(_QWORD *)&DestinationString_8.Length = 0x2000000LL;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3048))(WdfDriverGlobals, a1);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v2,
         off_14006D270);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006D0D0);
  v5 = *(_QWORD *)(v4 + 512);
  v6 = RtlUnicodeStringPrintf(&DestinationString_8, L"%sUSB-%p", v4, *(_QWORD *)(v3 + 24));
  if ( v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = v6;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 2536),
        2u,
        3u,
        0x10u,
        (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
        v21);
    }
LABEL_11:
    *(_DWORD *)(v5 + 24) = 0;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
  }
  v9 = (__int64 *)(v5 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    DestinationString = v5;
    v22 = *(_QWORD *)(v5 + 32);
    v20 = *v9;
    WPP_RECORDER_SF_qqq(*(_QWORD *)(v3 + 2536), v7, v8, 0x11u, v19);
  }
  *(_QWORD *)&v25[0] = 0x200000088LL;
  LODWORD(v25[4]) = 1;
  HIDWORD(v25[4]) = 1;
  *(_QWORD *)&v25[1] = TUNNEL_EvtIoTargetRemoveCanceled;
  *((_QWORD *)&v25[0] + 1) = TUNNEL_EvtIoTargetQueryRemove;
  *((_QWORD *)&v25[1] + 1) = TUNNEL_EvtIoTargetRemoveComplete;
  v25[3] = DestinationString_8;
  LODWORD(v25[5]) = 64;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 1344))(
          WdfDriverGlobals,
          *v9,
          v25);
  v12 = v10;
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v20) = v10;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 2536),
        2u,
        3u,
        0x12u,
        (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
        v20);
    }
    if ( byte_140070D4B < 0 )
    {
      LOWORD(DestinationString) = *(_WORD *)(v3 + 2484);
      LOWORD(v22) = *(_WORD *)(v3 + 2482);
      LOWORD(v20) = *(_WORD *)(v3 + 2480);
      LODWORD(v19) = v12;
      McTemplateK0pqhhh_EtwWriteTransfer(
        v11,
        &USBHUB3_ETW_EVENT_USB4_POWER_RELATIONS_FAILURE,
        0LL,
        *(_QWORD *)(v3 + 248),
        v19,
        v20,
        v22,
        DestinationString);
    }
    goto LABEL_11;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 2760),
    0LL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v5 + 16),
    0LL);
  if ( *(_DWORD *)(v5 + 24) == 1 )
    *(_DWORD *)(v5 + 24) = 2;
  v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1432))(WdfDriverGlobals, *v9);
  v14 = *v9;
  *(_QWORD *)(v5 + 32) = v13;
  *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                v14,
                off_14006D180)
            + 8) = v5;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v5 + 16));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v3 + 2760));
  TUNNEL_UpdateUsb4HostPowerRelations(v3, v5);
  if ( (Microsoft_Windows_USB_USBHUB3EnableBits & 4) != 0 )
    McTemplateK0ppp_EtwWriteTransfer(v16, v15, v17, *(_QWORD *)(v3 + 248), *v9, *(_QWORD *)(v5 + 32));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(*(_QWORD *)(v3 + 2536), v15, v17, 0x13u, v19);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
}
