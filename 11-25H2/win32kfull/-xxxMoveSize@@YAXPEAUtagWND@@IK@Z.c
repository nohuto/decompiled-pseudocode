/*
 * XREFs of ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1402524BC
 * Callers:
 *     ?xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVESIZE_OPERATION@@@Z @ 0x1402AA1EC (-xxxEnterMoveSizeLoopOnThread@MoveSizeApi@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@UtagPOINT@@W4_MOVES.c)
 *     xxxSysCommand @ 0x1402B6EB4 (xxxSysCommand.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxCallMsgFilter @ 0x14001FA20 (xxxCallMsgFilter.c)
 *     xxxTranslateMessage @ 0x14002187C (xxxTranslateMessage.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x140026154 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x140026190 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetProcessDpiServerInfo @ 0x140042F48 (GetProcessDpiServerInfo.c)
 *     IsToplevelWindowDesktopComposed @ 0x14004A2FC (IsToplevelWindowDesktopComposed.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x14005F7A8 (-zzzShowCursor@@YAH_N@Z.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1400625CC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ClientGetMessageMPH @ 0x140115430 (ClientGetMessageMPH.c)
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 *     xxxDispatchMessage @ 0x140116D64 (xxxDispatchMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_Ddd @ 0x14011AB60 (WPP_RECORDER_AND_TRACE_SF_Ddd.c)
 *     ?IsInsideMPH@@YAHXZ @ 0x140145CE0 (-IsInsideMPH@@YAHXZ.c)
 *     bSetDevDragWidth @ 0x14014AA24 (bSetDevDragWidth.c)
 *     ?DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x14014B874 (-DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     SlowAppThreadInShellFrame @ 0x140151514 (SlowAppThreadInShellFrame.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x140151C1C (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     IsAdaptiveQueueDetachExempted @ 0x140151C68 (IsAdaptiveQueueDetachExempted.c)
 *     xxxWaitMessageEx @ 0x14016BF60 (xxxWaitMessageEx.c)
 *     ?SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z @ 0x14018CBB4 (-SendShrinkWidthToDwm@DWM_ARRANGEMENT_DATA@@QEAAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z @ 0x14018CCC0 (-SetPreviewInsertAfter@DWM_ARRANGEMENT_DATA@@QEAAXPEAUHWND__@@PEBUMOVESIZEDATA@@@Z.c)
 *     ?SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z @ 0x14018D8FC (-SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x14018F548 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     bSetDevDragRect @ 0x1401E08E0 (bSetDevDragRect.c)
 *     ?EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1401E2130 (-EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     DwmAsyncNotifyIsInMoveSizeChange @ 0x140209FAC (DwmAsyncNotifyIsInMoveSizeChange.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x14020A178 (WPP_RECORDER_AND_TRACE_SF_sdddddd.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140218274 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?EndLoop@MoveSize@InputTraceLogging@@SAXPEAUtagWND@@PEBD@Z @ 0x1402191E4 (-EndLoop@MoveSize@InputTraceLogging@@SAXPEAUtagWND@@PEBD@Z.c)
 *     ?StartLoop@MoveSize@InputTraceLogging@@SAXPEAUtagWND@@PEBD@Z @ 0x140223630 (-StartLoop@MoveSize@InputTraceLogging@@SAXPEAUtagWND@@PEBD@Z.c)
 *     ?SnapFurtherFromEdge@WindowArrangement@@YA_NXZ @ 0x140226D4C (-SnapFurtherFromEdge@WindowArrangement@@YA_NXZ.c)
 *     ?FreeMoveSizeData@MOVESIZEDATA@@SAXPEAPEAU1@@Z @ 0x140228654 (-FreeMoveSizeData@MOVESIZEDATA@@SAXPEAPEAU1@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x14022F508 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     TryDetachShellFrame @ 0x14023FB5C (TryDetachShellFrame.c)
 *     ?DisableDwmSwCursorMoveSize@@YAHH@Z @ 0x140250758 (-DisableDwmSwCursorMoveSize@@YAHH@Z.c)
 *     ?EnableDwmSwCursorMoveSize@@YAXPEAH@Z @ 0x140250778 (-EnableDwmSwCursorMoveSize@@YAXPEAH@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1402507C4 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x140251998 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?CreateMoveSizeData@MOVESIZEDATA@@SAPEAU1@PEAUtagWND@@@Z @ 0x14025D700 (-CreateMoveSizeData@MOVESIZEDATA@@SAPEAU1@PEAUtagWND@@@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1402720AC (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline @ 0x140277050 (Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline.c)
 *     ?AdjustProcessPriorityForDrag@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A6AA8 (-AdjustProcessPriorityForDrag@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1402A7DC8 (-ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?SendShellNotificationsOnHardExit@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A803C (-SendShellNotificationsOnHardExit@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402AB0E8 (-xxxQueryShellForSizeCooperation@@YAXPEAUMOVESIZEDATA@@@Z.c)
 */

