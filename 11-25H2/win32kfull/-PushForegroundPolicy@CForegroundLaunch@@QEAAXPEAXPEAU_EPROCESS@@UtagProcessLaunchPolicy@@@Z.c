/*
 * XREFs of ?PushForegroundPolicy@CForegroundLaunch@@QEAAXPEAXPEAU_EPROCESS@@UtagProcessLaunchPolicy@@@Z @ 0x14028EEA0
 * Callers:
 *     EditionPushProcessLaunchForegroundPolicy @ 0x140214FE0 (EditionPushProcessLaunchForegroundPolicy.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_Ddd @ 0x14011AB60 (WPP_RECORDER_AND_TRACE_SF_Ddd.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140121A70 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140121C48 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?IsValid@CProcessAsPid@@QEBA_NXZ @ 0x140222764 (-IsValid@CProcessAsPid@@QEBA_NXZ.c)
 *     ?Store@CProcessAsPid@@QEAA_NPEAU_EPROCESS@@@Z @ 0x140247A58 (-Store@CProcessAsPid@@QEAA_NPEAU_EPROCESS@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CForegroundLaunch::PushForegroundPolicy(__int64 a1, char a2, struct _EPROCESS *a3, __int64 a4)
{
  char v4; // si
  int v5; // ebx
  __int64 v7; // rdx
  bool v8; // di
  bool v9; // bl
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  char v13; // di
  bool v14; // r15
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  unsigned int v18; // r15d
  __int64 v19; // rsi
  __int64 v20; // rdx
  bool v21; // bl
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  __int64 v25; // rdx
  char v26; // si
  bool v27; // r15
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  bool v31; // bl
  bool v32; // si
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  __int64 ProcessWin32Process; // rax
  BOOL v37; // [rsp+60h] [rbp-58h]
  int v41; // [rsp+DCh] [rbp+24h]

  v41 = HIDWORD(a4);
  v4 = 0;
  v5 = a4;
  if ( !(_DWORD)a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 256);
  if ( v5 == 4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 257);
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1, 0);
  if ( *(_BYTE *)(a1 + 440) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 262);
  if ( *(_BYTE *)(a1 + 416) )
  {
    v13 = 1;
    v37 = v41 == 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
    {
      v4 = 1;
    }
    v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v4;
      WPP_RECORDER_AND_TRACE_SF_Ddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v17,
        v16,
        *(_QWORD *)(UserSessionState + 69160),
        4,
        2,
        11,
        (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids,
        a2,
        v5,
        v41);
    }
    v18 = 0;
    v19 = a1 + 116;
    while ( CProcessAsPid::IsValid((CProcessAsPid *)(v19 - 20)) )
    {
      ++v18;
      v19 += 32LL;
      if ( v18 >= 0xA )
        goto LABEL_29;
    }
    if ( !CProcessAsPid::Store((CProcessAsPid *)(v19 - 20), a3) )
    {
      *(_QWORD *)(v19 - 20) = 0LL;
      *(_QWORD *)(v19 - 12) = 0LL;
      *(_QWORD *)(v19 - 4) = 0LL;
      *(_QWORD *)(v19 + 4) = 0LL;
LABEL_29:
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v13 = 0;
      }
      v21 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v22 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v20);
        LOBYTE(v23) = v21;
        LOBYTE(v24) = v13;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v24,
          v23,
          *(_QWORD *)(v22 + 69160),
          3,
          2,
          14,
          (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids,
          a2);
      }
      goto LABEL_55;
    }
    *(_DWORD *)v19 = v37;
    *(_DWORD *)(v19 - 4) = v5;
    *(_QWORD *)(v19 + 4) = PsGetProcessCreateTimeQuadPart(a3);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v26 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v26 = 0;
    }
    v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v26 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v28 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v25);
      LOBYTE(v29) = v27;
      LOBYTE(v30) = v26;
      WPP_RECORDER_AND_TRACE_SF_Ddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v30,
        v29,
        *(_QWORD *)(v28 + 69160),
        4,
        2,
        12,
        (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids,
        a2,
        v5,
        v41);
    }
    if ( v37 )
    {
      v31 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v31 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v33 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v25);
        LOBYTE(v34) = v32;
        LOBYTE(v35) = v31;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v35,
          v34,
          *(_QWORD *)(v33 + 69160),
          4,
          2,
          13,
          (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids,
          a2);
      }
      ProcessWin32Process = PsGetProcessWin32Process(a3);
      if ( ProcessWin32Process )
        ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
      ForegroundBoost::SetForegroundPriority(ProcessWin32Process, 1LL, 1LL);
    }
  }
  else
  {
    v8 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u;
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v10 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v7);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v12,
        v11,
        *(_QWORD *)(v10 + 69160),
        3,
        2,
        10,
        (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids);
    }
  }
LABEL_55:
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1, 0LL);
}
