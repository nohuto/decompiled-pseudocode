/*
 * XREFs of ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780
 * Callers:
 *     ?xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140044D14 (-xxxFreeWindow@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAU-$Win32HMOptionalThreadLockAlways@UtagWND@.c)
 * Callees:
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x14000A29C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x14000EC74 (safe_cast_fnid_to_PMENUWND.c)
 *     InternalRemoveProp @ 0x14000FD98 (InternalRemoveProp.c)
 *     ?ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ @ 0x14001843C (-ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ.c)
 *     GreDeleteSpriteOverlapPresent @ 0x14001B174 (GreDeleteSpriteOverlapPresent.c)
 *     _DestroyMenu @ 0x140033000 (_DestroyMenu.c)
 *     ResetWindowTransform @ 0x14004A5F8 (ResetWindowTransform.c)
 *     ?UpdateWindowMonitorAndDpiInfoHelper@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x14004ABFC (-UpdateWindowMonitorAndDpiInfoHelper@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     ClearSendMessages @ 0x1400538B0 (ClearSendMessages.c)
 *     _PostQuitMessage @ 0x140054D90 (_PostQuitMessage.c)
 *     FindQMsg @ 0x1400955A0 (FindQMsg.c)
 *     CleanupWindowRedirection @ 0x1400A2EF0 (CleanupWindowRedirection.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     DecPaintCount @ 0x14012BF18 (DecPaintCount.c)
 *     DereferenceClass @ 0x14014EE40 (DereferenceClass.c)
 *     GetClassPtr @ 0x140150850 (GetClassPtr.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x140151A04 (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     DwmAsyncOwnerChange @ 0x14017A4CC (DwmAsyncOwnerChange.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14017B358 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14018CD00 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     DestroyWindowsHotKeys @ 0x14018D328 (DestroyWindowsHotKeys.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _GetProcessWindowStation @ 0x1401BC230 (_GetProcessWindowStation.c)
 *     DestroyWindowsTimers @ 0x1401C81D4 (DestroyWindowsTimers.c)
 *     FreeClientOnWindowDestruction @ 0x1401D18E0 (FreeClientOnWindowDestruction.c)
 *     DwmAsyncChildDestroy @ 0x1401D38DC (DwmAsyncChildDestroy.c)
 *     ?_ClearPwndDceList@@YAXPEAU_LIST_ENTRY@@_K@Z @ 0x1401D8ECC (-_ClearPwndDceList@@YAXPEAU_LIST_ENTRY@@_K@Z.c)
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x1401D90A0 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAU_HEAD@@@Z @ 0x1401DE278 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     MagpDestroyLensContext @ 0x1401E7AA4 (MagpDestroyLensContext.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x14021CB3C (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x140235458 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     ?UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z @ 0x14026CA18 (-UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_QoSCleanupChildWindow__private_IsEnabledDeviceUsageNoInline @ 0x14028C18C (Feature_QoSCleanupChildWindow__private_IsEnabledDeviceUsageNoInline.c)
 *     NullifyLookasideRef @ 0x140294154 (NullifyLookasideRef.c)
 *     _NotifyOverlayWindow @ 0x1402AD3C0 (_NotifyOverlayWindow.c)
 *     ??$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@@@YAXAEAV?$SmartObjStackRefBase@UtagPOPUPMENU@@@@@Z @ 0x1402D0520 (--$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@@@YAXAEAV-$SmartObjStackRefBase@UtagPO.c)
 *     GreDeleteWnd @ 0x14031A0A0 (GreDeleteWnd.c)
 */