void __fastcall xxxMoveSize(struct tagWND *a1, __int64 a2, int a3)
{
  unsigned int v4; // esi
  struct tagWND *v5; // r12
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdx
  struct MOVESIZEDATA *MoveSizeData; // rax
  struct MOVESIZEDATA *v13; // r15
  __int64 v14; // rcx
  char v15; // di
  __int64 v16; // rdx
  char v17; // bl
  __int64 UserSessionState; // rax
  int v19; // edx
  int v20; // r8d
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  int v38; // ebx
  __int64 v39; // rdx
  __int64 v40; // rcx
  struct tagWND *v41; // rdx
  __int64 v42; // rdx
  char v43; // si
  char v44; // di
  __int64 v45; // rbx
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  __int64 v49; // rdx
  bool v50; // si
  char v51; // di
  __int64 v52; // rbx
  __int64 v53; // rax
  int v54; // r8d
  int v55; // edx
  __int64 v56; // rdx
  WindowArrangement *v57; // rcx
  char v58; // al
  __int64 v59; // rdx
  bool v60; // si
  __int64 v61; // rcx
  char v62; // bl
  bool v63; // di
  __int64 v64; // rax
  int v65; // r8d
  int v66; // edx
  __int64 v67; // r9
  const char *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rbx
  void *v73; // rax
  int v74; // edi
  int WindowState; // eax
  const char *StateString; // rax
  unsigned int *v77; // rdx
  __int64 v78; // rcx
  char v79; // bl
  int v80; // eax
  __int64 v82; // rdx
  char v83; // di
  __int64 v84; // rax
  int v85; // r8d
  int v86; // edx
  tagQ *v87; // rcx
  bool v88; // al
  int v89; // eax
  struct tagTHREADINFO *v90; // rax
  char v91; // r14
  char v92; // si
  unsigned int v93; // edi
  int v94; // ebx
  __int64 v95; // rax
  int v96; // r8d
  int v97; // edx
  int v98; // eax
  bool v99; // di
  __int64 v100; // rax
  int v101; // r8d
  int v102; // edx
  __int64 v103; // rdx
  __int64 v104; // rdx
  char v105; // di
  __int64 v106; // rax
  int v107; // r8d
  int v108; // edx
  int v109; // esi
  unsigned __int16 v110; // r12
  int v111; // r14d
  unsigned __int16 v112; // r13
  char v113; // di
  char v114; // bl
  __int64 v115; // rax
  int v116; // r8d
  int v117; // edx
  int v118; // eax
  bool v119; // di
  __int64 v120; // rax
  int v121; // r8d
  int v122; // edx
  bool v123; // di
  __int64 v124; // rax
  int v125; // r8d
  int v126; // edx
  int v127; // eax
  __int64 v128; // rcx
  __int64 v129; // r8
  const char *v130; // r13
  char v131; // r15
  bool v132; // r12
  _DWORD *v133; // rax
  int v134; // edi
  int v135; // r14d
  int v136; // ebx
  int v137; // esi
  __int64 v138; // rax
  int v139; // r8d
  int v140; // edx
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // rax
  __int64 v151; // rdx
  struct tagTHREADINFO *v152; // r14
  __int64 v153; // rcx
  __int64 v154; // rax
  __int64 v155; // rdx
  char v156; // si
  char v157; // di
  __int64 v158; // rbx
  __int64 v159; // rax
  int v160; // r8d
  int v161; // edx
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // r8
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v166; // rdx
  struct MOVESIZEDATA *v167; // rdi
  struct MOVESIZEDATA *v168; // rsi
  __int64 v169; // rbx
  __int64 v170; // rdx
  __int64 v171; // rcx
  void *v172; // rax
  __int64 v173; // rdx
  __int64 v174; // rcx
  int v175; // ebx
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // rax
  __int64 v179; // rax
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // rax
  __int64 v183; // rdx
  __int64 v184; // rcx
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // rax
  __int64 v188; // rdx
  struct MOVESIZEDATA *v189; // [rsp+28h] [rbp-A9h]
  __int16 v190; // [rsp+38h] [rbp-99h]
  struct MOVESIZEDATA *v191; // [rsp+88h] [rbp-49h] BYREF
  unsigned int v192; // [rsp+90h] [rbp-41h] BYREF
  int v193; // [rsp+94h] [rbp-3Dh]
  __int64 v194; // [rsp+98h] [rbp-39h] BYREF
  int v195; // [rsp+A0h] [rbp-31h] BYREF
  struct tagTHREADINFO *v196; // [rsp+A8h] [rbp-29h]
  unsigned int v197[4]; // [rsp+B0h] [rbp-21h] BYREF
  unsigned __int64 v198[2]; // [rsp+C0h] [rbp-11h]
  __int128 v199; // [rsp+D0h] [rbp-1h]
  struct MOVESIZEDATA *v200; // [rsp+E0h] [rbp+Fh]
  ULONG_PTR BugCheckParameter3[8]; // [rsp+E8h] [rbp+17h] BYREF
  int v203; // [rsp+140h] [rbp+6Fh]
  int v204; // [rsp+150h] [rbp+7Fh]

  v203 = a2;
  *(_OWORD *)v197 = 0LL;
  v4 = a2;
  v5 = a1;
  *(_OWORD *)v198 = 0LL;
  v199 = 0LL;
  v6 = PtiCurrent((__int64)a1, a2);
  v7 = *((_QWORD *)v5 + 2);
  v8 = (__int64)v6;
  v196 = v6;
  v193 = 0;
  v9 = *((_QWORD *)v6 + 59);
  v195 = 0;
  if ( *(_QWORD *)(v7 + 472) != v9 || *((_QWORD *)v6 + 89) )
    return;
  v10 = *(_QWORD *)(v9 + 120);
  if ( v10 )
  {
    if ( (*(_WORD *)(*(_QWORD *)(v10 + 40) + 42LL) & 0x2FFF) == 0x2A2
      || (v10 = *(_QWORD *)(v10 + 104)) != 0 && (*(_WORD *)(*(_QWORD *)(v10 + 40) + 42LL) & 0x2FFF) == 0x2A2 )
    {
      Win32HM_LockIntoThread<0>((__int64)v6, v10, BugCheckParameter3);
      xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)v10, 335LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v11);
    }
  }
  MoveSizeData = MOVESIZEDATA::CreateMoveSizeData(v5);
  v200 = MoveSizeData;
  v13 = MoveSizeData;
  v191 = MoveSizeData;
  if ( !MoveSizeData )
    return;
  *((_DWORD *)MoveSizeData + 50) &= 0xFFFFC7FF;
  *(_QWORD *)((char *)MoveSizeData + 260) = *(_QWORD *)(v8 + 808);
  AdjustProcessPriorityForDrag(MoveSizeData);
  xxxInitializeMoveSizeData(v5, v13, v4, a3);
  if ( (*((_DWORD *)v13 + 50) & 2) != 0 )
  {
    v204 = 1;
    v14 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u )
    {
      v16 = 0LL;
      v15 = 0;
    }
    else
    {
      v15 = 1;
      v16 = 0LL;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v17 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v17 = 0;
    }
    if ( v15 || v17 )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
      v190 = 98;
