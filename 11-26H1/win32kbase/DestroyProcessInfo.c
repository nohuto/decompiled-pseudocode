/*
 * XREFs of DestroyProcessInfo @ 0x1401CA2F4
 * Callers:
 *     ?UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z @ 0x1401D82B8 (-UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z.c)
 *     ?xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z @ 0x1401D885C (-xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z.c)
 *     xxxUserProcessCallout @ 0x1401D8EA0 (xxxUserProcessCallout.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400491B4 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1400494CC (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     RIMOnProcessDestroy @ 0x140059910 (RIMOnProcessDestroy.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140064480 (McTemplateK0_EtwWriteTransfer.c)
 *     SynchronizeContext @ 0x14008CFE0 (SynchronizeContext.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?OnProcessTermination@InputObjectMap@@SAXXZ @ 0x1400CFAA4 (-OnProcessTermination@InputObjectMap@@SAXXZ.c)
 *     CitProcessCallout @ 0x1400D55F0 (CitProcessCallout.c)
 *     ?TraceLoggingDCsInUseOnProcessExit@@YAXKKK@Z @ 0x1400F0E44 (-TraceLoggingDCsInUseOnProcessExit@@YAXKKK@Z.c)
 *     CloseProtectedHandle @ 0x14012A7A4 (CloseProtectedHandle.c)
 *     zzzCalcStartCursorHide @ 0x14015746C (zzzCalcStartCursorHide.c)
 *     IszzzCalcStartCursorHideSupported @ 0x14015CCE4 (IszzzCalcStartCursorHideSupported.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z @ 0x14015DE38 (--$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z.c)
 *     IsShellProcess @ 0x1401630B4 (IsShellProcess.c)
 *     ??0CWinEventNoopDeferral@@QEAA@XZ @ 0x140164A9C (--0CWinEventNoopDeferral@@QEAA@XZ.c)
 *     PostPlaySoundMessage @ 0x140166100 (PostPlaySoundMessage.c)
 *     GreCleanDCAndSetOwnerEx @ 0x140168CE0 (GreCleanDCAndSetOwnerEx.c)
 *     DelayedDestroyCacheDC @ 0x1401867E4 (DelayedDestroyCacheDC.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401B6974 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     ??1CWinEventNoopDeferral@@QEAA@XZ @ 0x1401C4B80 (--1CWinEventNoopDeferral@@QEAA@XZ.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x1401C5030 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1401C5EB0 (EtwTraceScreenSaverProcessEvent.c)
 *     ?DwsUnlinkAllWindows@tagPROCESSINFO@@QEAAXXZ @ 0x1401CC084 (-DwsUnlinkAllWindows@tagPROCESSINFO@@QEAAXXZ.c)
 *     ?OnProcessDestroyed@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401D3FB4 (-OnProcessDestroyed@ForegroundBoost@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     CleanupLogonProcess @ 0x1401D96E0 (CleanupLogonProcess.c)
 *     PostWinlogonMessage @ 0x1401D97F0 (PostWinlogonMessage.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1402027BC (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 *     CleanupIAMAccess @ 0x140248DA8 (CleanupIAMAccess.c)
 *     IsCleanupIAMAccessSupported @ 0x1402491D0 (IsCleanupIAMAccessSupported.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DestroyProcessInfo(ForegroundBoost *this, __int64 a2, int a3)
{
  int v4; // edx
  int v5; // r8d
  struct _KEVENT *v6; // rcx
  int v7; // edx
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  struct W32_PUSH_LOCK *v16; // rbx
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  __int64 i; // rcx
  __int64 j; // rax
  struct tagPROCESSINFO *v22; // rdx
  __int64 v23; // rcx
  void (__fastcall *v24)(ForegroundBoost *); // rax
  __int64 v25; // rcx
  int (*v26)(void); // rax
  void (__fastcall *v27)(ForegroundBoost *); // rax
  int (*v28)(void); // rax
  __int64 v29; // rcx
  void (__fastcall *v30)(ForegroundBoost *); // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  int (*v33)(void); // rax
  int v34; // edx
  __int64 v35; // rcx
  int v36; // r8d
  NTSTATUS ProcessExitStatus; // eax
  unsigned int v38; // ebx
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  __int64 UserSessionState; // rax
  __int64 v43; // r9
  __int64 v44; // rdx
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  __int64 k; // r14
  __int64 m; // rbx
  __int64 v50; // rax
  ForegroundBoost **n; // rcx
  ForegroundBoost *v52; // rax
  int v53; // eax
  unsigned int v54; // r14d
  int v55; // edx
  HANDLE ii; // rcx
  int v57; // r8d
  int (*v58)(void); // rax
  void (__fastcall *v59)(HANDLE *); // rax
  int v60; // edx
  __int64 v61; // rcx
  int v62; // r8d
  __int64 v63; // rdx
  __int64 v64; // r8
  int v65; // edx
  int v66; // ecx
  int v67; // r8d
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rbx
  int (*v71)(void); // rax
  void (*v72)(void); // rax
  int (*v73)(void); // rax
  __int64 v74; // rcx
  void (*v75)(void); // rax
  __int64 v76; // rdx
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  void *v80; // rcx
  char *v81; // rcx
  char *v82; // rbx
  int v83; // edx
  __int64 v84; // rcx
  int v85; // r8d
  int (*v86)(void); // rax
  void (__fastcall *v87)(ForegroundBoost *); // rax
  int v88; // edx
  int v89; // ecx
  int v90; // r8d
  int v91; // edx
  int v92; // ecx
  int v93; // r8d
  __int64 v94; // rdx
  __int64 v95; // rcx
  int v96; // r8d
  int v97; // edx
  int v98; // ecx
  int v99; // r8d
  int (*v100)(void); // rax
  void (__fastcall *v101)(__int64); // rax
  int v102; // edx
  int v103; // r8d
  int v104; // r9d
  unsigned int v105; // ecx
  __int64 v106; // rax
  __int64 v107; // rcx
  void (__fastcall *v108)(ForegroundBoost *); // rax
  int v109; // edx
  int v110; // r8d
  __int64 v111; // rcx
  _BYTE v113[8]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v114; // [rsp+48h] [rbp-21h]
  _BYTE v115[24]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v116; // [rsp+68h] [rbp-1h]
  HANDLE Handle; // [rsp+D0h] [rbp+67h] BYREF
  HANDLE v118; // [rsp+D8h] [rbp+6Fh] BYREF

  *((_QWORD *)this + 101) |= 0x20000000000uLL;
  CitProcessCallout((__int64)this, 0, a3);
  v6 = (struct _KEVENT *)*((_QWORD *)this + 2);
  if ( v6 == (struct _KEVENT *)-1LL )
    goto LABEL_4;
  if ( v6 )
  {
    KeSetEvent(v6, 1, 0);
    ObfDereferenceObject(*((PVOID *)this + 2));
LABEL_4:
    *((_QWORD *)this + 2) = 0LL;
  }
  v113[0] = 0;
  v114 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v113, v4, v5);
  CWinEventNoopDeferral::CWinEventNoopDeferral((CWinEventNoopDeferral *)&Handle, v7, v8);
  v12 = *((_DWORD *)this + 3);
  if ( (v12 & 4) != 0 )
  {
    *((_DWORD *)this + 3) = v12 & 0xFFFFFFFB;
    if ( (int)IszzzCalcStartCursorHideSupported(v10) >= 0 )
      zzzCalcStartCursorHide(0LL, 0);
  }
  CWinEventNoopDeferral::~CWinEventNoopDeferral((CWinEventNoopDeferral *)&Handle, v9, v11);
  v16 = (struct W32_PUSH_LOCK *)(W32GetUserSessionState(v14, v13, v15) + 66056);
  W32AcquirePushLockExclusiveEx(v16);
  for ( i = *(_QWORD *)(W32GetUserSessionState(v18, v17, v19) + 63512); i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
    {
      if ( *(ForegroundBoost **)(j + 256) == this )
        *(_QWORD *)(j + 256) = 0LL;
    }
  }
  W32ReleasePushLockExclusiveEx(v16);
  tagPROCESSINFO::DwsUnlinkAllWindows(this);
  ForegroundBoost::OnProcessDestroyed(this, v22);
  if ( *((_BYTE *)this + 1200) == 1 && (*((_DWORD *)this + 3) & 0x40) == 0 )
    goto LABEL_21;
  v24 = *(void (__fastcall **)(ForegroundBoost *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v23) + 48) + 4784LL);
  if ( v24 )
    v24(this);
  if ( *((_BYTE *)this + 1200) == 1 )
  {
LABEL_21:
    if ( v113[0] )
      --*(_DWORD *)(v114 + 28);
    PsUpdateComponentPower(*(_QWORD *)this, 6LL);
    if ( *((_QWORD *)this + 103) )
    {
      v25 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v25) + 48);
      v26 = *(int (**)(void))(v25 + 1688);
      if ( v26 )
      {
        if ( v26() >= 0 )
        {
          v25 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v25) + 48);
          v27 = *(void (__fastcall **)(ForegroundBoost *))(v25 + 1696);
          if ( v27 )
            v27(this);
        }
      }
    }
    if ( *((_QWORD *)this + 110) )
    {
      v28 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v25) + 48) + 1704LL);
      if ( v28 )
      {
        if ( v28() >= 0 )
        {
          v30 = *(void (__fastcall **)(ForegroundBoost *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v29) + 48) + 1712LL);
          if ( v30 )
            v30(this);
        }
      }
    }
    if ( *((_QWORD *)this + 111) != -1LL )
      RIMRemoveMouseOrKeyboardInjectionDevice();
    v31 = *((_QWORD *)this + 112);
    if ( v31 != -1 )
      RIMRemoveMouseOrKeyboardInjectionDevice();
    if ( (*((_DWORD *)this + 3) & 0x40001) == 0x40000 )
    {
      v32 = *((_QWORD *)this + 82);
      if ( !v32 || (*(_DWORD *)(v32 + 32) & 2) == 0 )
      {
        v33 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v31) + 48) + 1720LL);
        if ( v33 )
        {
          if ( v33() >= 0 )
            PostPlaySoundMessage(8LL);
        }
      }
    }
    if ( (unsigned int)IsShellProcess((__int64)this) )
    {
      v35 = *(_QWORD *)(W32GetUserSessionState(v35, v34, v36) + 62832);
      if ( *((_QWORD *)this + 43) == v35 )
      {
        if ( (int)IsCleanupIAMAccessSupported() >= 0 )
          CleanupIAMAccess(*((_QWORD *)this + 43));
        LODWORD(v35) = *(_DWORD *)(*((_QWORD *)this + 82) + 32LL);
        if ( (v35 & 2) == 0 )
        {
          ProcessExitStatus = PsGetProcessExitStatus(*(PEPROCESS *)this);
          if ( ProcessExitStatus != 1 && ProcessExitStatus != 255 )
          {
            v118 = 0LL;
            Handle = 0LL;
            v38 = 0;
            if ( ObOpenObjectByPointer(*(PVOID *)this, 0x200u, 0LL, 0x100000u, (POBJECT_TYPE)PsProcessType, 0, &Handle) >= 0 )
            {
              UserSessionState = W32GetUserSessionState(v40, v39, v41);
              CLockProcessByPid::CLockProcessByPid((__int64)v115, *(_QWORD *)(UserSessionState + 63536), 0, v43, 1, 0LL);
              if ( v116 && (int)ObDuplicateObject(*(_QWORD *)this, Handle, v116, &v118, 0x100000, 0, 2, 0) >= 0 )
                v38 = (unsigned int)v118;
              ZwClose(Handle);
              CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v115, v44);
            }
            if ( (int)PostWinlogonMessage(1025LL, v38) < 0 && v38 )
              ObCloseHandle(v118, 1);
          }
        }
      }
    }
    for ( k = *(_QWORD *)(W32GetUserSessionState(v35, v34, v36) + 63512); k; k = *(_QWORD *)(k + 8) )
    {
      for ( m = *(_QWORD *)(k + 16); m; m = *(_QWORD *)(m + 32) )
      {
        v50 = *(_QWORD *)(m + 8);
        if ( *(ForegroundBoost **)(v50 + 176) == this )
        {
          *(_QWORD *)(v50 + 176) = 0LL;
          if ( m == *(_QWORD *)(W32GetUserSessionState(v46, v45, v47) + 19176) )
            SynchronizeContext(v46, v45, v47);
        }
      }
    }
    for ( n = (ForegroundBoost **)(W32GetUserSessionState(v46, v45, v47) + 36400);
          ;
          n = (ForegroundBoost **)((char *)v52 + 368) )
    {
      v52 = *n;
      if ( !*n )
        break;
      if ( v52 == this )
      {
        *n = (ForegroundBoost *)*((_QWORD *)this + 46);
        break;
      }
    }
    v53 = *((_DWORD *)this + 3);
    v54 = v53 & 0x4000;
    if ( (v53 & 0x4000) != 0 && (v53 & 0x200) != 0 )
      DelayedDestroyCacheDC(1LL);
    ii = *(HANDLE *)(W32GetWin32kBaseApiSetTable(n) + 48);
    v58 = (int (*)(void))*((_QWORD *)ii + 217);
    if ( v58 && v58() >= 0 )
    {
      Handle = 0LL;
      v59 = *(void (__fastcall **)(HANDLE *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(ii) + 48) + 1744LL);
      if ( v59 )
        v59(&Handle);
      for ( ii = Handle; ii; ii = *(HANDLE *)ii )
      {
        if ( *((_DWORD *)ii + 5) == *((_DWORD *)this + 14) )
          *((_DWORD *)ii + 5) = 0;
      }
    }
    if ( *(ForegroundBoost **)(W32GetUserSessionState((_DWORD)ii, v55, v57) + 62816) == this )
    {
      *(_QWORD *)(W32GetUserSessionState(v61, v60, v62) + 62816) = 0LL;
      EtwTraceScreenSaverProcessEvent(2LL, v63, v64);
    }
    InputObjectMap::OnProcessTermination(v61);
    v70 = W32GetUserSessionState(v66, v65, v67);
    if ( *(ForegroundBoost **)(v70 + 64200) == this )
    {
      v69 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v69) + 48);
      v71 = *(int (**)(void))(v69 + 1752);
      if ( v71 )
      {
        if ( v71() >= 0 )
        {
          v69 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v69) + 48);
          v72 = *(void (**)(void))(v69 + 1760);
          if ( v72 )
            v72();
        }
      }
    }
    if ( *(ForegroundBoost **)(v70 + 64176) == this )
    {
      v73 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v69) + 48) + 1768LL);
      if ( v73 )
      {
        if ( v73() >= 0 )
        {
          v75 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v74) + 48) + 1776LL);
          if ( v75 )
            v75();
        }
      }
    }
    DeferrableUnlockObjectAssignment<tagWINDOWSTATION>((_QWORD *)this + 82, v68);
    DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD *)this + 43, v76);
    v80 = (void *)*((_QWORD *)this + 48);
    if ( v80 )
    {
      CloseProtectedHandle(v80);
      *((_QWORD *)this + 48) = 0LL;
    }
    *((_DWORD *)this + 3) |= 0x1000u;
    v81 = (char *)*((_QWORD *)this + 86);
    if ( v81 )
    {
      do
      {
        v82 = *(char **)v81;
        GreDeleteFastMutex(v81, v77, v78, v79);
        v81 = v82;
      }
      while ( v82 );
    }
    *((_QWORD *)this + 86) = 0LL;
    v84 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v81) + 48);
    v86 = *(int (**)(void))(v84 + 1784);
    if ( v86 )
    {
      if ( v86() >= 0 )
      {
        v84 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v84) + 48);
        v87 = *(void (__fastcall **)(ForegroundBoost *))(v84 + 1792);
        if ( v87 )
          v87(this);
      }
    }
    if ( this == *(ForegroundBoost **)(W32GetUserSessionState(v84, v83, v85) + 18880) )
      *(_QWORD *)(W32GetUserSessionState(v89, v88, v90) + 18880) = 0LL;
    if ( this == *(ForegroundBoost **)(W32GetUserSessionState(v89, v88, v90) + 18888) )
      *(_QWORD *)(W32GetUserSessionState(v92, v91, v93) + 18888) = 0LL;
    v95 = *(_QWORD *)(W32GetUserSessionState(v92, v91, v93) + 63544);
    if ( *((_DWORD *)this + 14) == v95 )
    {
      *(_QWORD *)(W32GetUserSessionState(v95, v94, v96) + 63544) = 0LL;
      *(_DWORD *)(W32GetUserSessionState(v98, v97, v99) + 66084) = 0;
      if ( (*((_DWORD *)this + 202) & 0x80000) != 0 )
      {
        v95 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v95) + 48);
        v100 = *(int (**)(void))(v95 + 1832);
        if ( v100 )
        {
          if ( v100() >= 0 )
          {
            v94 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v95) + 48);
            v101 = *(void (__fastcall **)(__int64))(v94 + 1840);
            if ( v101 )
              v101(2LL);
            *((_QWORD *)this + 101) &= ~0x80000uLL;
          }
        }
      }
    }
    if ( *((_DWORD *)this + 14) == *(_QWORD *)(W32GetUserSessionState(v95, v94, v96) + 63536) )
      CleanupLogonProcess(0LL);
    v105 = *((_DWORD *)this + 271);
    if ( v105 || *((_DWORD *)this + 270) )
      TraceLoggingDCsInUseOnProcessExit(v105, *((_DWORD *)this + 270), *((_DWORD *)this + 14), v104);
    v106 = W32GetUserSessionState(v105, v102, v103);
    GreCleanDCAndSetOwnerEx(*(struct HOBJ__ **)(v106 + 66016), 0x80000012, 0, 1u);
    v108 = *(void (__fastcall **)(ForegroundBoost *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v107) + 48) + 3912LL);
    if ( v108 )
      v108(this);
    RIMOnProcessDestroy(*(_QWORD *)this, v109, v110);
    if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
      McTemplateK0_EtwWriteTransfer(v111, &CompleteGuiProcessExecution, &W32kControlGuid);
    return v54;
  }
  else
  {
    *((_DWORD *)this + 3) |= 0x1000u;
    if ( v113[0] )
      --*(_DWORD *)(v114 + 28);
    return 0LL;
  }
}
