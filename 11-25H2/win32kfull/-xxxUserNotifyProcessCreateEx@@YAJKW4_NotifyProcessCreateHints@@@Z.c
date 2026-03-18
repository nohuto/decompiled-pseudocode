/*
 * XREFs of ?xxxUserNotifyProcessCreateEx@@YAJKW4_NotifyProcessCreateHints@@@Z @ 0x140289DC0
 * Callers:
 *     ?xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z @ 0x140289B08 (-xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x14018EA74 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z @ 0x14018F204 (-xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14023A1A0 (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x14027745C (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 */

__int64 __fastcall xxxUserNotifyProcessCreateEx(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  char v6; // di
  char v7; // bl
  bool v8; // bp
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // r8
  bool v14; // si
  char v15; // bl
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  int W32ProcessImpl; // ebx
  char v20; // si
  bool v21; // bp
  char CurrentWin32kSessionId; // bl
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  __int64 v28; // rcx
  bool v29; // si
  __int64 v30; // rax
  int v31; // edx
  int v32; // r8d
  unsigned __int64 ProcessInfo; // rax
  char v34; // bp
  bool v35; // r14
  char v36; // bl
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  __int64 v42; // rcx
  __int16 v44; // [rsp+30h] [rbp-98h]
  char v45; // [rsp+40h] [rbp-88h]
  char v46; // [rsp+48h] [rbp-80h]
  _BYTE v47[8]; // [rsp+50h] [rbp-78h] BYREF
  int v48; // [rsp+58h] [rbp-70h]
  __int64 v49; // [rsp+68h] [rbp-60h]

  v5 = (int)a1;
  v6 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
    || (v7 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v7 = 0;
  }
  v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, *(_QWORD *)&WPP_GLOBAL_Control);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      3,
      15,
      (__int64)&WPP_d0e2125136443b0a982403d5cb665113_Traceguids,
      v5);
  }
  CLockProcessByPid::CLockProcessByPid((__int64)v47, v5, 512, a4, (a2 & 0x10) == 0);
  v13 = v49;
  if ( !v49 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v6 = 0;
    }
    v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v15 = v48;
      v16 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v12);
      LOBYTE(v17) = v14;
      LOBYTE(v18) = v6;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v18,
        v17,
        *(_QWORD *)(v16 + 69160),
        3,
        3,
        16,
        (__int64)&WPP_d0e2125136443b0a982403d5cb665113_Traceguids,
        v5,
        v15);
    }
    W32ProcessImpl = v48;
    goto LABEL_53;
  }
  if ( (a2 & 0x10) != 0 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
      || (v20 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v20 = 0;
    }
    v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v20 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
      v25 = W32GetUserSessionState(v24, v23);
      LOBYTE(v26) = v21;
      LOBYTE(v27) = v20;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v27,
        v26,
        *(_QWORD *)(v25 + 69160),
        4,
        3,
        17,
        (__int64)&WPP_d0e2125136443b0a982403d5cb665113_Traceguids,
        v5,
        CurrentWin32kSessionId);
      v13 = v49;
    }
    if ( PsGetProcessWin32Process(v13) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 297);
    W32ProcessImpl = AllocateW32ProcessImpl(v49);
    if ( W32ProcessImpl >= 0 )
    {
      ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v47);
      *(_QWORD *)(ProcessInfo + 808) |= 0x10000000uLL;
      goto LABEL_53;
    }
    v12 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (v28 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v28 & 4) == 0)
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v6 = 0;
    }
    v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v30 = W32GetUserSessionState(v28, *(_QWORD *)&WPP_GLOBAL_Control);
      v46 = W32ProcessImpl;
      v45 = v5;
      v44 = 18;
LABEL_52:
      LOBYTE(v32) = v29;
      LOBYTE(v31) = v6;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v31,
        v32,
        *(_QWORD *)(v30 + 69160),
        3,
        3,
        v44,
        (__int64)&WPP_d0e2125136443b0a982403d5cb665113_Traceguids,
        v45,
        v46);
    }
  }
  else
  {
    if ( (a2 & 0x20) != 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
        || (v34 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v34 = 0;
      }
      v35 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v34 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v36 = W32GetCurrentWin32kSessionId();
        v39 = W32GetUserSessionState(v38, v37);
        LOBYTE(v40) = v35;
        LOBYTE(v41) = v34;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v41,
          v40,
          *(_QWORD *)(v39 + 69160),
          4,
          3,
          19,
          (__int64)&WPP_d0e2125136443b0a982403d5cb665113_Traceguids,
          v5,
          v36);
        v13 = v49;
      }
    }
    W32ProcessImpl = xxxSetProcessInitState(v13, (unsigned int)((a2 & 1) == 0) + 1);
    if ( W32ProcessImpl < 0 )
    {
      v12 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (v42 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v42 & 4) == 0)
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v6 = 0;
      }
      v29 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v30 = W32GetUserSessionState(v42, *(_QWORD *)&WPP_GLOBAL_Control);
        v46 = W32ProcessImpl;
        v45 = v5;
        v44 = 20;
        goto LABEL_52;
      }
    }
  }
LABEL_53:
  CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v47, v12);
  return (unsigned int)W32ProcessImpl;
}
