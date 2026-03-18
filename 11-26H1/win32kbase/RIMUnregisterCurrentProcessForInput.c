/*
 * XREFs of RIMUnregisterCurrentProcessForInput @ 0x14005B324
 * Callers:
 *     RIMOnProcessDestroy @ 0x140059910 (RIMOnProcessDestroy.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMUnregisterForInput @ 0x140129F90 (RIMUnregisterForInput.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMUnregisterCurrentProcessForInput(__int64 a1)
{
  NTSTATUS v1; // edi
  __int64 CurrentProcessWin32Process; // rax
  int v3; // r8d
  __int64 *v4; // rdx
  __int64 v5; // r15
  int v6; // ecx
  char v7; // bl
  bool v8; // si
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rax
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // edx
  _QWORD *v17; // rcx
  int v18; // r8d
  __int64 *i; // r14
  __int64 v20; // rax
  int v21; // edx
  int v22; // r8d
  _QWORD *v23; // rbx
  char v24; // bl
  bool v25; // si
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  _QWORD *v30; // rsi
  _QWORD *v31; // rax
  _QWORD *v32; // r15
  int v33; // edx
  int v34; // r8d
  char v35; // si
  bool v36; // r14
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  _QWORD *v40; // [rsp+50h] [rbp-10h] BYREF
  _QWORD **v41; // [rsp+58h] [rbp-8h]

  v1 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v4 = (__int64 *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v4 = (__int64 *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  v5 = *v4;
  v6 = (int)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v4, v3);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      18,
      (__int64)&WPP_a0eaa2991d4235df0a99e7079b39413e_Traceguids);
  }
  v41 = &v40;
  v40 = &v40;
  v12 = W32GetUserSessionState(v6, (_DWORD)v4, v3);
  RIMLockExclusive(v12 + 56);
  for ( i = *(__int64 **)(W32GetUserSessionState(v14, v13, v15) + 120);
        i != (__int64 *)(W32GetUserSessionState((_DWORD)v17, v16, v18) + 120);
        i = (__int64 *)*i )
  {
    if ( !*((_BYTE *)i + 64) && !*((_BYTE *)i + 65) && i[2] == v5 )
    {
      v30 = i + 99;
      if ( (__int64 *)i[100] != i + 99 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1252LL);
      if ( (_QWORD *)*v30 != v30 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1253LL);
      v1 = ObReferenceObjectByPointer(i - 2, 3u, ExRawInputManagerObjectType, 0);
      if ( v1 < 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1259LL);
      v31 = v41;
      if ( *v41 != &v40 )
        __fastfail(3u);
      i[100] = (__int64)v41;
      v17 = &v40;
      *v30 = &v40;
      *v31 = v30;
      v41 = (_QWORD **)(i + 99);
    }
  }
  v20 = W32GetUserSessionState((_DWORD)v17, v16, v18);
  RIMUnlockExclusive(v20 + 56);
  v23 = v40;
  while ( v23 != &v40 )
  {
    v32 = v23 - 101;
    v1 = RIMUnregisterForInput(*(v23 - 92));
    if ( v1 < 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v35 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v35 = 0;
      }
      v36 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v37 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v33, v34);
        LOBYTE(v38) = v36;
        LOBYTE(v39) = v35;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v39,
          v38,
          *(_QWORD *)(v37 + 19368),
          3,
          1,
          19,
          (__int64)&WPP_a0eaa2991d4235df0a99e7079b39413e_Traceguids,
          v1);
      }
      v1 = 0;
    }
    v23 = (_QWORD *)*v23;
    ObfDereferenceObject(v32);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v24 = 0;
  }
  v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v26 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v21, v22);
    LOBYTE(v27) = v25;
    LOBYTE(v28) = v24;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v28,
      v27,
      *(_QWORD *)(v26 + 19368),
      4,
      1,
      20,
      (__int64)&WPP_a0eaa2991d4235df0a99e7079b39413e_Traceguids,
      v1);
  }
  return (unsigned int)v1;
}
