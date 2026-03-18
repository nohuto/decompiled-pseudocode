/*
 * XREFs of HUBPARENT_ResetInterruptPipe @ 0x140007E8C
 * Callers:
 *     HUBHSM_ResettingInterruptPipeOnFailure @ 0x140009D20 (HUBHSM_ResettingInterruptPipeOnFailure.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 */

__int64 __fastcall HUBPARENT_ResetInterruptPipe(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 result; // rax
  int v7; // edx
  _QWORD v8[9]; // [rsp+30h] [rbp-58h] BYREF

  v1 = a1 + 840;
  *(_OWORD *)(a1 + 840) = 0LL;
  *(_OWORD *)(a1 + 856) = 0LL;
  *(_QWORD *)(a1 + 872) = 0LL;
  *(_QWORD *)(a1 + 848) = *(_QWORD *)(a1 + 248);
  *(_DWORD *)(a1 + 840) = 1966120;
  *(_QWORD *)(a1 + 864) = *(_QWORD *)(a1 + 1120);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  v4 = *(_QWORD *)(a1 + 816);
  v5 = v3;
  memset(v8, 0, sizeof(v8));
  LOBYTE(v8[0]) = 15;
  LODWORD(v8[3]) = 2228227;
  v8[1] = v1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(WdfDriverGlobals, v4, v8);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(), __int64))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v4,
    HUBPARENT_ResetInterruptPipeComplete,
    a1);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
             WdfDriverGlobals,
             v4,
             v5,
             0LL);
  if ( !(_BYTE)result )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2536), v7, 3, 17, (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids);
    }
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v4);
    if ( (int)result < 0 )
      return HUBSM_AddEvent(a1 + 1280, 2012LL);
  }
  return result;
}
