/*
 * XREFs of xxxSwitchDesktop @ 0x1401FD254
 * Callers:
 *     RemoteRedrawScreen @ 0x14012515C (RemoteRedrawScreen.c)
 *     xxxSwitchDesktopWithFade @ 0x1401FCFD0 (xxxSwitchDesktopWithFade.c)
 *     RemoteDisableScreen @ 0x14022C670 (RemoteDisableScreen.c)
 *     RawInputThread @ 0x140238B50 (RawInputThread.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140242AFC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserSwitchDesktop @ 0x14024F070 (NtUserSwitchDesktop.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140022220 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 *     IsImmersiveBand @ 0x140025E6C (IsImmersiveBand.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14002C0F0 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     zzzUpdateCursorImage @ 0x14004D350 (zzzUpdateCursorImage.c)
 *     ComposeWindow @ 0x14004D908 (ComposeWindow.c)
 *     ?_GetWindowCloakState@@YA?AW4CloakState@@PEBUtagWND@@@Z @ 0x140060190 (-_GetWindowCloakState@@YA-AW4CloakState@@PEBUtagWND@@@Z.c)
 *     SetTimerCoalescingTolerance @ 0x1400D7B20 (SetTimerCoalescingTolerance.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     DwmSyncDesktopSwitch @ 0x1401182EC (DwmSyncDesktopSwitch.c)
 *     zzzEnableDwmPointerSupport @ 0x140122C1C (zzzEnableDwmPointerSupport.c)
 *     ?ResetCursorPointerInternal@@YAXXZ @ 0x140123804 (-ResetCursorPointerInternal@@YAXXZ.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x140128710 (xxxBroadcastDisplaySettingsChange.c)
 *     FreeAllSpbs @ 0x1401563F0 (FreeAllSpbs.c)
 *     IsWindowUnderActiveLockScreen @ 0x140169524 (IsWindowUnderActiveLockScreen.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     UpdateInUserCritUpdatedPointerRedirectedGlobalsOnDesktopSwitch @ 0x1401AA87C (UpdateInUserCritUpdatedPointerRedirectedGlobalsOnDesktopSwitch.c)
 *     IPostQuitMessage @ 0x1401C7DC4 (IPostQuitMessage.c)
 *     bSetDevDragRect @ 0x1401E08E0 (bSetDevDragRect.c)
 *     GreDesktopSwitch @ 0x1401E887C (GreDesktopSwitch.c)
 *     WPP_RECORDER_AND_TRACE_SF_SL @ 0x1401EA798 (WPP_RECORDER_AND_TRACE_SF_SL.c)
 *     zzzDesktopSwitchSideEffects @ 0x1401EEB58 (zzzDesktopSwitchSideEffects.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1401F16E4 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     StopFade @ 0x1401F4CB0 (StopFade.c)
 *     GreLddmProcessDesktopSwitch @ 0x140200528 (GreLddmProcessDesktopSwitch.c)
 *     DrvOcclusionStateChangeNotify @ 0x140201F80 (DrvOcclusionStateChangeNotify.c)
 *     EraseBitmap @ 0x14020DF78 (EraseBitmap.c)
 *     ?ResetPointerDevices@@YAXW4ResetPointerDevicesStrategy@@@Z @ 0x140214F78 (-ResetPointerDevices@@YAXW4ResetPointerDevicesStrategy@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023C19C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x14023F6D4 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     zzzSetDesktop @ 0x140244CA0 (zzzSetDesktop.c)
 *     ClearKeyboardStates @ 0x140247ACC (ClearKeyboardStates.c)
 *     xxxRefreshDisplayOrientation @ 0x14026B590 (xxxRefreshDisplayOrientation.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline @ 0x140273F20 (Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140279134 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14027A230 (Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     _lambda_4804acc9578694ef1c6c05a323239c10_::operator() @ 0x140288384 (_lambda_4804acc9578694ef1c6c05a323239c10_--operator().c)
 *     ?UpdateKeyboardStateOnDesktopSwitch@@YAXW4InputDesktopTransition@@@Z @ 0x1402883CC (-UpdateKeyboardStateOnDesktopSwitch@@YAXW4InputDesktopTransition@@@Z.c)
 *     Feature_ForegroundOnDesktopSwitchEx__private_IsEnabledDeviceUsageNoInline @ 0x140288658 (Feature_ForegroundOnDesktopSwitchEx__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline @ 0x1402886AC (Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UpdateKeyStateDesktopSwitch__private_IsEnabledDeviceUsageNoInline @ 0x140288700 (Feature_UpdateKeyStateDesktopSwitch__private_IsEnabledDeviceUsageNoInline.c)
 *     ?HotKey_InputDesktopSwitching@@YAXPEAUtagDESKTOP@@0@Z @ 0x14028A838 (-HotKey_InputDesktopSwitching@@YAXPEAUtagDESKTOP@@0@Z.c)
 *     ?FreeEdgyFrameData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z @ 0x1402A591C (-FreeEdgyFrameData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z.c)
 */

