/*
 * XREFs of rimResetPnpRemovePendingStateBits @ 0x1401809D0
 * Callers:
 *     RIMRemoveDevOfInputType @ 0x140092B8C (RIMRemoveDevOfInputType.c)
 *     RIMUnregisterForInput @ 0x140129F90 (RIMUnregisterForInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

_UNKNOWN **__fastcall rimResetPnpRemovePendingStateBits(__int64 a1, int a2, int a3)
{
  bool v4; // di
  _UNKNOWN **result; // rax
  bool v6; // si
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx

  v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v4;
    result = (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_q(
                            *((_QWORD *)WPP_GLOBAL_Control + 3),
                            v9,
                            v8,
                            *(_QWORD *)(UserSessionState + 19368),
                            4,
                            1,
                            39,
                            (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids,
                            a1);
  }
  *(_DWORD *)(a1 + 184) &= ~1u;
  *(_DWORD *)(a1 + 172) &= 0xFFFFFFE7;
  return result;
}
