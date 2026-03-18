/*
 * XREFs of ?InitiateWin32kCleanup@@YAHXZ @ 0x140237040
 * Callers:
 *     RawInputThread @ 0x140238B50 (RawInputThread.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400B30B8 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x140126CC4 (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     UnregisterDeviceClassNotifications @ 0x140126F10 (UnregisterDeviceClassNotifications.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x140127104 (-TerminateDesktopThreads@@YAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140127EFC (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1401391D4 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     FreeAllSpbs @ 0x1401563F0 (FreeAllSpbs.c)
 *     IsRemoteConnection @ 0x1401590F0 (IsRemoteConnection.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1401D5A18 (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     IsCurrentSessionHostServiceSession @ 0x1401FCC60 (IsCurrentSessionHostServiceSession.c)
 *     ?SetWaitForWinstaRundown@@YAXXZ @ 0x140212C30 (-SetWaitForWinstaRundown@@YAXXZ.c)
 *     CleanupIAMAccess @ 0x140219550 (CleanupIAMAccess.c)
 *     InitializePointerDevicesPresenceState @ 0x140220A60 (InitializePointerDevicesPresenceState.c)
 *     FreeTimer @ 0x140246670 (FreeTimer.c)
 *     GreDrvDisconnect @ 0x140265948 (GreDrvDisconnect.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?NumHandles@@YAKPEAX@Z @ 0x140275BC0 (-NumHandles@@YAKPEAX@Z.c)
 *     ??1InteractiveControlManager@@AEAA@XZ @ 0x1402DFB10 (--1InteractiveControlManager@@AEAA@XZ.c)
 *     ??1InkProcessor@@AEAA@XZ @ 0x1402EBDA8 (--1InkProcessor@@AEAA@XZ.c)
 *     bDrvDisconnect @ 0x14033F76C (bDrvDisconnect.c)
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
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  __int64 v21; // rdi
  _QWORD *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  struct tagMOUSE_PROMOTION_QUEUE *v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rbx
  InteractiveControlManager *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  void *v39; // rbx
  struct tagTHREADINFO *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  struct tagTHREADINFO *v43; // r14
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdi
  __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  char v53; // bl
  bool v54; // si
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  __int64 v58; // rdx
  __int64 v59; // rcx
  char v60; // si
  bool v61; // bp
  int v62; // ebx
  __int64 v63; // rax
  int v64; // r8d
  int v65; // edx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  void *v70; // rcx
  void *v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rcx
  _QWORD *i; // rbx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rdx
  __int64 v106; // rcx
  char v107; // bl
  bool v108; // di
  __int64 v109; // rax
  int v110; // r8d
  int v111; // edx
  __int64 v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rax
  signed __int32 v122[8]; // [rsp+0h] [rbp-A8h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+50h] [rbp-58h] BYREF
  char v124; // [rsp+B0h] [rbp+8h] BYREF
  char v125; // [rsp+B8h] [rbp+10h] BYREF
  int v126; // [rsp+C0h] [rbp+18h]
  HANDLE EventHandle; // [rsp+C8h] [rbp+20h] BYREF

  RemoteContext = GreGetRemoteContext();
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (v0 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v0 & 4) == 0)
    || (v2 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v2 = 0;
  }
  v3 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v2 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v0, *(_QWORD *)&WPP_GLOBAL_Control);
    LOBYTE(v5) = v3;
    LOBYTE(v6) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      3,
      20,
      (__int64)&WPP_11f1f27c4a96353613c59727efb49ec7_Traceguids);
  }
  SetWaitForWinstaRundown();
  CleanupIAMAccess(0LL, v7);
  DrvNotifySessionStateChange(2LL);
  *(_DWORD *)(W32GetUserSessionState(v9, v8) + 2728) = 0;
  _InterlockedOr(v122, 0);
  EnterCrit(1LL, 0LL);
  CleanupPowerRequestList();
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v124, 1);
  if ( !IsRemoteConnection(v11, v10) )
    UnregisterDeviceClassNotifications();
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v124);
  InitializePointerDevicesPresenceState(0LL, v12);
  *(_DWORD *)(W32GetUserSessionState(v14, v13) + 68436) = 1;
  HYDRA_HINT(1024LL, v15);
  v18 = W32GetUserSessionState(v17, v16);
  v21 = v18 + 69056;
  v22 = *(_QWORD **)(v18 + 69056);
  *(_DWORD *)(v18 + 69076) = 1;
  while ( v22 != (_QWORD *)v21 )
  {
    v20 = v22 + 14;
    if ( v22[14] )
      HMAssignmentUnlock(v20);
    v22 = (_QWORD *)*v22;
  }
  *(_DWORD *)(v21 + 20) = 0;
  v23 = W32GetUserSessionState(v20, v19);
  CTouchProcessor::CancelActivePointers(*(CTouchProcessor **)(v23 + 3256));
  v26 = W32GetUserSessionState(v25, v24);
  EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)(v26 + 16544));
  v27 = (struct tagMOUSE_PROMOTION_QUEUE *)(v26 + 16432);
  v28 = 5LL;
  do
  {
    EmptyMousePromotionQueue(v27);
    v27 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)v27 + 24);
    --v28;
  }
  while ( v28 );
  v32 = W32GetUserSessionState(v30, v29);
  v33 = *(InteractiveControlManager **)(v32 + 17120);
  if ( v33 )
  {
    InteractiveControlManager::~InteractiveControlManager(v33);
    Win32FreePool(*(void **)(v32 + 17120));
    *(_QWORD *)(v32 + 17120) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v33, v31) + 3272) )
  {
    v36 = W32GetUserSessionState(v35, v34);
    v39 = *(void **)(v36 + 3272);
    if ( v39 )
    {
      InkProcessor::~InkProcessor(*(InkProcessor **)(v36 + 3272));
      Win32FreePool(v39);
    }
    *(_QWORD *)(W32GetUserSessionState(v38, v37) + 3272) = 0LL;
  }
  v40 = PtiCurrent(v35, v34);
  v42 = *(_QWORD *)&gbIgnoreStressedOutStuff;
  v43 = v40;
  if ( !gbIgnoreStressedOutStuff && *((_DWORD *)v40 + 236) )
  {
    v126 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2050LL);
  }
  v44 = *((_QWORD *)v43 + 82);
  Timeout.QuadPart = -6000000000LL;
  v47 = W32GetUserSessionState(v42, v41);
  if ( v44 )
  {
    while ( 1 )
    {
      v48 = *(_QWORD *)(v44 + 16);
      if ( !v48
        || v48 == *(_QWORD *)(W32GetUserSessionState(v46, v45) + 62984)
        && !*(_QWORD *)(v48 + 32)
        && !*(_QWORD *)(*(_QWORD *)(v44 + 56) + 48LL)
        && NumHandles(*(void **)(v47 + 68888)) <= 1 )
      {
        break;
      }
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v125, 1);
      v51 = W32GetUserSessionState(v50, v49);
      KeWaitForSingleObject(*(PVOID *)(v51 + 62944), WrUserRequest, 0, 0, &Timeout);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v125);
    }
  }
  v52 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
    || (v53 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v53 = 0;
  }
  v54 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v53 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v55 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v45);
    LOBYTE(v56) = v54;
    LOBYTE(v57) = v53;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v57,
      v56,
      *(_QWORD *)(v55 + 69160),
      4,
      20,
      21,
      (__int64)&WPP_11f1f27c4a96353613c59727efb49ec7_Traceguids);
  }
  *(_DWORD *)(W32GetUserSessionState(v52, v45) + 36396) = 1;
  v59 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
    || (v60 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v60 = 0;
  }
  v61 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v60 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v62 = *((_DWORD *)v43 + 236);
    v63 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v58);
    LOBYTE(v64) = v61;
    LOBYTE(v65) = v60;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v65,
      v64,
      *(_QWORD *)(v63 + 69160),
      4,
      20,
      22,
      (__int64)&WPP_11f1f27c4a96353613c59727efb49ec7_Traceguids,
      (char)v43,
      v62);
  }
  *(_QWORD *)(W32GetUserSessionState(v59, v58) + 19176) = 0LL;
  ForceCapture(3LL, 0LL);
  FreeScancodeMap();
  if ( *(_QWORD *)(W32GetUserSessionState(v67, v66) + 56968) )
    FreeAllSpbs(v69, v68);
  v70 = *(void **)(v47 + 68896);
  if ( v70 )
  {
    ZwClose(v70);
    *(_QWORD *)(v47 + 68896) = 0LL;
  }
  v71 = *(void **)(v47 + 68888);
  if ( v71 )
  {
    ObCloseHandle(v71, 0);
    *(_QWORD *)(v47 + 68888) = 0LL;
  }
  v72 = W32GetUserSessionState(v71, v68);
  DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD **)(v72 + 62976));
  v75 = W32GetUserSessionState(v74, v73);
  DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD **)(v75 + 62984));
  for ( i = (_QWORD *)(W32GetUserSessionState(v77, v76) + 57544); (_QWORD *)*i != i; FreeTimer((struct _HEAD *)(*i - 72LL)) )
    ;
  TerminateDesktopThreads(v79, v78);
  if ( *(_DWORD *)(W32GetUserSessionState(v82, v81) + 68756) )
  {
    if ( *(_DWORD *)(v47 + 68764) )
      bDrvDisconnect(*(_QWORD *)(v47 + 68808), *(_QWORD *)(v47 + 68800), *(_QWORD *)(v47 + 68832));
    else
      GreDrvDisconnect(RemoteContext);
  }
  v85 = W32GetUserSessionState(v84, v83);
  DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD **)(v85 + 19144));
  v88 = W32GetUserSessionState(v87, v86);
  DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD **)(v88 + 62840));
  v91 = W32GetUserSessionState(v90, v89);
  DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD **)(v91 + 19152));
  if ( *(_QWORD *)(W32GetUserSessionState(v93, v92) + 71288) )
  {
    v96 = W32GetUserSessionState(v95, v94);
    ObfDereferenceObject(*(PVOID *)(v96 + 71288));
    *(_QWORD *)(W32GetUserSessionState(v98, v97) + 71288) = 0LL;
  }
  v99 = W32GetUserSessionState(v95, v94);
  HMAssignmentUnlock(v99 + 36256);
  v102 = W32GetUserSessionState(v101, v100);
  HMAssignmentUnlock(v102 + 36264);
  _InterlockedAnd((volatile signed __int32 *)v43 + 132, 0xFFFFF7FF);
  *(_QWORD *)(W32GetUserSessionState(v104, v103) + 18648) = 0LL;
  v106 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
    || (v107 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v107 = 0;
  }
  v108 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v107 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v109 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v105);
    LOBYTE(v110) = v108;
    LOBYTE(v111) = v107;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v111,
      v110,
      *(_QWORD *)(v109 + 69160),
      4,
      20,
      23,
      (__int64)&WPP_11f1f27c4a96353613c59727efb49ec7_Traceguids);
  }
  UserSessionSwitchLeaveCrit(v106);
  if ( !IsCurrentSessionHostServiceSession() )
  {
    EventHandle = 0LL;
    if ( CreateShutdownEvent(L"EventRitExited", 128, &EventHandle) >= 0 )
    {
      ZwSetEvent(EventHandle, 0LL);
      ZwClose(EventHandle);
    }
  }
  HYDRA_HINT(4096LL, v112);
  if ( *(_QWORD *)(W32GetUserSessionState(v114, v113) + 68384) )
  {
    v117 = W32GetUserSessionState(v116, v115);
    KeSetEvent(*(PRKEVENT *)(v117 + 68384), 1, 0);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v116, v115) + 68392) )
  {
    v120 = W32GetUserSessionState(v119, v118);
    KeSetEvent(*(PRKEVENT *)(v120 + 68392), 1, 0);
  }
  return 1LL;
}
