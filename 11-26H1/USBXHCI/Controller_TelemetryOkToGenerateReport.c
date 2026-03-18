/*
 * XREFs of Controller_TelemetryOkToGenerateReport @ 0x140078234
 * Callers:
 *     Controller_TelemetryReport @ 0x140042FC0 (Controller_TelemetryReport.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_D @ 0x140008EA0 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

char __fastcall Controller_TelemetryOkToGenerateReport(_QWORD *a1, __int64 a2, int a3)
{
  char v3; // di
  __int64 v4; // rax
  unsigned __int8 v5; // cf
  int v8; // r8d
  int v9; // r8d
  int v10; // eax
  unsigned int v11; // edx
  char v12; // cl
  int v13; // r9d
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  __int64 v19; // [rsp+70h] [rbp+20h] BYREF
  int v20; // [rsp+80h] [rbp+30h] BYREF
  __int64 v21; // [rsp+88h] [rbp+38h] BYREF

  v20 = 0;
  v21 = 0LL;
  v3 = 0;
  v4 = a1[97];
  v5 = _bittest64(&v4, a3 & 0x3F);
  v19 = 0LL;
  DestinationString = 0LL;
  if ( !v5 )
  {
    v8 = a3 - 4109;
    if ( !v8 )
    {
      v17 = *(_DWORD *)(a2 + 84);
      if ( (v17 & 1) == 0 )
      {
        v3 = 1;
        *(_DWORD *)(a2 + 84) = v17 | 1;
        return v3;
      }
      goto LABEL_4;
    }
    v9 = v8 - 2;
    if ( v9 )
    {
      if ( v9 != 3 )
        return 1;
      v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01033 + 384))(
              WdfDriverGlobals,
              *a1,
              1LL,
              131078LL,
              0LL,
              &v19);
      v12 = v10;
      if ( v10 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_4;
        v13 = 236;
        goto LABEL_21;
      }
      RtlInitUnicodeString(&DestinationString, L"OutOfOrderCommandCompletion");
      v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01033 + 1880))(
              WdfDriverGlobals,
              v19,
              &DestinationString,
              4LL,
              &v20,
              0LL,
              0LL);
      v11 = 0x80000000;
      v12 = v14;
      if ( (int)(v14 + 0x80000000) >= 0 && v14 != -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_4;
        v13 = 237;
        goto LABEL_21;
      }
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01033 + 384))(
              WdfDriverGlobals,
              *a1,
              1LL,
              131078LL,
              0LL,
              &v19);
      v12 = v15;
      if ( v15 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_4;
        v13 = 234;
        goto LABEL_21;
      }
      RtlInitUnicodeString(&DestinationString, L"OutdatedFirmwareVersion");
      v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01033 + 1880))(
              WdfDriverGlobals,
              v19,
              &DestinationString,
              8LL,
              &v21,
              0LL,
              0LL);
      v12 = v16;
      if ( v16 >= 0 )
      {
        if ( a1[91] == v21 )
          goto LABEL_4;
      }
      else if ( v16 != -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_4;
        v13 = 235;
LABEL_21:
        LOBYTE(v11) = 3;
        WPP_RECORDER_SF_d(a1[9], v11, 4, v13, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v12);
        goto LABEL_4;
      }
    }
    v3 = 1;
    goto LABEL_4;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return v3;
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_D(a1[9], a2, 4, 233, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, a3);
LABEL_4:
  if ( v19 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01033 + 1848))(WdfDriverGlobals);
  return v3;
}
