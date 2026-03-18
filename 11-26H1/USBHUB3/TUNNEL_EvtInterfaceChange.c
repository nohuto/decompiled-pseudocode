/*
 * XREFs of TUNNEL_EvtInterfaceChange @ 0x140091FC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x14001DED0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_S @ 0x140035ED0 (WPP_RECORDER_SF_S.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x1400433F0 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     TUNNEL_GetUsb4Host @ 0x140092F88 (TUNNEL_GetUsb4Host.c)
 */

__int64 __fastcall TUNNEL_EvtInterfaceChange(char *NotificationStructure, PVOID Context)
{
  __int64 v2; // rax
  char v4; // r13
  bool v5; // r12
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // rsi
  int DeviceInterfacePropertyData; // eax
  int v10; // r14d
  unsigned __int16 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  wchar_t *v14; // rax
  wchar_t *v15; // rdi
  __int64 v16; // rcx
  int v17; // r9d
  wchar_t *v18; // rax
  __int64 Usb4Host; // r14
  const WCHAR *v20; // rbx
  wchar_t *v21; // rax
  __int64 v22; // rdx
  int v23; // eax
  int v24; // eax
  __int64 v25; // rax
  unsigned __int16 *v26; // rdx
  __int64 v27; // r9
  __int64 v28; // r10
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r11
  unsigned __int16 v31; // cx
  __int64 v32; // rcx
  _WORD *v33; // rdx
  __int64 v34; // r10
  _WORD *v35; // rax
  unsigned int v36; // eax
  __int64 v38; // [rsp+28h] [rbp-D8h]
  int v39; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+48h] [rbp-B8h] BYREF
  int v41; // [rsp+50h] [rbp-B0h] BYREF
  int v42; // [rsp+58h] [rbp-A8h] BYREF
  int v43; // [rsp+5Ch] [rbp-A4h]
  __int64 (__fastcall *v44)(); // [rsp+60h] [rbp-A0h]
  __int64 v45; // [rsp+68h] [rbp-98h]
  PVOID v46; // [rsp+70h] [rbp-90h]
  struct _UNICODE_STRING v47; // [rsp+78h] [rbp-88h] BYREF
  int v48; // [rsp+88h] [rbp-78h] BYREF
  __int128 v49; // [rsp+8Ch] [rbp-74h]
  int v50; // [rsp+9Ch] [rbp-64h]
  int v51; // [rsp+A0h] [rbp-60h]
  int v52; // [rsp+A4h] [rbp-5Ch]
  PVOID v53; // [rsp+A8h] [rbp-58h]
  __int64 v54; // [rsp+B0h] [rbp-50h]
  void *v55; // [rsp+B8h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  struct _UNICODE_STRING v57; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t Str1[20]; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR SourceString[236]; // [rsp+108h] [rbp+8h] BYREF

  v46 = Context;
  v50 = 0;
  v43 = 0;
  v2 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  v49 = 0LL;
  v54 = 0LL;
  v4 = 0;
  DestinationString = 0LL;
  v40 = 0LL;
  v39 = 0;
  v41 = 0;
  v47 = 0LL;
  v57 = 0LL;
  if ( !v2 )
    v2 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  v5 = v2 == 0;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, PVOID, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         Context,
         off_14006D270);
  v8 = v6;
  if ( *(_OWORD *)(NotificationStructure + 20) != *(_OWORD *)&GUID_DEVINTERFACE_USB4_VIRTUAL_POWER_PDO )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v16 = *(_QWORD *)(v6 + 2536);
    v17 = 20;
    goto LABEL_62;
  }
  DeviceInterfacePropertyData = IoGetDeviceInterfacePropertyData(
                                  *((_QWORD *)NotificationStructure + 5),
                                  &DEVPKEY_DeviceInterface_ReferenceString,
                                  0LL,
                                  0LL,
                                  512,
                                  Str1,
                                  &v41,
                                  &v39);
  v10 = DeviceInterfacePropertyData;
  if ( DeviceInterfacePropertyData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 21;
      LODWORD(v38) = DeviceInterfacePropertyData;
LABEL_7:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v8 + 2536),
        2u,
        3u,
        v11,
        (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
        v38);
      return 0LL;
    }
    return 0LL;
  }
  if ( v39 != 18 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v11 = 22;
    LODWORD(v38) = v39;
    goto LABEL_7;
  }
  if ( _wcsnicmp(Str1, L"Usb4-Host-Interface-", 0x14uLL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        *(_QWORD *)(v8 + 2536),
        v12,
        3u,
        0x17u,
        (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
        Str1);
    MicrosoftTelemetryAssertTriggeredArgsMsgKM(
      v13,
      v10,
      0,
      (__int64)"USB4 virtual power PDO interface arrival with invalid reference string");
    return 0LL;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  v14 = wcsstr(DestinationString.Buffer, L"^");
  v15 = v14;
  if ( !v14 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v16 = *(_QWORD *)(v8 + 2536);
    v17 = 24;
LABEL_62:
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_(v16, v7, 3, v17, (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids);
    return 0LL;
  }
  v18 = wcsstr(v14 + 1, L"^");
  Usb4Host = 0LL;
  v20 = v18;
  if ( v18 )
  {
    v20 = v18 + 1;
    *v18 = 0;
    v21 = wcsstr(v18 + 1, L"^");
    if ( v21 )
      *v21 = 0;
  }
  RtlInitUnicodeString(&v47, v15 + 1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v8 + 2760),
    0LL);
  if ( !v47.Length || (Usb4Host = TUNNEL_GetUsb4Host(v8, &v47)) == 0 )
  {
    if ( v20 )
    {
      RtlInitUnicodeString(&v57, v20);
      Usb4Host = TUNNEL_GetUsb4Host(v8, &v57);
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v8 + 2760));
  if ( Usb4Host )
  {
    if ( v5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *(_QWORD *)(v8 + 2536),
          4u,
          3u,
          0x1Au,
          (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
          Usb4Host);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        *(_QWORD *)(Usb4Host + 16),
        0LL);
      v23 = *(_DWORD *)(Usb4Host + 24);
      if ( !v23 || v23 == 4 )
      {
        v4 = 1;
        *(_DWORD *)(Usb4Host + 24) = 1;
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        *(_QWORD *)(Usb4Host + 16));
      if ( v4 )
      {
        v50 = 0;
        v45 = 1LL;
        v43 = 0;
        v42 = 24;
        v44 = TUNNEL_EvtWorkitemPnpInterfaceNotification;
        v55 = off_14006D0D0;
        v53 = v46;
        v49 = 0LL;
        v54 = 0LL;
        v48 = 56;
        v51 = 1;
        v52 = 1;
        v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, int *, int *, __int64 *))(WdfFunctions_01015 + 3032))(
                WdfDriverGlobals,
                &v42,
                &v48,
                &v40);
        if ( v24 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return 0LL;
          v11 = 28;
          LODWORD(v38) = v24;
          goto LABEL_7;
        }
        v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                v40,
                off_14006D0D0);
        v26 = (unsigned __int16 *)*((_QWORD *)NotificationStructure + 5);
        v27 = v25;
        v28 = 0LL;
        v29 = 0LL;
        v30 = *v26;
        if ( (v30 & 1) != 0
          || (v31 = v26[1], (v31 & 1) != 0)
          || (unsigned __int16)v30 > v31
          || v31 == 0xFFFF
          || !*((_QWORD *)v26 + 1) && ((_WORD)v30 || v31) )
        {
          v36 = -1073741811;
          *(_WORD *)v27 = 0;
        }
        else
        {
          if ( v26 )
          {
            v28 = *((_QWORD *)v26 + 1);
            v29 = v30 >> 1;
          }
          v32 = 256LL;
          v33 = (_WORD *)v25;
          v34 = v28 - v25;
          do
          {
            if ( !(v29 + v32 - 256) )
              break;
            *v33 = *(_WORD *)((char *)v33 + v34);
            ++v33;
            --v32;
          }
          while ( v32 );
          v35 = v33 - 1;
          if ( v32 )
            v35 = v33;
          *v35 = 0;
          v36 = v32 == 0 ? 0x80000005 : 0;
          if ( v32 )
          {
            *(_QWORD *)(v27 + 512) = Usb4Host;
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(WdfDriverGlobals, v40);
            return 0LL;
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v38) = v36;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v8 + 2536),
            2u,
            3u,
            0x1Du,
            (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
            v38);
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v40);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_q(
        *(_QWORD *)(v8 + 2536),
        4u,
        3u,
        0x1Bu,
        (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
        Usb4Host);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_S(
      *(_QWORD *)(v8 + 2536),
      v22,
      3u,
      0x19u,
      (__int64)&WPP_16d83da310273e0510a3edcc6c2bc223_Traceguids,
      Str1);
  }
  return 0LL;
}
