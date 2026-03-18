/*
 * XREFs of HUBUCX_NotifyForwardProgress @ 0x1400288C0
 * Callers:
 *     HUBFDO_EvtDeviceUsageNotification @ 0x14000DCF0 (HUBFDO_EvtDeviceUsageNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBUCX_NotifyForwardProgress(__int64 a1)
{
  __int64 v1; // rdx
  bool v3; // zf
  __int64 v4; // rax
  int v5; // eax
  int v6; // edi
  __int64 v8; // [rsp+28h] [rbp-21h]
  _QWORD v9[3]; // [rsp+50h] [rbp+7h] BYREF
  _DWORD v10[2]; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v11; // [rsp+70h] [rbp+27h]
  int v12; // [rsp+78h] [rbp+2Fh]
  int v13; // [rsp+7Ch] [rbp+33h]
  __int64 v14; // [rsp+80h] [rbp+37h]
  int v15; // [rsp+88h] [rbp+3Fh]
  int v16; // [rsp+8Ch] [rbp+43h]

  v1 = *(_QWORD *)(a1 + 32);
  v16 = 0;
  v10[0] = 1;
  v12 = 4096;
  v3 = *(_BYTE *)(a1 + 240) == 0;
  v4 = *(_QWORD *)(a1 + 248);
  v10[1] = 40;
  v13 = 1;
  v11 = v4;
  if ( v3 )
    v5 = *(unsigned __int16 *)(a1 + 1144);
  else
    v5 = *(unsigned __int16 *)(a1 + 88);
  v15 = v5;
  v14 = *(_QWORD *)(a1 + 1120);
  v9[0] = 1LL;
  v9[1] = v10;
  v9[2] = 40LL;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, _QWORD, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 1520))(
         WdfDriverGlobals,
         v1,
         0LL,
         4789263LL,
         v9,
         0LL,
         0LL,
         0LL,
         0LL);
  if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v8) = v6;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2536),
      2u,
      3u,
      0x49u,
      (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids,
      v8);
  }
  return (unsigned int)v6;
}
