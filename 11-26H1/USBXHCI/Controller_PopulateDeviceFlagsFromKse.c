/*
 * XREFs of Controller_PopulateDeviceFlagsFromKse @ 0x140042268
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x140075F9C (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001EE08 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x140020E40 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_diS @ 0x140036DE0 (WPP_RECORDER_SF_diS.c)
 *     RtlStringCchPrintfW @ 0x1400452E4 (RtlStringCchPrintfW.c)
 *     WPP_RECORDER_SF_S @ 0x140045630 (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_PopulateDeviceFlagsFromKse(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r14
  __int64 result; // rax
  unsigned int v6; // esi
  char *v7; // r12
  int v8; // r15d
  _QWORD *v9; // rdi
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // r8d
  int v20; // edx
  int v21; // [rsp+28h] [rbp-E0h]
  int v22; // [rsp+28h] [rbp-E0h]
  __int64 v23; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+70h] [rbp-98h] BYREF
  __int64 v29; // [rsp+78h] [rbp-90h] BYREF
  char *v30; // [rsp+80h] [rbp-88h]
  _QWORD v31[2]; // [rsp+88h] [rbp-80h] BYREF
  wchar_t pszDest[64]; // [rsp+98h] [rbp-70h] BYREF

  v31[0] = L"USBXHCI";
  v31[1] = L"USBXHCI2";
  v4 = 0;
  result = (__int64)&WPP_RECORDER_INITIALIZED;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( !WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
    goto LABEL_56;
  v6 = 0;
  v7 = (char *)v31 - a1;
  v30 = (char *)v31 - a1;
  v8 = a1 + 709;
  v9 = (_QWORD *)(a1 + 736);
  do
  {
    RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ALL");
    v10 = *(_QWORD *)&v7[(_QWORD)v9 - 736];
    if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v10, &v23) >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v11, v12, 0x9Fu, v21, v6, v23, pszDest);
      *v9 |= v23;
    }
    if ( *(_DWORD *)(a1 + 644) == 1 )
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:PCI\\VEN_%04X", *(unsigned __int16 *)(a1 + 648));
    else
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S", a1 + 704);
    if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v10, &v24) >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v13, v14, 0xA0u, v21, v6, v24, pszDest);
      v4 = 1;
      *v9 |= v24;
    }
    if ( *(_DWORD *)(a1 + 644) == 1 )
    {
      v22 = *(unsigned __int16 *)(a1 + 652);
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:PCI\\VEN_%04X&DEV_%04X", *(unsigned __int16 *)(a1 + 648));
    }
    else
    {
      v22 = v8;
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S", a1 + 704);
    }
    if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v10, &v25) >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v15, v16, 0xA1u, v22, v6, v25, pszDest);
      v4 = 1;
      *v9 |= v25;
    }
    if ( *(_DWORD *)(a1 + 644) == 1 )
    {
      v21 = *(unsigned __int16 *)(a1 + 652);
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&REV_%02X", *(unsigned __int16 *)(a1 + 648));
    }
    else
    {
      v21 = a1 + 709;
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S&REV_%S", a1 + 704);
    }
    if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v10, &v26) >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v17, a3, 0xA2u, v21, v6, v26, pszDest);
      v4 = 1;
      *v9 |= v26;
    }
    v18 = *(_QWORD *)(a1 + 728);
    if ( v18 != -1 )
    {
      if ( *(_DWORD *)(a1 + 644) == 1 )
      {
        v21 = *(unsigned __int16 *)(a1 + 652);
        RtlStringCchPrintfW(
          pszDest,
          0x3CuLL,
          L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&REV_%02X&%I64X",
          *(unsigned __int16 *)(a1 + 648));
      }
      else
      {
        v21 = a1 + 709;
        RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S&REV_%S&%I64X", a1 + 704);
      }
      if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v10, &v27) >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v18, a3, 0xA3u, v21, v6, v27, pszDest);
        v4 = 1;
        *v9 |= v27;
      }
    }
    if ( *(_DWORD *)(a1 + 644) == 1 )
    {
      v21 = *(unsigned __int16 *)(a1 + 652);
      RtlStringCchPrintfW(
        pszDest,
        0x3CuLL,
        L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X",
        *(unsigned __int16 *)(a1 + 648));
      if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v10, &v28) >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v18, a3, 0xA4u, v21, v6, v28, pszDest);
        v4 = 1;
        *v9 |= v28;
      }
      if ( *(_DWORD *)(a1 + 644) == 1 )
      {
        v21 = *(unsigned __int16 *)(a1 + 652);
        RtlStringCchPrintfW(
          pszDest,
          0x3CuLL,
          L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X&REV_%02X",
          *(unsigned __int16 *)(a1 + 648));
        if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v10, &v29) >= 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v18, a3, 0xA5u, v21, v6, v29, pszDest);
          v4 = 1;
          *v9 |= v29;
        }
      }
    }
    v7 = v30;
    v8 = a1 + 709;
    ++v6;
    ++v9;
  }
  while ( v6 < 2 );
  result = *(_QWORD *)(a1 + 736);
  if ( (result & 0x10) != 0 )
  {
    v19 = 4108;
    v20 = 4;
LABEL_53:
    result = Controller_ReportFatalError(a1, v20, v19, 0, 0LL, 0LL, 0LL);
    goto LABEL_54;
  }
  if ( (result & 0x1000000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v18, 4, 166, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
    }
    Controller_HwVerifierBreakIfEnabled(
      a1,
      0,
      0,
      1LL,
      "Controller Firmware has known issues, and newer firmware is available",
      0LL,
      0LL);
    v20 = 0;
    v19 = 4111;
    goto LABEL_53;
  }
LABEL_54:
  if ( v4 )
    return result;
  result = (__int64)&WPP_RECORDER_INITIALIZED;
LABEL_56:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_S(*(_QWORD *)(a1 + 72), 3, a3, 167, v21, (__int64)pszDest);
  return result;
}
