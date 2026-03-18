/*
 * XREFs of ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1402507C4
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1402524BC (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z @ 0x1402AA91C (-xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x140026154 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x140026190 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400262EC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x140034670 (_GetDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetTopLevelWindow @ 0x140038170 (_GetTopLevelWindow.c)
 *     PtInRect @ 0x140044D50 (PtInRect.c)
 *     GetCaptionHeight @ 0x140049968 (GetCaptionHeight.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x14004C394 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     IntersectRect @ 0x140052D08 (IntersectRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1400601D8 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x14009047C (GetMonitorWorkRectForWindow.c)
 *     _MonitorFromPoint @ 0x140091A70 (_MonitorFromPoint.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x14014C174 (-SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x14014C1B4 (-MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x14014C1F8 (-IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qddd @ 0x14016813C (WPP_RECORDER_AND_TRACE_SF_qddd.c)
 *     ?IsGhostWindowClass@@YA_NPEBUtagWND@@@Z @ 0x14016C5AC (-IsGhostWindowClass@@YA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x14018F548 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     GetScreenRectForWindow @ 0x1401DC898 (GetScreenRectForWindow.c)
 *     GetPhysicalScreenRect @ 0x1401E2F60 (GetPhysicalScreenRect.c)
 *     ?AreDockTargetActiveForSnapMoveSize@WindowArrangement@@YA_NXZ @ 0x14021700C (-AreDockTargetActiveForSnapMoveSize@WindowArrangement@@YA_NXZ.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z @ 0x14022027C (-xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140259B58 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x14026B5C0 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?HitTargetAndMonitorFromPoint@@YA_NIUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1402A732C (-HitTargetAndMonitorFromPoint@@YA_NIUtagPOINT@@W4THRESHOLD_SELECTOR@@PEAPEAUtagMONITOR@@PEAW4THR.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1402AA348 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     Feature_FixSizeFromArrangeNearTop__private_IsEnabledDeviceUsageNoInline @ 0x1402AC318 (Feature_FixSizeFromArrangeNearTop__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_ss @ 0x1402AC6DC (WPP_RECORDER_AND_TRACE_SF_ss.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall xxxInitializeMoveSizeData(struct tagWND *a1, struct MOVESIZEDATA *a2, unsigned int a3, int a4)
{
  __int64 v5; // rdx
  char v7; // r13
  __int64 v9; // rcx
  char v10; // di
  bool v11; // si
  __int64 v12; // rbx
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  struct tagTHREADINFO *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // ecx
  int *v20; // r14
  char v21; // r13
  int v22; // edi
  int v23; // r14d
  int v24; // ebx
  int v25; // esi
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  char v29; // si
  char v30; // r13
  char v31; // di
  int WindowState; // eax
  const char *StateString; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  __int64 DesktopWindow; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  _DWORD **v42; // rcx
  __int64 DispInfo; // rax
  int *v44; // rdi
  __int64 v45; // rcx
  struct tagRECT v46; // xmm0
  __int64 v47; // rdx
  __int64 TopLevelWindow; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rsi
  struct tagRECT v52; // xmm0
  __int64 v53; // rbx
  int v54; // eax
  __int64 v55; // rdx
  unsigned int *v56; // rdx
  __int64 v57; // rcx
  BOOL v58; // eax
  int v59; // r8d
  char v60; // di
  bool v61; // si
  __int64 v62; // rax
  int v63; // r8d
  int v64; // edx
  char v65; // di
  bool v66; // si
  __int64 v67; // rax
  int v68; // r8d
  int v69; // edx
  __int64 v70; // rcx
  char v71; // r14
  __int64 v72; // rax
  int v73; // r8d
  int v74; // edx
  __int64 v75; // rax
  __int64 v76; // rcx
  int v77; // eax
  __int64 v78; // rdx
  int v79; // eax
  const struct tagWND *v80; // rdx
  char v81; // r14
  int v82; // edi
  int v83; // esi
  __int64 v84; // rax
  int v85; // r8d
  int v86; // edx
  __int128 v87; // xmm0
  unsigned int v88; // eax
  const struct tagWND *v89; // rdx
  WindowArrangement *v90; // rcx
  char v91; // r14
  _BYTE *v92; // rcx
  bool v93; // al
  int v94; // ecx
  const struct tagWND *v95; // rdx
  WindowArrangement *v96; // rcx
  _BYTE *v97; // rcx
  bool v98; // al
  __int64 v99; // rcx
  int v100; // eax
  int v101; // eax
  __int64 v102; // rax
  __int64 Prop; // rdi
  int v104; // ecx
  unsigned int v105; // eax
  __int128 v106; // xmm0
  int v107; // r13d
  __int64 v108; // rdx
  int v109; // ecx
  unsigned int v110; // eax
  __int64 v111; // rdx
  char v112; // di
  bool v113; // si
  __int64 v114; // rax
  int v115; // r8d
  int v116; // edx
  int v117; // eax
  __int64 v118; // rcx
  bool v119; // si
  int v120; // edi
  __int64 v121; // rax
  int v122; // r8d
  int v123; // edx
  __int64 v124; // rax
  __int64 v125; // rdx
  unsigned int v126; // esi
  unsigned int v127; // edi
  bool v128; // r14
  unsigned int *v129; // rdx
  char v130; // si
  const char *v131; // r13
  __int64 v132; // rax
  int v133; // r8d
  int v134; // edx
  __int64 v135; // r9
  const char *v136; // rax
  bool v137; // al
  __int64 v138; // rdx
  int v139; // eax
  char v140; // r14
  char v141; // si
  int v142; // edi
  __int64 v143; // rax
  int v144; // r8d
  int v145; // edx
  __int64 v146; // r9
  const char *v147; // rax
  int v148; // eax
  int v149; // eax
  char v150; // r12
  char v151; // r14
  int v152; // edi
  int v153; // esi
  __int64 v154; // rax
  int v155; // r8d
  int v156; // edx
  int v157; // [rsp+20h] [rbp-99h]
  int v158; // [rsp+28h] [rbp-91h]
  int v159; // [rsp+30h] [rbp-89h]
  int v160; // [rsp+38h] [rbp-81h]
  bool v161; // [rsp+70h] [rbp-49h]
  unsigned int v162; // [rsp+74h] [rbp-45h]
  unsigned __int64 v163; // [rsp+78h] [rbp-41h]
  __int128 v165; // [rsp+88h] [rbp-31h] BYREF
  struct tagRECT v166; // [rsp+A0h] [rbp-19h] BYREF
  struct tagRECT v167; // [rsp+B0h] [rbp-9h] BYREF

  v162 = a3;
  v5 = 0LL;
  v7 = a3;
  v167 = 0LL;
  v165 = 0LL;
  v9 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v10 = 0;
  }
  v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v12 = *(_QWORD *)a1;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
    LOBYTE(v14) = v11;
    LOBYTE(v15) = v10;
    WPP_RECORDER_AND_TRACE_SF_qddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v15,
      v14,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      1,
      81,
      (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
      v12,
      v7,
      a4,
      SBYTE2(a4));
  }
  v16 = PtiCurrent(v9, v5);
  if ( *((_QWORD *)v16 + 59) == *(_QWORD *)(W32GetUserSessionState(v18, v17) + 18888)
    || (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
  {
    v19 = 16;
  }
  else
  {
    v19 = 0;
  }
  v20 = (int *)((char *)a2 + 120);
  *((_DWORD *)a2 + 50) = v19 | *((_DWORD *)a2 + 50) & 0xFFFFFFEF;
  *(_OWORD *)((char *)a2 + 120) = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  *(_OWORD *)((char *)a2 + 136) = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || (v21 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v21 = 0;
  }
  v161 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v22 = *((_DWORD *)a2 + 33);
    v23 = *((_DWORD *)a2 + 31);
    v24 = *((_DWORD *)a2 + 32);
    v25 = *((_DWORD *)a2 + 30);
    v26 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
    LOBYTE(v27) = v161;
    LOBYTE(v28) = v21;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v28,
      v27,
      *(_QWORD *)(v26 + 69160),
      4,
      1,
      82,
      (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
      v25,
      v23,
      v24,
      v22,
      v24 - v25,
      v22 - v23);
    v20 = (int *)((char *)a2 + 120);
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u )
  {
    v30 = 0;
    v29 = 0;
  }
  else
  {
    v29 = 1;
    v30 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v31 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v31 = 0;
  }
  if ( v29 || v31 )
  {
    WindowState = AdvancedWindowPos::GetWindowState(a1);
    StateString = AdvancedWindowPos::GetStateString(WindowState);
    v36 = W32GetUserSessionState(v35, v34);
    LOBYTE(v37) = v31;
    LOBYTE(v38) = v29;
    WPP_RECORDER_AND_TRACE_SF_s(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v38,
      v37,
      *(_QWORD *)(v36 + 69160),
      5,
      1,
      83,
      (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
      (__int64)StateString);
  }
  *((_DWORD *)a2 + 70) = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( v40 == DesktopWindow )
  {
    LOBYTE(v41) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL);
    if ( (v41 & 8) != 0
      || (v41 & 0x80u) != 0LL
      || (v42 = *(_DWORD ***)(W32GetUserSessionState(v41, v40) + 56968), **v42 > 1u) )
    {
      v44 = (int *)((char *)a2 + 88);
      *(__m128i *)((char *)a2 + 88) = *GetScreenRectForWindow((__m128i *)&v166, a1);
      v46 = (struct tagRECT)*GetPhysicalScreenRect(&v166, v47);
    }
    else
    {
      DispInfo = GetDispInfo(v42);
      v44 = (int *)((char *)a2 + 88);
      *(_OWORD *)((char *)a2 + 88) = *(_OWORD *)GetMonitorWorkRectForWindow(
                                                  (__int64)&v166,
                                                  *(_QWORD *)(DispInfo + 104),
                                                  a1);
      v46 = *(struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(v45) + 104) + 40LL) + 44LL);
    }
    v167 = v46;
  }
  else
  {
    *(_OWORD *)((char *)a2 + 88) = *(_OWORD *)(*(_QWORD *)(v40 + 40) + 104LL);
    TransformRectBetweenCoordinateSpaces((char *)a2 + 88, (char *)a2 + 88, a1, *((_QWORD *)a1 + 13));
    TopLevelWindow = GetTopLevelWindow((__int64)a1);
    if ( TopLevelWindow )
    {
      v49 = *(_QWORD *)(*(_QWORD *)(TopLevelWindow + 40) + 168LL);
      if ( v49 )
      {
        v166 = 0LL;
        if ( (unsigned int)GreGetRgnBox(v49, &v166) )
          IntersectRect((_DWORD *)a2 + 22, (int *)a2 + 22, &v166.left);
      }
    }
    v44 = (int *)((char *)a2 + 88);
    v167 = *(struct tagRECT *)((char *)a2 + 88);
    if ( (unsigned int)IsWindowDesktopComposed(a1) && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2 )
      LogicalToPhysicalDPIRect(&v167, &v167, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), 0LL);
  }
  v50 = *((_QWORD *)a1 + 13);
  HIDWORD(v163) = SHIWORD(a4);
  LODWORD(v163) = (__int16)a4;
  v51 = *(_QWORD *)(*(_QWORD *)(v50 + 40) + 168LL);
  if ( v51 )
  {
    v52 = *(struct tagRECT *)v20;
    v53 = v163;
    *(_QWORD *)&v165 = v163;
    v166 = v52;
    TransformRectBetweenCoordinateSpaces(&v166, &v166, v50, a1);
    TransformPointBetweenCoordinateSpaces(&v165, &v165, *((_QWORD *)a1 + 13), a1);
    v54 = GreRectInRegion(v51, &v166);
    v55 = (unsigned int)v165;
    *((_DWORD *)a2 + 50) = *((_DWORD *)a2 + 50) & 0xFFFFFFBF | (v54 != 0 ? 0 : 0x40);
    v57 = *((_DWORD *)a2 + 50) & 0xFFFEFFFF | ((unsigned int)GrePtInRegion(v51, v55) != 0 ? 0 : 0x10000);
  }
  else
  {
    v53 = v163;
    *((_DWORD *)a2 + 50) = *((_DWORD *)a2 + 50) & 0xFFFFFFBF | ((unsigned int)IntersectRect(&v165, v20, v44) != 0
                                                              ? 0
                                                              : 0x40);
    v58 = PtInRect(v44, v163);
    v57 = v59 & 0xFFFEFFFF | (!v58 ? 0x10000 : 0);
  }
  *((_DWORD *)a2 + 50) = v57;
  if ( (v57 & 0x40) != 0 )
  {
    v57 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (v60 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
    {
      v60 = 0;
    }
    v56 = &WPP_RECORDER_INITIALIZED;
    v61 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v60 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v62 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v63) = v61;
      LOBYTE(v64) = v60;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v64,
        v63,
        *(_QWORD *)(v62 + 69160),
        3,
        1,
        84,
        (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids);
    }
  }
  if ( (*((_DWORD *)a2 + 50) & 0x10000) != 0 )
  {
    v57 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
      || (v65 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u) )
    {
      v65 = 0;
    }
    v66 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v65 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v67 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v56);
      LOBYTE(v68) = v66;
      LOBYTE(v69) = v65;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v69,
        v68,
        *(_QWORD *)(v67 + 69160),
        3,
        1,
        85,
        (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids);
    }
  }
  if ( (*((_DWORD *)a2 + 50) & 0x8000) != 0 )
  {
    v70 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
    {
      v30 = 1;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v71 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v71 = 0;
    }
    if ( v30 || v71 )
    {
      v72 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v56);
      LOBYTE(v73) = v71;
      LOBYTE(v74) = v30;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v74,
        v73,
        *(_QWORD *)(v72 + 69160),
        5,
        1,
        86,
        (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
        v167.left,
        v167.top,
        v167.right,
        v167.bottom,
        LOBYTE(v167.right) - LOBYTE(v167.left),
        LOBYTE(v167.bottom) - LOBYTE(v167.top));
    }
    v75 = W32GetUserSessionState(v70, v56);
    v166 = v167;
    CCursorClip::SetClip(*(CCursorClip **)(v75 + 36240), &v166);
    v30 = 0;
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
  {
    v76 = *(_QWORD *)(W32GetUserSessionState(v57, v56) + 19872);
    v77 = *(_DWORD *)(v76 + 2124);
    *((_DWORD *)a2 + 28) = v77;
    *((_DWORD *)a2 + 26) = v77;
    v79 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v76, v78) + 19872) + 2128LL);
    *((_DWORD *)a2 + 29) = v79;
    *((_DWORD *)a2 + 27) = v79;
  }
  else
  {
    xxxGetMinMaxTrackInfo(a2);
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
    {
      v30 = 1;
    }
    v80 = (const struct tagWND *)&WPP_RECORDER_INITIALIZED;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v81 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v81 = 0;
    }
    if ( v30 || v81 )
    {
      v82 = *((_DWORD *)a2 + 27);
      v83 = *((_DWORD *)a2 + 26);
      v84 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v85) = v81;
      LOBYTE(v86) = v30;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v86,
        v85,
        *(_QWORD *)(v84 + 69160),
        5,
        1,
        87,
        (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
        v83,
        v82);
    }
  }
  v87 = *(_OWORD *)((char *)a2 + 120);
  v88 = *((_DWORD *)a2 + 50) & 0xFFF7FFFC;
  *((_DWORD *)a2 + 62) = 4;
  *((_DWORD *)a2 + 50) = v88 & 0xFF7FFF7F;
  *(_OWORD *)((char *)a2 + 24) = v87;
  *(_OWORD *)((char *)a2 + 40) = v87;
  *(_OWORD *)((char *)a2 + 56) = v87;
  *(_OWORD *)((char *)a2 + 72) = v87;
  v91 = 0;
  if ( !WindowArrangement::SizeWithSnapAllowed(a1, v80)
    || (*((_DWORD *)a2 + 50) & 0x8000) == 0
    || !WindowArrangement::AreDockTargetActiveForSnapMoveSize(v90, (__int64)v89)
    || (v92 = (_BYTE *)*((_QWORD *)a1 + 5), (v92[30] & 4) == 0)
    || (v92[24] & 0x40) != 0
    || (v92[31] & 0x40) != 0
    || (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL) + 30LL) & 1) == 0
    || (v93 = IsGhostWindowClass(a1, (__int64)v89), v94 = 256, v93) )
  {
    v94 = 0;
  }
  *((_DWORD *)a2 + 50) = v94 | *((_DWORD *)a2 + 50) & 0xFFFFFEFF;
  if ( !WindowArrangement::MoveWithArrangementAllowed(a1, v89)
    || (*((_DWORD *)a2 + 50) & 0x8000) == 0
    || !WindowArrangement::AreDockTargetActiveForSnapMoveSize(v96, (__int64)v95)
    || (v97 = (_BYTE *)*((_QWORD *)a1 + 5), (v97[30] & 4) == 0)
    || (v97[24] & 0x40) != 0
    || (v97[31] & 0x40) != 0
    || (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL) + 30LL) & 1) == 0
    || (v98 = IsGhostWindowClass(a1, (__int64)v95), v99 = 512LL, v98) )
  {
    v99 = 0LL;
  }
  v100 = v99 | *((_DWORD *)a2 + 50) & 0xFFFFFDFF;
  *((_DWORD *)a2 + 50) = v100;
  if ( (v100 & 0x300) != 0x300
    && (IsArranged(a1) || WindowArrangement::IsSupported(a1, v95) && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0) )
  {
    v101 = *((_DWORD *)a2 + 50);
    if ( (v101 & 0x200) == 0 )
    {
      v101 |= 0x40200u;
      *((_DWORD *)a2 + 50) = v101;
    }
    if ( (v101 & 0x100) == 0 )
      *((_DWORD *)a2 + 50) = v101 | 0x20100;
  }
  v102 = W32GetUserSessionState(v99, v95);
  Prop = GetProp((__int64)a1, *(unsigned __int16 *)(v102 + 41334), 1u);
  if ( IsArranged(a1) || (v104 = 0, (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0) )
    v104 = 1024;
  v105 = v104 | *((_DWORD *)a2 + 50) & 0xFFFFFBFF;
  *((_DWORD *)a2 + 50) = v105;
  if ( Prop && (v105 & 0x400) != 0 )
    v106 = *(_OWORD *)(Prop + 20);
  else
    v106 = *(_OWORD *)((char *)a2 + 120);
  *(_OWORD *)((char *)a2 + 152) = v106;
  if ( (v105 & 0x300) == 0 )
  {
    v107 = v162;
    *((_QWORD *)a2 + 30) = MonitorFromPoint(v53, 2u, 0);
    goto LABEL_146;
  }
  v107 = v162;
  if ( (v105 & 0x400) == 0 || (v109 = 128, v162 != 9) )
    v109 = 0;
  v110 = v109 | v105 & 0xFFFFFF7F;
  *((_DWORD *)a2 + 50) = v110;
  if ( !Prop )
  {
    if ( (v110 & 0x400) != 0 )
    {
      LODWORD(v165) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5909LL);
    }
    if ( !CHECKPOINT::Restore(*((struct tagWND **)a2 + 2), (const struct tagRECT *)((char *)a2 + 120)) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
        || (v112 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u) )
      {
        v112 = 0;
      }
      v113 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v112 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v114 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v111);
        LOBYTE(v115) = v113;
        LOBYTE(v116) = v112;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v116,
          v115,
          *(_QWORD *)(v114 + 69160),
          2,
          1,
          88,
          (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids);
      }
    }
  }
  HitTargetAndMonitorFromPoint(v162, v53, (*((_DWORD *)a2 + 50) >> 11) & 7, (char *)a2 + 240, (char *)a2 + 248);
  if ( (unsigned int)Feature_FixSizeFromArrangeNearTop__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( IsArranged(a1) )
    {
      v117 = *((_DWORD *)a2 + 50);
      *((_DWORD *)a2 + 62) = 0;
      if ( (v117 & 0x3800) == 0 && v162 == 9 )
        goto LABEL_145;
    }
  }
  else if ( IsArranged(a1) )
  {
    v117 = *((_DWORD *)a2 + 50);
    if ( (v117 & 0x3800) == 0 && v162 == 9 )
    {
      *((_DWORD *)a2 + 62) = 0;
LABEL_145:
      *((_DWORD *)a2 + 50) = v117 & 0xFFFFC7FF | 0x2000;
    }
  }
LABEL_146:
  v118 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
  {
    v91 = 1;
  }
  v119 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
      && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
  if ( v91 || v119 )
  {
    v120 = *((_DWORD *)a2 + 62);
    v121 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v108);
    LOBYTE(v122) = v119;
    LOBYTE(v123) = v91;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v123,
      v122,
      *(_QWORD *)(v121 + 69160),
      5,
      1,
      89,
      (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
      v120);
  }
  *((_DWORD *)a2 + 50) &= ~0x8000000u;
  if ( v107 )
  {
    if ( v107 != 10 )
      goto LABEL_169;
    v107 = 9;
    v162 = 9;
  }
  v124 = W32GetUserSessionState(v118, v108);
  zzzSetCursor(*(struct tagCURSOR **)(v124 + 26848), v125);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
    *((_DWORD *)a2 + 50) |= 1u;
  *((_DWORD *)a2 + 50) |= 2u;
  *((_DWORD *)a2 + 47) = (__int16)a4;
  *((_DWORD *)a2 + 48) = SHIWORD(a4);
  v126 = (*((_DWORD *)a2 + 6) + *((_DWORD *)a2 + 8)) / 2;
  LODWORD(v163) = v126;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 || v107 != 9 )
    HIDWORD(v163) = (*((_DWORD *)a2 + 7) + *((_DWORD *)a2 + 9)) / 2;
  else
    HIDWORD(v163) = (int)GetCaptionHeight((__int64)a1) / 2 + *((_DWORD *)a2 + 7) + 3;
  v53 = v163;
  zzzInternalSetCursorPos(v126, HIDWORD(v163), 1, 0);
  xxxMS_FlushWigglies();
  v118 = *((unsigned int *)a2 + 50);
  if ( (v118 & 0x100) == 0 )
    *((_DWORD *)a2 + 62) = 4;
  LODWORD(v118) = v118 & 0xFFFFFF7F;
  *((_DWORD *)a2 + 50) = v118;
LABEL_169:
  v127 = ((*(_DWORD *)(W32GetUserSessionState(v118, v108) + 66800) & 0x100000) != 0 ? 0x20 : 0) | *((_DWORD *)a2 + 50) & 0xFFFFFFDF;
  *((_DWORD *)a2 + 50) = v127;
  v128 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
  v129 = &WPP_RECORDER_INITIALIZED;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v130 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v130 = 0;
  }
  v131 = "yes";
  if ( v128 || v130 )
  {
    v132 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v133) = v130;
    LOBYTE(v134) = v128;
    v135 = *(_QWORD *)(v132 + 69160);
    v136 = "yes";
    if ( (v127 & 0x20) == 0 )
      v136 = "no";
    WPP_RECORDER_AND_TRACE_SF_s(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v134,
      v133,
      v135,
      5,
      1,
      90,
      (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
      (__int64)v136);
  }
  *((_QWORD *)a2 + 28) = *((_QWORD *)a2 + 30);
  *((_DWORD *)a2 + 58) = *((_DWORD *)a2 + 62);
  *((_QWORD *)a2 + 27) = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL), v129);
  v137 = IsArranged(a1);
  v138 = (v137 << 29) | *((_DWORD *)a2 + 50) & 0xDFFFFFFF;
  v139 = (v138 ^ (v138 ^ (((v137 << 29) | *((_DWORD *)a2 + 50) & 0xDFFFFFFF) >> 1)) & 0x10000000) & 0xFFDFBFFF;
  *((_DWORD *)a2 + 50) = v139;
  if ( (v139 & 2) != 0 )
  {
    *((_DWORD *)a2 + 50) = v139 & 0xFFFFFCFF;
    if ( IsArranged(a1) )
      *((_DWORD *)a2 + 50) |= 0x60300u;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || (v140 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v140 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v141 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v141 = 0;
  }
  if ( v140 || v141 )
  {
    v142 = *((_DWORD *)a2 + 50);
    v143 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v138);
    LOBYTE(v144) = v141;
    LOBYTE(v145) = v140;
    v146 = *(_QWORD *)(v143 + 69160);
    v147 = "yes";
    if ( (v142 & 0x200) == 0 )
      v147 = "no";
    if ( (v142 & 0x100) == 0 )
      v131 = "no";
    WPP_RECORDER_AND_TRACE_SF_ss(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v145,
      v144,
      v146,
      v157,
      v158,
      v159,
      v160,
      (__int64)v131,
      (__int64)v147);
  }
  *((_DWORD *)a2 + 45) = dword_14035C780[v162];
  *((_DWORD *)a2 + 46) = dword_14035C750[v162];
  v148 = dword_14035C7F0[v162];
  if ( v148 != -1 )
    *((_DWORD *)a2 + 42) = *((_DWORD *)a2 + (__int16)v148 + 30) - v163;
  v149 = dword_14035C7C0[v162];
  if ( v149 != -1 )
    *((_DWORD *)a2 + 43) = *((_DWORD *)a2 + (__int16)v149 + 30) - HIDWORD(v163);
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) == 0
    || (v150 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v150 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v151 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v151 = 0;
  }
  if ( v150 || v151 )
  {
    v152 = *((_DWORD *)a2 + 43);
    v153 = *((_DWORD *)a2 + 42);
    v154 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v138);
    LOBYTE(v155) = v151;
    LOBYTE(v156) = v150;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v156,
      v155,
      *(_QWORD *)(v154 + 69160),
      5,
      1,
      92,
      (__int64)&WPP_924099e52c3f3dd40e1f0060f4cc5e6a_Traceguids,
      v153,
      v152);
  }
  *(_QWORD *)((char *)a2 + 252) = v53;
  *((_DWORD *)a2 + 44) = v162;
  *(_OWORD *)((char *)a2 + 292) = 0LL;
  *((_QWORD *)a2 + 39) = 0LL;
  *((_WORD *)a2 + 154) = 0;
  *((_DWORD *)a2 + 72) = 0;
  *((_BYTE *)a2 + 328) = 0;
  *((_DWORD *)a2 + 84) = 0;
  *((_QWORD *)a2 + 43) = 0LL;
}
