/*
 * XREFs of RIMGetLastInvertedPenTime @ 0x1401DB2F0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_i @ 0x1400F12A4 (WPP_RECORDER_AND_TRACE_SF_i.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

unsigned __int64 __fastcall RIMGetLastInvertedPenTime(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  void *v3; // rcx
  char v4; // bl
  char v5; // si
  bool v6; // bp
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  _QWORD **v15; // r14
  _QWORD *i; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  bool v19; // si
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx

  v2 = 0LL;
  v3 = WPP_GLOBAL_Control;
  v4 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v5 = 0;
  }
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      150,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
  v10 = W32GetUserSessionState(v3, a2);
  RIMLockExclusive(v10 + 56);
  v15 = (_QWORD **)(W32GetUserSessionState(v12, v11) + 120);
  for ( i = *v15; i != v15; i = (_QWORD *)*i )
  {
    v14 = i - 2;
    if ( i == (_QWORD *)16 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4813);
    }
    else if ( (*((_DWORD *)v14 + 21) & 4) != 0 && v14[100] > v2 )
    {
      v2 = v14[100];
    }
  }
  v17 = W32GetUserSessionState(v14, v13);
  RIMUnlockExclusive(v17 + 56);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v4 = 0;
  }
  v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = W32GetUserSessionState(WPP_GLOBAL_Control, v18);
    LOBYTE(v21) = v19;
    LOBYTE(v22) = v4;
    WPP_RECORDER_AND_TRACE_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 3), v22, v21, *(_QWORD *)(v20 + 19336), 4);
  }
  return v2;
}
