/*
 * XREFs of HUBHTX_SendInterruptTransfer @ 0x140005BC4
 * Callers:
 *     HUBHSM_SendingInterruptTransfer @ 0x140009EC0 (HUBHSM_SendingInterruptTransfer.c)
 *     HUBHSM_SendingInterruptTransferAfterResettingPipe @ 0x140009F00 (HUBHSM_SendingInterruptTransferAfterResettingPipe.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 */

__int64 __fastcall HUBHTX_SendInterruptTransfer(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 result; // rax
  int v7; // r14d
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // [rsp+28h] [rbp-41h]
  int v11; // [rsp+28h] [rbp-41h]
  __int64 v12; // [rsp+30h] [rbp-39h] BYREF
  int v13; // [rsp+38h] [rbp-31h]
  __int64 v14; // [rsp+3Ch] [rbp-2Dh]
  int v15; // [rsp+44h] [rbp-25h]
  _QWORD v16[9]; // [rsp+48h] [rbp-21h] BYREF

  v1 = *(_QWORD *)(a1 + 984);
  v14 = 0LL;
  v15 = 0;
  v12 = 24LL;
  v13 = 0;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 1992))(
         WdfDriverGlobals,
         v1,
         &v12);
  if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_14006D2C0);
    v11 = v3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v4 + 64),
      2u,
      2u,
      0x3Bu,
      (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
      v11);
  }
  memset((void *)(a1 + 994), 0, 0x7EuLL);
  *(_QWORD *)(a1 + 1000) = *(_QWORD *)(a1 + 248);
  *(_DWORD *)(a1 + 992) = 589952;
  *(_DWORD *)(a1 + 1024) = 2;
  if ( *(_BYTE *)(a1 + 2288) )
    *(_DWORD *)(a1 + 1024) = 18;
  *(_QWORD *)(a1 + 1032) = *(_QWORD *)(a1 + 1136);
  *(_DWORD *)(a1 + 1028) = *(unsigned __int16 *)((-(__int64)(*(_BYTE *)(a1 + 240) != 0) & 0xFFFFFFFFFFFFFBE0uLL)
                                               + a1
                                               + 1144);
  *(_QWORD *)(a1 + 1040) = 0LL;
  *(_QWORD *)(a1 + 1016) = *(_QWORD *)(a1 + 1120);
  if ( *(_BYTE *)(a1 + 1128) )
  {
    *(_DWORD *)(a1 + 1008) |= 0x80000000;
    *(_BYTE *)(a1 + 1128) = 0;
  }
  memset(v16, 0, sizeof(v16));
  LOBYTE(v16[0]) = 15;
  LODWORD(v16[3]) = 2228227;
  v16[1] = a1 + 992;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
    WdfDriverGlobals,
    v1,
    v16);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(), __int64))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v1,
    HUBHTX_SendInterruptTransferComplete,
    a1);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
             WdfDriverGlobals,
             v1,
             v5,
             0LL);
  if ( !(_BYTE)result )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v1);
    v14 = 0LL;
    v15 = 0;
    v12 = 24LL;
    v13 = 0;
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 1992))(
               WdfDriverGlobals,
               v1,
               &v12);
    v8 = result;
    if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             WdfDriverGlobals->Driver,
             off_14006D2C0);
      LODWORD(v10) = v8;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(v9 + 64),
                 2u,
                 2u,
                 0x3Bu,
                 (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
                 v10);
    }
    if ( v7 < 0 )
      return HUBSM_AddEvent(a1 + 1280, 2030LL);
  }
  return result;
}
