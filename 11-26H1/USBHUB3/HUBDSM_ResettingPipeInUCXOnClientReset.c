/*
 * XREFs of HUBDSM_ResettingPipeInUCXOnClientReset @ 0x140023B00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x140028CF4 (HUBUCX_SubmitUcxIoctl.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBDSM_ResettingPipeInUCXOnClientReset(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rdx
  _QWORD *v4; // r8
  int v5; // edx
  _OWORD v7[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 960);
  v8 = 0LL;
  memset(v7, 0, sizeof(v7));
  v2 = *(_QWORD *)(v1 + 464);
  LOWORD(v7[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(WdfDriverGlobals, v2, v7);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
         WdfDriverGlobals,
         *(_QWORD *)(v1 + 440),
         0LL);
  *(_OWORD *)v3 = 0LL;
  *(_OWORD *)(v3 + 16) = 0LL;
  *(_QWORD *)(v3 + 32) = 0LL;
  v4 = *(_QWORD **)(v1 + 1664);
  if ( v4 )
  {
    *(_DWORD *)v3 = 40;
    *(_QWORD *)(v3 + 8) = *(_QWORD *)(*(_QWORD *)v1 + 248LL);
    *(_QWORD *)(v3 + 16) = *(_QWORD *)(v1 + 24);
    *(_QWORD *)(v3 + 24) = *v4;
    v5 = HUBUCX_SubmitUcxIoctl(v1, 4788287LL);
    if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        5u,
        0x3Eu,
        (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids,
        v5);
  }
  else
  {
    *(_DWORD *)(v1 + 1572) = -2147482112;
    *(_DWORD *)(v1 + 1568) = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        v3,
        5,
        61,
        (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids);
    }
    HUBSM_AddEvent(v1 + 512, 4020);
  }
  return 1000LL;
}
