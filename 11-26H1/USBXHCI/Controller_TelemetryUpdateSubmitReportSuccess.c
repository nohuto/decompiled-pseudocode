/*
 * XREFs of Controller_TelemetryUpdateSubmitReportSuccess @ 0x140078538
 * Callers:
 *     Controller_TelemetryReport @ 0x140042FC0 (Controller_TelemetryReport.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_D @ 0x140008EA0 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_TelemetryUpdateSubmitReportSuccess(_QWORD *a1, int a2)
{
  int v2; // ebx
  __int64 result; // rax
  int v5; // ebx
  int v6; // edx
  int v7; // r9d
  char v8; // [rsp+28h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  __int64 v10; // [rsp+80h] [rbp+30h] BYREF
  int v11; // [rsp+88h] [rbp+38h] BYREF

  v11 = 0;
  v10 = 0LL;
  v2 = a2;
  DestinationString = 0LL;
  if ( (a2 & 0xFFFFEFC0) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = a2;
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_D(a1[9], a2, 4, 252, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v8);
  }
  result = a1[97] | (1LL << (v2 & 0x3F));
  a1[97] = result;
  v5 = v2 - 4111;
  if ( v5 )
  {
    if ( v5 != 3 )
      goto LABEL_19;
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01033 + 384))(
               WdfDriverGlobals,
               *a1,
               1LL,
               131078LL,
               0LL,
               &v10);
    if ( (int)result >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"OutOfOrderCommandCompletion");
      v11 = 1;
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, int, int *))(WdfFunctions_01033 + 1928))(
                 WdfDriverGlobals,
                 v10,
                 &DestinationString,
                 4LL,
                 4,
                 &v11);
      if ( (int)result >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_19;
      v7 = 256;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_19;
      v7 = 255;
    }
  }
  else
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01033 + 384))(
               WdfDriverGlobals,
               *a1,
               1LL,
               131078LL,
               0LL,
               &v10);
    if ( (int)result >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"OutdatedFirmwareVersion");
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, int, _QWORD *))(WdfFunctions_01033 + 1928))(
                 WdfDriverGlobals,
                 v10,
                 &DestinationString,
                 3LL,
                 8,
                 a1 + 91);
      if ( (int)result >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_19;
      v7 = 254;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_19;
      v7 = 253;
    }
  }
  LOBYTE(v6) = 3;
  result = WPP_RECORDER_SF_d(a1[9], v6, 4, v7, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, result);
LABEL_19:
  if ( v10 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01033 + 1848))(WdfDriverGlobals);
  return result;
}
