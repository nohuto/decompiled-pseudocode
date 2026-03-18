/*
 * XREFs of xxxConsoleControl @ 0x1401B62A0
 * Callers:
 *     NtUserConsoleControl @ 0x1401B6150 (NtUserConsoleControl.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400D8E2C (W32GetCurrentWin32kSessionId.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x14018E78C (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x14018EA74 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     LockThreadByClientId @ 0x1401E5378 (LockThreadByClientId.c)
 *     ProcessInfoFromPID @ 0x1401EE4B0 (ProcessInfoFromPID.c)
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1401F6248 (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14023A1A0 (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline @ 0x1402721A8 (Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x14027745C (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x14027A188 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall xxxConsoleControl(int a1, struct _CONSOLE_PROCESS_INFO *a2, int a3)
{
  unsigned int v5; // edi
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  struct tagPROCESSINFO *ProcessInfo; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  PEPROCESS ThreadProcess; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v25; // rcx
  struct tagPROCESSINFO *v26; // rdi
  __int64 v27; // rdx
  PETHREAD v28; // rcx
  char v29; // r15
  void *v30; // rcx
  NTSTATUS v31; // eax
  PETHREAD v32; // r13
  int ProcessSessionId; // ebx
  __int64 ProcessWin32Process; // rax
  __int64 v35; // rdx
  __int64 v36; // r14
  bool v37; // r12
  int v38; // ebx
  __int64 UserSessionState; // rax
  int v40; // r8d
  int v41; // edx
  bool v42; // r12
  int v43; // ebx
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  __int64 v47; // rax
  unsigned int v48; // eax
  _BYTE v50[80]; // [rsp+50h] [rbp-79h] BYREF
  _BYTE v51[128]; // [rsp+A0h] [rbp-29h] BYREF
  PETHREAD Thread; // [rsp+148h] [rbp+7Fh] BYREF

  v5 = 0;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v6 = a1 - 1;
  if ( !v6 )
  {
    if ( a3 != 8 )
      return (unsigned int)-1073741811;
    return (unsigned int)xxxUserNotifyConsoleApplication(a2, (__int64)a2);
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5533LL);
    v48 = -1073741637;
    if ( a3 != 24 )
      return (unsigned int)-1073741811;
    return v48;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( a3 == 24 )
    {
      xxxSetConsoleCaretInfo(a2);
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( a3 == 16 )
    {
      v47 = ValidateHwnd(*(_QWORD *)a2);
      if ( v47 )
      {
        *(_DWORD *)(*(_QWORD *)(v47 + 16) + 924LL) = *((_DWORD *)a2 + 2);
        return v5;
      }
    }
    return (unsigned int)-1073741811;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( a3 == 16 )
    {
      v29 = 1;
      v30 = *(void **)a2;
      Thread = 0LL;
      v31 = ObReferenceObjectByHandle(v30, 0x200u, (POBJECT_TYPE)PsProcessType, 1, (PVOID *)&Thread, 0LL);
      v32 = Thread;
      v5 = v31;
      if ( v31 < 0 )
        return v5;
      ProcessSessionId = PsGetProcessSessionIdEx(Thread);
      if ( ProcessSessionId == (unsigned int)W32GetCurrentWin32kSessionId() )
      {
        ProcessWin32Process = PsGetProcessWin32Process(v32);
        v36 = ProcessWin32Process;
        if ( ProcessWin32Process && *(_QWORD *)ProcessWin32Process )
        {
          if ( *((_DWORD *)a2 + 2) )
          {
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
              || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
            {
              v29 = 0;
            }
            v37 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v29 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v38 = *(_DWORD *)(ProcessWin32Process + 56);
              UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v35);
              LOBYTE(v40) = v37;
              LOBYTE(v41) = v29;
              WPP_RECORDER_AND_TRACE_SF_d(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v41,
                v40,
                *(_QWORD *)(UserSessionState + 69160),
                4,
                2,
                34,
                (__int64)&WPP_d0e2125136443b0a982403d5cb665113_Traceguids,
                v38);
            }
            *(_DWORD *)(v36 + 12) |= 0x4080000u;
          }
          else
          {
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
              || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
            {
              v29 = 0;
            }
            v42 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v29 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v43 = *(_DWORD *)(ProcessWin32Process + 56);
              v44 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v35);
              LOBYTE(v45) = v42;
              LOBYTE(v46) = v29;
              WPP_RECORDER_AND_TRACE_SF_d(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v46,
                v45,
                *(_QWORD *)(v44 + 69160),
                4,
                2,
                35,
                (__int64)&WPP_d0e2125136443b0a982403d5cb665113_Traceguids,
                v43);
            }
            *(_DWORD *)(v36 + 12) &= 0xFBF7FFFF;
          }
        }
        else
        {
          v5 = -1073741816;
        }
      }
      else
      {
        v5 = -1073741811;
      }
      v28 = v32;
      goto LABEL_35;
    }
    return (unsigned int)-1073741811;
  }
  if ( v10 != 1 )
    return (unsigned int)-1073741821;
  v5 = -1073741811;
  if ( a3 == 16 )
  {
    v5 = -1073741790;
    v11 = ValidateHwnd(*(_QWORD *)a2);
    v13 = v11;
    if ( v11 )
    {
      v14 = *(_QWORD *)(v11 + 40);
      if ( *(char *)(v14 + 19) >= 0 && (*(_BYTE *)(v14 + 18) & 4) == 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
        v17 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
        {
          v16 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
          v17 = v16 & CurrentProcessWin32Process;
        }
        if ( *(_QWORD *)(*(_QWORD *)(v13 + 16) + 464LL) == v17 )
        {
          if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline(v16) )
          {
            CLockProcessByPid::CLockProcessByPid(v50, *((int *)a2 + 2), 0LL);
            ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v50);
            CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v50, v19);
          }
          else
          {
            ProcessInfo = (struct tagPROCESSINFO *)ProcessInfoFromPID(*((unsigned int *)a2 + 2));
          }
          if ( ProcessInfo )
          {
            v20 = *((unsigned int *)a2 + 3);
            Thread = 0LL;
            if ( (int)LockThreadByClientId(v20, &Thread) >= 0 )
            {
              ThreadProcess = PsGetThreadProcess(Thread);
              if ( ThreadProcess && ThreadProcess == *(PEPROCESS *)ProcessInfo )
              {
                if ( (unsigned int)Feature_NTUserQoSSupportEx__private_IsEnabledDeviceUsageNoInline(v22) )
                {
                  if ( (*(_DWORD *)(v13 + 380) & 0x8000000) != 0 )
                  {
                    IsEnabledDeviceUsageNoInline = Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline(v23);
                    v25 = *(_QWORD *)(v13 + 40);
                    if ( IsEnabledDeviceUsageNoInline )
                    {
                      CLockProcessByPid::CLockProcessByPid(v51, *(int *)(v25 + 332), 0LL);
                      v26 = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v51);
                      CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v51, v27);
                    }
                    else
                    {
                      v26 = (struct tagPROCESSINFO *)ProcessInfoFromPID(*(unsigned int *)(v25 + 332));
                    }
                    if ( v26 )
                      tagWND::DwsUnlinkProcess(v13, v26, 1LL);
                  }
                  if ( *(struct tagPROCESSINFO **)(*(_QWORD *)(v13 + 16) + 464LL) != ProcessInfo
                    && IsTopLevelWindow(v13) )
                  {
                    tagWND::DwsLinkProcess(v13, ProcessInfo, 1LL);
                  }
                }
                v5 = 0;
                *(_DWORD *)(*(_QWORD *)(v13 + 40) + 328LL) = *((_DWORD *)a2 + 3);
                *(_DWORD *)(*(_QWORD *)(v13 + 40) + 332LL) = *((_DWORD *)a2 + 2);
              }
              v28 = Thread;
LABEL_35:
              ObfDereferenceObject(v28);
            }
          }
        }
      }
    }
  }
  return v5;
}
