/*
 * XREFs of CreateMonitorRegionForDpi @ 0x140063AC0
 * Callers:
 *     CreateMonitorRegion @ 0x140063A98 (CreateMonitorRegion.c)
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x140015720 (GreCreateRectRgnIndirect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     GetMonitorRectForDpi @ 0x140064158 (GetMonitorRectForDpi.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall CreateMonitorRegionForDpi(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rcx
  __int64 RectRgnIndirect; // rsi
  bool v5; // bl
  bool v6; // di
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  _BYTE v10[16]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v11; // [rsp+50h] [rbp-28h] BYREF

  v11 = *(_OWORD *)GetMonitorRectForDpi(v10, a1, a2);
  RectRgnIndirect = GreCreateRectRgnIndirect((struct REGION_CORE *)&v11);
  if ( !RectRgnIndirect )
  {
    v5 = 0;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
    {
      v2 = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (v2 & 4) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
        v5 = 1;
    }
    v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(v2, WPP_GLOBAL_Control);
      LOBYTE(v8) = v6;
      LOBYTE(v9) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v9,
        v8,
        *(_QWORD *)(UserSessionState + 69144),
        2,
        3,
        10,
        (__int64)&WPP_8768031df7d030dd18e471d71591e6aa_Traceguids);
    }
  }
  return RectRgnIndirect;
}
