/*
 * XREFs of ?xxxUserNotifyProcessCreate@@YAJKW4_NotifyProcessCreateHints@@@Z @ 0x140289B08
 * Callers:
 *     NtUserNotifyProcessCreate @ 0x14024B6E0 (NtUserNotifyProcessCreate.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x14018EA74 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z @ 0x14018F204 (-xxxSetProcessInitState@@YAJPEAU_EPROCESS@@W4PROCESS_INIT_HINT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x14027745C (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     ?xxxUserNotifyProcessCreateEx@@YAJKW4_NotifyProcessCreateHints@@@Z @ 0x140289DC0 (-xxxUserNotifyProcessCreateEx@@YAJKW4_NotifyProcessCreateHints@@@Z.c)
 *     Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline @ 0x14028A2D4 (Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall xxxUserNotifyProcessCreate(int a1, unsigned int a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdx
  __int64 v5; // r9
  char v7; // di
  char v8; // si
  bool v9; // r14
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rdx
  bool v14; // si
  char v15; // bl
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  unsigned int v19; // ebx
  int inited; // eax
  __int64 v21; // rcx
  char v22; // si
  bool v23; // bl
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  _BYTE v27[8]; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v28; // [rsp+58h] [rbp-60h]
  __int64 v29; // [rsp+68h] [rbp-50h]

  v2 = a1;
  if ( (a2 & 0xC) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 361);
  if ( (a2 & 3) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 365);
  if ( (unsigned int)Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline() )
    return xxxUserNotifyProcessCreateEx((unsigned int)v2, a2);
  v7 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
    || (v8 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v8 = 0;
  }
  v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v4);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v12,
      v11,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      3,
      21,
      (__int64)&WPP_d0e2125136443b0a982403d5cb665113_Traceguids,
      v2);
  }
  CLockProcessByPid::CLockProcessByPid((__int64)v27, v2, 0, v5, 1);
  if ( v29 )
  {
    inited = xxxSetProcessInitState(v29, (unsigned int)((a2 & 1) == 0) + 1);
    v22 = inited;
    if ( inited < 0 )
    {
      v13 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (v21 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v21 & 4) == 0)
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v7 = 0;
      }
      v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v24 = W32GetUserSessionState(v21, *(_QWORD *)&WPP_GLOBAL_Control);
        LOBYTE(v25) = v23;
        LOBYTE(v26) = v7;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v26,
          v25,
          *(_QWORD *)(v24 + 69160),
          3,
          3,
          23,
          (__int64)&WPP_d0e2125136443b0a982403d5cb665113_Traceguids,
          v2,
          v22);
      }
    }
    v19 = 0;
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v7 = 0;
    }
    v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v15 = v28;
      v16 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
      LOBYTE(v17) = v14;
      LOBYTE(v18) = v7;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v18,
        v17,
        *(_QWORD *)(v16 + 69160),
        3,
        3,
        22,
        (__int64)&WPP_d0e2125136443b0a982403d5cb665113_Traceguids,
        v2,
        v15);
    }
    v19 = v28;
  }
  CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v27, v13);
  return v19;
}
