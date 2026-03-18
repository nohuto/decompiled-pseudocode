/*
 * XREFs of Controller_UcxEvtReset @ 0x1400438A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     Controller_IsControllerAccessible @ 0x14000B90C (Controller_IsControllerAccessible.c)
 *     Controller_InternalReset @ 0x1400416D0 (Controller_InternalReset.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Controller_UcxEvtReset(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  int v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+34h] [rbp-24h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B290);
  if ( Controller_IsControllerAccessible(v2) )
  {
    Controller_InternalReset(v2, v3, v4);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(v2 + 72), v3, 4, 195, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
  }
  v7 = 0x100000000LL;
  v6 = 12;
  return ((__int64 (__fastcall *)(__int64, __int64, int *))qword_14006BC18)(UcxDriverGlobals, a1, &v6);
}
