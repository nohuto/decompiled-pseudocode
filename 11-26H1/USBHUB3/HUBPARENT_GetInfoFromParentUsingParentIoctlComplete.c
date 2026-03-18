/*
 * XREFs of HUBPARENT_GetInfoFromParentUsingParentIoctlComplete @ 0x140007810
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 */

__int64 __fastcall HUBPARENT_GetInfoFromParentUsingParentIoctlComplete(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // ebx
  __int64 v9; // rsi
  _QWORD *v10; // rdi
  _QWORD v12[18]; // [rsp+30h] [rbp-98h] BYREF

  memset(v12, 0, 0x88uLL);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1392))(WdfDriverGlobals, a2);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v6,
         off_14006D270);
  v8 = *(_DWORD *)(a3 + 8);
  v9 = v7;
  if ( v8 >= 0 )
  {
    v10 = (_QWORD *)(v7 + 32);
    v12[4] = *(_QWORD *)(v7 + 2464);
    v12[0] = 0x100000088LL;
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1336))(
           WdfDriverGlobals,
           *(_QWORD *)(v7 + 16),
           0LL,
           v7 + 32);
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD *))(WdfFunctions_01015 + 1344))(
             WdfDriverGlobals,
             *v10,
             v12);
      if ( v8 >= 0 )
      {
        if ( (*(_DWORD *)(v9 + 2512) & 1) != 0 )
          _InterlockedOr((volatile signed __int32 *)(v9 + 40), 0x8000u);
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v9 + 2536),
            2u,
            3u,
            0x15u,
            (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids,
            v8);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *v10);
      }
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
  return HUBSM_AddEvent(v9 + 1280, ((v8 >> 31) & 0xFFFFFFFC) + 2042);
}