__int64 __fastcall xxxSwitchDesktop(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // si
  char v12; // bl
  bool v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rcx
  char v21; // bl
  bool v22; // r15
  __int64 v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v31; // rdx
  __int64 v32; // rcx
  HANDLE v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  bool v39; // bl
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  __int64 v43; // rax
  void *v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  struct tagTHREADINFO *v47; // rax
  __int64 v48; // rdx
  ULONG_PTR v49; // r14
  _QWORD *v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  int v69; // r14d
  __int64 v70; // rdx
  __int64 v71; // rcx
  _QWORD **v72; // r14
  _QWORD *i; // rbx
  __int64 v74; // r15
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rbx
  int v86; // r13d
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rax
  struct tagEDGY_DATA *v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rax
  struct tagDESKTOP *v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rbx
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rbx
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rbx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rbx
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 **v132; // rax
  __int64 v133; // rbx
  __int64 v134; // rdx
  __int64 v135; // rdx
  __int64 v136; // rcx
  struct tagWND **v137; // rcx
  __int64 v138; // rdx
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // rax
  __int64 v142; // rdx
  int v143; // r12d
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 **v150; // rax
  __int64 v151; // rbx
  void *v152; // rax
  __int64 **v153; // rax
  __int64 v154; // r15
  _QWORD *v155; // rax
  int v156; // ebx
  __int64 v157; // rax
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r15
  __int64 v161; // rdx
  __int64 *v162; // rax
  __int64 v163; // rcx
  int v164; // r14d
  int v165; // ebx
  unsigned int v166; // ebx
  __int64 v167; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 v171; // rax
  struct tagWND *j; // rbx
  __int64 v173; // rdx
  __int64 v174; // rcx
  int v175; // r8d
  __int64 v176; // r9
  __int64 v177; // r10
  int v178; // r8d
  int v179; // eax
  __int64 v180; // rcx
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // rdx
  __int64 v184; // rdx
  __m128i *v185; // rcx
  __int64 v186; // rdx
  __int64 v187; // rcx
  _QWORD **v188; // r14
  _QWORD *k; // rbx
  __int32 v190; // eax
  __m128i si128; // xmm0
  __int64 v192; // rdx
  __int64 v193; // rcx
  __int64 v194; // rax
  __int64 v195; // rdx
  __int64 v196; // rcx
  __int64 v197; // rdx
  __int64 v198; // rcx
  HANDLE v199; // rbx
  int v200; // eax
  __int64 v201; // rcx
  bool v202; // bl
  __int64 v203; // rax
  int v204; // r8d
  int v205; // edx
  __int64 v206; // rdx
  __int64 v207; // [rsp+58h] [rbp-79h]
  void *Handle; // [rsp+60h] [rbp-71h] BYREF
  __int64 v209; // [rsp+68h] [rbp-69h] BYREF
  __int64 v210; // [rsp+70h] [rbp-61h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+78h] [rbp-59h] BYREF
  PETHREAD Thread; // [rsp+88h] [rbp-49h]
  _QWORD v213[2]; // [rsp+90h] [rbp-41h] BYREF
  __int64 v214; // [rsp+A0h] [rbp-31h]
  _QWORD v215[2]; // [rsp+A8h] [rbp-29h] BYREF
  _QWORD v216[2]; // [rsp+B8h] [rbp-19h] BYREF
  ULONG_PTR v217[2]; // [rsp+C8h] [rbp-9h] BYREF
  _QWORD v218[10]; // [rsp+D8h] [rbp+7h] BYREF
  int v219; // [rsp+140h] [rbp+6Fh] BYREF
  int v220; // [rsp+148h] [rbp+77h]
  int v221; // [rsp+150h] [rbp+7Fh]

  v221 = a4;
  v220 = a3;
  v5 = a1;
  BugCheckParameter3[0] = (ULONG_PTR)PtiCurrent(a1, a2);
  v219 = 0;
  Handle = 0LL;
  if ( !a2 )
    return 3221225473LL;
  if ( a2 == *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19144) )
    return 0LL;
  if ( (*(_DWORD *)(a2 + 48) & 8) != 0 )
    return 3221225485LL;
  if ( !v5 )
    v5 = *(_QWORD *)(a2 + 40);
  LOBYTE(v9) = 4;
  if ( (*(_DWORD *)(v5 + 64) & 4) != 0 )
    return 3221225485LL;
  v207 = *(_QWORD *)(v5 + 56);
  v10 = *(_QWORD *)&WPP_GLOBAL_Control;
  v11 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
    || (v12 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v12 = 0;
  }
  v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    if ( ObQueryNameInfo(a2) && ObQueryNameInfo(a2) != -8 && ObQueryNameInfo(a2) )
      ObQueryNameInfo(a2);
    UserSessionState = W32GetUserSessionState(v15, v14);
    LOBYTE(v17) = v13;
    LOBYTE(v18) = v12;
    WPP_RECORDER_AND_TRACE_SF_SL(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v18,
      v17,
      *(_QWORD *)(UserSessionState + 69160));
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19144) )
  {
    v20 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
      || (v21 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v21 = 0;
    }
    v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    v23 = 0LL;
    if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      if ( ObQueryNameInfo(a2) && ObQueryNameInfo(a2) != -8 )
      {
        if ( ObQueryNameInfo(a2) )
          v26 = ObQueryNameInfo(a2) + 16;
        else
          v26 = 8LL;
        v23 = *(_QWORD *)v26;
      }
      v27 = W32GetUserSessionState(v25, v24);
      LOBYTE(v28) = v22;
      LOBYTE(v29) = v21;
      WPP_RECORDER_AND_TRACE_SF_S(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v29,
        v28,
        *(_QWORD *)(v27 + 69160),
        4,
        3,
        26,
        (__int64)&WPP_e1faede55423302b9088ff86a1f044f2_Traceguids,
        v23);
    }
  }
  CurrentThread = KeGetCurrentThread();
  Thread = CurrentThread;
  if ( a2 != *(_QWORD *)(W32GetUserSessionState(v20, v19) + 62984)
    && !PsIsSystemThread(CurrentThread)
    && a2 != *(_QWORD *)(W32GetUserSessionState(v32, v31) + 62976)
    && (*(_DWORD *)(v5 + 64) & 1) != 0
    && (v220 & 2) == 0 )
  {
    v33 = *(HANDLE *)(W32GetUserSessionState(v32, v31) + 63544);
    if ( PsGetThreadProcessId(CurrentThread) != v33 )
      return 3221225506LL;
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v32, v31) + 62832)
    && (!*(_QWORD *)(W32GetUserSessionState(v35, v34) + 62984)
     || a2 != *(_QWORD *)(W32GetUserSessionState(v37, v36) + 62984)) )
  {
    v38 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v11 = 0;
    }
    v39 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v40 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v36);
      LOBYTE(v41) = v39;
      LOBYTE(v42) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v42,
        v41,
        *(_QWORD *)(v40 + 69160),
        4,
        8,
        27,
        (__int64)&WPP_e1faede55423302b9088ff86a1f044f2_Traceguids);
    }
    v43 = W32GetUserSessionState(v38, v36);
    LockObjectAssignment(v43 + 19152, a2);
    return 0LL;
  }
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v218, (void *)a2);
  ObOpenObjectByPointer((PVOID)a2, 0x200u, 0LL, 0x1F0003u, (POBJECT_TYPE)ExDesktopObjectType, 0, &Handle);
  v44 = Handle;
  v47 = PtiCurrent(v46, v45);
  v49 = BugCheckParameter3[0];
  v213[0] = *((_QWORD *)v47 + 48);
  v50 = v213;
  *((_QWORD *)v47 + 48) = v213;
  v214 = (__int64)AllowDesktopDestruction;
  v213[1] = v44;
  if ( *(_QWORD *)(v49 + 496) )
  {
    zzzDesktopSwitchSideEffects();
    ResetPointerDevices(1LL);
    W32GetUserSessionState(v52, v51);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v50, v48) + 19144) )
  {
    v56 = *(_QWORD *)(W32GetUserSessionState(v54, v53) + 19144);
    if ( *(_QWORD *)(*(_QWORD *)(v56 + 8) + 24LL) )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v56, v55) + 18888) )
      {
        if ( (unsigned int)Feature_ForegroundOnDesktopSwitchEx__private_IsEnabledDeviceUsageNoInline() )
        {
          v63 = *(_QWORD *)(W32GetUserSessionState(v58, v57) + 19144);
          v66 = W32GetUserSessionState(v65, v64);
          tagUNIQUE_WINDOW_HANDLE::Set(
            (tagUNIQUE_WINDOW_HANDLE *)(v63 + 88),
            *(const struct tagWND **)(*(_QWORD *)(v66 + 18888) + 128LL));
        }
        else
        {
          v59 = *(_QWORD *)(W32GetUserSessionState(v58, v57) + 18888);
          v60 = *(_QWORD *)(v59 + 128);
          v62 = W32GetUserSessionState(v59, v61);
          v215[1] = v60;
          v215[0] = *(_QWORD *)(v62 + 19144) + 104LL;
          HMAssignmentLock(v215, 0LL);
        }
        xxxSetForegroundWindow2(0LL, v49, 32LL);
      }
    }
  }
  v69 = 0;
  if ( (unsigned int)Feature_UpdateKeyStateDesktopSwitch__private_IsEnabledDeviceUsageNoInline() )
  {
    UpdateKeyboardStateOnDesktopSwitch(1LL);
  }
  else if ( *(_QWORD *)(W32GetUserSessionState(v68, v67) + 19144) )
  {
    v72 = (_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v71, v70) + 19144) + 176LL);
    for ( i = *v72; i != v72; i = (_QWORD *)*i )
    {
      v74 = *(i - 38);
      if ( (*(_DWORD *)(v74 + 412) & 1) != 0 )
        PostUpdateKeyStateEvent(*(i - 38));
      *(_DWORD *)(v74 + 412) &= ~0x100u;
    }
    v69 = 0;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v71, v70) + 19144)
    && (v76 = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v76, v75) + 19144) + 8LL),
        (*(_DWORD *)(v76 + 64) & 1) != 0) )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v76, v75) + 43000) )
      StopFade(v78, v77);
    v79 = W32GetUserSessionState(v78, v77);
    bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v79 + 56968) + 48LL), 0LL, 0LL, 0);
    v82 = W32GetUserSessionState(v81, v80);
    ComposeWindow(*(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(v82 + 19144) + 8LL) + 24LL), 6);
    v85 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v84, v83) + 56968) + 48LL);
    GreLockDynamicModeChange(v85);
    GreUnlockDynamicModeChange(v85);
    v76 = *(_QWORD *)(v5 + 120);
    if ( v76 )
      EraseBitmap();
    v86 = 1;
  }
  else
  {
    v86 = v219;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v76, v75) + 19144) )
  {
    v90 = *(_QWORD *)(W32GetUserSessionState(v88, v87) + 19144);
    if ( *(_QWORD *)(v90 + 248) )
    {
      v91 = W32GetUserSessionState(v90, v89);
      Edgy::FreeEdgyFrameData(*(Edgy **)(*(_QWORD *)(v91 + 19144) + 248LL), v92);
    }
  }
  if ( (unsigned int)Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline() )
  {
    v95 = W32GetUserSessionState(v94, v93);
    HotKey_InputDesktopSwitching(v96, *(struct tagDESKTOP **)(v95 + 19144));
  }
  if ( (unsigned int)Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline()
    && *(_QWORD *)(W32GetUserSessionState(v98, v97) + 19144) )
  {
    v101 = W32GetUserSessionState(v100, v99);
    *(_DWORD *)(*(_QWORD *)(v101 + 19144) + 48LL) |= 0x1000u;
  }
  if ( (unsigned int)Feature_PreserveActiveHklInDesktopSwitching__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( a2 == *(_QWORD *)(W32GetUserSessionState(v103, v102) + 62976) )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v105, v104) + 14240) )
      {
        v108 = W32GetUserSessionState(v107, v106);
        if ( (*(_BYTE *)(_HMPheFromObject(*(_QWORD *)(v108 + 14240)) + 25) & 1) == 0 )
        {
          v109 = *(_QWORD *)(W32GetUserSessionState(v107, v106) + 14240);
          v112 = W32GetUserSessionState(v111, v110);
          v216[1] = v109;
          v216[0] = v112 + 14248;
          HMAssignmentLock(v216, 0LL);
        }
      }
      if ( *(_QWORD *)(W32GetUserSessionState(v107, v106) + 14272) )
      {
        v113 = W32GetUserSessionState(v103, v102);
        if ( (*(_BYTE *)(_HMPheFromObject(*(_QWORD *)(v113 + 14272)) + 25) & 1) == 0 )
        {
          v114 = *(_QWORD *)(W32GetUserSessionState(v103, v102) + 14272);
          v117 = W32GetUserSessionState(v116, v115);
          v210 = v114;
          v209 = v117 + 14240;
          HMAssignmentLock(&v209, 0LL);
        }
      }
    }
    else
    {
      v118 = *(_QWORD *)(W32GetUserSessionState(v105, v104) + 19144);
      if ( v118 == *(_QWORD *)(W32GetUserSessionState(v120, v119) + 62976) )
      {
        if ( *(_QWORD *)(W32GetUserSessionState(v103, v102) + 14248) )
        {
          v121 = W32GetUserSessionState(v103, v102);
          if ( (*(_BYTE *)(_HMPheFromObject(*(_QWORD *)(v121 + 14248)) + 25) & 1) == 0 )
          {
            v122 = *(_QWORD *)(W32GetUserSessionState(v103, v102) + 14248);
            v125 = W32GetUserSessionState(v124, v123);
            v210 = v122;
            v209 = v125 + 14240;
            HMAssignmentLock(&v209, 0LL);
            v128 = W32GetUserSessionState(v127, v126);
            HMAssignmentUnlock(v128 + 14248);
          }
        }
      }
    }
  }
  v129 = W32GetUserSessionState(v103, v102);
  LockObjectAssignment(v129 + 19144, a2);
  v132 = *(__int64 ***)(*(_QWORD *)(W32GetUserSessionState(v131, v130) + 19144) + 8LL);
  v133 = **v132;
  *(_QWORD *)(W32GetUserSessionState(*v132, v134) + 18656) = v133;
  SynchronizeContext();
  UpdateInUserCritUpdatedPointerRedirectedGlobalsOnDesktopSwitch(v136, v135);
  CitDesktopSwitch();
  v137 = *(struct tagWND ***)(a2 + 8);
  v138 = *((unsigned int *)*v137 + 16);
  if ( (v138 & 1) != 0 )
    ComposeWindow(v137[3], 5);
  FreeAllSpbs((__int64)v137, v138);
  v141 = W32GetUserSessionState(v140, v139);
  v143 = zzzSetDesktop(*(_QWORD *)(v141 + 18648), a2, 0LL);
  if ( v143 >= 0 )
  {
    v144 = *(_QWORD *)(v207 + 24);
    if ( *(_QWORD *)(*(_QWORD *)(v207 + 16) + 472LL) != v144 )
    {
      AllocQueue(0LL, v144);
      tagQ::zzzAttachToQueue(*(tagQ **)(v207 + 24), *(struct tagTHREADINFO **)(v207 + 16), 0LL, 0);
    }
    v143 = zzzSetDesktop(*(_QWORD *)(v207 + 16), a2, 0LL);
    if ( v143 >= 0 )
    {
      v147 = *(_QWORD *)(W32GetUserSessionState(v145, v142) + 19144);
      if ( *(_QWORD *)(*(_QWORD *)(v207 + 16) + 496LL) != v147 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4245LL);
      if ( a2 != *(_QWORD *)(W32GetUserSessionState(v147, v146) + 19144) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4246LL);
      v149 = **(_QWORD **)(a2 + 8);
      if ( (*(_DWORD *)(v149 + 64) & 1) != 0 )
      {
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v219, 1);
        v150 = *(__int64 ***)(a2 + 8);
        v151 = **v150;
        v152 = (void *)UserReferenceDwmApiPort(*v150);
        DwmSyncDesktopSwitch(v152, v151, v221);
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v219);
      }
      if ( !gbIgnoreStressedOutStuff && a2 != *(_QWORD *)(W32GetUserSessionState(v149, v148) + 19144) )
      {
        v219 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4260LL);
      }
      v153 = *(__int64 ***)(a2 + 8);
      v154 = **v153;
      if ( v86
        && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(*v153, v148) + 19144) + 8LL) + 64LL) & 1) != 0 )
      {
        v69 = 1;
      }
      v155 = *(_QWORD **)(a2 + 8);
      v156 = *(_DWORD *)(*v155 + 64LL) & 1;
      v157 = W32GetUserSessionState(*v155, v148);
      GreDesktopSwitch(*(_QWORD *)(*(_QWORD *)(v157 + 56968) + 48LL), v156, v69, v154);
      if ( v86 == (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v159, v158) + 19144) + 8LL) + 64LL) & 1) )
        ResetCursorPointerInternal();
      else
        zzzEnableDwmPointerSupport(*(_DWORD *)(**(_QWORD **)(a2 + 8) + 64LL) & 1, 0LL);
      v160 = BugCheckParameter3[0];
      Win32HM_LockIntoThread<1>(BugCheckParameter3[0], *(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL), (__int64 *)v217);
      GreLddmProcessDesktopSwitch();
      v162 = *(__int64 **)(a2 + 8);
      v163 = *v162;
      v164 = 4 * (*(_DWORD *)(*v162 + 64) & 1);
      if ( !v86
        || (v165 = 9,
            v163 = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v163, v161) + 19144) + 8LL),
            (*(_DWORD *)(v163 + 64) & 1) == 0) )
      {
        v165 = 1;
      }
      v166 = v164 | v165;
      v167 = W32GetUserSessionState(v163, v161);
      GreSuspendDirectDraw(*(_QWORD *)(*(_QWORD *)(v167 + 56968) + 48LL), v166);
      IsEnabledDeviceUsageNoInline = Feature_UpdateKeyStateDesktopSwitch__private_IsEnabledDeviceUsageNoInline();
      xxxSetWindowPos(
        *(struct tagWND **)(*(_QWORD *)(a2 + 8) + 24LL),
        0LL,
        0LL,
        0LL,
        0,
        0,
        IsEnabledDeviceUsageNoInline != 0 ? 339 : 323);
      if ( !gbIgnoreStressedOutStuff && a2 != *(_QWORD *)(W32GetUserSessionState(v170, v169) + 19144) )
      {
        v219 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4329LL);
      }
      v171 = W32GetUserSessionState(v170, v169);
      GreResumeDirectDraw(*(_QWORD *)(*(_QWORD *)(v171 + 56968) + 48LL), v166);
      if ( (unsigned int)Feature_ForegroundOnDesktopSwitchEx__private_IsEnabledDeviceUsageNoInline() )
        j = tagUNIQUE_WINDOW_HANDLE::Get((tagUNIQUE_WINDOW_HANDLE *)(a2 + 88));
      else
        j = *(struct tagWND **)(a2 + 104);
      if ( (unsigned int)Feature_ForegroundOnDesktopSwitchEx__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( !(unsigned __int8)lambda_4804acc9578694ef1c6c05a323239c10_::operator()(v174, j)
          || (unsigned int)IsWindowUnderActiveLockScreen((__int64)j, v173) )
        {
          for ( j = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL) + 112LL);
                j;
                j = (struct tagWND *)*((_QWORD *)j + 11) )
          {
            if ( (unsigned int)IsWindowUnderActiveLockScreen((__int64)j, v173) )
            {
              j = 0LL;
              break;
            }
            if ( (unsigned __int8)lambda_4804acc9578694ef1c6c05a323239c10_::operator()(v180, j) )
              break;
          }
        }
      }
      else if ( !j
             || (*(_BYTE *)(_HMPheFromObject(j) + 25) & 1) != 0
             || (*(_BYTE *)(*((_QWORD *)j + 5) + 232LL) & 0x40) != 0 && (_GetWindowCloakState((__int64)j) & 2) != 0
             || *(_QWORD *)(*(_QWORD *)(a2 + 8) + 176LL) == *(_QWORD *)(*((_QWORD *)j + 2) + 464LL)
             && (_GetWindowCloakState((__int64)j) & 1) != 0 )
      {
        j = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 24LL) + 112LL);
        if ( j )
        {
          while ( !(unsigned int)IsImmersiveBand((__int64)j) )
          {
            if ( v177 == v176 )
              goto LABEL_141;
            if ( (*(_BYTE *)(*((_QWORD *)j + 5) + 232LL) & 0x40) != 0 )
              goto LABEL_142;
LABEL_148:
            if ( (*(_BYTE *)(*((_QWORD *)j + 5) + 31LL) & 0x18) != 0x10 || v175 )
            {
              j = (struct tagWND *)*((_QWORD *)j + 11);
              if ( j )
                continue;
            }
            goto LABEL_161;
          }
          if ( v177 == v176 )
LABEL_141:
            _GetWindowCloakState((__int64)j);
LABEL_142:
          if ( IsWindowCloaked(j) || (v179 = 0, (*(_BYTE *)(*((_QWORD *)j + 5) + 27LL) & 8) != 0) )
            v179 = 1;
          if ( v178 || (v175 = 0, v179) )
            v175 = 1;
          goto LABEL_148;
        }
      }
