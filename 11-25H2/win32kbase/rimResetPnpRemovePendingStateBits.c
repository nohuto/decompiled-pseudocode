/*
 * XREFs of rimResetPnpRemovePendingStateBits @ 0x140144ED0
 * Callers:
 *     RIMUnregisterForInput @ 0x14009DC10 (RIMUnregisterForInput.c)
 *     RIMRemoveDevOfInputType @ 0x1401D5944 (RIMRemoveDevOfInputType.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

_UNKNOWN **__fastcall rimResetPnpRemovePendingStateBits(__int64 a1, __int64 a2)
{
  bool v3; // di
  _UNKNOWN **result; // rax
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx

  v3 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v3;
    result = (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_q(
                            *((_QWORD *)WPP_GLOBAL_Control + 3),
                            v8,
                            v7,
                            *(_QWORD *)(UserSessionState + 19336),
                            4,
                            1,
                            39,
                            (__int64)&WPP_68930b79bb6d3bf986a646580dbfeb5c_Traceguids,
                            a1);
  }
  *(_DWORD *)(a1 + 184) &= ~1u;
  *(_DWORD *)(a1 + 172) &= 0xFFFFFFE7;
  return result;
}
