/*
 * XREFs of HUBREG_DeleteUxdPortKey @ 0x14008783C
 * Callers:
 *     HUBREG_DeleteUxdSettings @ 0x140087A9C (HUBREG_DeleteUxdSettings.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x14000FA34 (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBREG_DeleteUxdPortKey(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  NTSTATUS v5; // ebx
  unsigned __int16 v6; // r9
  __int64 v8; // [rsp+28h] [rbp-41h]
  __int64 v9; // [rsp+50h] [rbp-19h] BYREF
  __int64 v10; // [rsp+58h] [rbp-11h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  char v12; // [rsp+70h] [rbp+7h] BYREF

  *(_QWORD *)&DestinationString.Length = 3670016LL;
  DestinationString.Buffer = (wchar_t *)&v12;
  v4 = *(_QWORD *)(a1 + 16);
  v9 = 0LL;
  v10 = 0LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
         WdfDriverGlobals,
         v4,
         1LL,
         983103LL,
         0LL,
         &v9);
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_16;
    v6 = 109;
    goto LABEL_4;
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
         WdfDriverGlobals,
         v9,
         &g_UxdPortSettingsKey,
         983103LL,
         0LL,
         &v10);
  if ( v5 == -1073741772 )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _DWORD, _QWORD, _QWORD, __int64 *))(WdfFunctions_01015 + 1840))(
           WdfDriverGlobals,
           v9,
           &g_UxdPortSettingsKey,
           983103LL,
           0,
           0LL,
           0LL,
           &v10);
    if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 110;
LABEL_4:
      LODWORD(v8) = v5;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2536),
        2u,
        3u,
        v6,
        (__int64)&WPP_6348287eaa4439ce1c5af6747761b290_Traceguids,
        v8);
    }
  }
  else if ( v5 >= 0 )
  {
    v5 = RtlUnicodeStringPrintf(&DestinationString, L"uxd_port_%3.3d", a2);
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 1872))(
             WdfDriverGlobals,
             v10,
             &DestinationString);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 112;
      goto LABEL_4;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = 111;
    goto LABEL_4;
  }
LABEL_16:
  if ( v9 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v10 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v5;
}
