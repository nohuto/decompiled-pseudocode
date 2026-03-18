/*
 * XREFs of RIMUnregisterCurrentProcessForInput @ 0x14010F4A0
 * Callers:
 *     RIMOnProcessDestroy @ 0x14010F430 (RIMOnProcessDestroy.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMUnregisterForInput @ 0x14009DC10 (RIMUnregisterForInput.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMUnregisterCurrentProcessForInput(__int64 a1)
{
  int v1; // edi
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v3; // rdx
  __int64 v4; // r15
  void *v5; // rcx
  char v6; // bl
  bool v7; // si
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 *i; // r14
  _QWORD *v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rbx
  _QWORD *v22; // r15
  __int64 v23; // rdx
  char v24; // si
  bool v25; // r14
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  char v29; // bl
  bool v30; // si
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  _QWORD *v35; // [rsp+50h] [rbp-10h] BYREF
  _QWORD **v36; // [rsp+58h] [rbp-8h]

  v1 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v3 = (__int64 *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v3 = (__int64 *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  v4 = *v3;
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v6 = 0;
  }
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v3);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      18,
      (__int64)&WPP_a0eaa2991d4235df0a99e7079b39413e_Traceguids);
  }
  v36 = &v35;
  v35 = &v35;
  v11 = W32GetUserSessionState(v5, v3);
  RIMLockExclusive(v11 + 56);
  for ( i = *(__int64 **)(W32GetUserSessionState(v13, v12) + 120);
        i != (__int64 *)(W32GetUserSessionState(v15, v14) + 120);
        i = (__int64 *)*i )
  {
    if ( !*((_BYTE *)i + 64) && !*((_BYTE *)i + 65) && i[2] == v4 )
    {
      v17 = i + 99;
      if ( (__int64 *)i[100] != i + 99 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1252LL);
      if ( (_QWORD *)*v17 != v17 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1253LL);
      v1 = ObReferenceObjectByPointer(i - 2, 3u, ExRawInputManagerObjectType, 0);
      if ( v1 < 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1259LL);
      v18 = v36;
      if ( *v36 != &v35 )
        __fastfail(3u);
      i[100] = (__int64)v36;
      v15 = &v35;
      *v17 = &v35;
      *v18 = v17;
      v36 = (_QWORD **)(i + 99);
    }
  }
  v19 = W32GetUserSessionState(v15, v14);
  RIMUnlockExclusive(v19 + 56);
  v21 = v35;
  while ( v21 != &v35 )
  {
    v22 = v21 - 101;
    v1 = RIMUnregisterForInput((char *)*(v21 - 92));
    if ( v1 < 0 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v24 = 0;
      }
      v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = W32GetUserSessionState(WPP_GLOBAL_Control, v23);
        LOBYTE(v27) = v25;
        LOBYTE(v28) = v24;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v28,
          v27,
          *(_QWORD *)(v26 + 19336),
          3,
          1,
          19,
          (__int64)&WPP_a0eaa2991d4235df0a99e7079b39413e_Traceguids,
          v1);
      }
      v1 = 0;
    }
    v21 = (_QWORD *)*v21;
    ObfDereferenceObject(v22);
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v29 = 0;
  }
  v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v31 = W32GetUserSessionState(WPP_GLOBAL_Control, v20);
    LOBYTE(v32) = v30;
    LOBYTE(v33) = v29;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v33,
      v32,
      *(_QWORD *)(v31 + 19336),
      4,
      1,
      20,
      (__int64)&WPP_a0eaa2991d4235df0a99e7079b39413e_Traceguids,
      v1);
  }
  return (unsigned int)v1;
}
