/*
 * XREFs of HUBREG_SetVidPidRevForPort @ 0x14008C2F0
 * Callers:
 *     HUBPDO_CreatePdoInternal @ 0x1400811BC (HUBPDO_CreatePdoInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     HUBREG_OpenPortSubkey @ 0x140088A40 (HUBREG_OpenPortSubkey.c)
 */

__int64 __fastcall HUBREG_SetVidPidRevForPort(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v4; // [rsp+28h] [rbp-40h]
  __int64 v5; // [rsp+40h] [rbp-28h] BYREF
  _WORD v6[4]; // [rsp+48h] [rbp-20h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v5 = 0LL;
  result = HUBREG_OpenPortSubkey(*(_QWORD *)a1, *(_WORD *)(v1 + 200), 0x2001Fu, &v5);
  if ( (int)result >= 0 )
  {
    v6[0] = *(_WORD *)(a1 + 2004);
    v6[1] = *(_WORD *)(a1 + 2006);
    v6[2] = *(_WORD *)(a1 + 2008);
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int, _WORD *))(WdfFunctions_01015 + 1928))(
               WdfDriverGlobals,
               v5,
               &g_VidPidRev,
               3LL,
               6,
               v6);
    if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v4) = result;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                 2u,
                 5u,
                 0xA5u,
                 (__int64)&WPP_6348287eaa4439ce1c5af6747761b290_Traceguids,
                 v4);
    }
  }
  if ( v5 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1848))(WdfDriverGlobals, v5);
  return result;
}
