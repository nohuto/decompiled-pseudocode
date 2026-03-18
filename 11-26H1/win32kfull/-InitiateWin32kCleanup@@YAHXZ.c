/*
 * XREFs of ?InitiateWin32kCleanup@@YAHXZ @ 0x140137F4C
 * Callers:
 *     RawInputThread @ 0x140270B00 (RawInputThread.c)
 * Callees:
 *     FreeTimer @ 0x140020580 (FreeTimer.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsRemoteConnection @ 0x1400F99E0 (IsRemoteConnection.c)
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1401364A0 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?NumHandles@@YAKPEAX@Z @ 0x140138D5C (-NumHandles@@YAKPEAX@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x140138DEC (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140138E4C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     FreePointerDeviceClientList @ 0x140138E88 (FreePointerDeviceClientList.c)
 *     ClosePointerDeviceProcessEvents @ 0x140138F1C (ClosePointerDeviceProcessEvents.c)
 *     IsCurrentSessionHostServiceSession @ 0x140139520 (IsCurrentSessionHostServiceSession.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x140139558 (-TerminateDesktopThreads@@YAXXZ.c)
 *     ?SetWaitForWinstaRundown@@YAXXZ @ 0x140139DDC (-SetWaitForWinstaRundown@@YAXXZ.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x14014FB64 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     CleanupIAMAccess @ 0x140154E80 (CleanupIAMAccess.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140162868 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UnregisterDeviceClassNotifications @ 0x1401B448C (UnregisterDeviceClassNotifications.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x140201148 (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     GreDrvDisconnect @ 0x140287F5C (GreDrvDisconnect.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??1InteractiveControlManager@@AEAA@XZ @ 0x1402F0FE8 (--1InteractiveControlManager@@AEAA@XZ.c)
 *     ??1InkProcessor@@AEAA@XZ @ 0x1402FB858 (--1InkProcessor@@AEAA@XZ.c)
 *     bDrvDisconnect @ 0x140336124 (bDrvDisconnect.c)
 */