LABEL_56:
      LOBYTE(v20) = v17;
      LOBYTE(v19) = v15;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v19,
        v20,
        *(_QWORD *)(UserSessionState + 69160),
        5,
        1,
        v190,
        (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids);
    }
  }
  else
  {
    v21 = *(_DWORD *)(*(_QWORD *)(v8 + 472) + 412LL);
    if ( (v21 & 0x800000) != 0 )
    {
      v204 = 4;
      v14 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u )
      {
        v16 = 0LL;
        v15 = 0;
      }
      else
      {
        v15 = 1;
        v16 = 0LL;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v17 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v17 = 0;
      }
      if ( v15 || v17 )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        v190 = 99;
        goto LABEL_56;
      }
    }
    else if ( (v21 & 0x1000000) != 0 )
    {
      v204 = 8;
      v14 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u )
      {
        v16 = 0LL;
        v15 = 0;
      }
      else
      {
        v15 = 1;
        v16 = 0LL;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v17 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v17 = 0;
      }
      if ( v15 || v17 )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        v190 = 100;
        goto LABEL_56;
      }
    }
    else
    {
      v204 = 2;
      v14 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u )
      {
        v16 = 0LL;
        v15 = 0;
      }
      else
      {
        v15 = 1;
        v16 = 0LL;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v17 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v17 = 0;
      }
      if ( v15 || v17 )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        v190 = 101;
        goto LABEL_56;
      }
    }
  }
  if ( (*((_DWORD *)v13 + 50) & 0x20) != 0 )
  {
    v22 = W32GetUserSessionState(v14, v16);
    *(_DWORD *)(v22 + 66800) |= 0x10000000u;
  }
  else
  {
    v25 = W32GetUserSessionState(v14, v16);
    *(_DWORD *)(v25 + 66800) &= ~0x10000000u;
  }
  if ( (*(_BYTE *)(*((_QWORD *)v5 + 5) + 30LL) & 4) == 0 )
  {
    v26 = W32GetUserSessionState(v24, v23);
    bSetDevDragWidth(*(_QWORD *)(*(_QWORD *)(v26 + 56968) + 48LL), 2);
  }
  v27 = *((_DWORD *)v13 + 44);
  v28 = 2LL;
  if ( v27 != 9 )
    v28 = 0LL;
  NotifyShell::DragSizeInfo(*((_QWORD **)v13 + 2), v28, v204);
  if ( v27 != 9 )
    xxxQueryShellForSizeCooperation(v13);
  if ( *(_QWORD *)(W32GetUserSessionState(v30, v29) + 18888) )
  {
    v34 = *(_QWORD *)(W32GetUserSessionState(v32, v31) + 18888);
    if ( *(_QWORD *)(v34 + 120) )
    {
      v36 = *(_QWORD *)(W32GetUserSessionState(v34, v33) + 18888);
      if ( v36 == *(_QWORD *)(v8 + 472) )
      {
        v38 = 33;
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v36, v35) + 18888) + 120LL) + 16LL) != v8 )
          v38 = 49;
        v40 = *(_QWORD *)(W32GetUserSessionState(49LL, v37) + 18888);
        if ( *(_QWORD *)(*(_QWORD *)(v40 + 120) + 16LL) == v8 )
          v41 = v5;
        else
          v41 = *(struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(v40, v39) + 18888) + 120LL);
        xxxWindowEvent(0x80000004, v41, 0, 2u, v38);
      }
    }
  }
  xxxWindowEvent(0xAu, v5, 0, 0, 0);
  xxxWindowEvent(0x19u, v5, 0, v203, 0);
  xxxDrawDragRectEx(v13, 0LL, 0, (struct tagRECT *)((char *)v13 + 24));
  _InterlockedOr((volatile signed __int32 *)(v8 + 528), 0x10u);
  v198[1] = (*((unsigned __int16 *)v191 + 128) << 16) | *((unsigned __int16 *)v191 + 126);
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || (v43 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v43 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v44 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v44 = 0;
  }
  if ( v43 || v44 )
  {
    v45 = *(_QWORD *)v5;
    v46 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v42);
    LOBYTE(v47) = v44;
    LOBYTE(v48) = v43;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v48,
      v47,
      *(_QWORD *)(v46 + 69160),
      5,
      1,
      102,
      (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
      v45);
  }
  xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)v5, 561LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
  v50 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v51 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v51 = 0;
  }
  if ( v50 || v51 )
  {
    v52 = *(_QWORD *)v5;
    v53 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v49);
    LOBYTE(v54) = v51;
    LOBYTE(v55) = v50;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v55,
      v54,
      *(_QWORD *)(v53 + 69160),
      5,
      1,
      103,
      (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
      v52);
  }
  xxxCapture((struct tagTHREADINFO *)v8, v5, 6);
  if ( (*((_DWORD *)v13 + 50) & 0x300) != 0 )
  {
    v58 = WindowArrangement::SnapFurtherFromEdge(v57, v56);
    v59 = 0LL;
    if ( !v58 )
    {
      v60 = 1;
      goto LABEL_101;
    }
  }
  else
  {
    v59 = 0LL;
  }
  v60 = 0;
