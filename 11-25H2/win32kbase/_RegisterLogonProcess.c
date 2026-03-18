/*
 * XREFs of _RegisterLogonProcess @ 0x14016BF30
 * Callers:
 *     NtUserRegisterLogonProcess @ 0x140147CB0 (NtUserRegisterLogonProcess.c)
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     IsCurrentSessionServiceSession @ 0x140083918 (IsCurrentSessionServiceSession.c)
 *     IVStartupWorkerThread @ 0x1400CED18 (IVStartupWorkerThread.c)
 *     IsPrivileged @ 0x14012BD90 (IsPrivileged.c)
 *     Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck @ 0x140137664 (Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck.c)
 *     ImSessionStart @ 0x140138500 (ImSessionStart.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x140161A8C (--1CLockProcessByPid@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Win32ProcessFromPID @ 0x1401A0614 (Win32ProcessFromPID.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A5DE4 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x1401AA348 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline @ 0x1401AF438 (Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline.c)
 *     HasPrivilege @ 0x1401AF490 (HasPrivilege.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x1401B6B20 (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     Feature_Servicing_WinLogonRpcRaceConditionBSOD__private_IsEnabledDeviceUsageNoInline @ 0x1401B6B5C (Feature_Servicing_WinLogonRpcRaceConditionBSOD__private_IsEnabledDeviceUsageNoInline.c)
 *     WmsgpConnect @ 0x1402CA7F4 (WmsgpConnect.c)
 */

_BOOL8 __fastcall RegisterLogonProcess(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  HANDLE v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ecx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 UserGdiSessionState; // rax
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  char v21; // al
  __int64 UserSessionState; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct _EX_RUNDOWN_REF *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct _EX_RUNDOWN_REF *v37; // rax
  __int64 v38; // rbx
  unsigned int CurrentWin32kSessionId; // eax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  struct tagPROCESSINFO *ProcessInfo; // rax
  _BYTE v47[8]; // [rsp+30h] [rbp-58h] BYREF
  int v48; // [rsp+38h] [rbp-50h]

  v2 = a1;
  v4 = (int)a1;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 63544) )
  {
    v7 = *(HANDLE *)(W32GetUserSessionState(v6, v5) + 63544);
    if ( PsGetCurrentProcessId() != v7 )
    {
      v10 = 0x2000000;
LABEL_4:
      UserSetLastError(v10);
      return 0LL;
    }
    *(_QWORD *)(W32GetUserSessionState(v9, v8) + 63552) = v4;
    if ( !(unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
    {
      v12 = Win32ProcessFromPID(v4);
      if ( v12 )
        *(_DWORD *)(v12 + 276) |= 0xC0u;
    }
    Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck();
    if ( *(_DWORD *)(W32GetUserSessionState(v14, v13) + 42576)
      || (unsigned int)IsCurrentSessionServiceSession()
      || (UserGdiSessionState = W32GetUserGdiSessionState(v16),
          v18 = ImSessionStart(*(PVOID *)(UserGdiSessionState + 40)),
          v18 < 0) )
    {
      v18 = 0;
    }
    else
    {
      *(_DWORD *)(W32GetUserSessionState(v16, v15) + 42576) = 1;
    }
  }
  else
  {
    if ( (unsigned int)Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline() )
    {
      v21 = HasPrivilege(7LL);
    }
    else
    {
      UserSessionState = W32GetUserSessionState(v20, v19);
      v21 = (unsigned int)IsPrivileged((PPRIVILEGE_SET)(UserSessionState + 42544)) != 0;
    }
    if ( !v21 )
    {
      v10 = 5;
      goto LABEL_4;
    }
    if ( (int)IVStartupWorkerThread() < 0 )
      return 0LL;
    *(_QWORD *)(W32GetUserSessionState(v24, v23) + 63544) = v4;
    *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v26, v25) + 19872) + 2268LL) = v2;
    if ( !(unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
    {
      v27 = Win32ProcessFromPID(v4);
      *(_DWORD *)(v27 + 276) |= 0xC0u;
    }
    if ( (unsigned int)Feature_Servicing_WinLogonRpcRaceConditionBSOD__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( *(_DWORD *)(W32GetUserSessionState(v29, v28) + 69136) )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 159LL);
        v34 = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState(v33, v32);
        ExReInitializeRundownProtection(v34 + 8641);
      }
      else
      {
        v37 = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState(v31, v30);
        ExInitializeRundownProtection(v37 + 8641);
      }
      *(_DWORD *)(W32GetUserSessionState(v36, v35) + 69136) = 0;
    }
    v38 = W32GetUserSessionState(v29, v28);
    CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
    v18 = WmsgpConnect(a2, CurrentWin32kSessionId, v38 + 69120);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v16, v15) + 36384) && *(_QWORD *)(W32GetUserGdiSessionState(v40) + 40) )
  {
    v43 = W32GetUserSessionState(v42, v41);
    ZwClose(*(HANDLE *)(v43 + 36384));
    *(_QWORD *)(W32GetUserSessionState(v45, v44) + 36384) = 0LL;
  }
  if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() && v18 >= 0 )
  {
    CLockProcessByPid::CLockProcessByPid(v47, v4, 512LL);
    v18 = v48;
    if ( v48 >= 0 )
    {
      ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v47);
      *((_DWORD *)ProcessInfo + 69) |= 0xC0u;
    }
    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v47);
  }
  return v18 >= 0;
}
