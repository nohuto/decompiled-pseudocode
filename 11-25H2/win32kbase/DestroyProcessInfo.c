/*
 * XREFs of DestroyProcessInfo @ 0x140162224
 * Callers:
 *     xxxUserProcessCallout @ 0x14016B6A0 (xxxUserProcessCallout.c)
 *     ?UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z @ 0x1401B5D5C (-UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z.c)
 *     ?xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z @ 0x1401B62C0 (-xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x14003FE10 (McTemplateK0_EtwWriteTransfer.c)
 *     ?TraceLoggingDCsInUseOnProcessExit@@YAXKKK@Z @ 0x14007B740 (-TraceLoggingDCsInUseOnProcessExit@@YAXKKK@Z.c)
 *     CitProcessCallout @ 0x14007F1B4 (CitProcessCallout.c)
 *     ?OnProcessTermination@InputObjectMap@@SAXXZ @ 0x14009AFC8 (-OnProcessTermination@InputObjectMap@@SAXXZ.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400BAD54 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     CloseProtectedHandle @ 0x1400DE398 (CloseProtectedHandle.c)
 *     RIMOnProcessDestroy @ 0x14010F430 (RIMOnProcessDestroy.c)
 *     zzzCalcStartCursorHide @ 0x14011E43C (zzzCalcStartCursorHide.c)
 *     IszzzCalcStartCursorHideSupported @ 0x140122358 (IszzzCalcStartCursorHideSupported.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z @ 0x140124D70 (--$DeferrableUnlockObjectAssignment@UtagWINDOWSTATION@@@@YAXPEAPEAUtagWINDOWSTATION@@@Z.c)
 *     IsShellProcess @ 0x140129D90 (IsShellProcess.c)
 *     PostPlaySoundMessage @ 0x14012CBC4 (PostPlaySoundMessage.c)
 *     DelayedDestroyCacheDC @ 0x1401371E0 (DelayedDestroyCacheDC.c)
 *     SynchronizeContext @ 0x140146EF0 (SynchronizeContext.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x140161A8C (--1CLockProcessByPid@@QEAA@XZ.c)
 *     ??1CWinEventNoopDeferral@@QEAA@XZ @ 0x140161AC8 (--1CWinEventNoopDeferral@@QEAA@XZ.c)
 *     ?DwsUnlinkAllWindows@tagPROCESSINFO@@QEAAXXZ @ 0x140166E14 (-DwsUnlinkAllWindows@tagPROCESSINFO@@QEAAXXZ.c)
 *     CleanupLogonProcess @ 0x14016BCA0 (CleanupLogonProcess.c)
 *     PostWinlogonMessage @ 0x14016BE20 (PostWinlogonMessage.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A4F40 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A5DE4 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     ??0CWinEventNoopDeferral@@QEAA@XZ @ 0x1401A5FDC (--0CWinEventNoopDeferral@@QEAA@XZ.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1401B857C (EtwTraceScreenSaverProcessEvent.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1401C90C0 (GreCleanDCAndSetOwnerEx.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1401DC2CC (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 *     CleanupIAMAccess @ 0x14023E70C (CleanupIAMAccess.c)
 *     IsCleanupIAMAccessSupported @ 0x14023EE78 (IsCleanupIAMAccessSupported.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DestroyProcessInfo(tagPROCESSINFO *this)
{
  struct _KEVENT *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 i; // rcx
  __int64 j; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  void (__fastcall *v15)(tagPROCESSINFO *); // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int (*v19)(void); // rax
  void (__fastcall *v20)(tagPROCESSINFO *); // rax
  int (*v21)(void); // rax
  __int64 v22; // rcx
  void (__fastcall *v23)(tagPROCESSINFO *); // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  int (*v26)(void); // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  NTSTATUS ProcessExitStatus; // eax
  unsigned int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 k; // r14
  __int64 m; // rbx
  __int64 v39; // rax
  __int64 v40; // rdx
  tagPROCESSINFO **n; // rcx
  tagPROCESSINFO *v42; // rax
  int v43; // eax
  unsigned int v44; // r15d
  __int64 v45; // rdx
  _QWORD *ii; // rcx
  int (__fastcall *v47)(_QWORD *, __int64); // rax
  void (__fastcall *v48)(HANDLE *); // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rbx
  int (__fastcall *v56)(__int64, __int64); // rax
  void (__fastcall *v57)(__int64, __int64); // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  int (__fastcall *v60)(__int64, __int64); // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  void (__fastcall *v65)(__int64, __int64); // rax
  __int64 v66; // rdx
  void *v67; // rcx
  char *v68; // rcx
  char *v69; // rbx
  __int64 v70; // rdx
  __int64 v71; // rcx
  int (__fastcall *v72)(__int64, __int64); // rax
  void (__fastcall *v73)(tagPROCESSINFO *); // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rcx
  _DWORD *v78; // rbx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rcx
  int (__fastcall *v83)(__int64, __int64); // rax
  void (__fastcall *v84)(__int64); // rax
  __int64 v85; // rdx
  __int64 v86; // r9
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  void (__fastcall *v91)(tagPROCESSINFO *); // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  _BYTE v94[8]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v95; // [rsp+48h] [rbp-21h]
  _BYTE v96[24]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v97; // [rsp+68h] [rbp-1h]
  HANDLE Handle; // [rsp+D0h] [rbp+67h] BYREF
  HANDLE v99; // [rsp+D8h] [rbp+6Fh] BYREF

  CitProcessCallout((__int64)this, 0LL);
  v2 = (struct _KEVENT *)*((_QWORD *)this + 2);
  if ( v2 == (struct _KEVENT *)-1LL )
    goto LABEL_4;
  if ( v2 )
  {
    KeSetEvent(v2, 1, 0);
    ObfDereferenceObject(*((PVOID *)this + 2));
LABEL_4:
    *((_QWORD *)this + 2) = 0LL;
  }
  v94[0] = 0;
  v95 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v94);
  CWinEventNoopDeferral::CWinEventNoopDeferral((CWinEventNoopDeferral *)&Handle);
  v5 = *((_DWORD *)this + 3);
  if ( (v5 & 4) != 0 )
  {
    *((_DWORD *)this + 3) = v5 & 0xFFFFFFFB;
    if ( (int)IszzzCalcStartCursorHideSupported(v4, v3) >= 0 )
      zzzCalcStartCursorHide(0LL, 0LL);
  }
  CWinEventNoopDeferral::~CWinEventNoopDeferral((CWinEventNoopDeferral *)&Handle, v3);
  if ( v94[0] )
    --*(_DWORD *)(v95 + 28);
  UserSessionState = W32GetUserSessionState(v7, v6);
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserSessionState + 66064), 0);
  for ( i = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 63520); i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
    {
      if ( *(tagPROCESSINFO **)(j + 256) == this )
        *(_QWORD *)(j + 256) = 0LL;
    }
  }
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserSessionState + 66064), 0LL);
  tagPROCESSINFO::DwsUnlinkAllWindows(this);
  if ( *((_BYTE *)this + 1176) == 1 && (*((_DWORD *)this + 3) & 0x40) == 0 )
    goto LABEL_24;
  v15 = *(void (__fastcall **)(tagPROCESSINFO *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v14, v13) + 48) + 5224LL);
  if ( v15 )
    v15(this);
  if ( *((_BYTE *)this + 1176) == 1 )
  {
LABEL_24:
    PsUpdateComponentPower(*(_QWORD *)this, 6LL);
    if ( *((_QWORD *)this + 103) )
    {
      v18 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v18, v17) + 48);
      v19 = *(int (**)(void))(v18 + 1912);
      if ( v19 )
      {
        if ( v19() >= 0 )
        {
          v18 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v18, v17) + 48);
          v20 = *(void (__fastcall **)(tagPROCESSINFO *))(v18 + 1920);
          if ( v20 )
            v20(this);
        }
      }
    }
    if ( *((_QWORD *)this + 110) )
    {
      v21 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v18, v17) + 48) + 1928LL);
      if ( v21 )
      {
        if ( v21() >= 0 )
        {
          v23 = *(void (__fastcall **)(tagPROCESSINFO *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v22, v17) + 48)
                                                        + 1936LL);
          if ( v23 )
            v23(this);
        }
      }
    }
    if ( *((_QWORD *)this + 111) != -1LL )
      RIMRemoveMouseOrKeyboardInjectionDevice();
    v24 = *((_QWORD *)this + 112);
    if ( v24 != -1 )
      RIMRemoveMouseOrKeyboardInjectionDevice();
    if ( (*((_DWORD *)this + 3) & 0x40001) == 0x40000 )
    {
      v25 = *((_QWORD *)this + 81);
      if ( !v25 || (*(_DWORD *)(v25 + 64) & 2) == 0 )
      {
        v26 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v24, v17) + 48) + 1944LL);
        if ( v26 )
        {
          if ( v26() >= 0 )
            PostPlaySoundMessage(8LL, v27);
        }
      }
    }
    if ( (unsigned int)IsShellProcess((__int64)this) )
    {
      v29 = *(_QWORD *)(W32GetUserSessionState(v29, v28) + 62840);
      if ( *((_QWORD *)this + 42) == v29 )
      {
        if ( (int)IsCleanupIAMAccessSupported() >= 0 )
          CleanupIAMAccess(*((_QWORD *)this + 42));
        v29 = *(unsigned int *)(*((_QWORD *)this + 81) + 64LL);
        if ( (v29 & 2) == 0 )
        {
          ProcessExitStatus = PsGetProcessExitStatus(*(PEPROCESS *)this);
          if ( ProcessExitStatus != 1 && ProcessExitStatus != 255 )
          {
            v99 = 0LL;
            Handle = 0LL;
            v31 = 0;
            if ( ObOpenObjectByPointer(*(PVOID *)this, 0x200u, 0LL, 0x100000u, (POBJECT_TYPE)PsProcessType, 0, &Handle) >= 0 )
            {
              v34 = W32GetUserSessionState(v33, v32);
              CLockProcessByPid::CLockProcessByPid(v96, *(_QWORD *)(v34 + 63544), 0LL);
              if ( v97 && (int)ObDuplicateObject(*(_QWORD *)this, Handle, v97, &v99, 0x100000, 0, 2, 0) >= 0 )
                v31 = (unsigned int)v99;
              ZwClose(Handle);
              CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v96);
            }
            if ( (int)PostWinlogonMessage(1025LL, v31) < 0 && v31 )
              ObCloseHandle(v99, 1);
          }
        }
      }
    }
    for ( k = *(_QWORD *)(W32GetUserSessionState(v29, v28) + 63520); k; k = *(_QWORD *)(k + 8) )
    {
      for ( m = *(_QWORD *)(k + 16); m; m = *(_QWORD *)(m + 32) )
      {
        v39 = *(_QWORD *)(m + 8);
        if ( *(tagPROCESSINFO **)(v39 + 176) == this )
        {
          *(_QWORD *)(v39 + 176) = 0LL;
          if ( m == *(_QWORD *)(W32GetUserSessionState(v36, v35) + 19144) )
            SynchronizeContext(v36, v35);
        }
      }
    }
    for ( n = (tagPROCESSINFO **)(W32GetUserSessionState(v36, v35) + 36368); ; n = (tagPROCESSINFO **)((char *)v42 + 360) )
    {
      v42 = *n;
      if ( !*n )
        break;
      if ( v42 == this )
      {
        *n = (tagPROCESSINFO *)*((_QWORD *)this + 45);
        break;
      }
    }
    v43 = *((_DWORD *)this + 3);
    v44 = v43 & 0x4000;
    if ( (v43 & 0x4000) != 0 && (v43 & 0x200) != 0 )
      DelayedDestroyCacheDC(1LL, v40);
    ii = *(_QWORD **)(W32GetWin32kBaseApiSetTable(n, v40) + 48);
    v47 = (int (__fastcall *)(_QWORD *, __int64))ii[245];
    if ( v47 && v47(ii, v45) >= 0 )
    {
      Handle = 0LL;
      v48 = *(void (__fastcall **)(HANDLE *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(ii, v45) + 48) + 1968LL);
      if ( v48 )
        v48(&Handle);
      for ( ii = Handle; ii; ii = (_QWORD *)*ii )
      {
        if ( *((_DWORD *)ii + 5) == *((_DWORD *)this + 14) )
          *((_DWORD *)ii + 5) = 0;
      }
    }
    if ( *(tagPROCESSINFO **)(W32GetUserSessionState(ii, v45) + 62824) == this )
    {
      *(_QWORD *)(W32GetUserSessionState(v50, v49) + 62824) = 0LL;
      EtwTraceScreenSaverProcessEvent(2LL);
    }
    InputObjectMap::OnProcessTermination();
    v55 = W32GetUserSessionState(v52, v51);
    if ( *(tagPROCESSINFO **)(v55 + 64208) == this )
    {
      v54 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v54, v53) + 48);
      v56 = *(int (__fastcall **)(__int64, __int64))(v54 + 1976);
      if ( v56 )
      {
        if ( v56(v54, v53) >= 0 )
        {
          v54 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v54, v53) + 48);
          v57 = *(void (__fastcall **)(__int64, __int64))(v54 + 1984);
          if ( v57 )
            v57(v54, v53);
        }
      }
    }
    if ( *(tagPROCESSINFO **)(v55 + 64184) == this )
    {
      v59 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v54, v53) + 48);
      v60 = *(int (__fastcall **)(__int64, __int64))(v59 + 1992);
      if ( v60 )
      {
        if ( v60(v59, v58) >= 0 )
        {
          v64 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v62, v61) + 48);
          v65 = *(void (__fastcall **)(__int64, __int64))(v64 + 2000);
          if ( v65 )
            v65(v64, v63);
        }
      }
    }
    DeferrableUnlockObjectAssignment<tagWINDOWSTATION>((_QWORD **)this + 81);
    DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD **)this + 42);
    v67 = (void *)*((_QWORD *)this + 47);
    if ( v67 )
    {
      CloseProtectedHandle(v67);
      *((_QWORD *)this + 47) = 0LL;
    }
    *((_DWORD *)this + 3) |= 0x1000u;
    v68 = (char *)*((_QWORD *)this + 86);
    if ( v68 )
    {
      do
      {
        v69 = *(char **)v68;
        GreDeleteFastMutex(v68);
        v68 = v69;
      }
      while ( v69 );
    }
    *((_QWORD *)this + 86) = 0LL;
    v71 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v68, v66) + 48);
    v72 = *(int (__fastcall **)(__int64, __int64))(v71 + 2008);
    if ( v72 )
    {
      if ( v72(v71, v70) >= 0 )
      {
        v71 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v71, v70) + 48);
        v73 = *(void (__fastcall **)(tagPROCESSINFO *))(v71 + 2016);
        if ( v73 )
          v73(this);
      }
    }
    if ( this == *(tagPROCESSINFO **)(W32GetUserSessionState(v71, v70) + 18832) )
      *(_QWORD *)(W32GetUserSessionState(v75, v74) + 18832) = 0LL;
    if ( this == *(tagPROCESSINFO **)(W32GetUserSessionState(v75, v74) + 18840) )
      *(_QWORD *)(W32GetUserSessionState(v77, v76) + 18840) = 0LL;
    v78 = (_DWORD *)((char *)this + 56);
    v80 = *(_QWORD *)(W32GetUserSessionState(v77, v76) + 63552);
    if ( *((_DWORD *)this + 14) == v80 )
    {
      *(_QWORD *)(W32GetUserSessionState(v80, v79) + 63552) = 0LL;
      *(_DWORD *)(W32GetUserSessionState(v82, v81) + 66092) = 0;
      if ( (*((_DWORD *)this + 202) & 0x80000) != 0 )
      {
        v80 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v80, v79) + 48);
        v83 = *(int (__fastcall **)(__int64, __int64))(v80 + 2056);
        if ( v83 )
        {
          if ( v83(v80, v79) >= 0 )
          {
            v79 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v80, v79) + 48);
            v84 = *(void (__fastcall **)(__int64))(v79 + 2064);
            if ( v84 )
              v84(2LL);
            *((_QWORD *)this + 101) &= ~0x80000uLL;
            v78 = (_DWORD *)((char *)this + 56);
          }
        }
      }
    }
    if ( *v78 == *(_QWORD *)(W32GetUserSessionState(v80, v79) + 63544) )
      CleanupLogonProcess(0LL);
    v87 = *((unsigned int *)this + 271);
    if ( *((_QWORD *)this + 135) )
      TraceLoggingDCsInUseOnProcessExit(v87, *((_DWORD *)this + 270), (unsigned int)*v78, v86);
    v88 = W32GetUserSessionState(v87, v85);
    GreCleanDCAndSetOwnerEx(*(HDC *)(v88 + 66024));
    v91 = *(void (__fastcall **)(tagPROCESSINFO *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v90, v89) + 48) + 4360LL);
    if ( v91 )
      v91(this);
    RIMOnProcessDestroy(*(_QWORD *)this, v92);
    LOBYTE(v93) = BYTE1(Microsoft_Windows_Win32kEnableBits);
    if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
      McTemplateK0_EtwWriteTransfer(v93, &CompleteGuiProcessExecution, &W32kControlGuid);
    return v44;
  }
  else
  {
    *((_DWORD *)this + 3) |= 0x1000u;
    return 0LL;
  }
}
