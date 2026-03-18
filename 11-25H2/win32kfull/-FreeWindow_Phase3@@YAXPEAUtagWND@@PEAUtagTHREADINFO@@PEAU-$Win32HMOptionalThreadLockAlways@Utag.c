/*
 * XREFs of ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x1400593C8
 * Callers:
 *     ?xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140058924 (-xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU-$Win32HMOptionalThreadLockAlways@UtagWND@.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14002C0F0 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     ?UpdateWindowMonitorAndDpiInfoHelper@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1400341EC (-UpdateWindowMonitorAndDpiInfoHelper@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     GetClassPtr @ 0x140034BF0 (GetClassPtr.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1400446D8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     _DestroyMenu @ 0x140047890 (_DestroyMenu.c)
 *     DecPaintCount @ 0x14005332C (DecPaintCount.c)
 *     CleanupWindowRedirection @ 0x14005AA34 (CleanupWindowRedirection.c)
 *     ?ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ @ 0x14005BCE4 (-ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ.c)
 *     InternalRemoveProp @ 0x14005BEB0 (InternalRemoveProp.c)
 *     DwmAsyncOwnerChange @ 0x14005E124 (DwmAsyncOwnerChange.c)
 *     FindQMsg @ 0x140066A10 (FindQMsg.c)
 *     DereferenceClass @ 0x1400B2D10 (DereferenceClass.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1400DB054 (GreDeleteSpriteOverlapPresent.c)
 *     _GetProcessWindowStation @ 0x140111060 (_GetProcessWindowStation.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x140111628 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     ClearSendMessages @ 0x14012D548 (ClearSendMessages.c)
 *     FreeSpb @ 0x140156450 (FreeSpb.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x140187B78 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     DwmAsyncChildDestroy @ 0x140190358 (DwmAsyncChildDestroy.c)
 *     DestroyWindowsHotKeys @ 0x1401951F8 (DestroyWindowsHotKeys.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x1401A4314 (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     ResetWindowTransform @ 0x1401A5840 (ResetWindowTransform.c)
 *     ClearPwndDceLists @ 0x1401A6BC8 (ClearPwndDceLists.c)
 *     FreeClientOnWindowDestruction @ 0x1401ACD40 (FreeClientOnWindowDestruction.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAU_HEAD@@@Z @ 0x1401AF138 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     MagpDestroyLensContext @ 0x1401B80B8 (MagpDestroyLensContext.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1401C4E98 (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     _PostQuitMessage @ 0x1401C7DA0 (_PostQuitMessage.c)
 *     ?UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z @ 0x140231228 (-UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z.c)
 *     DestroyWindowsTimers @ 0x14024634C (DestroyWindowsTimers.c)
 *     ??$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAUtagPOPUPMENU@@@Z @ 0x140267238 (--$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstr.c)
 *     NullifyLookasideRef @ 0x140267260 (NullifyLookasideRef.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x140281C38 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x140285BFC (safe_cast_fnid_to_PMENUWND.c)
 *     _NotifyOverlayWindow @ 0x1402920A4 (_NotifyOverlayWindow.c)
 *     FindSpb @ 0x1402B0DE8 (FindSpb.c)
 *     Feature_QoSCleanupChildWindow__private_IsEnabledDeviceUsageNoInline @ 0x1402B6104 (Feature_QoSCleanupChildWindow__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_DefaultIMEFreeWindow__private_IsEnabledDeviceUsageNoInline @ 0x1402B6158 (Feature_Servicing_DefaultIMEFreeWindow__private_IsEnabledDeviceUsageNoInline.c)
 *     GreDeleteWnd @ 0x140302960 (GreDeleteWnd.c)
 */