LABEL_101:
  v61 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || (v62 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v62 = 0;
  }
  v63 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v62 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v64 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
    LOBYTE(v65) = v63;
    LOBYTE(v66) = v62;
    v67 = *(_QWORD *)(v64 + 69160);
    v68 = "Enabled";
    if ( !v60 )
      v68 = "Disabled";
    WPP_RECORDER_AND_TRACE_SF_s(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v66,
      v65,
      v67,
      4,
      1,
      104,
      (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
      (__int64)v68);
  }
  v69 = W32GetUserSessionState(v61, v59);
  CCursorClip::EnableSpeedBump(*(CCursorClip **)(v69 + 36240), v60);
  zzzShowCursor(1);
  if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)v5) )
  {
    EnableDwmSwCursorMoveSize(&v195, v70);
    v71 = *((_DWORD *)v13 + 50) & 0xFFEFFFFF | ((v195 & 1) << 20);
    *((_DWORD *)v13 + 50) = v71;
  }
  v72 = *(_QWORD *)v5;
  v73 = (void *)ReferenceDwmApiPort(v71, v70);
  v74 = v203;
  DwmAsyncNotifyIsInMoveSizeChange(v73, v72, v204, 1, v203);
  WindowState = AdvancedWindowPos::GetWindowState(v5);
  StateString = AdvancedWindowPos::GetStateString(WindowState);
  InputTraceLogging::MoveSize::StartLoop(v5, StateString);
  if ( (*((_DWORD *)v13 + 50) & 8) != 0 )
    goto LABEL_217;
  while ( 2 )
  {
    v79 = 0;
    if ( *(struct tagWND **)(*(_QWORD *)(v8 + 472) + 112LL) != v5 )
      goto LABEL_167;
    while ( 1 )
    {
      LOBYTE(v80) = IsInsideMPH(v78, (__int64)v77);
      LODWORD(v189) = 1;
      if ( v80
         ? ClientGetMessageMPH(v197, 0LL, 0, 0, 1, 0)
         : (unsigned int)xxxRealInternalGetMessage((__int64)v197, 0LL, 0, 0, (unsigned __int64)v189, 0) )
      {
        break;
      }
      if ( (*((_DWORD *)v13 + 50) & 8) != 0 )
        goto LABEL_166;
      if ( (*(_DWORD *)(v8 + 1360) & 0x40000) == 0 || (unsigned int)IsAdaptiveQueueDetachExempted(v8) )
      {
        if ( !(unsigned int)xxxWaitMessageEx(15615LL, 0LL, 0LL) )
          goto LABEL_166;
      }
      else
      {
        v87 = *(tagQ **)(v8 + 472);
        v192 = 0;
        v88 = tagQ::AreMultipleThreadsAttached(v87);
        v89 = xxxWaitMessageEx(15367LL, v88 ? 200 : 5000, (enum SLEEP_STATUS *)&v192);
        v78 = v192;
        if ( !v89 && !v192 )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
            && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u )
          {
            v79 = 1;
          }
          v99 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v79 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v100 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v77);
            LOBYTE(v101) = v99;
            LOBYTE(v102) = v79;
            WPP_RECORDER_AND_TRACE_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v102,
              v101,
              *(_QWORD *)(v100 + 69160),
              3,
              1,
              107,
              (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids);
          }
