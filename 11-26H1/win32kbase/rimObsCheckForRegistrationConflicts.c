/*
 * XREFs of rimObsCheckForRegistrationConflicts @ 0x14020DE84
 * Callers:
 *     rimObsAddInputObserver @ 0x14020E44C (rimObsAddInputObserver.c)
 *     rimObsUpdateInputObserverRegistration @ 0x14021076C (rimObsUpdateInputObserverRegistration.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x140071C0C (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimObsIsObserverTarget_0 @ 0x14020E18C (rimObsIsObserverTarget_0.c)
 *     WPP_RECORDER_AND_TRACE_SF_ss @ 0x14020E2CC (WPP_RECORDER_AND_TRACE_SF_ss.c)
 */

char __fastcall rimObsCheckForRegistrationConflicts(char a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  char v4; // bp
  __int64 v9; // rbx
  int v10; // r14d
  int v11; // edx
  char v12; // cl
  int v13; // r8d
  int v14; // edx
  char v15; // cl
  _QWORD *i; // rdi
  int v17; // r8d
  _QWORD *v18; // r13
  const char *v19; // rax
  char v20; // r14
  char v21; // al
  int v22; // edx
  char v23; // cl
  int v24; // r8d
  __int64 UserSessionState; // rax
  bool v26; // di
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  __int64 v30; // r9
  const char *v31; // rax
  char v32; // di
  bool v33; // si
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  int v38; // [rsp+20h] [rbp-88h]
  int v39; // [rsp+28h] [rbp-80h]
  int v40; // [rsp+30h] [rbp-78h]
  int v41; // [rsp+38h] [rbp-70h]
  char v42; // [rsp+60h] [rbp-48h]
  __int64 v43; // [rsp+68h] [rbp-40h]
  int v44; // [rsp+B0h] [rbp+8h]
  char v45; // [rsp+B8h] [rbp+10h]

  v4 = 0;
  if ( a2 > 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 687);
  v9 = W32GetUserSessionState(a1, a2, a3) + 56;
  RIMLockExclusive(v9);
  v10 = a1 & 2;
  v44 = v10;
  for ( i = *(_QWORD **)(W32GetUserSessionState(v12, v11, v13) + 152);
        i != (_QWORD *)(W32GetUserSessionState(v15, v14, v17) + 152);
        i = (_QWORD *)*i )
  {
    v18 = i - 2;
    if ( v10 )
    {
      if ( (unsigned int)rimObsIsObserverTarget_0(i - 2, a2, a3, a4) )
      {
        v19 = "existing observer exists";
        goto LABEL_12;
      }
    }
    else if ( (v18[15] & 2) != 0 && (unsigned int)rimObsIsObserverTarget_0(i - 2, a2, a3, a4) )
    {
      v19 = "existing exclusive observer exists";
LABEL_12:
      v43 = (__int64)v19;
      v20 = 1;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v21 = 0;
      }
      v45 = v21;
      v42 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        PsGetProcessId((PEPROCESS)v18[4]);
        PsGetThreadId((PETHREAD)v18[5]);
        UserSessionState = W32GetUserSessionState(v23, v22, v24);
        WPP_RECORDER_AND_TRACE_SF_qdd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v45,
          v42,
          *(_QWORD *)(UserSessionState + 69136),
          3u,
          1u,
          0x24u,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
      }
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
      {
        v20 = 0;
      }
      v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = W32GetUserSessionState((_BYTE)WPP_GLOBAL_Control, v14, v17);
        LOBYTE(v28) = v26;
        LOBYTE(v29) = v20;
        v30 = *(_QWORD *)(v27 + 69136);
        v31 = "exclusive";
        if ( !v44 )
          v31 = "shared";
        WPP_RECORDER_AND_TRACE_SF_ss(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v29,
          v28,
          v30,
          v38,
          v39,
          v40,
          v41,
          (__int64)v31,
          v43);
      }
      goto LABEL_36;
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v32 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v32 = 0;
  }
  v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v34 = W32GetUserSessionState((_BYTE)WPP_GLOBAL_Control, v14, v17);
    LOBYTE(v35) = v33;
    LOBYTE(v36) = v32;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v36,
      v35,
      *(_QWORD *)(v34 + 69136),
      4,
      1,
      38,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
  }
  v4 = 1;
LABEL_36:
  RIMUnlockExclusive(v9);
  return v4;
}