void __fastcall FreeWindow_Phase3(struct tagWND *a1, __int64 a2, ULONG_PTR a3)
{
  ULONG_PTR v4; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  struct tagMLIST *v19; // rdx
  __int64 QMsg; // rax
  struct _HEAD *v21; // rbx
  struct _HEAD *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  struct EWNDOBJ *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 Spb; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rdx
  char v52; // r15
  bool v53; // r12
  __int64 v54; // rbx
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  void *v58; // r8
  __int64 v59; // rax
  struct tagWND *v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rcx
  void *v63; // rax
  __int64 v64; // rax
  __int64 ProcessWindowStation; // rax
  __int64 v66; // rbx
  __int64 v67; // rdx
  __int64 v68; // rcx
  _DWORD *v69; // rax
  _DWORD *v70; // rcx
  _DWORD *v71; // rax
  _DWORD *v72; // rcx
  __int64 v73; // rax
  __int64 v74; // r15
  __int64 v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // rbx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rax
  void *v84; // rcx
  int v85; // eax
  __int64 v86; // rdx
  __int64 v87; // rcx
  void *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rcx
  _QWORD *v92; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v94; // rax
  _QWORD *ClassPtr; // rax
  __int64 v96; // rcx
  __int128 v97; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v98[8]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v99; // [rsp+68h] [rbp-1h]
  _QWORD v100[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v101; // [rsp+80h] [rbp+17h]

  v98[0] = 0;
  v99 = 0LL;
  v4 = a3;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v98);
  HandleFullWindowDestruction(a1);
  if ( a1 == *(struct tagWND **)(W32GetUserSessionState(v7, v6) + 36256) )
  {
    UserSessionState = W32GetUserSessionState(v9, v8);
    HMAssignmentUnlock(UserSessionState + 36256);
  }
  if ( a1 == *(struct tagWND **)(W32GetUserSessionState(v9, v8) + 36264) )
  {
    v13 = W32GetUserSessionState(v12, v11);
    HMAssignmentUnlock(v13 + 36264);
  }
  v14 = W32GetUserSessionState(v12, v11);
  MagpDestroyLensContext(v14 + 66040, a2, a1);
  DestroyWindowsTimers(a1);
  DestroyWindowsHotKeys(a1);
  if ( !*(_DWORD *)(W32GetUserSessionState(v16, v15) + 69076) )
    ClearSendMessages(a1);
  CleanupWindowRedirection(a1);
  v18 = *((_QWORD *)a1 + 5);
  if ( *(_QWORD *)(v18 + 136) || (*(_BYTE *)(v18 + 17) & 0x10) != 0 )
  {
    DecPaintCount((__int64)a1);
    DeleteMaybeSpecialRgn(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 0LL;
    SetOrClrWF(0, a1, 0x110u, 1);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 0xA) != 0 )
  {
    SetOrClrWF(0, a1, 0x108u, 1);
    SetOrClrWF(0, a1, 0x102u, 1);
  }
  v19 = (struct tagMLIST *)(a2 + 848);
  if ( *(_QWORD *)(a2 + 848) )
  {
    QMsg = FindQMsg((struct tagTHREADINFO *)a2, v19, 18, 1);
    if ( QMsg )
      PostQuitMessage(*(unsigned int *)(QMsg + 32));
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 && *((_QWORD *)a1 + 21) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5276LL);
  LOBYTE(v17) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0;
  if ( (_BYTE)v17 != 64 )
  {
    v21 = (struct _HEAD *)*((_QWORD *)a1 + 21);
    if ( v21 )
    {
      if ( UnlockWndMenuWorker(a1, 0) )
        DestroyMenu(v21);
    }
  }
  v22 = (struct _HEAD *)*((_QWORD *)a1 + 20);
  if ( v22 )
  {
    if ( v22 == *(struct _HEAD **)(*((_QWORD *)a1 + 3) + 64LL) )
    {
      UnlockWndMenuWorker(a1, 1);
    }
    else if ( UnlockWndMenuWorker(a1, 1) )
    {
      DestroyMenu(v22);
    }
  }
  v23 = *((_QWORD *)a1 + 3);
  if ( v23 )
  {
    if ( (v17 = *(_QWORD *)(v23 + 56)) != 0 && a1 == *(struct tagWND **)(v17 + 80)
      || (v17 = *(_QWORD *)(v23 + 64)) != 0 && a1 == *(struct tagWND **)(v17 + 80) )
    {
      UnlockNotifyWindow((struct tagMENU *)v17);
    }
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v17, v19) + 43272) )
  {
    v26 = W32GetUserSessionState(v25, v24);
    v27 = (struct EWNDOBJ *)InternalRemoveProp(a1, *(unsigned __int16 *)(v26 + 41342), 1LL);
    if ( v27 )
    {
      v28 = W32GetUserSessionState(v25, v24);
      GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v28 + 56968) + 48LL));
      GreDeleteWnd(v27);
      v31 = W32GetUserSessionState(v30, v29);
      --*(_DWORD *)(v31 + 43272);
      v34 = W32GetUserSessionState(v33, v32);
      GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v34 + 56968) + 48LL));
    }
  }
  v35 = W32GetUserSessionState(v25, v24);
  GreLockSprite(*(_QWORD *)(*(_QWORD *)(v35 + 56968) + 48LL));
  v38 = W32GetUserSessionState(v37, v36);
  GreDeleteSpriteOverlapPresent(*(HDEV *)(*(_QWORD *)(v38 + 56968) + 48LL));
  v41 = W32GetUserSessionState(v40, v39);
  GreUnlockSprite(*(_QWORD *)(*(_QWORD *)(v41 + 56968) + 48LL));
  ClearPwndDceLists(a1);
  if ( a1 == *(struct tagWND **)(W32GetUserSessionState(v43, v42) + 56976) )
  {
    Spb = FindSpb(a1);
    FreeSpb(Spb);
    v47 = W32GetUserSessionState(v46, v45);
    HMAssignmentUnlock(v47 + 56976);
    *(_QWORD *)(W32GetUserSessionState(v49, v48) + 63240) = 0LL;
  }
  if ( *(char *)(*((_QWORD *)a1 + 5) + 16LL) < 0 )
  {
    v50 = FindSpb(a1);
    FreeSpb(v50);
  }
  if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) != 0x29D )
    tagWND::ClearClipRgnOrMaxClip(a1);
  if ( !(unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
    && *((_QWORD *)a1 + 19) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) == 0
      || (v52 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v52 = 0;
    }
    v53 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v52 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v54 = *(_QWORD *)a1;
      v55 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v51);
      LOBYTE(v56) = v53;
      LOBYTE(v57) = v52;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v57,
        v56,
        *(_QWORD *)(v55 + 69160),
        4,
        9,
        11,
        (__int64)&WPP_f8e42f39be5e33e4c712ae0f6b2025c5_Traceguids,
        v54);
    }
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 136LL), 0, *((PVOID *)a1 + 19));
    v4 = a3;
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 144LL) = 0LL;
    *((_QWORD *)a1 + 19) = 0LL;
  }
  if ( (*((_DWORD *)a1 + 95) & 0x10000) != 0 )
    NotifyOverlayWindow(a1);
  v58 = (void *)*((_QWORD *)a1 + 23);
  if ( v58 )
  {
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)a1 + 3) + 136LL), 0, v58);
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 192LL) = 0LL;
    *((_QWORD *)a1 + 23) = 0LL;
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL) = 0;
  }
  ResetWindowTransform(a1);
  v59 = *((_QWORD *)a1 + 3);
  if ( !v59 || (v60 = *(struct tagWND **)(*(_QWORD *)(v59 + 8) + 24LL), a1 == v60) )
  {
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 48LL) = 0LL;
    HMAssignmentUnlock((char *)a1 + 104);
  }
  else
  {
    v97 = *(_OWORD *)LockPointer(v100, (char *)a1 + 104, v60);
    HMAssignmentLock(&v97, 1LL);
  }
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 56LL) = 0LL;
  HMAssignmentUnlock((char *)a1 + 112);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 64LL) = 0LL;
  HMAssignmentUnlock((char *)a1 + 120);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 176LL) = 0LL;
  HMAssignmentUnlock((char *)a1 + 200);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v63 = (void *)ReferenceDwmApiPort(v62, v61);
    DwmAsyncOwnerChange(v63);
  }
  DereferenceClass(*(_QWORD *)(a2 + 464), a1);
  HMMarkObjectDestroy(a1);
  v64 = _HMPheFromObject(a1);
  *(_BYTE *)(v64 + 25) |= 2u;
  tagWND::ComputeDominantState(a1);
  if ( (unsigned int)Feature_QoSCleanupChildWindow__private_IsEnabledDeviceUsageNoInline()
    && (*((_DWORD *)a1 + 95) & 0x8000000) != 0 )
  {
    tagWND::DwsUnlinkAllProcesses(a1, 3LL);
  }
  ProcessWindowStation = GetProcessWindowStation(0LL);
  v66 = ProcessWindowStation;
  if ( ProcessWindowStation )
  {
    if ( *(struct tagWND **)(ProcessWindowStation + 96) == a1 )
    {
      HMAssignmentUnlock(ProcessWindowStation + 96);
      *(_QWORD *)(v66 + 80) = 0LL;
    }
    if ( *(struct tagWND **)(v66 + 112) == a1 )
      HMAssignmentUnlock(v66 + 112);
    if ( *(struct tagWND **)(v66 + 104) == a1 )
      HMAssignmentUnlock(v66 + 104);
  }
  if ( (*((_DWORD *)a1 + 95) & 0x800000) != 0 )
    _RemoveClipboardFormatListener(a1);
  if ( Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(v4) )
  {
    FreeClientOnWindowDestruction(a1);
    if ( (unsigned int)HMMarkObjectDestroy(a1) )
    {
      v69 = (_DWORD *)*((_QWORD *)a1 + 36);
      if ( v69 )
      {
        --*v69;
        v70 = (_DWORD *)*((_QWORD *)a1 + 36);
        if ( !*v70 )
          Win32FreePool(v70);
        *((_QWORD *)a1 + 36) = 0LL;
      }
      v71 = (_DWORD *)*((_QWORD *)a1 + 37);
      if ( v71 )
      {
        --*v71;
        v72 = (_DWORD *)*((_QWORD *)a1 + 37);
        if ( !*v72 )
          Win32FreePool(v72);
        *((_QWORD *)a1 + 37) = 0LL;
      }
      UpdateWindowMonitorAndDpiInfoHelper(a1, 0LL);
      Win32FreePool(*((void **)a1 + 46));
      *((_QWORD *)a1 + 46) = 0LL;
      if ( *((_QWORD *)a1 + 18) )
      {
        DeleteProperties(a1);
        Win32FreePool(*((void **)a1 + 18));
        *((_QWORD *)a1 + 18) = 0LL;
      }
      if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0x2A0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5540LL);
      v73 = safe_cast_fnid_to_PMENUWND(a1);
      v74 = v73;
      if ( v73 )
      {
        v75 = *(_QWORD *)(v73 + 16);
        if ( v75 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(&v97, v75);
          v76 = *(_QWORD *)v97;
          if ( (**(_DWORD **)v97 & 0x20000000) != 0 )
          {
            **(_DWORD **)v97 &= ~0x40000000u;
          }
          else
          {
            v77 = *(_QWORD *)v97;
            if ( v77 == W32GetUserSessionState(v97, v76) + 65792 )
            {
              v80 = W32GetUserSessionState(v79, v78);
              *(_DWORD *)(v80 + 66800) &= ~0x800000u;
              v83 = W32GetUserSessionState(v82, v81);
              NullifyLookasideRef(*(_QWORD *)(v83 + 65880));
            }
            else
            {
              FreeIsolatedTypeAndClearStackReferences<tagPOPUPMENU,NSInstrumentation::CTypeIsolation<24576,96>>(*(_QWORD *)v97);
              *(_QWORD *)(v74 + 16) = 0LL;
            }
          }
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v97, v76);
        }
      }
      v84 = (void *)*((_QWORD *)a1 + 35);
      if ( v84 )
      {
        Win32FreePool(v84);
        *((_QWORD *)a1 + 35) = 0LL;
      }
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 248LL) = 0;
      --*(_DWORD *)(a2 + 944);
      if ( !(unsigned int)Feature_Servicing_DefaultIMEFreeWindow__private_IsEnabledDeviceUsageNoInline() )
      {
        v85 = *((_DWORD *)a1 + 95);
        if ( (v85 & 0x10000000) != 0 )
        {
          *((_DWORD *)a1 + 95) = v85 & 0xEFFFFFFF;
          --*(_DWORD *)(a2 + 952);
        }
      }
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v88 = (void *)ReferenceDwmApiPort(v87, v86);
        DwmAsyncChildDestroy(v88);
      }
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 48LL) = 0LL;
      HMAssignmentUnlock((char *)a1 + 104);
      Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v100, *((void **)a1 + 3));
      tagObjLock::LockUnInitializeThreadCreator((struct tagWND *)((char *)a1 + 56));
      HMFreeObject(a1);
      if ( v101 != -1 )
      {
        PopAndFreeW32ThreadLock((__int64)v100, v89);
        v101 = -1LL;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL) = 0LL;
      v90 = *((_QWORD *)a1 + 3);
      if ( v90 )
      {
        v91 = *(_QWORD *)(*(_QWORD *)(v90 + 40) + 56LL);
        v92 = *(_QWORD **)(*(_QWORD *)(v91 + 16) + 464LL);
      }
      else
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v68);
        v92 = (_QWORD *)CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
        {
          v91 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
          v92 = (_QWORD *)(v91 & CurrentProcessWin32Process);
        }
      }
      v94 = W32GetUserSessionState(v91, v67);
      ClassPtr = (_QWORD *)GetClassPtr(
                             (_QWORD *)*(unsigned __int16 *)(*(_QWORD *)(v94 + 19872) + 910LL),
                             v92,
                             (__int64)hModuleWin);
      tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=((char *)a1 + 136, *ClassPtr);
      ++*(_DWORD *)(*(_QWORD *)v96 + 72LL);
      SetOrClrWF(1, a1, 0x204u, 1);
      SetOrClrWF(0, a1, 0x220u, 1);
      SetOrClrWF(0, a1, 0xFC0u, 1);
      SetOrClrWF(1, a1, 0xF00u, 1);
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 152LL) = 0LL;
      *((_QWORD *)a1 + 21) = 0LL;
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v98);
}
