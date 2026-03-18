/*
 * XREFs of ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x14020C498
 * Callers:
 *     ?xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1402C7654 (-xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@.c)
 *     ?xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1402C8BC0 (-xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x140026154 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x140026190 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEBUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x14014D338 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x14014DDEC (_anonymous_namespace_--xxxNormalizeRect.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014EE58 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x14018F548 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x1401DCD80 (--1-$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x14020A178 (WPP_RECORDER_AND_TRACE_SF_sdddddd.c)
 *     ?GetCurrentMonitorDataFromId@CMonitorTopology@@SAPEBUMonitorData@1@AEBUMonitorId@1@_N@Z @ 0x14020CDA0 (-GetCurrentMonitorDataFromId@CMonitorTopology@@SAPEBUMonitorData@1@AEBUMonitorId@1@_N@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A2E8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1402593D8 (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x14026BFEC (-LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     ?IsInterceptWindow@WindowActions@@YA_NPEBUtagWND@@@Z @ 0x14026EA44 (-IsInterceptWindow@WindowActions@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402AB3F4 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@CMonitorTopology@@W4State@AdvancedWindowPos@@UtagRECT@@4W4ApplyOption@7@PEAK@Z @ 0x1402D12FC (-xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@.c)
 *     _anonymous_namespace_::GetArrangedOptions @ 0x1402D4544 (_anonymous_namespace_--GetArrangedOptions.c)
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x1402DCC18 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

char __fastcall AdvancedWindowPos::xxxRestoreToPosAndState(
        WindowActions *a1,
        __int64 a2,
        unsigned int a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        int a6,
        int *a7)
{
  struct tagRECT *v7; // r14
  WindowActions *v8; // r15
  __int64 v9; // rdi
  const struct CMonitorTopology::MonitorData *CurrentMonitorDataFromId; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rax
  const struct tagWND *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct tagRECT v19; // xmm1
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct tagTHREADINFO *v22; // rax
  char v24; // r12
  char v25; // al
  char v26; // bl
  _DWORD *v27; // rax
  int v28; // esi
  int v29; // r15d
  int v30; // edi
  int v31; // r14d
  const char *StateString; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 UserSessionState; // rax
  int v36; // r8d
  int v37; // edx
  __int64 v38; // rcx
  struct tagRECT *v39; // rax
  struct tagRECT *v40; // rax
  char v41; // r8
  struct tagRECT v42; // xmm6
  unsigned __int16 v43; // bx
  __int64 *v44; // rax
  char v45; // al
  char v46; // al
  LONG bottom; // edi
  LONG top; // r14d
  LONG right; // ebx
  LONG left; // esi
  __int64 v51; // rax
  int v52; // r8d
  int v53; // edx
  char v54; // di
  bool v55; // si
  const char *v56; // rbx
  __int64 v57; // rax
  int v58; // r8d
  int v59; // edx
  int ArrangedOptions; // eax
  struct tagRECT *v61; // rax
  char v62; // r14
  struct tagRECT *v63; // rax
  __int64 v64; // r8
  __int64 v65; // rax
  __int64 Prop; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  char v69; // al
  LONG v70; // edi
  LONG v71; // r14d
  LONG v72; // ebx
  LONG v73; // esi
  __int64 v74; // rax
  int v75; // r8d
  int v76; // edx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rax
  CHECKPOINT *v80; // rax
  bool v81; // di
  __int64 v82; // rax
  int v83; // r8d
  int v84; // edx
  struct tagRECT v85; // xmm6
  __int64 v86; // rcx
  int WindowState; // esi
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v88; // r8
  char v89; // di
  const char *v90; // rax
  int v91; // r8d
  int v92; // edx
  int v93; // r9d
  int *v94; // rbx
  char v95; // r13
  _DWORD *v96; // rax
  int v97; // esi
  int v98; // r15d
  int v99; // edi
  int v100; // r14d
  int v101; // eax
  const char *v102; // rbx
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rax
  int v106; // r8d
  int v107; // edx
  char v108; // [rsp+80h] [rbp-80h]
  char v109; // [rsp+80h] [rbp-80h]
  bool v110; // [rsp+81h] [rbp-7Fh]
  char v111; // [rsp+81h] [rbp-7Fh]
  char v112; // [rsp+81h] [rbp-7Fh]
  bool v113; // [rsp+82h] [rbp-7Eh]
  bool v114; // [rsp+82h] [rbp-7Eh]
  unsigned int v115; // [rsp+88h] [rbp-78h] BYREF
  struct tagRECT *v116; // [rsp+90h] [rbp-70h]
  int *v117; // [rsp+98h] [rbp-68h]
  __int64 v118; // [rsp+A0h] [rbp-60h]
  struct tagRECT v119; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT v120; // [rsp+C0h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+D0h] [rbp-30h] BYREF
  __m128i v122; // [rsp+E0h] [rbp-20h] BYREF
  struct tagRECT v123; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v124; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v125; // [rsp+108h] [rbp+8h]
  int v126; // [rsp+10Ch] [rbp+Ch]
  struct tagRECT v127; // [rsp+110h] [rbp+10h]
  int v128; // [rsp+120h] [rbp+20h]

  v7 = a5;
  v8 = a1;
  v9 = a2;
  *(_QWORD *)&v119.left = a1;
  v122.m128i_i64[0] = a2;
  v115 = a3;
  v116 = a5;
  v117 = a7;
  CurrentMonitorDataFromId = CMonitorTopology::GetCurrentMonitorDataFromId(
                               (const struct CMonitorTopology::MonitorId *)(a2 + 48),
                               0);
  v12 = ValidateHmonitor(*(_QWORD *)CurrentMonitorDataFromId);
  v118 = v12;
  v15 = PtiCurrent(v14, v13);
  Win32HM_LockIntoThread<1>((__int64)v15, v12, (__int64 *)BugCheckParameter3);
  if ( WindowActions::IsInterceptWindow(v8, v16) )
  {
    v19 = *a4;
    v122 = *(__m128i *)a5;
    v119 = v19;
    WindowActions::xxxInterceptRestoreToPosAndState(v18, v12, v9, v115, &v119, &v122, a6, a7);
    v22 = PtiCurrent(v21, v20);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v22, BugCheckParameter3);
    return 1;
  }
  v24 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v26 = 0;
    v25 = 0;
  }
  else
  {
    v25 = 1;
    v26 = 0;
  }
  v108 = v25;
  v110 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v25 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v27 = *(_DWORD **)(v12 + 40);
    v28 = v27[14];
    v29 = v27[12];
    v30 = v27[13];
    v31 = v27[11];
    StateString = AdvancedWindowPos::GetStateString(v115);
    UserSessionState = W32GetUserSessionState(v34, v33);
    LOBYTE(v36) = v110;
    LOBYTE(v37) = v108;
    WPP_RECORDER_AND_TRACE_SF_sdddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v37,
      v36,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      4,
      46,
      (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
      (__int64)StateString,
      v31,
      v29,
      v30,
      v28,
      v30 - v31,
      v28 - v29);
    v8 = *(WindowActions **)&v119.left;
    v26 = 0;
    v9 = v122.m128i_i64[0];
    v12 = v118;
    v7 = v116;
  }
  v38 = v115;
  if ( !v115 )
  {
    v39 = (struct tagRECT *)anonymous_namespace_::xxxNormalizeRect((__int64)&v120, v8, (__int64)a4, v12, v9, 1);
    v38 = 0LL;
    *a4 = *v39;
  }
  if ( (((_DWORD)v38 - 1) & 0xFFFFFFFD) == 0 )
  {
    v40 = (struct tagRECT *)anonymous_namespace_::xxxNormalizeRect((__int64)&v120, v8, (__int64)v7, v12, v9, 1);
    v38 = v115;
    *v7 = *v40;
  }
  v41 = 0;
  if ( (_DWORD)v38 == 3 )
  {
    v42 = *a4;
    v43 = *(_WORD *)(v9 + 40);
    v122 = 0LL;
    v44 = (__int64 *)CMonitorTopology::MonitorData::LogicalWorkArea((CMonitorTopology::MonitorData *)v9, &v123, v8);
    v120 = v42;
    v45 = CallShell::xxxMigrateWindowHandler(
            (struct tagRECT *)v8,
            0,
            v44,
            (__int64 *)(v9 + 24),
            v43,
            (struct tagWND *)&v120,
            v12,
            &v122,
            &v115,
            v117);
    v26 = 0;
    if ( !v45 )
    {
      ArrangedOptions = anonymous_namespace_::GetArrangedOptions(
                          (struct tagWND *)a4,
                          v8,
                          (CMonitorTopology::MonitorData *)v9);
      v61 = (struct tagRECT *)anonymous_namespace_::xxxNormalizeRect(
                                (__int64)&v123,
                                v8,
                                (__int64)a4,
                                v12,
                                v9,
                                ArrangedOptions | 1u);
      v41 = 0;
      *a4 = *v61;
      goto LABEL_36;
    }
    v38 = v115;
    if ( v115 != 3 )
    {
      v17 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v54 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v54 = 0;
      }
      v55 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v54 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v56 = "maximized";
        if ( v115 != 1 )
          v56 = "restored";
        v57 = W32GetUserSessionState(v115, *(_QWORD *)&WPP_GLOBAL_Control);
        LOBYTE(v58) = v55;
        LOBYTE(v59) = v54;
        WPP_RECORDER_AND_TRACE_SF_s(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v59,
          v58,
          *(_QWORD *)(v57 + 69160),
          4,
          4,
          48,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
          (__int64)v56);
        v38 = v115;
        v26 = 0;
      }
      a6 |= 0x10u;
      v41 = 0;
      *a4 = *v7;
      goto LABEL_37;
    }
    v41 = 1;
    *a4 = (struct tagRECT)v122;
    v17 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v46 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v46 = 0;
    }
    v111 = v46;
    LOBYTE(v17) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    v113 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v46 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      bottom = a4->bottom;
      top = a4->top;
      right = a4->right;
      left = a4->left;
      v51 = W32GetUserSessionState(v38, v17);
      LOBYTE(v52) = v113;
      LOBYTE(v53) = v111;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v53,
        v52,
        *(_QWORD *)(v51 + 69160),
        4,
        4,
        47,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
        left,
        top,
        right,
        bottom,
        right - left,
        bottom - top);
      v41 = 1;
      v26 = 0;
LABEL_36:
      v38 = v115;
    }
  }
LABEL_37:
  v109 = 1;
  v62 = 1;
  if ( (_DWORD)v38 == 3 )
  {
    if ( !v41 )
    {
      v63 = WindowMargins::ReduceRect(
              (WindowMargins *)&v123,
              (struct tagRECT *)v8,
              (const struct tagWND *)a4,
              (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)(v118 + 40) + 60LL));
      v64 = *((_QWORD *)v8 + 5);
      *a4 = *v63;
      LogicalToPhysicalDPIRect(a4, a4, *(unsigned int *)(v64 + 288), 0LL);
    }
    v65 = W32GetUserSessionState(v38, v17);
    Prop = GetProp((__int64)v8, *(unsigned __int16 *)(v65 + 41334), 1u);
    if ( Prop )
      *(_DWORD *)(Prop + 16) &= 0xFFFFFFF5;
    v68 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v69 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v69 = 0;
    }
    v112 = v69;
    v114 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v69 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v70 = a4->bottom;
      v71 = a4->top;
      v72 = a4->right;
      v73 = a4->left;
      LOBYTE(v68) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      v74 = W32GetUserSessionState(v68, v67);
      LOBYTE(v75) = v114;
      LOBYTE(v76) = v112;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v76,
        v75,
        *(_QWORD *)(v74 + 69160),
        4,
        4,
        49,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
        v73,
        v71,
        v72,
        v70,
        v72 - v73,
        v70 - v71);
      v26 = 0;
      v62 = 1;
    }
    if ( (unsigned __int8)WindowArrangement::xxxSetSnapArrangementPos(v8, a4, 2LL, (unsigned int)*v117) )
    {
      v79 = W32GetUserSessionState(v78, v77);
      v80 = (CHECKPOINT *)GetProp((__int64)v8, *(unsigned __int16 *)(v79 + 41334), 1u);
      if ( v80 )
        CHECKPOINT::SetNormalRect(v80, v8, v116, 0);
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u )
      {
        v26 = 1;
      }
      v81 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v26 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v82 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v77);
        LOBYTE(v83) = v81;
        LOBYTE(v84) = v26;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v84,
          v83,
          *(_QWORD *)(v82 + 69160),
          2,
          7,
          50,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
      }
      v62 = 0;
      v109 = 0;
    }
  }
  else
  {
    if ( (_DWORD)v38 == 1 )
      a4 = v116;
    v85 = *a4;
    WindowState = AdvancedWindowPos::GetWindowState(v8);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (v86 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v86 & 8) == 0)
      || (v89 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v89 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
      && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v26 = 1;
    }
    if ( v89 || v26 )
    {
      W32GetUserSessionState(v86, *(_QWORD *)&WPP_GLOBAL_Control);
      v90 = AdvancedWindowPos::GetStateString(WindowState);
      LOBYTE(v91) = v26;
      LOBYTE(v92) = v89;
      WPP_RECORDER_AND_TRACE_SF_s(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v92,
        v91,
        v93,
        5,
        4,
        51,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
        (__int64)v90);
    }
    v94 = v117;
    v125 = v115;
    v126 = a6;
    v128 = *v117;
    v124 = 0LL;
    v127 = v85;
    AdvancedWindowPos::xxxApplyWindowPos(v8, (struct tagWND *)&v124, v88);
    if ( WindowState == 3 )
      NotifyShell::ArrangementCompleted(v8, (unsigned int)*v94, 2LL);
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v95 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v95 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v24 = 0;
  }
  if ( v95 || v24 )
  {
    v96 = (_DWORD *)*((_QWORD *)v8 + 5);
    v97 = v96[25];
    v98 = v96[23];
    v99 = v96[24];
    v100 = v96[22];
    v101 = AdvancedWindowPos::GetWindowState(*(const struct tagWND **)&v119.left);
    v102 = AdvancedWindowPos::GetStateString(v101);
    v105 = W32GetUserSessionState(v104, v103);
    v106 = v97 - v98;
    LOBYTE(v107) = v95;
    LOBYTE(v106) = v24;
    WPP_RECORDER_AND_TRACE_SF_sdddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v107,
      v106,
      *(_QWORD *)(v105 + 69160),
      5,
      4,
      52,
      (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
      (__int64)v102,
      v100,
      v98,
      v99,
      v97,
      v99 - v100,
      v97 - v98);
    v62 = v109;
  }
  Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(BugCheckParameter3, v77);
  return v62;
}
