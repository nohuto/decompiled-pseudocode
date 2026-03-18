/*
 * XREFs of CreateMonitorRegionForDpi @ 0x1400839F0
 * Callers:
 *     CreateMonitorRegion @ 0x1400839C4 (CreateMonitorRegion.c)
 * Callees:
 *     GreCreateRectRgnIndirect @ 0x14001E880 (GreCreateRectRgnIndirect.c)
 *     GetMonitorRectForDpi @ 0x140085450 (GetMonitorRectForDpi.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

struct HOBJ__ *__fastcall CreateMonitorRegionForDpi(__int64 a1, unsigned __int16 a2)
{
  int v2; // ecx
  struct HOBJ__ *RectRgnIndirect; // rsi
  int v4; // r8d
  bool v6; // bl
  bool v7; // di
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  _BYTE v11[16]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v12; // [rsp+50h] [rbp-28h] BYREF

  v12 = *(_OWORD *)GetMonitorRectForDpi(v11, a1, a2);
  RectRgnIndirect = GreCreateRectRgnIndirect((int *)&v12);
  if ( !RectRgnIndirect )
  {
    v6 = 0;
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
    {
      v2 = *((_DWORD *)WPP_GLOBAL_Control + 11);
      if ( (v2 & 4) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
        v6 = 1;
    }
    v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(v2, (_DWORD)WPP_GLOBAL_Control, v4);
      LOBYTE(v9) = v7;
      LOBYTE(v10) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v10,
        v9,
        *(_QWORD *)(UserSessionState + 69136),
        2,
        3,
        10,
        (__int64)&WPP_93adc0481f7531f8b6a5c7f50f6b390d_Traceguids);
    }
  }
  return RectRgnIndirect;
}
