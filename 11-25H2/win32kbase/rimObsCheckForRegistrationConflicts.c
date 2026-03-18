/*
 * XREFs of rimObsCheckForRegistrationConflicts @ 0x1401F2310
 * Callers:
 *     rimObsAddInputObserver @ 0x1401F296C (rimObsAddInputObserver.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1401F4CF0 (rimObsUpdateInputObserverRegistration.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x1400D51D8 (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimObsIsObserverTarget @ 0x1401F261C (rimObsIsObserverTarget.c)
 *     WPP_RECORDER_AND_TRACE_SF_ss @ 0x1401F27F0 (WPP_RECORDER_AND_TRACE_SF_ss.c)
 */

char __fastcall rimObsCheckForRegistrationConflicts(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  char v4; // bp
  unsigned int v7; // esi
  char v8; // r14
  __int64 UserSessionState; // rbx
  int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *i; // rdi
  _QWORD *v16; // r13
  const char *v17; // rax
  char v18; // di
  bool v19; // si
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  char v24; // r14
  char v25; // al
  char ProcessId; // si
  char ThreadId; // di
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  bool v33; // di
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  __int64 v37; // r9
  const char *v38; // rax
  int v39; // [rsp+20h] [rbp-88h]
  int v40; // [rsp+28h] [rbp-80h]
  int v41; // [rsp+30h] [rbp-78h]
  int v42; // [rsp+38h] [rbp-70h]
  bool v43; // [rsp+60h] [rbp-48h]
  __int64 v44; // [rsp+68h] [rbp-40h]
  int v45; // [rsp+B0h] [rbp+8h]
  char v46; // [rsp+B8h] [rbp+10h]

  v4 = 0;
  v7 = a2;
  v8 = a1;
  if ( (unsigned int)a2 > 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 687);
  UserSessionState = W32GetUserSessionState(a1, a2);
  RIMLockExclusive(UserSessionState + 56);
  v10 = v8 & 2;
  v45 = v10;
  for ( i = *(_QWORD **)(W32GetUserSessionState(v12, v11) + 152); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(W32GetUserSessionState(v14, v13) + 152) )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v18 = 0;
      }
      v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
        LOBYTE(v21) = v19;
        LOBYTE(v22) = v18;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v22,
          v21,
          *(_QWORD *)(v20 + 69144),
          4,
          1,
          38,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
      }
      v4 = 1;
      goto LABEL_19;
    }
    v16 = i - 2;
    if ( !v10 )
      break;
    if ( (unsigned int)rimObsIsObserverTarget(i - 2, v7, a3, a4) )
    {
      v17 = "existing observer exists";
      goto LABEL_21;
    }
LABEL_9:
    ;
  }
  if ( (v16[15] & 2) == 0 || !(unsigned int)rimObsIsObserverTarget(i - 2, v7, a3, a4) )
    goto LABEL_9;
  v17 = "existing exclusive observer exists";
LABEL_21:
  v44 = (__int64)v17;
  v24 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
  {
    v25 = 0;
  }
  v46 = v25;
  v43 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    ProcessId = (unsigned __int8)PsGetProcessId((PEPROCESS)v16[4]);
    ThreadId = (unsigned __int8)PsGetThreadId((PETHREAD)v16[5]);
    v30 = W32GetUserSessionState(v29, v28);
    LOBYTE(v31) = v43;
    LOBYTE(v32) = v46;
    WPP_RECORDER_AND_TRACE_SF_qdd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v32,
      v31,
      *(_QWORD *)(v30 + 69144),
      3,
      1,
      36,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      (char)v16,
      ThreadId,
      ProcessId);
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
  {
    v24 = 0;
  }
  v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v34 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
    LOBYTE(v35) = v33;
    LOBYTE(v36) = v24;
    v37 = *(_QWORD *)(v34 + 69144);
    v38 = "exclusive";
    if ( !v45 )
      v38 = "shared";
    WPP_RECORDER_AND_TRACE_SF_ss(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v36,
      v35,
      v37,
      v39,
      v40,
      v41,
      v42,
      (__int64)v38,
      v44);
  }
LABEL_19:
  RIMUnlockExclusive(UserSessionState + 56);
  return v4;
}
