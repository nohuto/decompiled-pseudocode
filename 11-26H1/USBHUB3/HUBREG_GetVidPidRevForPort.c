/*
 * XREFs of HUBREG_GetVidPidRevForPort @ 0x140088368
 * Callers:
 *     HUBPDO_ReportDeviceFailure @ 0x14001A9F0 (HUBPDO_ReportDeviceFailure.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     HUBREG_OpenPortSubkey @ 0x140088A40 (HUBREG_OpenPortSubkey.c)
 */

__int64 __fastcall HUBREG_GetVidPidRevForPort(__int64 a1, _WORD *a2, _WORD *a3, _WORD *a4)
{
  int v8; // ebx
  __int64 v10; // [rsp+28h] [rbp-60h]
  __int64 v11; // [rsp+40h] [rbp-48h] BYREF
  _WORD v12[4]; // [rsp+48h] [rbp-40h] BYREF

  v11 = 0LL;
  v8 = HUBREG_OpenPortSubkey(*(_QWORD *)a1, *(unsigned __int16 *)(a1 + 200), 131103LL, &v11);
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _WORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
           WdfDriverGlobals,
           v11,
           &g_VidPidRev,
           6LL,
           v12,
           0LL,
           0LL);
    if ( v8 >= 0 )
    {
      *a2 = v12[0];
      *a3 = v12[1];
      *a4 = v12[2];
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v10) = v8;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 1432),
        2u,
        5u,
        0xA6u,
        (__int64)&WPP_6348287eaa4439ce1c5af6747761b290_Traceguids,
        v10);
    }
  }
  if ( v11 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1848))(WdfDriverGlobals, v11);
  return (unsigned int)v8;
}
