/*
 * XREFs of ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1401701A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?SendShellNotificationsOnHardExit@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A803C (-SendShellNotificationsOnHardExit@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1402A8DA8 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402A948C (-xxxCommitMoveSize@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMoveSizeSetWindowPos@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@@Z @ 0x1402AA42C (-xxxMoveSizeSetWindowPos@@YAXPEAUMOVESIZEDATA@@AEBUtagRECT@@@Z.c)
 *     ?ShellMigrateWindowAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z @ 0x1402C24A8 (-ShellMigrateWindowAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@K@Z.c)
 *     ?ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1402C26F0 (-ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDO.c)
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402C8210 (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z.c)
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CDFBC (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CE4F4 (-xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402CE998 (-xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxProcessAsyncWindowAction@AdvancedWindowPos@@YAXPEAUHWND__@@_J@Z @ 0x1402D94B8 (-xxxProcessAsyncWindowAction@AdvancedWindowPos@@YAXPEAUHWND__@@_J@Z.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402DAD2C (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z @ 0x140022A24 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z.c)
 *     ?HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@@Z @ 0x1400260E4 (-HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@@Z.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x140026154 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x140026190 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ??0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z @ 0x140060C80 (--0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z.c)
 *     PWInsertAfter @ 0x140064E98 (PWInsertAfter.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014DD7C (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     ?Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z @ 0x1401A86E0 (-Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z.c)
 *     ??1CDwmNotifyBatch@@IEAA@XZ @ 0x1401ADA18 (--1CDwmNotifyBatch@@IEAA@XZ.c)
 *     ?GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z @ 0x1401CAE4C (-GetRecalcProperty@CRecalcProp@@SAPEAV1@PEBUtagWND@@@Z.c)
 *     LogicalToPhysicalInPlaceRect @ 0x1401D75A8 (LogicalToPhysicalInPlaceRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x14020A178 (WPP_RECORDER_AND_TRACE_SF_sdddddd.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1402720AC (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     ?PhysicalToLogicalDPIRect@CMonitorTopology@@QEBA?AUtagRECT@@PEAU2@KPEBUMonitorData@1@@Z @ 0x1402ACF34 (-PhysicalToLogicalDPIRect@CMonitorTopology@@QEBA-AUtagRECT@@PEAU2@KPEBUMonitorData@1@@Z.c)
 *     ?BeginApplyWindowAction@DesktopRecalc@@YA_NPEAUtagWND@@@Z @ 0x1402C3C80 (-BeginApplyWindowAction@DesktopRecalc@@YA_NPEAUtagWND@@@Z.c)
 *     ?EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z @ 0x1402C4160 (-EndApplyWindowAction@CRecalcProp@@QEAAXPEAUtagWND@@PEBVCMonitorTopology@@_N@Z.c)
 *     ?xxxInterceptApplyWindowAction@WindowActions@@YAXPEAUtagWND@@PEBUWindowAction@AdvancedWindowPos@@@Z @ 0x1402CF088 (-xxxInterceptApplyWindowAction@WindowActions@@YAXPEAUtagWND@@PEBUWindowAction@AdvancedWindowPos@.c)
 *     ?OnRecalcActionApplied@CDwmWindowNotifyBatch@@QEAAXI_N@Z @ 0x1402D381C (-OnRecalcActionApplied@CDwmWindowNotifyBatch@@QEAAXI_N@Z.c)
 *     ?LogApplyWindowActionEnd@AdvancedWindowPos@@YAXPEAUtagWND@@W4ApplyWindowActionResult@1@@Z @ 0x1402D4838 (-LogApplyWindowActionEnd@AdvancedWindowPos@@YAXPEAUtagWND@@W4ApplyWindowActionResult@1@@Z.c)
 *     ?LogApplyWindowActionStart@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D4AD8 (-LogApplyWindowActionStart@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@.c)
 *     ?PostAsyncWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@@Z @ 0x1402D5058 (-PostAsyncWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@@Z.c)
 *     ?SendShellNotificationsForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NPEAVCDwmWindowNotifyBatch@@PEBUSystemOperationData@1@@Z @ 0x1402D560C (-SendShellNotificationsForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1_NPEAVCDwmWindowNo.c)
 *     ?ShouldCallShellForAction@AdvancedWindowPos@@YA_NPEAUtagWND@@PEBUWindowAction@1@@Z @ 0x1402D58F0 (-ShouldCallShellForAction@AdvancedWindowPos@@YA_NPEAUtagWND@@PEBUWindowAction@1@@Z.c)
 *     ?TransformWindowActionToPhysical@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D5F10 (-TransformWindowActionToPhysical@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?UpdateActionForFullScreenWindow@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D6458 (-UpdateActionForFullScreenWindow@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?UpdateCheckpointForAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUCHECKPOINT@@AEBUtagRECT@@W4ActionModifier@1@@Z @ 0x1402D6A54 (-UpdateCheckpointForAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUCHECKPOINT@@AEBUtagRECT@@W4Acti.c)
 *     ?xxxAdjustRectsForMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@PEAUCHECKPOINT@@PEAUtagRECT@@3PEAPEBUMonitorData@CMonitorTopology@@@Z @ 0x1402D6CAC (-xxxAdjustRectsForMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@PEAUCHECKPOINT@@P.c)
 *     ?xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D8AA4 (-xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?xxxSetForegroundForWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D96B8 (-xxxSetForegroundForWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402DA4C0 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 *     ?GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z @ 0x1402DCB7C (-GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z.c)
 *     ?SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z @ 0x1402DCC18 (-SetNormalRect@CHECKPOINT@@QEAAXPEBUtagWND@@AEBUtagRECT@@G@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall AdvancedWindowPos::xxxApplyWindowAction(__int64 a1, __int64 a2, int a3)
{
  const struct AdvancedWindowPos::WindowAction *v5; // r8
  char v6; // si
  struct AdvancedWindowPos::WindowAction *v7; // r8
  struct AdvancedWindowPos::WindowAction *v8; // r8
  struct tagWND *v9; // rdx
  struct AdvancedWindowPos::WindowAction *v10; // r8
  int v11; // ecx
  int v12; // edx
  struct AdvancedWindowPos::WindowAction *v13; // r8
  int v14; // ebx
  int v15; // r14d
  int v16; // r12d
  int v17; // ecx
  char v18; // al
  bool v19; // di
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  bool v23; // di
  __int64 v24; // rbx
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  bool v28; // di
  char v29; // bl
  __int64 v30; // rax
  int v31; // edx
  int v32; // r8d
  char v33; // di
  char v34; // bl
  __int64 v35; // rax
  int v36; // edx
  int v37; // r8d
  int v38; // esi
  LONG bottom; // edi
  LONG right; // ebx
  unsigned int WindowState; // eax
  struct CHECKPOINT *IfValid; // rax
  unsigned int *v43; // rdx
  __m128i v44; // xmm0
  __int64 v45; // rax
  unsigned __int64 v46; // xmm6_8
  bool v47; // bl
  bool v48; // di
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  char v52; // di
  char v53; // bl
  __int64 v54; // rax
  int v55; // r8d
  int v56; // edx
  char v57; // r14
  char v58; // si
  __int64 v59; // rax
  int v60; // r8d
  int v61; // edx
  bool v62; // r12
  int v63; // eax
  LONG v64; // r8d
  LONG v65; // r9d
  char v66; // al
  char v67; // r12
  char v68; // si
  char v69; // bl
  char v70; // r14
  char v71; // di
  const char *StateString; // rax
  int v73; // r8d
  int v74; // edx
  int v75; // r9d
  char v76; // r10
  char v77; // r11
  char v78; // r14
  char v79; // si
  __int64 v80; // rax
  int v81; // r8d
  int v82; // edx
  unsigned int v83; // r14d
  CMonitorTopology *v84; // rcx
  char v85; // di
  struct tagRECT *v86; // rbx
  int v87; // eax
  __int64 left; // rdx
  int top; // r8d
  char v90; // di
  char v91; // bl
  __int64 v92; // rax
  int v93; // r8d
  int v94; // edx
  char v95; // di
  char v96; // bl
  __int64 v97; // rax
  int v98; // r8d
  int v99; // edx
  int v100; // edx
  const struct CMonitorTopology::MonitorData *v101; // rdi
  LONG v102; // eax
  CMonitorTopology *v103; // rcx
  __int64 v104; // rdx
  char v105; // cl
  char v106; // di
  char v107; // bl
  __int64 v108; // rax
  int v109; // r8d
  int v110; // edx
  struct tagRECT *v111; // rax
  char v112; // di
  char v113; // bl
  __int64 v114; // rax
  int v115; // r8d
  int v116; // edx
  struct tagRECT *v117; // rax
  struct tagRECT *v118; // rax
  unsigned int v119; // ebx
  __int64 v120; // rdx
  CHECKPOINT *v121; // rbx
  unsigned int *v122; // rax
  __int64 v123; // rdx
  int v124; // edi
  const struct CMonitorTopology *v125; // rbx
  __int64 **RecalcProperty; // rax
  __int64 v127; // rdx
  int v128; // [rsp+30h] [rbp-D8h]
  __int16 v129; // [rsp+38h] [rbp-D0h]
  __int16 v130; // [rsp+38h] [rbp-D0h]
  int v131; // [rsp+40h] [rbp-C8h]
  __int64 v132; // [rsp+70h] [rbp-98h]
  char v133; // [rsp+88h] [rbp-80h]
  char v134; // [rsp+89h] [rbp-7Fh]
  char v135; // [rsp+8Ah] [rbp-7Eh]
  char v136; // [rsp+8Bh] [rbp-7Dh]
  int v137; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v138; // [rsp+90h] [rbp-78h]
  bool v139; // [rsp+94h] [rbp-74h]
  unsigned int v140; // [rsp+98h] [rbp-70h]
  int v141; // [rsp+9Ch] [rbp-6Ch]
  int v142; // [rsp+9Ch] [rbp-6Ch]
  unsigned int v143; // [rsp+A0h] [rbp-68h]
  struct tagRECT v144; // [rsp+A8h] [rbp-60h] BYREF
  CHECKPOINT *v145; // [rsp+B8h] [rbp-50h]
  _BYTE v146[40]; // [rsp+C0h] [rbp-48h] BYREF
  struct tagRECT v147; // [rsp+E8h] [rbp-20h] BYREF
  struct tagRECT v148; // [rsp+F8h] [rbp-10h] BYREF
  struct tagRECT v149; // [rsp+108h] [rbp+0h] BYREF

  *(_BYTE *)(a2 + 160) = 1;
  AdvancedWindowPos::LogApplyWindowActionStart((const struct tagWND *)a1, (unsigned int *)a2, a3);
  v6 = 0;
  if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline()
    && (*(_DWORD *)(a2 + 4) & 0x800) != 0 )
  {
    AdvancedWindowPos::PostAsyncWindowAction((AdvancedWindowPos *)a1, (PETHREAD **)a2, v5);
    AdvancedWindowPos::LogApplyWindowActionEnd((const struct tagWND *)a1, 0);
    return;
  }
  CDwmWindowNotifyBatch::CDwmWindowNotifyBatch((CDwmWindowNotifyBatch *)v146, (struct tagWND *)a1);
  if ( (*(_DWORD *)(a2 + 4) & 2) != 0 )
    AdvancedWindowPos::xxxSetForegroundForWindowAction((AdvancedWindowPos *)a1, (struct tagWND *)a2, v7);
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_20;
  if ( (*(_DWORD *)(a2 + 4) & 0x400) != 0 )
    AdvancedWindowPos::TransformWindowActionToPhysical((AdvancedWindowPos *)a1, (struct tagWND *)a2, v8);
  if ( AdvancedWindowPos::ShouldCallShellForAction((AdvancedWindowPos *)a1, (struct tagWND *)a2, v8) )
    AdvancedWindowPos::xxxModifyActionForArrangement((AdvancedWindowPos *)a1, (struct tagWND *)a2, v10);
  v11 = *(_DWORD *)(a2 + 4);
  if ( (v11 & 0x2000) != 0 || (*(_DWORD *)(a1 + 384) & 0x10) == 0 )
  {
    if ( (*(_DWORD *)a2 & 0x200) != 0
      && (v11 & 0x10000) == 0
      && !DesktopRecalc::BeginApplyWindowAction((DesktopRecalc *)a1, v9) )
    {
      v12 = 2;
      goto LABEL_256;
    }
    if ( AdvancedWindowPos::HasFullscreenState((AdvancedWindowPos *)a1, v9) )
      AdvancedWindowPos::UpdateActionForFullScreenWindow((AdvancedWindowPos *)a1, (struct tagWND *)a2, v13);
LABEL_20:
    v14 = *(_DWORD *)a2 & 8;
    v15 = 0x1000000;
    v137 = 0x1000000;
    v16 = 0x40000;
    v138 = 0x40000;
    v17 = *(_DWORD *)a2 & 0x10;
    if ( v17 && ((*(_DWORD *)(a2 + 4) & 4) != 0 || v14) )
    {
      v16 = 786432;
      v18 = 1;
      v138 = 786432;
    }
    else
    {
      if ( !v17 )
      {
        v15 = 16777232;
        v16 = 262160;
        v137 = 16777232;
        v138 = 262160;
        if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
        {
          v6 = 1;
        }
        v19 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
           && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
        if ( v6 || v19 )
        {
          UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
          LOBYTE(v21) = v19;
          LOBYTE(v22) = v6;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v22,
            v21,
            *(_QWORD *)(UserSessionState + 69160),
            5,
            4,
            153,
            (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
        }
        v6 = 0;
      }
      v18 = 0;
    }
    v135 = v18;
    v134 = v18;
    if ( v14 )
    {
      PWInsertAfter(*(_QWORD *)(a2 + 32), (__int64)&WPP_RECORDER_INITIALIZED);
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
      {
        v6 = 1;
      }
      v23 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
         && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
      if ( v6 || v23 )
      {
        v24 = *(_QWORD *)(a2 + 32);
        v25 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        LOBYTE(v26) = v23;
        LOBYTE(v27) = v6;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v27,
          v26,
          *(_QWORD *)(v25 + 69160),
          5,
          4,
          154,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
          v24);
      }
      if ( (*(_DWORD *)(a2 + 4) & 8) != 0 )
      {
        v15 |= 0x200u;
        v16 |= 0x400000u;
        v137 = v15;
        v138 = v16;
        v28 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v29 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v29 = 0;
        }
        if ( v28 || v29 )
        {
          v30 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          v129 = 155;
LABEL_62:
          LOBYTE(v32) = v29;
          LOBYTE(v31) = v28;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v31,
            v32,
            *(_QWORD *)(v30 + 69160),
            5,
            4,
            v129,
            (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
        }
      }
    }
    else
    {
      v15 |= 4u;
      v16 |= 0x40u;
      v137 = v15;
      v138 = v16;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v28 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v28 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v29 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v29 = 0;
      }
      if ( v28 || v29 )
      {
        v30 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        v129 = 156;
        goto LABEL_62;
      }
    }
    if ( (*(_DWORD *)a2 & 1) != 0 )
    {
      if ( *(_BYTE *)(a2 + 8) )
      {
        v137 = v15 | 0x40;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v33 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v33 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v34 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v34 = 0;
        }
        if ( v33 || v34 )
        {
          v35 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          v130 = 157;
LABEL_95:
          LOBYTE(v37) = v34;
          LOBYTE(v36) = v33;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v36,
            v37,
            *(_QWORD *)(v35 + 69160),
            5,
            4,
            v130,
            (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
        }
      }
      else
      {
        v137 = v15 | 0x80;
        v138 = v16 | 0x100000;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v33 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v33 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v34 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v34 = 0;
        }
        if ( v33 || v34 )
        {
          v35 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          v130 = 158;
          goto LABEL_95;
        }
      }
    }
    else
    {
      v138 = v16 | 1;
    }
    v38 = *(_DWORD *)a2 & 4;
    bottom = *(_DWORD *)a2 & 2;
    right = *(_DWORD *)a2 & 0x20;
    v141 = v38;
    v144.bottom = bottom;
    v144.right = right;
    WindowState = AdvancedWindowPos::GetWindowState((const struct tagWND *)a1);
    v143 = WindowState;
    if ( right )
      v140 = *(_DWORD *)(a2 + 40);
    else
      v140 = WindowState;
    IfValid = CHECKPOINT::GetIfValid((struct tagWND *)a1);
    v145 = IfValid;
    if ( IfValid )
      v44 = *(__m128i *)((char *)IfValid + 20);
    else
      v44 = *(__m128i *)(*(_QWORD *)(a1 + 40) + 88LL);
    v45 = *(_QWORD *)(a1 + 40);
    v148 = (struct tagRECT)v44;
    v147 = (struct tagRECT)v44;
    if ( (*(_DWORD *)(v45 + 288) & 0xF) != 2 )
    {
      v148 = (struct tagRECT)v44;
      LogicalToPhysicalInPlaceRect(a1, (__int64)&v147);
      v46 = _mm_srli_si128(v44, 8).m128i_u64[0];
      if ( v44.m128i_i64[0] != *(_QWORD *)&v147.left || v46 != *(_QWORD *)&v147.right )
      {
        v47 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
        v43 = &WPP_RECORDER_INITIALIZED;
        v48 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v47 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v49 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          LOBYTE(v50) = v48;
          LOBYTE(v51) = v47;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v51,
            v50,
            *(_QWORD *)(v49 + 69160),
            4,
            4,
            159,
            (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
          v43 = &WPP_RECORDER_INITIALIZED;
        }
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v52 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v52 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v53 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v53 = 0;
        }
        if ( v52 || v53 )
        {
          v54 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          LOBYTE(v55) = v53;
          LOBYTE(v56) = v52;
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v56,
            v55,
            *(_QWORD *)(v54 + 69160),
            5,
            4,
            160,
            (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
            v44.m128i_i8[0],
            v148.top,
            v46,
            v148.bottom,
            v46 - v44.m128i_i8[0],
            v148.bottom - v148.top);
          v43 = &WPP_RECORDER_INITIALIZED;
        }
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v57 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v57 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v58 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v58 = 0;
        }
        if ( v57 || v58 )
        {
          v59 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          LOBYTE(v60) = v58;
          LOBYTE(v61) = v57;
          LODWORD(v132) = v147.bottom - v147.top;
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v61,
            v60,
            *(_QWORD *)(v59 + 69160),
            5,
            4,
            161,
            (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
            v147.left,
            v147.top,
            v147.right,
            v147.bottom,
            LOBYTE(v147.right) - LOBYTE(v147.left),
            v132);
        }
        right = v144.right;
        bottom = v144.bottom;
      }
      v38 = v141;
    }
    v133 = 0;
    v142 = *(_DWORD *)(a2 + 4) & 0x40;
    v62 = 0;
    v149 = 0LL;
    if ( !right )
    {
      if ( bottom )
      {
        left = *(unsigned int *)(a2 + 12);
        top = *(_DWORD *)(a2 + 16);
        v147.left = *(_DWORD *)(a2 + 12);
        v147.top = top;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v90 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v90 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v91 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v91 = 0;
        }
        if ( v90 || v91 )
        {
          v92 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, left);
          LOBYTE(v93) = v91;
          LOBYTE(v94) = v90;
          WPP_RECORDER_AND_TRACE_SF_Dd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v94,
            v93,
            *(_QWORD *)(v92 + 69160),
            5,
            4,
            164,
            (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
            v147.left,
            v147.top);
          top = v147.top;
          left = (unsigned int)v147.left;
        }
        v83 = v137;
      }
      else
      {
        left = (unsigned int)_mm_cvtsi128_si32((__m128i)v147);
        v83 = v137 | 2;
        top = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v147, 4));
      }
      if ( v38 )
      {
        v147.right = left + *(_DWORD *)(a2 + 20);
        v147.bottom = top + *(_DWORD *)(a2 + 24);
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v95 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v95 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v96 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v96 = 0;
        }
        if ( v95 || v96 )
        {
          v97 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, left);
          LOBYTE(v98) = v96;
          LOBYTE(v99) = v95;
          WPP_RECORDER_AND_TRACE_SF_Dd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v99,
            v98,
            *(_QWORD *)(v97 + 69160),
            5,
            4,
            165,
            (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
            LOBYTE(v147.right) - LOBYTE(v147.left),
            LOBYTE(v147.bottom) - LOBYTE(v147.top));
        }
      }
      else
      {
        v83 |= 1u;
      }
LABEL_166:
      if ( v143 == 2 && !v140 && (*(_DWORD *)(a2 + 4) & 0x10) != 0 )
        *((_DWORD *)v145 + 4) &= 0xFFFFFFF5;
      v84 = *(CMonitorTopology **)(a2 + 152);
      v148 = v147;
      v85 = v133;
      *(_QWORD *)&v144.left = CMonitorTopology::MonitorDataFromRect(v84, &v148, 2, 0x12u);
      if ( v133 && (v140 != 2 || v142) )
      {
        v86 = &v149;
        if ( !v62 )
          goto LABEL_174;
      }
      else
      {
        v86 = 0LL;
      }
      v100 = *(_DWORD *)(a2 + 4);
      if ( ((*(_DWORD *)a2 | v100) & 0x180) == 0 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) & 0xF) != 2 )
        {
          v101 = 0LL;
          if ( (v100 & 0x200) != 0 )
          {
            v102 = *(_DWORD *)(a2 + 100);
            v103 = *(CMonitorTopology **)(a2 + 152);
            v148.top = *(_DWORD *)(a2 + 104);
            v148.bottom = v148.top;
            v148.left = v102;
            v148.right = v102;
            v101 = CMonitorTopology::MonitorDataFromRect(v103, &v148, 2, 0x12u);
          }
          v147 = *CMonitorTopology::PhysicalToLogicalDPIRect(
                    *(CMonitorTopology **)(a2 + 152),
                    &v148,
                    &v147,
                    *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL),
                    v101);
          if ( v86 )
            *v86 = *CMonitorTopology::PhysicalToLogicalDPIRect(
                      *(CMonitorTopology **)(a2 + 152),
                      &v148,
                      v86,
                      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL),
                      v101);
          v85 = v133;
        }
LABEL_210:
        if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
        {
          LOBYTE(v104) = v134;
          v105 = v134;
          if ( (*(_DWORD *)(a2 + 4) & 1) != 0 )
          {
            if ( !v85 )
            {
              if ( v62 )
              {
                if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                  || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
                  || (v112 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
                {
                  v112 = 0;
                }
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                  || (v113 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
                {
                  v113 = 0;
                }
                if ( v112 || v113 )
                {
                  v114 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v104);
                  LOBYTE(v115) = v113;
                  LOBYTE(v116) = v112;
                  WPP_RECORDER_AND_TRACE_SF_(
                    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                    v116,
                    v115,
                    *(_QWORD *)(v114 + 69160),
                    5,
                    4,
                    167,
                    (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
                }
                v117 = WindowMargins::ExtendRect(
                         &v148,
                         (struct tagRECT *)a1,
                         (const struct tagWND *)&v147,
                         (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)&v144.left + 40LL));
                v105 = v134;
                v147 = *v117;
              }
              goto LABEL_239;
            }
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
              || (v106 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
            {
              v106 = 0;
            }
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
              || (v107 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
            {
              v107 = 0;
            }
            if ( v106 || v107 )
            {
              v108 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v104);
              LOBYTE(v109) = v107;
              LOBYTE(v110) = v106;
              WPP_RECORDER_AND_TRACE_SF_(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v110,
                v109,
                *(_QWORD *)(v108 + 69160),
                5,
                4,
                166,
                (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
            }
            v111 = WindowMargins::ExtendRect(
                     &v148,
                     (struct tagRECT *)a1,
                     (const struct tagWND *)&v149,
                     (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)&v144.left + 40LL));
            v105 = v134;
            v149 = *v111;
LABEL_238:
            v118 = &v149;
            if ( !v142 )
            {
LABEL_240:
              v119 = v140;
              LOBYTE(v131) = v62;
              LOBYTE(v128) = v105;
              AdvancedWindowPos::xxxUpdatePosAndStateForAction(a1, v143, v140, v83, v138, v128, v118, v131, &v147, a2);
              if ( v140 )
              {
                if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline()
                  && (*(_DWORD *)(a2 + 4) & 1) != 0
                  && v142 )
                {
                  v149 = *WindowMargins::ExtendRect(
                            &v148,
                            (struct tagRECT *)a1,
                            (const struct tagWND *)&v149,
                            (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)&v144.left + 40LL));
                }
                v121 = v145;
                if ( !v145 )
                  v121 = CHECKPOINT::Get((const struct tagWND *)a1, v120);
                if ( v62 )
                  CHECKPOINT::SetNormalRect(
                    v121,
                    (const struct tagWND *)a1,
                    &v147,
                    *(_WORD *)(*(_QWORD *)&v144.left + 40LL));
                AdvancedWindowPos::UpdateCheckpointForAction(
                  (const struct tagWND *)a1,
                  v121,
                  &v149,
                  *(_DWORD *)(a2 + 4));
                v119 = v140;
              }
              v122 = (unsigned int *)(a2 + 108);
              if ( (*(_DWORD *)a2 & 0x400) == 0 )
                v122 = 0LL;
              AdvancedWindowPos::SendShellNotificationsForAction(
                (const struct tagWND *)a1,
                v119,
                v143,
                v133,
                (CDwmWindowNotifyBatch *)v146,
                v122);
              if ( (*(_DWORD *)a2 & 0x200) != 0 )
              {
                v124 = *(_DWORD *)(a2 + 4);
                v125 = *(const struct CMonitorTopology **)(a2 + 152);
                RecalcProperty = (__int64 **)CRecalcProp::GetRecalcProperty((const struct tagWND *)a1, v123);
                CRecalcProp::EndApplyWindowAction(RecalcProperty, (struct tagWND *)a1, v125, (v124 & 0x10000) != 0);
                if ( (v124 & 0x10000) != 0 )
                  CDwmWindowNotifyBatch::OnRecalcActionApplied(
                    (CDwmWindowNotifyBatch *)v146,
                    *(_DWORD *)(*(_QWORD *)(a2 + 152) + 12LL),
                    1);
              }
              v12 = 3;
              goto LABEL_256;
            }
LABEL_239:
            v118 = 0LL;
            goto LABEL_240;
          }
        }
        else
        {
          v105 = v135;
        }
        if ( !v85 )
          goto LABEL_239;
        goto LABEL_238;
      }
LABEL_174:
      AdvancedWindowPos::xxxAdjustRectsForMonitor((struct tagRECT *)a1, (struct tagWND *)a2, v145, v86, &v147, &v144);
      v138 |= 0x80u;
      v87 = v83 | 0x80000;
      v62 = 1;
      v83 = v83 & 0xFFF7FFFC | 0x80000;
      if ( v142 )
        v83 = v87;
      goto LABEL_210;
    }
    v63 = *(_DWORD *)a2 & 0x40;
    if ( v63 )
      v147 = *(struct tagRECT *)(a2 + 44);
    v62 = v63 != 0;
    v139 = v63 != 0;
    if ( bottom && v38 )
    {
      v64 = *(_DWORD *)(a2 + 12) + *(_DWORD *)(a2 + 20);
      v43 = (unsigned int *)*(unsigned int *)(a2 + 16);
      v65 = (_DWORD)v43 + *(_DWORD *)(a2 + 24);
      if ( !v140 )
      {
        v147.left = *(_DWORD *)(a2 + 12);
        v62 = 1;
        v147.top = (int)v43;
        v147.right = v64;
        v147.bottom = v65;
        goto LABEL_155;
      }
      v149.left = *(_DWORD *)(a2 + 12);
      v149.top = (int)v43;
      v149.right = v64;
      v149.bottom = v65;
      v133 = 1;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v66 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v66 = 0;
      }
      v43 = &WPP_RECORDER_INITIALIZED;
      v136 = v66;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v67 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v67 = 0;
      }
      if ( v66 || v67 )
      {
        W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        v68 = v149.bottom;
        v69 = v149.right;
        v70 = v149.top;
        v71 = v149.left;
        StateString = AdvancedWindowPos::GetStateString(v140);
        LOBYTE(v73) = v67;
        LOBYTE(v74) = v136;
        WPP_RECORDER_AND_TRACE_SF_sdddddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v74,
          v73,
          v75,
          5,
          4,
          162,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
          (__int64)StateString,
          v71,
          v70,
          v69,
          v68,
          v76,
          v77);
      }
      v62 = v139;
    }
    if ( !v62 )
    {
LABEL_165:
      v83 = v137;
      goto LABEL_166;
    }
LABEL_155:
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v78 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v78 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v79 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v79 = 0;
    }
    if ( v78 || v79 )
    {
      v80 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v43);
      LOBYTE(v81) = v79;
      LOBYTE(v82) = v78;
      LODWORD(v132) = v147.bottom - v147.top;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v82,
        v81,
        *(_QWORD *)(v80 + 69160),
        5,
        4,
        163,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
        v147.left,
        v147.top,
        v147.right,
        v147.bottom,
        LOBYTE(v147.right) - LOBYTE(v147.left),
        v132);
    }
    goto LABEL_165;
  }
  WindowActions::xxxInterceptApplyWindowAction((WindowActions *)a1, (struct tagWND *)a2, v10);
  v12 = 1;
LABEL_256:
  AdvancedWindowPos::LogApplyWindowActionEnd((const struct tagWND *)a1, v12);
  CDwmNotifyBatch::~CDwmNotifyBatch((CDwmNotifyBatch *)v146, v127);
}
