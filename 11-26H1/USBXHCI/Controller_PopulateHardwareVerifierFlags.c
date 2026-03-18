/*
 * XREFs of Controller_PopulateHardwareVerifierFlags @ 0x1400765BC
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x140044750 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     RtlUnicodeStringPrintf @ 0x140045408 (RtlUnicodeStringPrintf.c)
 *     WPP_RECORDER_SF_i @ 0x140045AE8 (WPP_RECORDER_SF_i.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

NTSTATUS __fastcall Controller_PopulateHardwareVerifierFlags(__int64 a1)
{
  int v2; // ecx
  int v3; // eax
  void *v4; // rdi
  NTSTATUS result; // eax
  int v6; // edx
  int v7; // esi
  _QWORD *v8; // rdi
  _QWORD *v9; // rcx
  int v10; // r9d
  __int64 v11; // [rsp+28h] [rbp-59h]
  __int64 v12; // [rsp+48h] [rbp-39h] BYREF
  __int64 v13; // [rsp+50h] [rbp-31h] BYREF
  __int64 v14; // [rsp+58h] [rbp-29h] BYREF
  __int64 v15; // [rsp+60h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-19h] BYREF
  char v17; // [rsp+78h] [rbp-9h] BYREF

  *(_QWORD *)&DestinationString.Length = 3407872LL;
  v15 = 0LL;
  v2 = *(unsigned __int8 *)(a1 + 720);
  DestinationString.Buffer = (wchar_t *)&v17;
  v14 = 0LL;
  v3 = *(unsigned __int8 *)(a1 + 721);
  v13 = 0LL;
  v12 = 0LL;
  if ( (_BYTE)v2 )
  {
    if ( ((_BYTE)v2 != 1 || (_BYTE)v3) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(a1 + 72),
        3u,
        4u,
        0xE2u,
        (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
        v2,
        v3);
    v4 = &g_HwVerifierxHCI10;
  }
  else
  {
    v4 = &g_HwVerifierxHCI96;
  }
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01033 + 1832))(
             WdfDriverGlobals,
             0LL,
             &g_HwVerifierKeyName,
             131097LL,
             0LL,
             &v14);
  v7 = result;
  if ( result < 0 )
  {
    v14 = 0LL;
LABEL_10:
    v8 = (_QWORD *)(a1 + 848);
    v9 = (_QWORD *)(a1 + 848);
    goto LABEL_52;
  }
  result = *(_DWORD *)(a1 + 644);
  if ( result == 1 )
  {
    LODWORD(v11) = *(unsigned __int8 *)(a1 + 656);
    result = RtlUnicodeStringPrintf(
               &DestinationString,
               L"%04X%04X%02X",
               *(unsigned __int16 *)(a1 + 648),
               *(unsigned __int16 *)(a1 + 652),
               v11);
  }
  else
  {
    if ( result != 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v6, 4, 227, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
        v8 = (_QWORD *)(a1 + 848);
        v9 = (_QWORD *)(a1 + 848);
        goto LABEL_60;
      }
      goto LABEL_51;
    }
    result = RtlUnicodeStringPrintf(&DestinationString, L"%S%S%S", a1 + 704, a1 + 709, a1 + 714);
  }
  v7 = result;
  if ( result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_10;
    v10 = 228;
LABEL_18:
    LOBYTE(v6) = 2;
    result = WPP_RECORDER_SF_d(
               *(_QWORD *)(a1 + 72),
               v6,
               4,
               v10,
               (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
               v7);
    goto LABEL_10;
  }
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, _QWORD, __int64 *))(WdfFunctions_01033 + 1832))(
             WdfDriverGlobals,
             v14,
             &DestinationString,
             131097LL,
             0LL,
             &v13);
  v7 = result;
  if ( result >= 0 )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01033 + 1832))(
               WdfDriverGlobals,
               v13,
               v4,
               131097LL,
               0LL,
               &v12);
    v7 = result;
    if ( result >= 0 )
    {
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01033 + 1880))(
                 WdfDriverGlobals,
                 v12,
                 &g_HwVerifierControllerName,
                 8LL,
                 &v15,
                 0LL,
                 0LL);
      v7 = result;
      if ( result >= 0 )
        goto LABEL_51;
    }
    else
    {
      v12 = 0LL;
    }
  }
  else
  {
    v13 = 0LL;
  }
  if ( v7 == -1073741772 )
  {
    if ( v12 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01033 + 1848))(WdfDriverGlobals);
      v12 = 0LL;
    }
    v6 = v13;
    if ( v13 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01033 + 1848))(WdfDriverGlobals);
      v13 = 0LL;
    }
    result = *(_DWORD *)(a1 + 644);
    if ( result == 1 )
    {
      result = RtlUnicodeStringPrintf(
                 &DestinationString,
                 L"%04X%04X",
                 *(unsigned __int16 *)(a1 + 648),
                 *(unsigned __int16 *)(a1 + 652));
    }
    else
    {
      if ( result != 2 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = 2;
          result = WPP_RECORDER_SF_(
                     *(_QWORD *)(a1 + 72),
                     v6,
                     4,
                     229,
                     (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
        }
        v8 = (_QWORD *)(a1 + 848);
        *(_QWORD *)(a1 + 848) = 0LL;
        goto LABEL_61;
      }
      result = RtlUnicodeStringPrintf(&DestinationString, L"%S%S", a1 + 704, a1 + 709);
    }
    v7 = result;
    if ( result < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_10;
      v10 = 230;
      goto LABEL_18;
    }
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, _QWORD, __int64 *))(WdfFunctions_01033 + 1832))(
               WdfDriverGlobals,
               v14,
               &DestinationString,
               131097LL,
               0LL,
               &v13);
    v7 = result;
    if ( result >= 0 )
    {
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01033 + 1832))(
                 WdfDriverGlobals,
                 v13,
                 v4,
                 131097LL,
                 0LL,
                 &v12);
      v7 = result;
      if ( result >= 0 )
      {
        result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01033 + 1880))(
                   WdfDriverGlobals,
                   v12,
                   &g_HwVerifierControllerName,
                   8LL,
                   &v15,
                   0LL,
                   0LL);
        v7 = result;
        if ( result >= 0 )
          goto LABEL_51;
      }
      else
      {
        v12 = 0LL;
      }
    }
    else
    {
      v13 = 0LL;
    }
    if ( v7 == -1073741772 )
    {
      if ( v12 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01033 + 1848))(WdfDriverGlobals);
        v12 = 0LL;
      }
      if ( v13 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01033 + 1848))(WdfDriverGlobals);
        v13 = 0LL;
      }
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01033 + 1832))(
                 WdfDriverGlobals,
                 v14,
                 &g_HwVerifierGlobalName,
                 131097LL,
                 0LL,
                 &v13);
      v7 = result;
      if ( result < 0 )
      {
        v13 = 0LL;
        goto LABEL_10;
      }
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01033 + 1832))(
                 WdfDriverGlobals,
                 v13,
                 v4,
                 131097LL,
                 0LL,
                 &v12);
      v7 = result;
      if ( result < 0 )
      {
        v12 = 0LL;
        goto LABEL_10;
      }
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01033 + 1880))(
                 WdfDriverGlobals,
                 v12,
                 &g_HwVerifierControllerName,
                 8LL,
                 &v15,
                 0LL,
                 0LL);
      v7 = result;
    }
  }
LABEL_51:
  v8 = (_QWORD *)(a1 + 848);
  v9 = (_QWORD *)(a1 + 848);
  if ( v7 >= 0 )
  {
LABEL_60:
    result = v15;
    *v9 = v15;
    goto LABEL_61;
  }
LABEL_52:
  *v9 = 0LL;
  if ( v7 != -1073741772 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_63;
    LOBYTE(v6) = 2;
    result = WPP_RECORDER_SF_d(
               *(_QWORD *)(a1 + 72),
               v6,
               4,
               231,
               (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
               v7);
  }
LABEL_61:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    result = WPP_RECORDER_SF_i(
               *(_QWORD *)(a1 + 72),
               v6,
               4,
               232,
               (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
               *v8);
  }
LABEL_63:
  if ( v12 )
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01033 + 1848))(WdfDriverGlobals);
  if ( v13 )
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01033 + 1848))(WdfDriverGlobals);
  if ( v14 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01033 + 1848))(WdfDriverGlobals);
  return result;
}