LABEL_166:
          v79 = 0;
          goto LABEL_167;
        }
        if ( v192 )
        {
          if ( tagQ::AreMultipleThreadsAttached(*(tagQ **)(v8 + 472)) )
          {
            v90 = SlowAppThreadInShellFrame((struct tagTHREADINFO *)v8, 0LL, 0LL, 1);
            if ( v90 )
              TryDetachShellFrame(v8, (__int64)v90, v192 == 2, 1);
          }
        }
      }
LABEL_143:
      if ( *(struct tagWND **)(*(_QWORD *)(v8 + 472) + 112LL) != v5 )
        goto LABEL_166;
    }
    if ( v197[2] - 512 > 0xE && v197[2] != 35 && v197[2] - 256 > 9 )
    {
      if ( !(unsigned int)xxxCallMsgFilter((__int64)v197, (unsigned int)(v74 != 9) + 3) )
      {
        xxxTranslateMessage((__int64)v197, 0);
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
          || (v83 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v83 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
        {
          v79 = 1;
        }
        if ( v83 || v79 )
        {
          v84 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v82);
          LOBYTE(v85) = v79;
          LOBYTE(v86) = v83;
          WPP_RECORDER_AND_TRACE_SF_d(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v86,
            v85,
            *(_QWORD *)(v84 + 69160),
            5,
            1,
            106,
            (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
            v197[2]);
        }
        _InterlockedOr((volatile signed __int32 *)(v8 + 528), 0x8000u);
        xxxDispatchMessage((struct tagMSG *)v197, v82);
        _InterlockedAnd((volatile signed __int32 *)(v8 + 528), 0xFFFF7FFF);
        v74 = v203;
        v79 = 0;
      }
      goto LABEL_143;
    }
    v77 = (unsigned int *)((char *)v13 + 260);
    *(_QWORD *)((char *)v13 + 260) = *(_QWORD *)(v8 + 808);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (v91 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v91 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v92 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v92 = 0;
    }
    if ( v91 || v92 )
    {
      v93 = *v77;
      v94 = *((_DWORD *)v191 + 66);
      v95 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v77);
      LOBYTE(v96) = v92;
      LOBYTE(v97) = v91;
      WPP_RECORDER_AND_TRACE_SF_Ddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v97,
        v96,
        *(_QWORD *)(v95 + 69160),
        5,
        1,
        105,
        (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
        v197[2],
        v93,
        v94);
      v79 = 0;
    }
    if ( !v193 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v8 + 472) + 412LL) & 0x1800000) != 0 )
      {
        v98 = *((_DWORD *)v13 + 50);
        v193 = 2;
        *((_DWORD *)v13 + 50) = v98 ^ ((unsigned __int16)v98 ^ (unsigned __int16)(v98 + 2048)) & 0x3800;
      }
      else
      {
        v193 = 1;
      }
    }
