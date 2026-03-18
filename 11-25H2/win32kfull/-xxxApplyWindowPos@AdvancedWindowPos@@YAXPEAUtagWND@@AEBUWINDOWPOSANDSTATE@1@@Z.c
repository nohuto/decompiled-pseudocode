/*
 * XREFs of ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A2E8
 * Callers:
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x14020C498 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     ?xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z @ 0x140229FA4 (-xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x14022B230 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402AB3F4 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402C2E94 (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ?GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitorData@CMonitorTopology@@@Z @ 0x1402C4458 (-GetMigrateMonitor@CRecalcState@@QEAAPEAUtagMONITOR@@PEAUtagWND@@PEAVCRecalcContext@@PEBUMonitor.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14001BAD0 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x140026154 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x140026190 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400262EC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400503E8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     _MonitorFromRect @ 0x1400913B0 (_MonitorFromRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z @ 0x1401894A8 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagWND@@$0A@$00@@QEAAXPEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x14018F548 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1401A48DC (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x1401DCD80 (--1-$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x14020A178 (WPP_RECORDER_AND_TRACE_SF_sdddddd.c)
 *     _anonymous_namespace_::xxxAwpMinMaximizeEx @ 0x140221DBC (_anonymous_namespace_--xxxAwpMinMaximizeEx.c)
 *     ?xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1402273BC (-xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140279134 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@Z @ 0x1402C1B9C (-NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@.c)
 *     ?xxxInterceptApplyWindowPos@WindowActions@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@AdvancedWindowPos@@@Z @ 0x1402CF388 (-xxxInterceptApplyWindowPos@WindowActions@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@AdvancedWindowPo.c)
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x1402DCC18 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall AdvancedWindowPos::xxxApplyWindowPos(
        AdvancedWindowPos *this,
        struct tagRECT *a2,
        const struct AdvancedWindowPos::WINDOWPOSANDSTATE *a3)
{
  LONG bottom; // edx
  char v5; // r12
  char v6; // bl
  int v7; // r14d
  int v8; // esi
  char v9; // r8
  AdvancedWindowPos *v10; // r13
  int v11; // r15d
  int v12; // edx
  __int64 v13; // rdx
  char v14; // di
  char v15; // bl
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  char v19; // di
  char v20; // bl
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  char v24; // si
  char v25; // di
  __int64 v26; // rbx
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  __int64 v30; // rcx
  char v31; // si
  bool v32; // r14
  const char *StateString; // rax
  __int64 v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  struct tagWND *v41; // r14
  unsigned int v42; // r8d
  bool v43; // r13
  _DWORD *v44; // rax
  int v45; // edi
  int v46; // r14d
  int v47; // ebx
  int v48; // esi
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  const struct tagRECT *v52; // rsi
  char v53; // di
  char v54; // bl
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  struct tagTHREADINFO *v58; // rax
  __int64 left; // rdx
  struct tagWND *v60; // rax
  char v61; // di
  char v62; // bl
  __int64 v63; // rax
  int v64; // r8d
  int v65; // edx
  __int64 *v66; // rdx
  ULONG_PTR v67; // r9
  AdvancedWindowPos *v68; // rbx
  bool v69; // r13
  _DWORD *v70; // rax
  int v71; // esi
  int v72; // r15d
  int v73; // edi
  int v74; // r14d
  int v75; // eax
  const char *v76; // rbx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rax
  int v80; // r8d
  int v81; // edx
  int v82; // r15d
  char v83; // di
  struct tagMONITOR *v84; // r8
  char v85; // bl
  __int64 v86; // rax
  int v87; // r8d
  int v88; // edx
  char v89; // di
  char v90; // bl
  __int64 v91; // rax
  int v92; // r8d
  int v93; // edx
  __int64 v94; // rcx
  __int64 v95; // rax
  CHECKPOINT *Prop; // rax
  struct tagMONITOR *v97; // r8
  int v98; // r15d
  int v99; // eax
  char v100; // di
  char v101; // bl
  __int64 v102; // rax
  int v103; // r8d
  int v104; // edx
  char v105; // di
  char v106; // bl
  __int64 v107; // rax
  int v108; // r8d
  int v109; // edx
  const struct tagRECT *v110; // rdx
  char v111; // di
  char v112; // bl
  LONG v113; // r14d
  LONG v114; // r13d
  __int64 v115; // rax
  LONG top; // edx
  LONG v117; // r8d
  struct tagMONITOR *v118; // r8
  char v119; // di
  char v120; // bl
  __int64 v121; // rax
  int v122; // r8d
  int v123; // edx
  char v124; // bl
  bool v125; // di
  __int64 v126; // rax
  int v127; // r8d
  int v128; // edx
  char v129; // di
  char v130; // bl
  const char *v131; // rax
  int v132; // r8d
  int v133; // edx
  int v134; // r9d
  __int64 v135; // rcx
  __int64 v136; // rax
  __int64 v137; // rbx
  char v138; // si
  char v139; // di
  __int64 v140; // rax
  int v141; // r8d
  int v142; // edx
  __int64 v143; // rdx
  __int64 v144; // rdx
  char v145; // [rsp+80h] [rbp-80h]
  char v146; // [rsp+81h] [rbp-7Fh]
  char v147; // [rsp+82h] [rbp-7Eh]
  unsigned int v148; // [rsp+84h] [rbp-7Ch]
  int v149; // [rsp+84h] [rbp-7Ch]
  bool v150; // [rsp+88h] [rbp-78h]
  unsigned __int8 v151; // [rsp+89h] [rbp-77h]
  unsigned int WindowState; // [rsp+8Ch] [rbp-74h]
  int v153; // [rsp+90h] [rbp-70h]
  LONG right; // [rsp+A8h] [rbp-58h]
  int v157; // [rsp+ACh] [rbp-54h]
  int v158; // [rsp+B0h] [rbp-50h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+B8h] [rbp-48h] BYREF
  struct tagRECT v160; // [rsp+C8h] [rbp-38h]
  ULONG_PTR v161[2]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v162[3]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v163; // [rsp+100h] [rbp+0h]
  char v164; // [rsp+104h] [rbp+4h]
  __int128 v165; // [rsp+108h] [rbp+8h]

  bottom = a2->bottom;
  v5 = 1;
  v158 = bottom & 0x10;
  v6 = bottom & 1;
  v151 = bottom & 1;
  v153 = bottom & 8;
  v7 = bottom & 2;
  v8 = bottom & 0x20;
  v9 = 0;
  v157 = v7;
  v10 = this;
  if ( (bottom & 4) != 0 || (v145 = 0, (bottom & 8) != 0) )
    v145 = 1;
  if ( (bottom & 0x40) != 0 || (v146 = 1, IsRectEmptyInl(a2 + 1)) )
    v146 = v9;
  if ( (bottom & 0x100) != 0 || (v147 = 1, IsRectEmptyInl(a2 + 1)) )
    v147 = v9;
  right = a2->right;
  if ( right == 3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1728LL);
  WindowState = AdvancedWindowPos::GetWindowState(v10);
  v11 = ((a2->bottom & 0x200) << 7) | 0x20;
  v12 = a2->bottom & 0x80;
  if ( !v12 )
    v11 = (a2->bottom & 0x200) << 7;
  v13 = v12 != 0 ? 1048640 : 64;
  v148 = v13;
  if ( v6 )
  {
    v11 |= 0x10u;
    v13 = (unsigned int)v13 | 0x10;
    v148 = v13;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v14 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v14 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v15 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v15 = 0;
    }
    if ( v14 || v15 )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
      LOBYTE(v17) = v15;
      LOBYTE(v18) = v14;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v18,
        v17,
        *(_QWORD *)(UserSessionState + 69160),
        5,
        4,
        53,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
      v13 = v148;
    }
    if ( v7 )
    {
      v11 |= 0x40u;
      v13 = (unsigned int)v13 | 4;
      v148 = v13;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v19 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v19 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v20 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v20 = 0;
      }
      if ( v19 || v20 )
      {
        v21 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
        LOBYTE(v22) = v20;
        LOBYTE(v23) = v19;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v23,
          v22,
          *(_QWORD *)(v21 + 69160),
          5,
          4,
          54,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
      }
    }
  }
  if ( v8 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v24 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v24 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v25 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v25 = 0;
    }
    if ( v24 || v25 )
    {
      v26 = *(_QWORD *)v10;
      v27 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
      LOBYTE(v28) = v25;
      LOBYTE(v29) = v24;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v29,
        v28,
        *(_QWORD *)(v27 + 69160),
        5,
        4,
        55,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
        v26);
    }
    xxxSetForegroundWindowWithOptions(v10, 31LL, 0LL);
  }
  if ( (*((_DWORD *)v10 + 96) & 0x10) != 0 )
  {
    WindowActions::xxxInterceptApplyWindowPos(v10, (struct tagWND *)a2, 0LL);
    return;
  }
  v30 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v31 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v31 = 0;
  }
  v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v31 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    StateString = AdvancedWindowPos::GetStateString(a2->right);
    v34 = *(_QWORD *)v10;
    v35 = (__int64)StateString;
    v38 = W32GetUserSessionState(v37, v36);
    LOBYTE(v39) = v32;
    LOBYTE(v40) = v31;
    WPP_RECORDER_AND_TRACE_SF_qs(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v40,
      v39,
      *(_QWORD *)(v38 + 69160),
      4,
      4,
      56,
      (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
      v34,
      v35);
  }
  v41 = 0LL;
  BugCheckParameter3[0] = 0LL;
  if ( v145 )
  {
    if ( v146 )
      v42 = 18;
    else
      v42 = *(_DWORD *)(*((_QWORD *)v10 + 5) + 288LL);
    v41 = (struct tagWND *)MonitorFromRect(&a2[1].left, 2u, v42);
    BugCheckParameter3[0] = (ULONG_PTR)v41;
    v13 = *(_QWORD *)&WPP_GLOBAL_Control;
    v43 = 0;
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
    {
      v30 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL);
      if ( (v30 & 8) != 0 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
        v43 = 1;
    }
    v150 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v43 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v44 = (_DWORD *)*((_QWORD *)v41 + 5);
      v45 = v44[10];
      v46 = v44[8];
      v47 = v44[9];
      v48 = v44[7];
      v49 = W32GetUserSessionState(v30, *(_QWORD *)&WPP_GLOBAL_Control);
      LOBYTE(v50) = v150;
      LOBYTE(v51) = v43;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v51,
        v50,
        *(_QWORD *)(v49 + 69160),
        4,
        4,
        57,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
        v48,
        v46,
        v47,
        v45,
        v47 - v48,
        v45 - v46);
      v41 = (struct tagWND *)BugCheckParameter3[0];
    }
    v10 = this;
  }
  v52 = 0LL;
  if ( v153 )
  {
    v52 = a2 + 1;
    v11 |= 8u;
    v30 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v53 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v53 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v54 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v54 = 0;
    }
    if ( v53 || v54 )
    {
      v55 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v13);
      LOBYTE(v56) = v54;
      LOBYTE(v57) = v53;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v57,
        v56,
        *(_QWORD *)(v55 + 69160),
        5,
        4,
        58,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
    }
  }
  v58 = PtiCurrent(v30, v13);
  Win32HM_LockIntoThread<1>((__int64)v58, (__int64)v41, (__int64 *)v161);
  v162[1] = v52;
  v164 = 0;
  left = (unsigned int)a2[2].left;
  v60 = 0LL;
  if ( right == 1 )
    v60 = v41;
  v162[2] = *(_QWORD *)&a2->left;
  v162[0] = v60;
  v163 = left;
  v165 = 0LL;
  if ( right == 2 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v61 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v61 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v62 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v62 = 0;
    }
    if ( v61 || v62 )
    {
      v63 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, left);
      LOBYTE(v64) = v62;
      LOBYTE(v65) = v61;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v65,
        v64,
        *(_QWORD *)(v63 + 69160),
        5,
        4,
        59,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
    }
    if ( v157 )
      v11 |= 0x40u;
    anonymous_namespace_::xxxAwpMinMaximizeEx((__int64)v10, (unsigned int)v151 + 6, v11, (__int64)v162);
    LODWORD(v67) = 0;
  }
  else if ( right == 1 )
  {
    v82 = v11 | 2;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v83 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v83 = 0;
    }
    v84 = (struct tagMONITOR *)&WPP_RECORDER_INITIALIZED;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v85 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v85 = 0;
    }
    if ( v83 || v85 )
    {
      v86 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v87) = v85;
      LOBYTE(v88) = v83;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v88,
        v87,
        *(_QWORD *)(v86 + 69160),
        5,
        4,
        60,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
      v84 = (struct tagMONITOR *)&WPP_RECORDER_INITIALIZED;
    }
    if ( v145 )
    {
      v82 |= 4u;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v89 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v89 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v90 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v90 = 0;
      }
      if ( v89 || v90 )
      {
        v91 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
        LOBYTE(v92) = v90;
        LOBYTE(v93) = v89;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v93,
          v92,
          *(_QWORD *)(v91 + 69160),
          5,
          4,
          61,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
      }
      if ( !v153 )
        AdvancedWindowPos::xxxMigrateCheckpoint((struct tagRECT *)v10, v41, v84);
    }
    anonymous_namespace_::xxxAwpMinMaximizeEx((__int64)v10, 3LL, v82, (__int64)v162);
    LODWORD(v67) = 0;
    if ( v153 )
    {
      v95 = W32GetUserSessionState(v94, v66);
      Prop = (CHECKPOINT *)GetProp((__int64)v10, *(unsigned __int16 *)(v95 + 41334), 1u);
      if ( Prop )
        CHECKPOINT::SetNormalRect(Prop, v10, v52, 0);
      AdvancedWindowPos::xxxMigrateCheckpoint((struct tagRECT *)v10, v41, v97);
      LODWORD(v67) = 0;
    }
  }
  else
  {
    v98 = v11 | 0x80;
    v99 = v148 | 0x80000;
    v149 = v148 | 0x80000;
    if ( v146 )
    {
      v149 = v99 | 0x800000;
      v98 |= 0x200u;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v100 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v100 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v101 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v101 = 0;
      }
      if ( v100 || v101 )
      {
        v102 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, left);
        LOBYTE(v103) = v101;
        LOBYTE(v104) = v100;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v104,
          v103,
          *(_QWORD *)(v102 + 69160),
          5,
          4,
          62,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
      }
      v99 = v149;
    }
    if ( v147 )
    {
      v149 = v99 | 0x400000;
      v98 |= 0x100u;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v105 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v105 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v106 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v106 = 0;
      }
      if ( v105 || v106 )
      {
        v107 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, left);
        LOBYTE(v108) = v106;
        LOBYTE(v109) = v105;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v109,
          v108,
          *(_QWORD *)(v107 + 69160),
          5,
          4,
          63,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
      }
    }
    v110 = a2;
    v160 = a2[1];
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v111 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v111 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v112 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v112 = 0;
    }
    v113 = v160.bottom;
    v114 = v160.right;
    if ( v111 || v112 )
    {
      v115 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      top = v160.top;
      v117 = v160.left;
      LOBYTE(top) = v111;
      LOBYTE(v117) = v112;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        top,
        v117,
        *(_QWORD *)(v115 + 69160),
        5,
        4,
        64,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
        v160.left,
        v160.top,
        v160.right,
        v160.bottom,
        LOBYTE(v160.right) - LOBYTE(v160.left),
        LOBYTE(v160.bottom) - LOBYTE(v160.top));
      v110 = a2;
    }
    if ( WindowState )
    {
      if ( IsArranged(this) )
      {
        v98 |= 4u;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v119 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v119 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v120 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v120 = 0;
        }
        if ( v119 || v120 )
        {
          v121 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
          LOBYTE(v122) = v120;
          LOBYTE(v123) = v119;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v123,
            v122,
            *(_QWORD *)(v121 + 69160),
            5,
            4,
            65,
            (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
        }
      }
      if ( BugCheckParameter3[0] && !v153 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v124 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v124 = 0;
        }
        v125 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v124 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v126 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
          LOBYTE(v127) = v125;
          LOBYTE(v128) = v124;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v128,
            v127,
            *(_QWORD *)(v126 + 69160),
            4,
            4,
            66,
            (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
        }
        AdvancedWindowPos::xxxMigrateCheckpoint((struct tagRECT *)this, (struct tagWND *)BugCheckParameter3[0], v118);
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v129 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v129 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v130 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v130 = 0;
      }
      if ( v129 || v130 )
      {
        W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        v131 = AdvancedWindowPos::GetStateString(WindowState);
        LOBYTE(v132) = v130;
        LOBYTE(v133) = v129;
        WPP_RECORDER_AND_TRACE_SF_s(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v133,
          v132,
          v134,
          5,
          4,
          67,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
          (__int64)v131);
      }
      anonymous_namespace_::xxxAwpMinMaximizeEx((__int64)this, 9LL, v98, (__int64)v162);
      LODWORD(v67) = 0;
      v68 = this;
      goto LABEL_98;
    }
    if ( !IsRectEmptyInl(v110 + 1) )
    {
      BugCheckParameter3[0] = -1LL;
      v135 = *v66;
      BugCheckParameter3[1] = v67;
      if ( v135 )
      {
        LOBYTE(v66) = 1;
        v136 = HMValidateHandleNoSecure(v135, (__int64)v66);
        LOWORD(v67) = 0;
        v137 = v136;
        if ( v136 )
        {
          Win32HMThreadLockBase<tagWND,0,1>::ManualLock<void>(BugCheckParameter3, v136);
          LOWORD(v67) = 0;
        }
      }
      else
      {
        v137 = v67;
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v138 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v138 = v67;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v139 = 1, *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) == (_WORD)v67) )
      {
        v139 = v67;
      }
      if ( v138 || v139 )
      {
        v140 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v66);
        LOBYTE(v141) = v139;
        LOBYTE(v142) = v138;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v142,
          v141,
          *(_QWORD *)(v140 + 69160),
          5,
          4,
          68,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
      }
      v143 = v137;
      v68 = this;
      xxxSetWindowPos(
        this,
        v143,
        (unsigned int)v160.left,
        (unsigned int)v160.top,
        v114 - v160.left,
        v113 - v160.top,
        v149);
      Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, v144);
      LODWORD(v67) = 0;
      goto LABEL_98;
    }
  }
  v68 = this;
LABEL_98:
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v5 = v67;
  }
  v69 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v70 = (_DWORD *)*((_QWORD *)v68 + 5);
    v71 = v70[25];
    v72 = v70[23];
    v73 = v70[24];
    v74 = v70[22];
    v75 = AdvancedWindowPos::GetWindowState(v68);
    v76 = AdvancedWindowPos::GetStateString(v75);
    v79 = W32GetUserSessionState(v78, v77);
    LOBYTE(v80) = v69;
    LOBYTE(v81) = v5;
    WPP_RECORDER_AND_TRACE_SF_sdddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v81,
      v80,
      *(_QWORD *)(v79 + 69160),
      4,
      4,
      69,
      (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
      (__int64)v76,
      v74,
      v72,
      v73,
      v71,
      v73 - v74,
      v71 - v72);
    LODWORD(v67) = 0;
  }
  if ( v158 != (_DWORD)v67 )
    ShellWindowPos::NotifyPosAndStateApplied(this, WindowState, &a2[1], v163);
  Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(v161, (__int64)v66);
}
