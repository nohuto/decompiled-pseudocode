/*
 * XREFs of _RegisterLogonProcess @ 0x1401D98D0
 * Callers:
 *     NtUserRegisterLogonProcess @ 0x1401845C0 (NtUserRegisterLogonProcess.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     ImSessionStart @ 0x1400BDFF8 (ImSessionStart.c)
 *     Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck @ 0x1400BE794 (Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck.c)
 *     IVStartupWorkerThread @ 0x1401177AC (IVStartupWorkerThread.c)
 *     IsCurrentSessionServiceSession @ 0x140165ED8 (IsCurrentSessionServiceSession.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x140198440 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14019C1D0 (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline @ 0x1401A31F8 (Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401B6974 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     Win32ProcessFromPID @ 0x1401C38F8 (Win32ProcessFromPID.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x1401C5030 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     HasPrivilege @ 0x1401D4E00 (HasPrivilege.c)
 *     IsPrivileged @ 0x1401D4EB0 (IsPrivileged.c)
 *     WmsgpConnect @ 0x1402D27AC (WmsgpConnect.c)
 */

_BOOL8 __fastcall RegisterLogonProcess(int a1, __int64 a2, int a3)
{
  __int64 v4; // rsi
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  HANDLE v8; // rbx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // ecx
  __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // edx
  __int64 v19; // rcx
  int v20; // r8d
  __int64 UserGdiSessionState; // rax
  int v22; // ebx
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  __int64 UserSessionState; // rax
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  __int64 v37; // rax
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  struct _EX_RUNDOWN_REF *v44; // rax
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  struct _EX_RUNDOWN_REF *v48; // rax
  int v49; // edx
  int v50; // ecx
  int v51; // r8d
  __int64 v52; // rbx
  __int64 v53; // rcx
  unsigned int CurrentWin32kSessionId; // eax
  __int64 v55; // rcx
  int v56; // edx
  int v57; // ecx
  int v58; // r8d
  __int64 v59; // rax
  int v60; // edx
  int v61; // ecx
  int v62; // r8d
  __int64 v63; // r9
  __int64 v64; // rdx
  unsigned __int64 ProcessInfo; // rax
  _BYTE v66[8]; // [rsp+30h] [rbp-68h] BYREF
  int v67; // [rsp+38h] [rbp-60h]

  v4 = a1;
  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 63536) )
  {
    if ( (unsigned int)Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !HasPrivilege(7) )
      {
LABEL_14:
        v12 = 5;
        goto LABEL_15;
      }
    }
    else
    {
      UserSessionState = W32GetUserSessionState(v24, v23, v25);
      if ( !(unsigned int)IsPrivileged((PPRIVILEGE_SET)(UserSessionState + 42568)) )
        goto LABEL_14;
    }
    if ( (int)IVStartupWorkerThread() < 0 )
      return 0LL;
    v13 = v4;
    *(_QWORD *)(W32GetUserSessionState(v29, v28, v30) + 63536) = v4;
    *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v32, v31, v33) + 19904) + 2268LL) = v4;
    if ( !(unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
    {
      v37 = Win32ProcessFromPID((void *)v4);
      *(_DWORD *)(v37 + 276) |= 0xC0u;
    }
    if ( *(_DWORD *)(W32GetUserSessionState(v35, v34, v36) + 69128) )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 156);
      v44 = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState(v42, v41, v43);
      ExReInitializeRundownProtection(v44 + 8640);
    }
    else
    {
      v48 = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState(v39, v38, v40);
      ExInitializeRundownProtection(v48 + 8640);
    }
    *(_DWORD *)(W32GetUserSessionState(v46, v45, v47) + 69128) = 0;
    v52 = W32GetUserSessionState(v50, v49, v51) + 69112;
    CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v53);
    v22 = WmsgpConnect(a2, CurrentWin32kSessionId, v52);
    goto LABEL_25;
  }
  v8 = *(HANDLE *)(W32GetUserSessionState(v6, v5, v7) + 63536);
  if ( PsGetCurrentProcessId() != v8 )
  {
    v12 = 0x2000000;
LABEL_15:
    UserSetLastError(v12);
    return 0LL;
  }
  v13 = v4;
  *(_QWORD *)(W32GetUserSessionState(v10, v9, v11) + 63544) = v4;
  if ( !(unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
  {
    v14 = Win32ProcessFromPID((void *)v4);
    if ( v14 )
      *(_DWORD *)(v14 + 276) |= 0xC0u;
  }
  Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck();
  if ( *(_DWORD *)(W32GetUserSessionState(v16, v15, v17) + 42600)
    || (unsigned int)IsCurrentSessionServiceSession(v19)
    || (UserGdiSessionState = W32GetUserGdiSessionState(v19),
        v22 = ImSessionStart(*(PVOID *)(UserGdiSessionState + 40)),
        v22 < 0) )
  {
    v22 = 0;
  }
  else
  {
    *(_DWORD *)(W32GetUserSessionState(v19, v18, v20) + 42600) = 1;
  }
LABEL_25:
  if ( *(_QWORD *)(W32GetUserSessionState(v19, v18, v20) + 36424) && *(_QWORD *)(W32GetUserGdiSessionState(v55) + 40) )
  {
    v59 = W32GetUserSessionState(v57, v56, v58);
    ZwClose(*(HANDLE *)(v59 + 36424));
    *(_QWORD *)(W32GetUserSessionState(v61, v60, v62) + 36424) = 0LL;
  }
  if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() && v22 >= 0 )
  {
    CLockProcessByPid::CLockProcessByPid((__int64)v66, v13, 512, v63, 5, 0LL);
    v22 = v67;
    if ( v67 >= 0 )
    {
      ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v66);
      *(_DWORD *)(ProcessInfo + 276) |= 0xC0u;
    }
    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v66, v64);
  }
  return v22 >= 0;
}