LABEL_167:
    EnsureDpiMoveSizeDataIsOnCurrentWindowDpiContext(v191, (__int64)v77);
    if ( *(struct tagWND **)(*(_QWORD *)(v8 + 472) + 112LL) == v5 )
    {
      if ( (*((_DWORD *)v13 + 50) & 8) == 0 )
      {
        v104 = v197[2];
        if ( v197[2] == 35 )
        {
          xxxCallHook(2LL, 0LL, 0LL, 5);
          v104 = v197[2];
        }
        if ( (*((_DWORD *)v13 + 50) & 1) != 0
          && !(unsigned int)xxxTrackInitSize((struct tagTHREADINFO **)v5, v104, v198[0], v198[1], v191) )
        {
          break;
        }
        v194 = 0LL;
        if ( (unsigned int)Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline() )
          PhysicalToLogicalDPIPoint(
            &v194,
            (char *)v13 + 260,
            *(unsigned int *)(*((_QWORD *)v5 + 5) + 288LL),
            (char *)v191 + 216);
        else
          v194 = *(_QWORD *)((char *)&v199 + 4);
        v78 = *(_QWORD *)&WPP_GLOBAL_Control;
        v77 = &WPP_GLOBAL_Control;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
          || (v105 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v105 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
        {
          v79 = 1;
        }
        if ( v105 || v79 )
        {
          v106 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
          LOBYTE(v107) = v79;
          LOBYTE(v108) = v105;
          WPP_RECORDER_AND_TRACE_SF_Dd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v108,
            v107,
            *(_QWORD *)(v106 + 69160),
            5,
            1,
            110,
            (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
            v194,
            SBYTE4(v194));
          v77 = &WPP_GLOBAL_Control;
        }
        v109 = *((_DWORD *)v191 + 42);
        v110 = v109 + v194;
        v111 = *((_DWORD *)v191 + 43);
        v112 = v111 + WORD2(v194);
        if ( (*((_DWORD *)v13 + 50) & 1) != 0 )
        {
          v5 = a1;
        }
        else
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
            || (v113 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
          {
            v113 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (v114 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
          {
            v114 = 0;
          }
          if ( v113 || v114 )
          {
            v115 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
            LOBYTE(v116) = v114;
            LOBYTE(v117) = v113;
            WPP_RECORDER_AND_TRACE_SF_Dd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v117,
              v116,
              *(_QWORD *)(v115 + 69160),
              5,
              1,
              111,
              (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
              v109,
              v111);
          }
          v118 = v110;
          v5 = a1;
          xxxMS_TrackMove((__int64)a1, v197[2], v198[0], v118 | (v112 << 16), v191);
        }
        v8 = (__int64)v196;
        v74 = v203;
        if ( (*((_DWORD *)v13 + 50) & 8) != 0 )
          break;
        continue;
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
      {
        v79 = 1;
      }
      v119 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v79 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v120 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v103);
        LOBYTE(v121) = v119;
        LOBYTE(v122) = v79;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v122,
          v121,
          *(_QWORD *)(v120 + 69160),
          4,
          1,
          109,
          (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids);
      }
      *((_DWORD *)v13 + 50) &= ~8u;
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
      {
        v79 = 1;
      }
      v123 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v79 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v124 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v103);
        LOBYTE(v125) = v123;
        LOBYTE(v126) = v79;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v126,
          v125,
          *(_QWORD *)(v124 + 69160),
          4,
          1,
          108,
          (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids);
      }
      xxxMS_TrackMove((__int64)v5, 256LL, 27LL, 1u, v191);
    }
    break;
  }
