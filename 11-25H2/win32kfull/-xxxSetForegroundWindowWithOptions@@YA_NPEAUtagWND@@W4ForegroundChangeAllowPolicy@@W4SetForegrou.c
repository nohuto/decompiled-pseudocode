/*
 * XREFs of ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140279134
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1400268FC (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1401A77E4 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x1401BB244 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A2E8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x14023A8E4 (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ @ 0x14023A9B4 (-xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ.c)
 *     ?xxxSwitchToThisWindow@@YAHPEAUtagWND@@H@Z @ 0x14023CE88 (-xxxSwitchToThisWindow@@YAHPEAUtagWND@@H@Z.c)
 *     NtUserSetForegroundWindow @ 0x14024DA40 (NtUserSetForegroundWindow.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     ?xxxSwitchToThisWindowEx@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z @ 0x140279CB8 (-xxxSwitchToThisWindowEx@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z.c)
 *     ?xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z @ 0x14028B60C (-xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z.c)
 *     NtUserRaiseLowerShellWindow @ 0x14029BDD0 (NtUserRaiseLowerShellWindow.c)
 *     NtUserSetForegroundWindowForApplication @ 0x14029F190 (NtUserSetForegroundWindowForApplication.c)
 *     ?PostAsyncMoveSize@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERATION@@@Z @ 0x1402A7A30 (-PostAsyncMoveSize@MoveSizeApi@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERAT.c)
 *     xxxSysCommand @ 0x1402B6EB4 (xxxSysCommand.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1402C3448 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 *     ?xxxSetForegroundForWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D96B8 (-xxxSetForegroundForWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14001BAD0 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ?_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x14001D2DC (-_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140023794 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     IsImmersiveBandOrShellManaged @ 0x140025D98 (IsImmersiveBandOrShellManaged.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140036D34 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GetNonChildAncestor @ 0x14005E7A4 (GetNonChildAncestor.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1400D897C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     IAMThreadAccessGranted @ 0x14015C7E0 (IAMThreadAccessGranted.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x14018F548 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_DqDDD @ 0x1401CC65C (WPP_RECORDER_AND_TRACE_SF_DqDDD.c)
 *     _anonymous_namespace_::DSW_GetTopLevelCreatorWindow @ 0x140208ED8 (_anonymous_namespace_--DSW_GetTopLevelCreatorWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_DqD @ 0x14020A7FC (WPP_RECORDER_AND_TRACE_SF_DqD.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x140239944 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x14023ABE8 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x14023C19C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxFlashWindow @ 0x140253F78 (xxxFlashWindow.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x14027847C (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline @ 0x14027A134 (Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall xxxSetForegroundWindowWithOptions(__int64 a1, __int64 a2, __int16 a3, char a4)
{
  char v4; // bp
  bool v5; // r15
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  struct tagTHREADINFO *v11; // rbx
  char v12; // r12
  bool v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  bool v19; // r12
  struct tagWND *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct tagWND *v23; // rsi
  bool v24; // r13
  __int64 v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  __int64 v30; // rax
  __int64 v31; // r12
  __int64 v32; // rsi
  bool v33; // r13
  char v34; // bl
  unsigned int *v35; // rdx
  bool v36; // di
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  char v40; // bl
  bool v41; // di
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  __int64 v45; // r9
  const char *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  char v49; // bl
  bool v50; // di
  __int64 v51; // rax
  int v52; // esi
  int v53; // r8d
  int v54; // edx
  __int64 v55; // r9
  const char *v56; // rax
  char v57; // bl
  bool v58; // di
  __int64 v59; // rax
  int v60; // r8d
  int v61; // edx
  int IsEnabledDeviceUsageNoInline; // eax
  PETHREAD *v63; // rdx
  int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rax
  int v67; // eax
  __int64 NonChildAncestor; // rax
  __int64 *TopLevelCreatorWindow; // rax
  bool v70; // r13
  char ThreadId; // di
  __int64 v72; // rsi
  char v73; // bl
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rax
  int v77; // r8d
  int v78; // edx
  bool v79; // bl
  bool v80; // di
  __int64 v81; // rax
  int v82; // r8d
  int v83; // edx
  __int64 v84; // rax
  struct tagTHREADINFO **v85; // rbx
  char v86; // al
  unsigned __int8 v87; // di
  __int64 v88; // rsi
  _DWORD *v89; // rax
  __int64 v90; // rdx
  char v91; // bl
  bool v92; // di
  __int64 v93; // rax
  int v94; // r8d
  int v95; // edx
  char v96; // bl
  bool v97; // di
  __int64 v98; // rax
  int v99; // r8d
  int v100; // edx
  char v101; // bl
  bool v102; // di
  __int64 v103; // rax
  int v104; // r8d
  int v105; // edx
  __int16 v106; // r8
  char v107; // bl
  bool v108; // di
  __int64 v109; // rax
  int v110; // r8d
  int v111; // edx
  char v112; // bl
  bool v113; // di
  __int64 v114; // rax
  int v115; // r8d
  int v116; // edx
  unsigned int v118; // [rsp+20h] [rbp-D8h]
  int v119; // [rsp+28h] [rbp-D0h]
  int v120; // [rsp+30h] [rbp-C8h]
  int v121; // [rsp+38h] [rbp-C0h]
  char v122; // [rsp+71h] [rbp-87h]
  int v123; // [rsp+74h] [rbp-84h]
  __int64 v124; // [rsp+78h] [rbp-80h]
  __int64 v125; // [rsp+88h] [rbp-70h]
  int CanSetForegroundWindow; // [rsp+88h] [rbp-70h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+90h] [rbp-68h] BYREF
  ULONG_PTR v128[11]; // [rsp+A0h] [rbp-58h] BYREF
  bool v129; // [rsp+100h] [rbp+8h]
  unsigned int v130; // [rsp+108h] [rbp+10h]

  v130 = a2;
  v4 = 1;
  v122 = 1;
  v5 = 0;
  v7 = a1;
  v8 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18888);
  v9 = *(_QWORD *)(v7 + 16);
  BugCheckParameter3[0] = v8;
  v125 = *(_QWORD *)(v9 + 472);
  v129 = v125 == v8;
  v123 = a3 & 0x1000;
  v11 = PtiCurrent(v8, v10);
  v124 = (__int64)v11;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || (v12 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v12 = 0;
  }
  v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    PsGetThreadId(**(PETHREAD **)(v7 + 16));
    PsGetThreadId(*(PETHREAD *)v11);
    UserSessionState = W32GetUserSessionState(v15, v14);
    LOBYTE(v17) = v13;
    LOBYTE(v18) = v12;
    WPP_RECORDER_AND_TRACE_SF_DqDDD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v18,
      v17,
      *(_QWORD *)(UserSessionState + 69160));
  }
  v128[0] = -1LL;
  v19 = 0;
  v128[1] = 0LL;
  v20 = _GhostWindowFromHungWindow((const struct tagWND *)v7);
  v23 = v20;
  if ( v20 )
  {
    Win32HM_LockIntoThread<0>((__int64)v11, (__int64)v20, v128);
    v22 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0 )
    {
      v19 = *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    }
    v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v19 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v25 = *(_QWORD *)v7;
      v26 = *(_QWORD *)v23;
      v27 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v21);
      LOBYTE(v28) = v24;
      LOBYTE(v29) = v19;
      WPP_RECORDER_AND_TRACE_SF_qq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v29,
        v28,
        *(_QWORD *)(v27 + 69160),
        4,
        2,
        73,
        (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
        v26,
        v25);
      v11 = (struct tagTHREADINFO *)v124;
    }
    v7 = (__int64)v23;
    v19 = 0;
  }
  if ( v125 == BugCheckParameter3[0] )
  {
    v30 = W32GetUserSessionState(v22, v21);
    v31 = *((_QWORD *)v11 + 59);
    v32 = *(_QWORD *)(v30 + 18888);
    v33 = v32 == v31;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
    {
      v35 = 0LL;
      v34 = 0;
    }
    else
    {
      v34 = 1;
      v35 = 0LL;
    }
    v36 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v34 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v37 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
      LOBYTE(v38) = v36;
      LOBYTE(v39) = v34;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v39,
        v38,
        *(_QWORD *)(v37 + 69160),
        4,
        2,
        74,
        (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
      v35 = 0LL;
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v40 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v40 = 0;
    }
    v41 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v40 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v42 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
      LOBYTE(v43) = v41;
      LOBYTE(v44) = v40;
      v45 = *(_QWORD *)(v42 + 69160);
      v46 = "Synchronously";
      if ( v32 != v31 )
        v46 = "Async";
      WPP_RECORDER_AND_TRACE_SF_s(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v44,
        v43,
        v45,
        4,
        2,
        75,
        (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
        (__int64)v46);
    }
LABEL_96:
    if ( !v129 )
      goto LABEL_142;
    goto LABEL_105;
  }
  CanSetForegroundWindow = anonymous_namespace_::CanSetForegroundWindow((struct tagWND *)v7, v130);
  if ( CanSetForegroundWindow == 2 )
  {
    v48 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v49 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v49 = 0;
    }
    v50 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v49 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    {
      v52 = v123;
    }
    else
    {
      v51 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v47);
      v52 = v123;
      LOBYTE(v53) = v50;
      LOBYTE(v54) = v49;
      v55 = *(_QWORD *)(v51 + 69160);
      v56 = "Remove";
      if ( v123 )
        v56 = "Preserve";
      WPP_RECORDER_AND_TRACE_SF_s(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v54,
        v53,
        v55,
        4,
        2,
        76,
        (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
        (__int64)v56);
    }
    if ( !v52 )
      anonymous_namespace_::RemoveForegroundActivate(v48, v47);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v57 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v57 = 0;
    }
    v58 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v57 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v59 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v47);
      LOBYTE(v60) = v58;
      LOBYTE(v61) = v57;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v61,
        v60,
        *(_QWORD *)(v59 + 69160),
        4,
        2,
        77,
        (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
    }
    IsEnabledDeviceUsageNoInline = Feature_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsageNoInline();
    v63 = (PETHREAD *)v124;
    if ( IsEnabledDeviceUsageNoInline )
    {
      if ( (a3 & 0x400) != 0 )
        v63 = 0LL;
      v64 = xxxSetForegroundWindow2(v7, v63, a3 & 0x7FF);
      v5 = v64 != 0;
      if ( v64 )
        goto LABEL_70;
    }
    else
    {
      if ( (unsigned int)xxxSetForegroundWindow2(v7, (PETHREAD *)v124, a3 & 0x7FF) )
      {
        v5 = 1;
LABEL_70:
        v33 = 0;
        goto LABEL_96;
      }
      v5 = 0;
    }
    if ( *(_QWORD *)(v124 + 496) != *(_QWORD *)(W32GetUserSessionState(v65, v35) + 19144) )
    {
      v66 = *(_QWORD *)(v7 + 40);
      if ( *(char *)(v66 + 19) >= 0 && *(_DWORD *)(v66 + 236) != 15 && (unsigned int)IsImmersiveBandOrShellManaged(v7) )
      {
        LOBYTE(v67) = IAMThreadAccessGranted((const struct tagTHREADINFO *)v124);
        if ( v67 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2470);
        NonChildAncestor = GetNonChildAncestor(v7);
        TopLevelCreatorWindow = (__int64 *)anonymous_namespace_::DSW_GetTopLevelCreatorWindow(NonChildAncestor);
        PostIAMShellHookMessage(0x22u, *TopLevelCreatorWindow);
      }
    }
    goto LABEL_70;
  }
  v122 = 0;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
  {
    v19 = 1;
  }
  v35 = &WPP_RECORDER_INITIALIZED;
  v70 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v19 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    ThreadId = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(v7 + 16));
    v72 = *(_QWORD *)v7;
    v73 = (unsigned __int8)PsGetThreadId(*(PETHREAD *)v11);
    v76 = W32GetUserSessionState(v75, v74);
    LOBYTE(v77) = v70;
    LOBYTE(v78) = v19;
    WPP_RECORDER_AND_TRACE_SF_DqD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v78,
      v77,
      *(_QWORD *)(v76 + 69160),
      v118,
      v119,
      v120,
      v121,
      v73,
      v72,
      ThreadId);
    v35 = &WPP_RECORDER_INITIALIZED;
  }
  if ( (a4 & 1) != 0 )
  {
    v79 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v80 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v79 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v81 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v82) = v80;
      LOBYTE(v83) = v79;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v83,
        v82,
        *(_QWORD *)(v81 + 69160),
        4,
        2,
        79,
        (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
    }
    v84 = GetNonChildAncestor(v7);
    v85 = (struct tagTHREADINFO **)anonymous_namespace_::DSW_GetTopLevelCreatorWindow(v84);
    v86 = IsTrayWindow(v85, 1LL);
    if ( !v86 )
      v85 = (struct tagTHREADINFO **)v7;
    v87 = v86 ^ 1;
    if ( *((_DWORD *)v85[5] + 59) != 15 )
    {
      if ( !(unsigned int)IsImmersiveBandOrShellManaged((__int64)v85) )
      {
        v88 = v124;
        Win32HM_LockIntoThread<0>(v124, (__int64)v85, BugCheckParameter3);
        v89 = (_DWORD *)UPDWORDPointer(8196LL);
        xxxFlashWindow(v85, ((unsigned __int16)*v89 << 16) | (v87 + 2) | 0xCu, 0);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v90);
        goto LABEL_94;
      }
      PostIAMShellHookMessage(0x22u, (__int64)*v85);
    }
  }
  v88 = v124;
LABEL_94:
  if ( CanSetForegroundWindow == 1 )
  {
    v33 = 0;
    goto LABEL_96;
  }
  v33 = *(_QWORD *)(v88 + 472) == *(_QWORD *)(*(_QWORD *)(v7 + 16) + 472LL);
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || (v91 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v91 = 0;
  }
  v92 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v91 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v93 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v35);
    LOBYTE(v94) = v92;
    LOBYTE(v95) = v91;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v95,
      v94,
      *(_QWORD *)(v93 + 69160),
      4,
      2,
      80,
      (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
  }
LABEL_105:
  v35 = &WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || (v96 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v96 = 0;
  }
  v97 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v96 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v98 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
    LOBYTE(v99) = v97;
    LOBYTE(v100) = v96;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v100,
      v99,
      *(_QWORD *)(v98 + 69160),
      4,
      2,
      81,
      (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
    v35 = &WPP_GLOBAL_Control;
  }
  if ( v33 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v101 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v101 = 0;
    }
    v102 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v101 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v103 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v104) = v102;
      LOBYTE(v105) = v101;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v105,
        v104,
        *(_QWORD *)(v103 + 69160),
        4,
        2,
        82,
        (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
    }
    v35 = (unsigned int *)(a3 & 0x100);
    LODWORD(v35) = (unsigned int)v35 | 0x80;
    if ( (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 31LL) & 0xC0) == 0x40 )
      goto LABEL_124;
    v106 = (unsigned __int16)v35 | 2;
    if ( (a3 & 4) == 0 )
      v106 = (__int16)v35;
    if ( !anonymous_namespace_::xxxLocalActivateWindow((struct tagWND *)v7, 0LL, v106) )
    {
LABEL_124:
      v5 = 0;
      goto LABEL_142;
    }
LABEL_133:
    v5 = 1;
    goto LABEL_142;
  }
  if ( v7 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 472LL) + 128LL) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v107 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v107 = 0;
    }
    v108 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v107 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v109 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v110) = v108;
      LOBYTE(v111) = v107;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v111,
        v110,
        *(_QWORD *)(v109 + 69160),
        4,
        2,
        83,
        (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
    }
    goto LABEL_133;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || (v112 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v112 = 0;
  }
  v113 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v112 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v114 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
    LOBYTE(v115) = v113;
    LOBYTE(v116) = v112;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v116,
      v115,
      *(_QWORD *)(v114 + 69160),
      4,
      2,
      84,
      (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids);
  }
  v5 = (unsigned int)PostEventMessageEx(
                       *(struct tagTHREADINFO **)(v7 + 16),
                       *(struct tagQ **)(*(_QWORD *)(v7 + 16) + 472LL),
                       6u,
                       0LL,
                       0,
                       0LL,
                       *(_QWORD *)v7,
                       0LL) != 0;
LABEL_142:
  if ( !v122 || !v5 )
    v4 = 0;
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(v128, (__int64)v35);
  return v4;
}
