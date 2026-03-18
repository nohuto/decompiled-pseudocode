/*
 * XREFs of RawInputThread @ 0x140238B50
 * Callers:
 *     <none>
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     xxxRemoveQueueCompletion @ 0x140020350 (xxxRemoveQueueCompletion.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z @ 0x1400D718C (-ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z.c)
 *     IsCurrentSessionServiceSession @ 0x1400D8C14 (IsCurrentSessionServiceSession.c)
 *     TransitionCursorSuppressionState @ 0x140123E50 (TransitionCursorSuppressionState.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x140126CC4 (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012FC60 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?UpdateExternalParameters@InteractiveControlManager@@QEAAJXZ @ 0x14012FCC0 (-UpdateExternalParameters@InteractiveControlManager@@QEAAJXZ.c)
 *     IsRemoteConnection @ 0x1401590F0 (IsRemoteConnection.c)
 *     InitKeyboard @ 0x1401597CC (InitKeyboard.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1401D5A18 (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     ?GetRITWakeReason@@YAHPEAK@Z @ 0x1401E4AB4 (-GetRITWakeReason@@YAHPEAK@Z.c)
 *     ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ @ 0x1401F9344 (-CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ.c)
 *     IsCurrentSessionHostServiceSession @ 0x1401FCC60 (IsCurrentSessionHostServiceSession.c)
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 *     ?WakeRit@Win32k@InputTraceLogging@@SAXK@Z @ 0x14020A714 (-WakeRit@Win32k@InputTraceLogging@@SAXK@Z.c)
 *     CheckPointerDeviceConfiguration @ 0x1402154F8 (CheckPointerDeviceConfiguration.c)
 *     ?SetWindowArrangementHotKeys@@YAXXZ @ 0x140216DA0 (-SetWindowArrangementHotKeys@@YAXXZ.c)
 *     ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x140217664 (-PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z.c)
 *     ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x140218E98 (--_GLegacyInputDispatcher@@QEAAPEAXI@Z.c)
 *     ?SetWinlogonHotKeys@@YAXXZ @ 0x14021D024 (-SetWinlogonHotKeys@@YAXXZ.c)
 *     xxxClientEnableMMCSS @ 0x14021F090 (xxxClientEnableMMCSS.c)
 *     ?TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ @ 0x14021F574 (-TraceLoggingMouseWheelRoutingValueAtStartup@@YAXXZ.c)
 *     RitTakeOver @ 0x140221520 (RitTakeOver.c)
 *     ?InitTimerPowerSaving@@YAXXZ @ 0x140222D8C (-InitTimerPowerSaving@@YAXXZ.c)
 *     ?SetPenHotKeys@@YAXXZ @ 0x1402237BC (-SetPenHotKeys@@YAXXZ.c)
 *     GreStartTimers @ 0x140226CD8 (GreStartTimers.c)
 *     InitMice @ 0x14022FDEC (InitMice.c)
 *     ?Initialize@InkProcessor@@SAJXZ @ 0x1402319E8 (-Initialize@InkProcessor@@SAJXZ.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x140237040 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     ?xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ @ 0x14023A9B4 (-xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ.c)
 *     xxxTimersProc @ 0x140246B40 (xxxTimersProc.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     CreatePointerDeviceProcessEvents @ 0x140271544 (CreatePointerDeviceProcessEvents.c)
 *     ??4?$SGRDPgbFirstConnectionDone@H@@QEAAAEAHAEBH@Z @ 0x1402756B0 (--4-$SGRDPgbFirstConnectionDone@H@@QEAAAEAHAEBH@Z.c)
 *     ?RegisterSystemHotkeys@@YAXXZ @ 0x140275DA4 (-RegisterSystemHotkeys@@YAXXZ.c)
 *     ?SetDebugHotKeys@@YAXXZ @ 0x140275EA0 (-SetDebugHotKeys@@YAXXZ.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x140276FFC (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_ReserveSystemKeyCombination__private_IsEnabledDeviceUsageNoInline @ 0x14027714C (Feature_ReserveSystemKeyCombination__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_win32k_timers_threadlocking__private_IsEnabledDeviceUsageNoInline @ 0x1402771A0 (Feature_Servicing_win32k_timers_threadlocking__private_IsEnabledDeviceUsageNoInline.c)
 *     RegisterCDROMNotify @ 0x14027C4B0 (RegisterCDROMNotify.c)
 *     ?_RegisterHotKey@@YA_NPEAUtagWND@@P6A?AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z @ 0x14028ACB4 (-_RegisterHotKey@@YA_NPEAUtagWND@@P6A-AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z.c)
 *     xxxTimersProc_Old @ 0x14028C0D0 (xxxTimersProc_Old.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void __fastcall RawInputThread(__int64 *a1)
{
  _QWORD *v2; // rsi
  BOOL v3; // eax
  struct _KTHREAD *CurrentThread; // rbx
  BOOL v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 UserSessionState; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 UserGdiSessionState; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v23; // rcx
  __int64 v24; // rdi
  int v25; // ebx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // ebx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  struct _KTIMER *v58; // rax
  __int64 v59; // rdx
  char v60; // r15
  __int64 v61; // rax
  __int64 v62; // rbx
  __int64 v63; // rcx
  __int64 v64; // rdi
  __int64 v65; // rsi
  __int64 v66; // rdx
  __int64 v67; // rax
  PVOID v68; // rbx
  ULONG v69; // edi
  __int64 v70; // rdx
  __int64 v71; // rcx
  struct tagTHREADINFO *v72; // rbx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rax
  struct _KEVENT *v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rcx
  NTSTATUS v82; // ebx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rdx
  HANDLE v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rcx
  __int64 v98; // rbx
  __int64 v99; // rdx
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rdx
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rcx
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // rax
  int v135; // eax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // rcx
  __int64 v141; // rax
  __int64 v142; // rdx
  int v143; // ebx
  __int64 v144; // rcx
  __int64 v145; // rcx
  __int64 v146; // rcx
  __int64 v147; // rax
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // rax
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // rax
  __int64 v156; // rdx
  __int64 v157; // rcx
  InteractiveControlManager *v158; // rax
  __int64 v159; // rdx
  IVContainerForegroundSync *v160; // rcx
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // rax
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // rbx
  __int64 v167; // rdi
  __int64 v168; // rax
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 v171; // rcx
  __int64 v172; // rdx
  __int64 v173; // rcx
  bool v174; // zf
  __int64 v175; // rcx
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // rax
  _BYTE v181[8]; // [rsp+48h] [rbp-69h] BYREF
  PVOID Object; // [rsp+50h] [rbp-61h] BYREF
  LegacyInputDispatcher *v183; // [rsp+58h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-51h] BYREF
  PVOID v185[2]; // [rsp+68h] [rbp-49h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-39h] BYREF
  _QWORD v187[2]; // [rsp+88h] [rbp-29h] BYREF
  __int64 v188; // [rsp+98h] [rbp-19h]
  __int64 v189; // [rsp+A8h] [rbp-9h]
  __int64 v190; // [rsp+B8h] [rbp+7h]
  PVOID Event; // [rsp+C8h] [rbp+17h] BYREF

  DestinationString = 0LL;
  Handle = 0LL;
  *(_OWORD *)v185 = 0LL;
  v183 = 0LL;
  Object = (PVOID)GreGetRemoteContext();
  v2 = Object;
  memset_0(v187, 0, 0x50uLL);
  v3 = IsCurrentSessionServiceSession();
  CurrentThread = KeGetCurrentThread();
  v5 = v3;
  *(_QWORD *)(W32GetUserSessionState(v7, v6) + 18672) = CurrentThread;
  SetThreadName(-2LL, L"Win32k Raw Input Thread");
  v8 = *a1;
  SetThreadBasePriority(KeGetCurrentThread(), 16LL);
  RtlInitUnicodeString(&DestinationString, L"WinSta0_RIT");
  EnterCrit(1LL, 0LL);
  InitKeyboard(v10, v9);
  InitMice(v12, v11);
  UserSessionSwitchLeaveCrit(v13);
  InkProcessor::Initialize(v15, v14);
  LODWORD(CurrentThread) = InitSystemThread(&DestinationString);
  UserSessionState = W32GetUserSessionState(v17, v16);
  v20 = *(_QWORD *)(UserSessionState + 18712);
  if ( (int)CurrentThread < 0 )
    goto LABEL_101;
  v190 = *(_QWORD *)(UserSessionState + 18712);
  UserGdiSessionState = W32GetUserGdiSessionState(v20);
  ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(UserGdiSessionState + 40));
  if ( ProcessWin32Process )
  {
    v23 = -*(_QWORD *)ProcessWin32Process;
    ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
  }
  *(_DWORD *)(ProcessWin32Process + 12) |= 0x40010u;
  v24 = *(_QWORD *)(GetDispInfo(v23) + 104);
  v25 = *(_DWORD *)(*(_QWORD *)(v24 + 40) + 36LL) / 2;
  v27 = *(_QWORD *)(W32GetUserSessionState(v26, (unsigned int)(*(int *)(*(_QWORD *)(v24 + 40) + 36LL) >> 31)) + 19872);
  *(_DWORD *)(v27 + 4960) = v25;
  v28 = *(_DWORD *)(*(_QWORD *)(v24 + 40) + 40LL) / 2;
  v29 = *(_QWORD *)(W32GetUserSessionState(v27, (unsigned int)(*(int *)(*(_QWORD *)(v24 + 40) + 40LL) >> 31)) + 19872);
  *(_DWORD *)(v29 + 4964) = v28;
  v31 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v29, v30) + 19872) + 4960LL);
  *(_QWORD *)(W32GetUserSessionState(v33, v32) + 19184) = v31;
  ClearLogicalCursorPos();
  if ( (unsigned int)Feature_ReserveSystemKeyCombination__private_IsEnabledDeviceUsageNoInline(v35, v34, v36) )
  {
    EnterCrit(1LL, 0LL);
    TransitionCursorSuppressionState(10LL, 1LL);
    if ( !v5 )
      RegisterSystemHotkeys();
  }
  else
  {
    EnterCrit(1LL, 0LL);
    TransitionCursorSuppressionState(10LL, 1LL);
    UserSessionSwitchLeaveCrit(v37);
    EnterCrit(1LL, 0LL);
    if ( !v5 )
    {
      _RegisterHotKey((struct tagWND *)1, 0LL, -7, 0x1008u, 0, 0LL);
      _RegisterHotKey((struct tagWND *)1, 0LL, 61744, 0x1002u, 0x1Bu, 0LL);
      SetDebugHotKeys();
      SetWinlogonHotKeys();
      SetWindowArrangementHotKeys();
      SetPenHotKeys();
    }
  }
  v40 = W32GetUserSessionState(v39, v38);
  CInputGlobals::UpdateLastInputTime(
    *(_QWORD *)(v40 + 3056),
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    14LL);
  UserSessionSwitchLeaveCrit(v41);
  v42 = Win32AllocPoolNonPagedZInit(64LL, 1951101781LL);
  *(_QWORD *)(W32GetUserSessionState(v44, v43) + 57576) = v42;
  if ( !*(_QWORD *)(W32GetUserSessionState(v46, v45) + 57576) )
    goto LABEL_101;
  v47 = W32GetUserSessionState(v20, v19);
  KeInitializeTimer(*(PKTIMER *)(v47 + 57576));
  v188 = *(_QWORD *)(W32GetUserSessionState(v49, v48) + 57576);
  v51 = W32GetUserSessionState(v188, v50);
  if ( !*(_DWORD *)(W32GetUserSessionState(v53, v52) + 68612) || *(_DWORD *)(W32GetUserSessionState(v55, v54) + 68620) )
  {
    v58 = (struct _KTIMER *)Win32AllocPoolNonPagedZInit(64LL, 1951101781LL);
    *(_QWORD *)(v51 + 68944) = v58;
    if ( !v58 )
      goto LABEL_101;
    KeInitializeTimerEx(v58, SynchronizationTimer);
  }
  v189 = *(_QWORD *)(v51 + 68944);
  if ( IsRemoteConnection(v57, v56) )
  {
    v60 = 1;
    v61 = W32GetUserSessionState(v20, v59);
    v62 = *(_QWORD *)(v51 + 68944);
    v63 = *(_QWORD *)(v61 + 56968);
    v64 = *((_QWORD *)Object + 5);
    v65 = *(_QWORD *)(v63 + 16);
    v67 = W32GetUserSessionState(v63, v66);
    if ( !(unsigned int)DrvEscapeRemoteDrivers(v65, *(unsigned __int16 *)(v67 + 68752), v64, 2LL, v62, 8) )
      goto LABEL_101;
    v2 = Object;
  }
  else
  {
    v60 = 0;
  }
  if ( v5 )
  {
    LODWORD(Object) = 1;
    SGRDPgbFirstConnectionDone<int>::operator=(v20, &Object);
  }
  if ( IsCurrentSessionHostServiceSession() )
  {
    Handle = 0LL;
    v69 = 1;
    if ( PoRequestShutdownEvent(&Event) < 0 )
      goto LABEL_101;
    v68 = Event;
  }
  else
  {
    if ( CreateShutdownEvent(L"EventShutDownCSRSS", 0, &Handle) < 0 )
      goto LABEL_101;
    Object = 0LL;
    ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v68 = Object;
    v69 = 2;
    Event = Object;
    v185[1] = Object;
  }
  if ( !v5 )
  {
    CreatePointerDeviceProcessEvents();
    v68 = Event;
  }
  if ( v68 )
  {
    *(_QWORD *)(W32GetUserSessionState(v20, v19) + 18680) = v68;
    v72 = PtiCurrent(v71, v70);
    *(_QWORD *)(W32GetUserSessionState(v74, v73) + 18648) = v72;
    HYDRA_HINT(0x2000LL, v75);
    v78 = W32GetUserSessionState(v77, v76);
    v79 = (struct _KEVENT *)a1[1];
    v187[0] = *(_QWORD *)(*(_QWORD *)(v78 + 18648) + 1608LL);
    KeSetEvent(v79, 1, 0);
    v185[0] = *(PVOID *)(v8 + 56);
    ObReferenceObjectByPointer(v185[0], 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
    do
      v82 = KeWaitForMultipleObjects(v69, v185, WaitAny, WrUserRequest, 0, 0, 0LL, 0LL);
    while ( v82 == 1 && (*(_DWORD *)(W32GetUserSessionState(v81, v80) + 18692) & 2) == 0 );
    ObfDereferenceObject(v185[0]);
    if ( v82 == 1 && (*(_DWORD *)(W32GetUserSessionState(v84, v83) + 18692) & 2) != 0 )
    {
      KeSetEvent((PRKEVENT)v185[1], 1, 0);
      InitiateWin32kCleanup();
      ObfDereferenceObject(v185[1]);
      v86 = Handle;
      if ( Handle )
        ZwClose(Handle);
      v87 = W32GetUserSessionState(v86, v85);
      KeSetEvent(*(PRKEVENT *)(v87 + 18704), 1, 0);
      CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent(v89, v88);
      return;
    }
    if ( (unsigned int)GetRITWakeReason(0LL, v83) )
    {
      v92 = W32GetUserSessionState(v91, v90);
      KeSetEvent(*(PRKEVENT *)(v92 + 18680), 1, 0);
    }
    EnterCrit(1LL, 0LL);
    v96 = *(_QWORD *)(W32GetUserSessionState(v94, v93) + 18648);
    if ( !*(_QWORD *)(v96 + 496) )
    {
      v97 = *(_QWORD *)(W32GetUserSessionState(v96, v95) + 18648);
      v98 = *(_QWORD *)(*(_QWORD *)(v97 + 656) + 16LL);
      v100 = W32GetUserSessionState(v97, v99);
      if ( (int)xxxSwitchDesktop(*(_QWORD *)(*(_QWORD *)(v100 + 18648) + 656LL), v98, 0, 0) >= 0 )
        W32GetUserSessionState(v96, v95);
    }
    v101 = W32GetUserSessionState(v96, v95);
    KeSetEvent(*(PRKEVENT *)(v101 + 18704), 1, 0);
    if ( v5 )
    {
      v124 = W32GetUserSessionState(v103, v102);
      CBaseInput::InitializeSensor(*(CBaseInput **)(v124 + 16840));
      v127 = W32GetUserSessionState(v126, v125);
      CBaseInput::InitializeSensor(*(CBaseInput **)(v127 + 12928));
    }
    else
    {
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v181, 1);
      v106 = W32GetUserSessionState(v105, v104);
      if ( (int)CBaseInput::InitializeSensor(*(CBaseInput **)(v106 + 12928)) >= 0 )
      {
        if ( v60 )
        {
          EnterCrit(1LL, 0LL);
          v111 = W32GetUserSessionState(v110, v109);
          CBaseInput::HandleTSRequest(*(_QWORD *)(v111 + 12928), 0LL);
          UserSessionSwitchLeaveCrit(v112);
        }
        v113 = W32GetUserSessionState(v108, v107);
        CBaseInput::Read(*(CBaseInput **)(v113 + 12928));
      }
      if ( !(unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline()
        || !*(_DWORD *)(W32GetUserSessionState(v115, v114) + 19096) )
      {
        v116 = W32GetUserSessionState(v115, v114);
        if ( (int)CBaseInput::InitializeSensor(*(CBaseInput **)(v116 + 16840)) >= 0 )
        {
          v117 = W32GetUserSessionState(v115, v114);
          CBaseInput::Read(*(CBaseInput **)(v117 + 16840));
        }
      }
      if ( !v60 && !*(_DWORD *)(W32GetUserSessionState(v115, v114) + 68608) )
      {
        RegisterCDROMNotify();
        LODWORD(Object) = 1;
        SGRDPgbFirstConnectionDone<int>::operator=(v118, &Object);
      }
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v181);
      InitTimerPowerSaving(v120, v119);
      ConfigureRITDelayableTimers(0LL, v121);
    }
    *(_DWORD *)(W32GetUserSessionState(v123, v122) + 18668) = 1;
    GreStartTimers();
    UserSessionSwitchLeaveCrit(v128);
    LegacyInputDispatcher::Create(&v183);
    LegacyInputDispatcher::Initialize(v183, 0, 0, 0x40u, 5u, (struct LegacyDispatcherObject *)v187);
    v131 = W32GetUserSessionState(v130, v129);
    CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(v131 + 12928), v183);
    v134 = W32GetUserSessionState(v133, v132);
    CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(v134 + 16840), v183);
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_56:
        v135 = LegacyInputDispatcher::WaitAndDispatch(v183);
        if ( !v135 )
        {
          EnterCrit(1LL, 0LL);
          xxxRemoveQueueCompletion(v139, v138);
          goto LABEL_90;
        }
        if ( v135 == 4 )
        {
          LODWORD(Object) = 0;
          v141 = W32GetUserSessionState(v137, v136);
          KeClearEvent(*(PRKEVENT *)(v141 + 18680));
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                if ( !(unsigned int)GetRITWakeReason((unsigned int *)&Object, v142) )
                  goto LABEL_56;
                v143 = (int)Object;
                InputTraceLogging::Win32k::WakeRit((unsigned int)Object);
                if ( v143 == 1 )
                {
                  EnterCrit(1LL, 0LL);
                  xxxProcessMouseEvent(v145);
                  goto LABEL_77;
                }
                if ( v143 == 2 )
                {
                  InitiateWin32kCleanup();
                  if ( Handle )
                  {
                    EnterCrit(1LL, 0LL);
                    *(_QWORD *)(W32GetUserSessionState(v170, v169) + 18680) = 0LL;
                    ObfDereferenceObject(Event);
                    UserSessionSwitchLeaveCrit(v171);
                    if ( Handle )
                      ZwClose(Handle);
                  }
                  EnterCrit(1LL, 0LL);
                  CleanupSensorExplicitly(1LL);
                  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
                    v174 = *(_DWORD *)(W32GetUserSessionState(v173, v172) + 19096) == 0;
                  else
                    v174 = *(_DWORD *)(W32GetUserSessionState(v173, v172) + 18744) == 0;
                  if ( v174 )
                    CleanupSensorExplicitly(2LL);
                  UserSessionSwitchLeaveCrit(v175);
                  CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent(v177, v176);
                  if ( v183 )
                    LegacyInputDispatcher::`scalar deleting destructor'(v183);
                  return;
                }
                if ( v143 != 4 )
                  break;
                v147 = W32GetUserSessionState(v144, v142);
                xxxClientEnableMMCSS((**(_DWORD **)(v147 + 19872) >> 12) & 1);
              }
              if ( v143 == 8 )
              {
                EnterCrit(1LL, 0LL);
                RitTakeOver(v149, v148);
                v152 = W32GetUserSessionState(v151, v150);
                CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(v152 + 16840), v183);
                goto LABEL_77;
              }
              if ( v143 != 16 )
                break;
              PrepareForMasterInputThreadTakingOver(v183);
            }
            if ( v143 == 128 )
            {
              EnterCrit(1LL, 0LL);
              v155 = W32GetUserSessionState(v154, v153);
              ZwSetEvent(*(HANDLE *)(v155 + 18696), 0LL);
              goto LABEL_77;
            }
            if ( v143 == 32 )
            {
              EnterCrit(1LL, 0LL);
              goto LABEL_77;
            }
            if ( v143 == 64 )
              break;
            if ( v143 == 256 )
            {
              EnterCrit(1LL, 0LL);
              IVContainerForegroundSync::xxxIVSyncForeground(v160);
LABEL_77:
              UserSessionSwitchLeaveCrit(v146);
            }
          }
          EnterCrit(1LL, 0LL);
          CheckPointerDeviceConfiguration();
          v158 = InteractiveControlManager::Instance(v157, v156);
          InteractiveControlManager::UpdateExternalParameters(v158, v159);
          TraceLoggingMouseWheelRoutingValueAtStartup();
          goto LABEL_77;
        }
        if ( v135 != 2 )
          break;
        EnterCrit(1LL, 0LL);
        v163 = W32GetUserSessionState(v162, v161);
        if ( v60 )
        {
          v165 = *(_QWORD *)(v163 + 56968);
          v166 = v2[5];
          v167 = *(_QWORD *)(v165 + 16);
          v168 = W32GetUserSessionState(v165, v164);
          DrvEscapeRemoteDrivers(v167, *(unsigned __int16 *)(v168 + 68752), v166, 1LL, 0LL, 0);
        }
        else if ( *(_DWORD *)(v163 + 68764) )
        {
          v140 = *(_QWORD *)(v163 + 68808);
          if ( v140 )
            HDXDrvEscape(v140, 1LL, 0LL, 0LL);
        }
LABEL_90:
        UserSessionSwitchLeaveCrit(v140);
      }
      if ( ((v135 - 1) & 0xFFFFFFFD) == 0 )
      {
        EnterCrit(1LL, 0LL);
        if ( (unsigned int)Feature_Servicing_win32k_timers_threadlocking__private_IsEnabledDeviceUsageNoInline() )
          xxxTimersProc();
        else
          xxxTimersProc_Old();
        goto LABEL_90;
      }
    }
  }
LABEL_101:
  CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent(v20, v19);
  if ( v183 )
    LegacyInputDispatcher::`scalar deleting destructor'(v183);
  KeSetEvent((PRKEVENT)a1[1], 1, 0);
  v180 = W32GetUserSessionState(v179, v178);
  KeSetEvent(*(PRKEVENT *)(v180 + 18704), 1, 0);
}