LABEL_217:
  v127 = AdvancedWindowPos::GetWindowState(v5);
  v130 = AdvancedWindowPos::GetStateString(v127);
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (v128 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v128 & 1) == 0)
    || (v131 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v131 = 0;
  }
  v132 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v131 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v133 = (_DWORD *)*((_QWORD *)a1 + 5);
    v134 = v133[25];
    v135 = v133[23];
    v136 = v133[24];
    v137 = v133[22];
    v138 = W32GetUserSessionState(v128, *(_QWORD *)&WPP_GLOBAL_Control);
    LOBYTE(v139) = v132;
    LOBYTE(v140) = v131;
    WPP_RECORDER_AND_TRACE_SF_sdddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v140,
      v139,
      *(_QWORD *)(v138 + 69160),
      4,
      1,
      112,
      (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
      (__int64)v130,
      v137,
      v135,
      v136,
      v134,
      v136 - v137,
      v134 - v135);
  }
  InputTraceLogging::MoveSize::EndLoop(a1, v130, v129);
  v143 = W32GetUserSessionState(v142, v141);
  CCursorClip::EnableSpeedBump(*(CCursorClip **)(v143 + 36240), 0);
  if ( *(_QWORD *)(W32GetUserSessionState(v145, v144) + 18888)
    && (v149 = *(_QWORD *)(W32GetUserSessionState(v147, v146) + 18888), *(_QWORD *)(v149 + 120)) )
  {
    v150 = W32GetUserSessionState(v149, v148);
    v152 = v196;
    v153 = *(_QWORD *)(v150 + 18888);
    if ( v153 == *((_QWORD *)v196 + 59) )
    {
      v154 = W32GetUserSessionState(v153, v151);
      xxxWindowEvent(0x80000005, *(struct tagWND **)(*(_QWORD *)(v154 + 18888) + 120LL), 0, 2u, 33);
    }
  }
  else
  {
    v152 = v196;
  }
  xxxWindowEvent(0xBu, a1, 0, 0, 0);
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || (v156 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v156 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v157 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v157 = 0;
  }
  if ( v156 || v157 )
  {
    v158 = *(_QWORD *)a1;
    v159 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v155);
    LOBYTE(v160) = v157;
    LOBYTE(v161) = v156;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v161,
      v160,
      *(_QWORD *)(v159 + 69160),
      5,
      1,
      113,
      (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
      v158);
  }
  xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 562LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
  IsEnabledDeviceUsageNoInline = Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline(
                                   v163,
                                   v162,
                                   v164);
  v167 = v200;
  if ( IsEnabledDeviceUsageNoInline )
  {
    v168 = v191;
    if ( (*((_DWORD *)v200 + 50) & 0x1000000) == 0 )
      SendShellNotificationsOnHardExit(v191);
  }
  else if ( (*(_DWORD *)(*((_QWORD *)v200 + 2) + 384LL) & 0x10) != 0 && (*((_DWORD *)v200 + 50) & 0x1000000) != 0 )
  {
    v168 = v191;
  }
  else
  {
    v168 = v191;
    ReportMoveSizeCompletionToShell(v191);
  }
  DisableDwmSwCursorMoveSize((*((_DWORD *)v167 + 50) >> 20) & 1, v166);
  *((_DWORD *)v167 + 50) &= ~0x100000u;
  v169 = *(_QWORD *)a1;
  v172 = (void *)ReferenceDwmApiPort(v171, v170);
  DwmAsyncNotifyIsInMoveSizeChange(v172, v169, v204, 0, v203);
  DWM_ARRANGEMENT_DATA::SetShrinkWidth((struct MOVESIZEDATA *)((char *)v168 + 336), 0LL, v168);
  DWM_ARRANGEMENT_DATA::SendShrinkWidthToDwm((struct MOVESIZEDATA *)((char *)v168 + 336), v168);
  DWM_ARRANGEMENT_DATA::SetPreviewInsertAfter((struct MOVESIZEDATA *)((char *)v168 + 336), 0LL, v168);
  *((_DWORD *)v167 + 50) &= ~0x8000u;
  AdjustProcessPriorityForDrag(v168);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) == 0 )
  {
    v175 = *(_DWORD *)(GetProcessDpiServerInfo(v174) + 4);
    v178 = W32GetUserSessionState(v177, v176);
    bSetDevDragWidth(*(_QWORD *)(*(_QWORD *)(v178 + 56968) + 48LL), v175 + 3);
  }
  v179 = W32GetUserSessionState(v174, v173);
  bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v179 + 56968) + 48LL), 0LL, 0LL, 0);
  _InterlockedAnd((volatile signed __int32 *)v152 + 132, 0xFFFFFFEF);
  if ( (*((_DWORD *)v167 + 50) & 0x20) != 0 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v181, v180) + 43072) )
    {
      v182 = W32GetUserSessionState(v181, v180);
      GreDeleteObject(*(_QWORD *)(v182 + 43072));
      *(_QWORD *)(W32GetUserSessionState(v184, v183) + 43072) = 0LL;
      *(_DWORD *)(W32GetUserSessionState(v186, v185) + 43268) = 0;
    }
  }
  v187 = W32GetUserSessionState(v181, v180);
  *(_DWORD *)(v187 + 66800) &= ~0x10000000u;
  MOVESIZEDATA::FreeMoveSizeData(&v191, v188);
  zzzShowCursor(0);
}
