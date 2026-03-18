/*
 * XREFs of RIMGetLastInvertedPenTime @ 0x140201990
 * Callers:
 *     <none>
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_i @ 0x140136684 (WPP_RECORDER_AND_TRACE_SF_i.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

unsigned __int64 __fastcall RIMGetLastInvertedPenTime(__int64 a1, int a2, int a3)
{
  unsigned __int64 v3; // rsi
  int v4; // ecx
  char v5; // bl
  char v6; // di
  bool v7; // bp
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  __int64 *v18; // r14
  __int64 *i; // rdi
  __int64 v20; // rax
  int v21; // edx
  int v22; // r8d
  bool v23; // di
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx

  v3 = 0LL;
  v4 = (int)WPP_GLOBAL_Control;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v6 = 0;
  }
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      149,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
  }
  v11 = W32GetUserSessionState(v4, a2, a3);
  RIMLockExclusive(v11 + 56);
  v18 = (__int64 *)(W32GetUserSessionState(v13, v12, v14) + 120);
  for ( i = (__int64 *)*v18; i != v18; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)16 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 4758);
    }
    else if ( (*((_DWORD *)i + 17) & 4) != 0 && i[98] > v3 )
    {
      v3 = i[98];
    }
  }
  v20 = W32GetUserSessionState(v16, v15, v17);
  RIMUnlockExclusive(v20 + 56);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v5 = 0;
  }
  v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v24 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v21, v22);
    LOBYTE(v25) = v23;
    LOBYTE(v26) = v5;
    WPP_RECORDER_AND_TRACE_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 3), v26, v25, *(_QWORD *)(v24 + 19368), 4);
  }
  return v3;
}
