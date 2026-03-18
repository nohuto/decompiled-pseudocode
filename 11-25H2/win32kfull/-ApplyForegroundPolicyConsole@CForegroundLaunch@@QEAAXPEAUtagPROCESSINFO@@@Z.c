/*
 * XREFs of ?ApplyForegroundPolicyConsole@CForegroundLaunch@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x14018ED6C
 * Callers:
 *     ?ApplyForegroundPolicyConsole@ForegroundLaunch@@YAXPEAU_EPROCESS@@@Z @ 0x14018ED0C (-ApplyForegroundPolicyConsole@ForegroundLaunch@@YAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140121A70 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140121C48 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_sDD @ 0x1401CAF9C (WPP_RECORDER_AND_TRACE_SF_sDD.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?_AppStarting_Set@CForegroundLaunch@@AEAAXPEAUtagPROCESSINFO@@@Z @ 0x14028F7C8 (-_AppStarting_Set@CForegroundLaunch@@AEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?_CheckAllowForeground@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z @ 0x1402904D0 (-_CheckAllowForeground@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z.c)
 */

void __fastcall CForegroundLaunch::ApplyForegroundPolicyConsole(CForegroundLaunch *this, struct tagPROCESSINFO *a2)
{
  struct W32_PUSH_LOCK *v3; // rbx
  char v4; // bp
  bool v5; // r14
  int v6; // ebx
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  char v10; // bp
  char v11; // r14
  int v12; // ebx
  __int64 v13; // rax
  int v14; // edx
  int v15; // r8d
  __int64 v16; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v18; // rdx
  struct tagPROCESSINFO *v19; // r14
  bool v20; // al
  __int64 v21; // rcx
  char v22; // al
  int v23; // ebx
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  __int64 v27; // rcx
  char v28; // bl
  __int64 v29; // rax
  int v30; // edx
  int v31; // r8d
  __int64 v32; // rax
  __int64 v33; // rcx
  bool v34; // al
  int v35; // ebx
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  bool v39; // r15
  int v40; // edi
  int v41; // esi
  int v42; // ebx
  __int64 v43; // rax
  int v44; // r8d
  int v45; // edx
  __int64 v46; // r9
  const char *v47; // rax
  int v48; // [rsp+20h] [rbp-78h]
  int v49; // [rsp+28h] [rbp-70h]
  int v50; // [rsp+30h] [rbp-68h]
  int v51; // [rsp+38h] [rbp-60h]
  bool v53; // [rsp+B0h] [rbp+18h]
  char v54; // [rsp+B0h] [rbp+18h]
  bool v55; // [rsp+B0h] [rbp+18h]
  bool v56; // [rsp+B0h] [rbp+18h]
  bool v57; // [rsp+B8h] [rbp+20h]
  bool v58; // [rsp+B8h] [rbp+20h]

  v3 = this;
  if ( *((_BYTE *)this + 440) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v4 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v4 = 0;
    }
    v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v6 = *((_DWORD *)a2 + 14);
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
      LOBYTE(v8) = v5;
      LOBYTE(v9) = v4;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v9,
        v8,
        *(_QWORD *)(UserSessionState + 69160),
        4,
        2,
        26,
        (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids,
        v6);
    }
  }
  else
  {
    v10 = 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v11 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v11 = 0;
    }
    v53 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v12 = *((_DWORD *)a2 + 14);
      v13 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
      LOBYTE(v14) = v11;
      LOBYTE(v15) = v53;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v14,
        v15,
        *(_QWORD *)(v13 + 69160),
        4,
        2,
        27,
        (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids,
        v12);
      v3 = this;
    }
    W32AcquirePushLockExclusiveEx(v3, 0);
    if ( (*((_DWORD *)a2 + 3) & 1) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 482LL);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
    v18 = 0LL;
    v19 = (struct tagPROCESSINFO *)CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v19 = (struct tagPROCESSINFO *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
      v18 = 0LL;
    }
    if ( (*((_DWORD *)a2 + 3) & 0x100) != 0 || (v20 = CForegroundLaunch::_CheckAllowForeground(v3, a2), v18 = 0LL, v20) )
    {
      if ( (*((_DWORD *)v19 + 3) & 0x40) == 0 )
      {
        CForegroundLaunch::_AppStarting_Set(v3, v19);
        v18 = 0LL;
      }
      *((_DWORD *)a2 + 3) |= 0x100u;
      v21 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || (v22 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v22 = 0;
      }
      v54 = v22;
      v57 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v22 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v23 = *((_DWORD *)a2 + 14);
        LOBYTE(v21) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        v24 = W32GetUserSessionState(v21, 0LL);
        LOBYTE(v25) = v57;
        LOBYTE(v26) = v54;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v26,
          v25,
          *(_QWORD *)(v24 + 69160),
          4,
          2,
          28,
          (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids,
          v23);
        v18 = 0LL;
      }
      v27 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
        || (v28 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v28 = 0;
      }
      v55 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v28 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v29 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        LOBYTE(v30) = v28;
        LOBYTE(v31) = v55;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v30,
          v31,
          *(_QWORD *)(v29 + 69160),
          4,
          2,
          29,
          (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids);
      }
      v32 = W32GetUserSessionState(v27, v18);
      *(_DWORD *)(v32 + 66800) |= 0x8000000u;
      *((_DWORD *)v19 + 3) |= 0x100u;
      v33 = *(_QWORD *)&WPP_GLOBAL_Control;
      v34 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v56 = v34;
      v58 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v34 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v35 = *((_DWORD *)v19 + 14);
        LOBYTE(v33) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        v36 = W32GetUserSessionState(v33, 0LL);
        LOBYTE(v37) = v58;
        LOBYTE(v38) = v56;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v38,
          v37,
          *(_QWORD *)(v36 + 69160),
          4,
          2,
          30,
          (__int64)&WPP_07fed4fced1f34af39f96e586dcec445_Traceguids,
          v35);
      }
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v10 = 0;
    }
    v39 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v40 = *((_DWORD *)a2 + 14);
      v41 = *((_DWORD *)v19 + 14);
      v42 = *((_DWORD *)v19 + 3);
      v43 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
      LOBYTE(v44) = v39;
      LOBYTE(v45) = v10;
      v46 = *(_QWORD *)(v43 + 69160);
      v47 = "set";
      if ( (v42 & 0x100) == 0 )
        v47 = "NOT set";
      WPP_RECORDER_AND_TRACE_SF_sDD(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v45,
        v44,
        v46,
        v48,
        v49,
        v50,
        v51,
        (__int64)v47,
        v41,
        v40);
    }
    W32ReleasePushLockExclusiveEx(this, 0LL);
  }
}
