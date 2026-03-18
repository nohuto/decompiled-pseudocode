/*
 * XREFs of rimPointerTransitionsPolicyUpdateStateAndApply @ 0x1400F2900
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1401842B0 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1400F2C3C (RIMCmAddContactSuppressionReasons.c)
 */

void __fastcall rimPointerTransitionsPolicyUpdateStateAndApply(__int64 a1, int *a2, int a3)
{
  bool v5; // si
  bool v6; // bp
  int v7; // ebx
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx

  if ( a3 && (a2[611] & 0x1000000) == 0 )
  {
    v5 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = *a2;
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v9) = v6;
      LOBYTE(v10) = v5;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v10,
        v9,
        *(_QWORD *)(UserSessionState + 19336),
        4,
        1,
        40,
        (__int64)&WPP_9efea04d3dc2347d4aca0dea27eac2eb_Traceguids,
        v7);
    }
    RIMCmAddContactSuppressionReasons(a1, a2, 4LL);
    a2[611] |= 0x8000u;
  }
}
