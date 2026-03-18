/*
 * XREFs of HUBPARENT_SetHubConfiguration @ 0x1400081CC
 * Callers:
 *     HUBHSM_SettingHubConfiguration @ 0x140009F30 (HUBHSM_SettingHubConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x14003CD9C (HUBDESC_ParseConfigurationDescriptor.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 */

_UNKNOWN **__fastcall HUBPARENT_SetHubConfiguration(__int64 a1)
{
  int v2; // edx
  int v3; // ecx
  PURB v4; // r14
  struct _USB_CONFIGURATION_DESCRIPTOR *v5; // rbx
  int v6; // ecx
  int v7; // ecx
  __int64 *v8; // rdi
  struct _USB_INTERFACE_DESCRIPTOR *v9; // rax
  int v10; // edx
  _UNKNOWN **result; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rbx
  int v15; // ecx
  int v16; // ebx
  __int64 v17; // [rsp+28h] [rbp-A1h]
  __int64 v18; // [rsp+50h] [rbp-79h] BYREF
  __int128 v19; // [rsp+58h] [rbp-71h] BYREF
  __int128 v20; // [rsp+68h] [rbp-61h]
  __int128 v21; // [rsp+78h] [rbp-51h]
  __int64 v22; // [rsp+88h] [rbp-41h]
  _USBD_INTERFACE_LIST_ENTRY InterfaceList; // [rsp+90h] [rbp-39h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-29h]
  _QWORD v25[9]; // [rsp+B0h] [rbp-19h] BYREF

  LODWORD(v22) = 0;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  memset(v25, 0, sizeof(v25));
  v3 = *(_DWORD *)(a1 + 256);
  v4 = 0LL;
  v5 = *(struct _USB_CONFIGURATION_DESCRIPTOR **)(a1 + 1272);
  v18 = 0LL;
  v6 = v3 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        goto LABEL_9;
    }
    else
    {
      v8 = (__int64 *)(a1 + 2536);
      v9 = (struct _USB_INTERFACE_DESCRIPTOR *)HUBDESC_ParseConfigurationDescriptor(
                                                 (_DWORD)v5,
                                                 (_DWORD)v5,
                                                 -1,
                                                 -1,
                                                 9,
                                                 -1,
                                                 2,
                                                 0LL,
                                                 *(_QWORD *)(a1 + 2536));
      if ( v9 )
        goto LABEL_11;
    }
  }
  v8 = (__int64 *)(a1 + 2536);
  v9 = (struct _USB_INTERFACE_DESCRIPTOR *)HUBDESC_ParseConfigurationDescriptor(
                                             (_DWORD)v5,
                                             (_DWORD)v5,
                                             -1,
                                             -1,
                                             9,
                                             -1,
                                             1,
                                             0LL,
                                             *(_QWORD *)(a1 + 2536));
  if ( !v9 )
  {
    v9 = (struct _USB_INTERFACE_DESCRIPTOR *)HUBDESC_ParseConfigurationDescriptor(
                                               (_DWORD)v5,
                                               (_DWORD)v5,
                                               -1,
                                               -1,
                                               9,
                                               -1,
                                               0,
                                               0LL,
                                               *v8);
    if ( !v9 )
    {
      v9 = (struct _USB_INTERFACE_DESCRIPTOR *)HUBDESC_ParseConfigurationDescriptor(
                                                 (_DWORD)v5,
                                                 (_DWORD)v5,
                                                 -1,
                                                 -1,
                                                 9,
                                                 -1,
                                                 -1,
                                                 0LL,
                                                 *v8);
      if ( !v9 )
      {
LABEL_9:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v2) = 2;
          WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2536), v2, 3, 12, (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids);
        }
        goto LABEL_23;
      }
    }
  }
LABEL_11:
  if ( v9->bInterfaceClass != 9 || !v9->bNumEndpoints )
  {
LABEL_23:
    if ( v18 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    return (_UNKNOWN **)HUBSM_AddEvent(a1 + 1280, 2006LL);
  }
  InterfaceList.InterfaceDescriptor = v9;
  v24 = 0LL;
  v4 = USBD_CreateConfigurationRequestEx(v5, &InterfaceList);
  if ( v4 )
  {
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
            WdfDriverGlobals,
            *(_QWORD *)(a1 + 16));
    v13 = *(_QWORD *)(a1 + 16);
    v14 = v12;
    *(_QWORD *)&v20 = 0LL;
    v22 = 0LL;
    v21 = v13;
    v19 = 0LL;
    LODWORD(v19) = 56;
    *((_QWORD *)&v20 + 1) = 0x100000001LL;
    v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
            WdfDriverGlobals,
            &v19,
            v12,
            &v18);
    if ( v15 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v17) = v15;
        WPP_RECORDER_SF_d(*v8, 2u, 3u, 0xEu, (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids, v17);
      }
      goto LABEL_23;
    }
    LOBYTE(v25[0]) = 15;
    LODWORD(v25[3]) = 2228227;
    v25[1] = v4;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
      WdfDriverGlobals,
      v18,
      v25);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, PURB))(WdfFunctions_01015 + 2080))(
      WdfDriverGlobals,
      v18,
      &HUBPARENT_SetHubConfigurationComplete,
      v4);
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
                            WdfDriverGlobals,
                            v18,
                            v14,
                            0LL);
    if ( !(_BYTE)result )
    {
      v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v18);
      result = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v17) = v16;
        result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                                *v8,
                                2u,
                                3u,
                                0xFu,
                                (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids,
                                v17);
      }
      if ( v16 < 0 )
        goto LABEL_23;
    }
  }
  else
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      return (_UNKNOWN **)WPP_RECORDER_SF_(*v8, v10, 3, 13, (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids);
    }
  }
  return result;
}