void __fastcall FreeWindow_Phase3(struct _LIST_ENTRY *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v4; // r15
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
  struct _LIST_ENTRY *v17; // rcx
  struct _LIST_ENTRY *Blink; // rax
  __int64 v19; // rdx
  __int64 QMsg; // rax
  struct _HEAD *v21; // rbx
  struct _HEAD *Flink; // rbx
  struct _LIST_ENTRY *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  struct EWNDOBJ *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  char v38; // r15
  bool v39; // r12
  struct _LIST_ENTRY *v40; // rbx
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  struct _LIST_ENTRY *v44; // r8
  struct _LIST_ENTRY *v45; // rax
  void *v46; // rax
  __int64 v47; // rax
  __int64 ProcessWindowStation; // rax
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  struct _LIST_ENTRY *v52; // rax
  struct _LIST_ENTRY *v53; // rcx
  struct _LIST_ENTRY *v54; // rax
  struct _LIST_ENTRY *v55; // rcx
  __int64 v56; // rax
  __int64 v57; // r15
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  struct _LIST_ENTRY *v67; // rcx
  void *v68; // rax
  struct _LIST_ENTRY *v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v73; // rax
  _QWORD *ClassPtr; // rax
  __int64 v75; // rcx
  __int128 v76; // [rsp+50h] [rbp-19h] BYREF
  char v77[8]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v78; // [rsp+68h] [rbp-1h]
  _BYTE v79[16]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v80; // [rsp+80h] [rbp+17h]

  v77[0] = 0;
  v78 = 0LL;
  v4 = a3;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v77);
  HandleFullWindowDestruction(a1);
  if ( a1 == *(struct _LIST_ENTRY **)(W32GetUserSessionState(v7, v6) + 36288) )
  {
    UserSessionState = W32GetUserSessionState(v9, v8);
    HMAssignmentUnlock(UserSessionState + 36288);
  }
  if ( a1 == *(struct _LIST_ENTRY **)(W32GetUserSessionState(v9, v8) + 36296) )
  {
    v13 = W32GetUserSessionState(v12, v11);
    HMAssignmentUnlock(v13 + 36296);
  }
  v14 = W32GetUserSessionState(v12, v11);
  MagpDestroyLensContext(v14 + 66032, a2, a1);
  DestroyWindowsTimers(a1);
  DestroyWindowsHotKeys((struct tagWND *)a1);
  if ( !*(_DWORD *)(W32GetUserSessionState(v16, v15) + 69068) )
    ClearSendMessages(a1);
  CleanupWindowRedirection(a1);
  Blink = a1[2].Blink;
  if ( Blink[8].Blink || (BYTE1(Blink[1].Flink) & 0x10) != 0 )
  {
    DecPaintCount(a1);
    DeleteMaybeSpecialRgn(a1[2].Blink[8].Blink);
    a1[2].Blink[8].Blink = 0LL;
    SetOrClrWF(0LL, a1, 272LL, 1LL);
  }
  if ( (BYTE1(a1[2].Blink[1].Flink) & 0xA) != 0 )
  {
    SetOrClrWF(0LL, a1, 264LL, 1LL);
    SetOrClrWF(0LL, a1, 258LL, 1LL);
  }
  v19 = a2 + 840;
  if ( *(_QWORD *)(a2 + 840) )
  {
    QMsg = FindQMsg(a2, v19, (_DWORD)a1, 18, 18, 1);
    if ( QMsg )
      PostQuitMessage(*(unsigned int *)(QMsg + 32));
  }
  if ( (HIBYTE(a1[2].Blink[1].Blink) & 0xC0) == 0x40 && a1[10].Blink )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5212LL);
  LOBYTE(v17) = HIBYTE(a1[2].Blink[1].Blink) & 0xC0;
  if ( (_BYTE)v17 != 64 )
  {
    v21 = (struct _HEAD *)a1[10].Blink;
    if ( v21 )
    {
      if ( UnlockWndMenuWorker((struct tagWND *)a1, 0) )
        DestroyMenu(v21);
    }
  }
  Flink = (struct _HEAD *)a1[10].Flink;
  if ( Flink )
  {
    if ( Flink == (struct _HEAD *)a1[1].Blink[4].Flink )
    {
      UnlockWndMenuWorker((struct tagWND *)a1, 1);
    }
    else if ( UnlockWndMenuWorker((struct tagWND *)a1, 1) )
    {
      DestroyMenu(Flink);
    }
  }
  v23 = a1[1].Blink;
  if ( v23 )
  {
    if ( (v17 = v23[3].Blink) != 0LL && a1 == v17[5].Flink || (v17 = v23[4].Flink) != 0LL && a1 == v17[5].Flink )
      UnlockNotifyWindow((struct tagMENU *)v17);
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v17, v19) + 43272) )
  {
    v26 = W32GetUserSessionState(v25, v24);
    v27 = (struct EWNDOBJ *)InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(v26 + 41382), 1u);
    if ( v27 )
    {
      GreLockVisRgn();
      GreDeleteWnd(v27);
      v30 = W32GetUserSessionState(v29, v28);
      --*(_DWORD *)(v30 + 43272);
      GreUnlockVisRgn(v31);
    }
  }
  GreLockSprite();
  v32 = (__int64)a1->Flink;
  v35 = W32GetUserSessionState(v34, v33);
  GreDeleteSpriteOverlapPresent(*(HDEV *)(*(_QWORD *)(v35 + 56968) + 40LL), v32);
  GreUnlockSprite();
  GreLockVisRgn();
  _ClearPwndDceList(a1 + 20, 0x68uLL);
  _ClearPwndDceList(a1 + 21, 0x78uLL);
  _ClearPwndDceList(a1 + 22, 0x88uLL);
  GreUnlockVisRgn(v36);
  if ( (WORD1(a1[2].Blink[2].Blink) & 0x2FFF) != 0x29D )
    tagWND::ClearClipRgnOrMaxClip((tagWND *)a1);
  if ( !(unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline() && a1[9].Blink )
  {
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
      || (v38 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v38 = 0;
    }
    v39 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v38 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v40 = a1->Flink;
      v41 = W32GetUserSessionState(WPP_GLOBAL_Control, v37);
      LOBYTE(v42) = v39;
      LOBYTE(v43) = v38;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v43,
        v42,
        *(_QWORD *)(v41 + 69152),
        4,
        9,
        11,
        (__int64)&WPP_a3a91e215f2f34cc9afac41ea0cd159c_Traceguids,
        (char)v40);
    }
    RtlFreeHeap(a1[1].Blink[8].Blink, 0, a1[9].Blink);
    v4 = a3;
    a1[2].Blink[9].Flink = 0LL;
    a1[9].Blink = 0LL;
  }
  if ( (HIDWORD(a1[23].Blink) & 0x10000) != 0 )
    NotifyOverlayWindow((struct tagWND *)a1);
  v44 = a1[11].Blink;
  if ( v44 )
  {
    RtlFreeHeap(a1[1].Blink[8].Blink, 0, v44);
    a1[2].Blink[12].Flink = 0LL;
    a1[11].Blink = 0LL;
    LODWORD(a1[2].Blink[11].Blink) = 0;
  }
  ResetWindowTransform(a1);
  v45 = a1[1].Blink;
  if ( !v45 || a1 == v45->Blink[1].Blink )
  {
    a1[2].Blink[3].Flink = 0LL;
    HMAssignmentUnlock(&a1[6].Blink);
  }
  else
  {
    v76 = *(_OWORD *)LockPointer(v79, &a1[6].Blink);
    HMAssignmentLock(&v76, 1LL);
  }
  a1[2].Blink[3].Blink = 0LL;
  HMAssignmentUnlock(&a1[7]);
  a1[2].Blink[4].Flink = 0LL;
  HMAssignmentUnlock(&a1[7].Blink);
  a1[2].Blink[11].Flink = 0LL;
  HMAssignmentUnlock(&a1[12].Blink);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v46 = (void *)ReferenceDwmApiPort();
    DwmAsyncOwnerChange(v46);
  }
  DereferenceClass(*(_QWORD *)(a2 + 456), a1);
  HMMarkObjectDestroy(a1);
  v47 = _HMPheFromObject(a1);
  *(_BYTE *)(v47 + 25) |= 2u;
  tagWND::ComputeDominantState((tagWND *)a1);
  if ( (unsigned int)Feature_QoSCleanupChildWindow__private_IsEnabledDeviceUsageNoInline()
    && (HIDWORD(a1[23].Blink) & 0x8000000) != 0 )
  {
    tagWND::DwsUnlinkAllProcesses(a1, 3LL);
  }
  ProcessWindowStation = GetProcessWindowStation(0LL);
  v49 = ProcessWindowStation;
  if ( ProcessWindowStation )
  {
    if ( *(struct _LIST_ENTRY **)(ProcessWindowStation + 64) == a1 )
    {
      HMAssignmentUnlock(ProcessWindowStation + 64);
      *(_QWORD *)(v49 + 48) = 0LL;
    }
    if ( *(struct _LIST_ENTRY **)(v49 + 80) == a1 )
      HMAssignmentUnlock(v49 + 80);
    if ( *(struct _LIST_ENTRY **)(v49 + 72) == a1 )
      HMAssignmentUnlock(v49 + 72);
  }
  if ( (HIDWORD(a1[23].Blink) & 0x800000) != 0 )
    _RemoveClipboardFormatListener((struct tagWND *)a1);
  if ( Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(v4) )
  {
    FreeClientOnWindowDestruction(a1);
    if ( (unsigned int)HMMarkObjectDestroy(a1) )
    {
      v52 = a1[18].Flink;
      if ( v52 )
      {
        --LODWORD(v52->Flink);
        v53 = a1[18].Flink;
        if ( !LODWORD(v53->Flink) )
          Win32FreePool(v53);
        a1[18].Flink = 0LL;
      }
      v54 = a1[18].Blink;
      if ( v54 )
      {
        --LODWORD(v54->Flink);
        v55 = a1[18].Blink;
        if ( !LODWORD(v55->Flink) )
          Win32FreePool(v55);
        a1[18].Blink = 0LL;
      }
      UpdateWindowMonitorAndDpiInfoHelper((struct tagWND *)a1, 0LL);
      Win32FreePool(a1[23].Flink);
      a1[23].Flink = 0LL;
      if ( a1[9].Flink )
      {
        DeleteProperties(a1);
        Win32FreePool(a1[9].Flink);
        a1[9].Flink = 0LL;
      }
      if ( (WORD1(a1[2].Blink[2].Blink) & 0x2FFF) == 0x2A0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5463LL);
      v56 = safe_cast_fnid_to_PMENUWND((__int64)a1);
      v57 = v56;
      if ( v56 )
      {
        v58 = *(_QWORD *)(v56 + 16);
        if ( v58 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(&v76, v58);
          if ( (**(_DWORD **)v76 & 0x20000000) != 0 )
          {
            **(_DWORD **)v76 &= ~0x40000000u;
          }
          else
          {
            v60 = *(_QWORD *)v76;
            if ( v60 == W32GetUserSessionState(v76, v59) + 65784 )
            {
              v63 = W32GetUserSessionState(v62, v61);
              *(_DWORD *)(v63 + 66792) &= ~0x800000u;
              v66 = W32GetUserSessionState(v65, v64);
              NullifyLookasideRef(*(_QWORD *)(v66 + 65872));
            }
            else
            {
              FreeIsolatedTypeAndClearStackReferences<tagPOPUPMENU>(&v76);
              *(_QWORD *)(v57 + 16) = 0LL;
            }
          }
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v76);
        }
      }
      v67 = a1[17].Blink;
      if ( v67 )
      {
        Win32FreePool(v67);
        a1[17].Blink = 0LL;
      }
      LODWORD(a1[2].Blink[15].Blink) = 0;
      --*(_DWORD *)(a2 + 932);
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v68 = (void *)ReferenceDwmApiPort();
        DwmAsyncChildDestroy(v68);
      }
      a1[2].Blink[3].Flink = 0LL;
      HMAssignmentUnlock(&a1[6].Blink);
      Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v79, a1[1].Blink);
      tagObjLock::LockUnInitializeThreadCreator((tagObjLock *)&a1[3].Blink);
      HMFreeObject(a1);
      if ( v80 != -1 )
      {
        PopAndFreeW32ThreadLock(v79);
        v80 = -1LL;
      }
    }
    else
    {
      a1[2].Blink[7].Blink = 0LL;
      v69 = a1[1].Blink;
      if ( v69 )
      {
        v70 = (__int64)v69[2].Blink[1].Blink;
        v71 = *(_QWORD *)(*(_QWORD *)(v70 + 16) + 456LL);
      }
      else
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v51);
        v71 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
        {
          v70 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
          v71 = v70 & CurrentProcessWin32Process;
        }
      }
      v73 = W32GetUserSessionState(v70, v50);
      ClassPtr = (_QWORD *)GetClassPtr(*(unsigned __int16 *)(*(_QWORD *)(v73 + 19904) + 910LL), v71, hModuleWin);
      tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=(&a1[8].Blink, *ClassPtr);
      ++*(_DWORD *)(*(_QWORD *)v75 + 72LL);
      SetOrClrWF(1LL, a1, 516LL, 1LL);
      SetOrClrWF(0LL, a1, 544LL, 1LL);
      SetOrClrWF(0LL, a1, 4032LL, 1LL);
      SetOrClrWF(1LL, a1, 3840LL, 1LL);
      a1[2].Blink[9].Blink = 0LL;
      a1[10].Blink = 0LL;
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v77);
}