LABEL_161:
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v217, v173);
      if ( (unsigned int)Feature_ForegroundOnDesktopSwitchEx__private_IsEnabledDeviceUsageNoInline() )
        tagUNIQUE_WINDOW_HANDLE::Clear((tagUNIQUE_WINDOW_HANDLE *)(a2 + 88));
      else
        HMAssignmentUnlock(a2 + 104);
      if ( (unsigned int)Feature_UpdateKeyStateDesktopSwitch__private_IsEnabledDeviceUsageNoInline() )
        UpdateKeyboardStateOnDesktopSwitch(0LL);
      if ( j )
      {
        if ( !gbIgnoreStressedOutStuff
          && *(_QWORD *)(*((_QWORD *)j + 2) + 496LL) != *(_QWORD *)(W32GetUserSessionState(v182, v181) + 19144) )
        {
          v219 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4519LL);
        }
        Win32HM_LockIntoThread<0>(v160, (__int64)j, BugCheckParameter3);
        if ( (unsigned int)Feature_UpdateKeyStateDesktopSwitch__private_IsEnabledDeviceUsageNoInline() )
          xxxSetForegroundWindowWithOptions(j, 31LL, 32LL);
        else
          xxxSetForegroundWindow2(j, v160, 32LL);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v183);
      }
      else
      {
        xxxSetForegroundWindow2(0LL, 0LL, 32LL);
      }
      if ( !(unsigned int)Feature_UpdateKeyStateDesktopSwitch__private_IsEnabledDeviceUsageNoInline() )
      {
        ClearKeyboardStates();
        v188 = (_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v187, v186) + 19144) + 176LL);
        for ( k = *v188; k != v188; k = (_QWORD *)*k )
        {
          v185 = (__m128i *)*(k - 38);
          v190 = v185[25].m128i_i32[3];
          if ( (v190 & 0x100) == 0 )
          {
            si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
            v185[25].m128i_i32[3] = v190 | 0x101;
            v185[14] = si128;
            v185[15] = si128;
            PostUpdateKeyStateEvent(v185);
          }
        }
      }
      v193 = *(_QWORD *)(W32GetUserSessionState(v185, v184) + 19080);
      if ( v193 )
        IPostQuitMessage(v193, 0);
      v194 = W32GetUserSessionState(v193, v192);
      KePulseEvent(*(PRKEVENT *)(v194 + 62968), 1, 0);
      xxxWindowEvent(0x20u, 0LL, 0, 0, 6);
      if ( (unsigned int)Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline() )
        zzzUpdateCursorImage(v196, v195);
      if ( a2 == *(_QWORD *)(W32GetUserSessionState(v196, v195) + 62976) )
      {
        v199 = *(HANDLE *)(W32GetUserSessionState(v198, v197) + 63544);
        if ( PsGetThreadProcessId(Thread) == v199 && (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 64LL) & 1) != 0 )
          SetTimerCoalescingTolerance(3);
      }
      v200 = *(_DWORD *)(a2 + 48);
      if ( (v200 & 0x20) != 0 )
      {
        v201 = *(_QWORD *)(a2 + 8);
        if ( v201 )
        {
          if ( *(_QWORD *)(v201 + 24) )
          {
            *(_DWORD *)(a2 + 48) = v200 & 0xFFFFFFDF;
            xxxBroadcastDisplaySettingsChange(a2, 1, 0, 0);
          }
        }
      }
      DrvOcclusionStateChangeNotify();
      xxxRefreshDisplayOrientation();
    }
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 4) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v11 = 0;
  }
  v202 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v203 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v142);
    LOBYTE(v204) = v202;
    LOBYTE(v205) = v11;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v205,
      v204,
      *(_QWORD *)(v203 + 69160),
      4,
      3,
      28,
      (__int64)&WPP_e1faede55423302b9088ff86a1f044f2_Traceguids,
      v143);
  }
  PopAndFreeW32ThreadLock((__int64)v213, v142);
  v214 = -1LL;
  if ( v218[2] != -1LL )
    PopAndFreeW32ThreadLock((__int64)v218, v206);
  return (unsigned int)v143;
}