__int64 InitiateWin32kCleanup(void)
{
  __int64 v0; // rcx
  __int64 RemoteContext; // r15
  char v2; // bl
  bool v3; // di
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // bl
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  __int64 v26; // rdi
  _QWORD *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rbx
  struct tagMOUSE_PROMOTION_QUEUE *v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rbx
  InteractiveControlManager *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  void *v44; // rbx
  struct tagTHREADINFO *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  struct tagTHREADINFO *v48; // r14
  __int64 v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdi
  __int64 v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  struct MOVESIZEDATA *v57; // rcx
  char v58; // bl
  bool v59; // si
  __int64 v60; // rax
  int v61; // r8d
  int v62; // edx
  __int64 v63; // rdx
  struct MOVESIZEDATA *v64; // rcx
  char v65; // si
  bool v66; // bp
  int v67; // ebx
  __int64 v68; // rax
  int v69; // r8d
  int v70; // edx
  __int64 v71; // rdx
  void *v72; // rcx
  void *v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rdx
  __int64 v85; // rcx
  _QWORD *i; // rbx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rdx
  struct MOVESIZEDATA *v121; // rcx
  char v122; // bl
  bool v123; // di
  __int64 v124; // rax
  int v125; // r8d
  int v126; // edx
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // rax
  signed __int32 v139[8]; // [rsp+0h] [rbp-88h] BYREF
  HANDLE EventHandle; // [rsp+90h] [rbp+8h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+98h] [rbp+10h] BYREF

  RemoteContext = GreGetRemoteContext();
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (v0 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v0 & 4) == 0)
    || (v2 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v2 = 0;
  }
  v3 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v2 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v0, WPP_GLOBAL_Control);
    LOBYTE(v5) = v3;
    LOBYTE(v6) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      3,
      20,
      (__int64)&WPP_32e00327b39d3e5ae6e4a6eddab2c924_Traceguids);
  }
  SetWaitForWinstaRundown();
  CleanupIAMAccess(0LL);
  DrvNotifySessionStateChange(2LL);
  *(_DWORD *)(W32GetUserSessionState(v8, v7) + 2728) = 0;
  _InterlockedOr(v139, 0);
  EnterCrit(1LL, 0LL);
  CleanupPowerRequestList();
  v9 = 0;
  v12 = W32GetUserSessionState(v11, v10);
  if ( (unsigned __int8)ExIsFastResourceHeldExclusive(*(_QWORD *)(v12 + 16)) == 1 )
  {
    v9 = 1;
    LeaveMitRitHazardCrit();
  }
  UserSessionSwitchLeaveCrit(v13);
  if ( !IsRemoteConnection(v15, v14) )
    UnregisterDeviceClassNotifications();
  EnterCrit(1LL, 0LL);
  if ( v9 )
    EnterMitRitHazardCrit();
  FreePointerDeviceClientList();
  ClosePointerDeviceProcessEvents();
  *(_DWORD *)(W32GetUserSessionState(v17, v16) + 68428) = 1;
  v20 = W32GetUserSessionState(v19, v18);
  *(_DWORD *)(v20 + 68928) |= 0x400u;
  v23 = W32GetUserSessionState(v22, v21);
  v26 = v23 + 69048;
  v27 = *(_QWORD **)(v23 + 69048);
  *(_DWORD *)(v23 + 69068) = 1;
  while ( v27 != (_QWORD *)v26 )
  {
    v25 = v27 + 14;
    if ( v27[14] )
      HMAssignmentUnlock(v25);
    v27 = (_QWORD *)*v27;
  }
  *(_DWORD *)(v26 + 20) = 0;
  v28 = W32GetUserSessionState(v25, v24);
  CTouchProcessor::CancelActivePointers(*(CTouchProcessor **)(v28 + 3256));
  v31 = W32GetUserSessionState(v30, v29);
  EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)(v31 + 16536));
  v32 = (struct tagMOUSE_PROMOTION_QUEUE *)(v31 + 16424);
  v33 = 5LL;
  do
  {
    EmptyMousePromotionQueue(v32);
    v32 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)v32 + 24);
    --v33;
  }
  while ( v33 );
  v37 = W32GetUserSessionState(v35, v34);
  v38 = *(InteractiveControlManager **)(v37 + 17112);
  if ( v38 )
  {
    InteractiveControlManager::~InteractiveControlManager(v38);
    Win32FreePool(*(void **)(v37 + 17112));
    *(_QWORD *)(v37 + 17112) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v38, v36) + 3272) )
  {
    v41 = W32GetUserSessionState(v40, v39);
    v44 = *(void **)(v41 + 3272);
    if ( v44 )
    {
      InkProcessor::~InkProcessor(*(InkProcessor **)(v41 + 3272));
      Win32FreePool(v44);
    }
    *(_QWORD *)(W32GetUserSessionState(v43, v42) + 3272) = 0LL;
  }
  v45 = PtiCurrent(v40);
  v47 = *(_QWORD *)&gbIgnoreStressedOutStuff;
  v48 = v45;
  if ( !gbIgnoreStressedOutStuff && *((_DWORD *)v45 + 233) )
  {
    LODWORD(EventHandle) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2018LL);
  }
  v49 = *((_QWORD *)v48 + 81);
  Timeout.QuadPart = -6000000000LL;
  v52 = W32GetUserSessionState(v47, v46);
  if ( v49 )
  {
    while ( 1 )
    {
      v53 = *(_QWORD *)(v49 + 16);
      if ( !v53
        || v53 == *(_QWORD *)(W32GetUserSessionState(v51, v50) + 62976)
        && !*(_QWORD *)(v53 + 32)
        && !*(_QWORD *)(*(_QWORD *)(v49 + 24) + 48LL)
        && NumHandles(*(void **)(v52 + 68880)) <= 1 )
      {
        break;
      }
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&EventHandle, 1);
      v56 = W32GetUserSessionState(v55, v54);
      KeWaitForSingleObject(*(PVOID *)(v56 + 62936), WrUserRequest, 0, 0, &Timeout);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&EventHandle);
    }
  }
  v57 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
    || (v58 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v58 = 0;
  }
  v59 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v58 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v60 = W32GetUserSessionState(WPP_GLOBAL_Control, v50);
    LOBYTE(v61) = v59;
    LOBYTE(v62) = v58;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v62,
      v61,
      *(_QWORD *)(v60 + 69152),
      4,
      20,
      21,
      (__int64)&WPP_32e00327b39d3e5ae6e4a6eddab2c924_Traceguids);
  }
  *(_DWORD *)(W32GetUserSessionState(v57, v50) + 36436) = 1;
  v64 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
    || (v65 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v65 = 0;
  }
  v66 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v65 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v67 = *((_DWORD *)v48 + 233);
    v68 = W32GetUserSessionState(WPP_GLOBAL_Control, v63);
    LOBYTE(v69) = v66;
    LOBYTE(v70) = v65;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v70,
      v69,
      *(_QWORD *)(v68 + 69152),
      4,
      20,
      22,
      (__int64)&WPP_32e00327b39d3e5ae6e4a6eddab2c924_Traceguids,
      (char)v48,
      v67);
  }
  *(_QWORD *)(W32GetUserSessionState(v64, v63) + 19208) = 0LL;
  ForceCapture(3LL);
  FreeScancodeMap();
  v72 = *(void **)(v52 + 68888);
  if ( v72 )
  {
    ZwClose(v72);
    *(_QWORD *)(v52 + 68888) = 0LL;
  }
  v73 = *(void **)(v52 + 68880);
  if ( v73 )
  {
    ObCloseHandle(v73, 0);
    *(_QWORD *)(v52 + 68880) = 0LL;
  }
  v74 = W32GetUserSessionState(v73, v71);
  DeferrableUnlockObjectAssignment<tagDESKTOP>(v74 + 62968, v75, v76, v77);
  v80 = W32GetUserSessionState(v79, v78);
  DeferrableUnlockObjectAssignment<tagDESKTOP>(v80 + 62976, v81, v82, v83);
  for ( i = (_QWORD *)(W32GetUserSessionState(v85, v84) + 57536);
        (_QWORD *)*i != i;
        FreeTimer((struct tagTIMER *)(*i - 72LL)) )
  {
    ;
  }
  TerminateDesktopThreads();
  if ( *(_DWORD *)(W32GetUserSessionState(v88, v87) + 68748) )
  {
    if ( *(_DWORD *)(v52 + 68756) )
      bDrvDisconnect(*(_QWORD *)(v52 + 68800), *(_QWORD *)(v52 + 68792), *(_QWORD *)(v52 + 68824));
    else
      GreDrvDisconnect(RemoteContext);
  }
  v91 = W32GetUserSessionState(v90, v89);
  DeferrableUnlockObjectAssignment<tagDESKTOP>(v91 + 19176, v92, v93, v94);
  v97 = W32GetUserSessionState(v96, v95);
  DeferrableUnlockObjectAssignment<tagDESKTOP>(v97 + 62832, v98, v99, v100);
  v103 = W32GetUserSessionState(v102, v101);
  DeferrableUnlockObjectAssignment<tagDESKTOP>(v103 + 19184, v104, v105, v106);
  if ( *(_QWORD *)(W32GetUserSessionState(v108, v107) + 71272) )
  {
    v111 = W32GetUserSessionState(v110, v109);
    ObfDereferenceObject(*(PVOID *)(v111 + 71272));
    *(_QWORD *)(W32GetUserSessionState(v113, v112) + 71272) = 0LL;
  }
  v114 = W32GetUserSessionState(v110, v109);
  HMAssignmentUnlock(v114 + 36288);
  v117 = W32GetUserSessionState(v116, v115);
  HMAssignmentUnlock(v117 + 36296);
  _InterlockedAnd((volatile signed __int32 *)v48 + 130, 0xFFFFF7FF);
  *(_QWORD *)(W32GetUserSessionState(v119, v118) + 18696) = 0LL;
  v121 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) == 0
    || (v122 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v122 = 0;
  }
  v123 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v122 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v124 = W32GetUserSessionState(WPP_GLOBAL_Control, v120);
    LOBYTE(v125) = v123;
    LOBYTE(v126) = v122;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v126,
      v125,
      *(_QWORD *)(v124 + 69152),
      4,
      20,
      23,
      (__int64)&WPP_32e00327b39d3e5ae6e4a6eddab2c924_Traceguids);
  }
  UserSessionSwitchLeaveCrit(v121);
  if ( !(unsigned int)IsCurrentSessionHostServiceSession() )
  {
    EventHandle = 0LL;
    if ( CreateShutdownEvent(L"EventRitExited", 0x80u, &EventHandle) >= 0 )
    {
      ZwSetEvent(EventHandle, 0LL);
      ZwClose(EventHandle);
    }
  }
  v129 = W32GetUserSessionState(v128, v127);
  *(_DWORD *)(v129 + 68928) |= 0x1000u;
  if ( *(_QWORD *)(W32GetUserSessionState(v131, v130) + 68376) )
  {
    v134 = W32GetUserSessionState(v133, v132);
    KeSetEvent(*(PRKEVENT *)(v134 + 68376), 1, 0);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v133, v132) + 68384) )
  {
    v137 = W32GetUserSessionState(v136, v135);
    KeSetEvent(*(PRKEVENT *)(v137 + 68384), 1, 0);
  }
  return 1LL;
}
