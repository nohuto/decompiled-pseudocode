/*
 * XREFs of ?xxxInterceptMigrateWindow@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV4@W4MigrateWindowOptions@@PEAK@Z @ 0x1402D042C
 * Callers:
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV5@W4MigrateWindowOptions@@PEAKPEAU6@@Z @ 0x1402D884C (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x1400227A8 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x140026190 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400262EC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _anonymous_namespace_::TestFeature @ 0x14014C74C (_anonymous_namespace_--TestFeature.c)
 *     ?HasValidCheckpointPosition@@YA_NPEAUtagWND@@@Z @ 0x14014FD30 (-HasValidCheckpointPosition@@YA_NPEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x14018F548 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_sdddddd @ 0x14020A178 (WPP_RECORDER_AND_TRACE_SF_sdddddd.c)
 *     ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x14026BFEC (-LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     ?GetWindowActionStateString@@YAPEBDW4_WINDOW_PLACEMENT_STATE@@@Z @ 0x1402CB748 (-GetWindowActionStateString@@YAPEBDW4_WINDOW_PLACEMENT_STATE@@@Z.c)
 *     ?MaxStateFromAwpState@@YA?AW4_WINDOW_PLACEMENT_STATE@@W4State@AdvancedWindowPos@@@Z @ 0x1402CB784 (-MaxStateFromAwpState@@YA-AW4_WINDOW_PLACEMENT_STATE@@W4State@AdvancedWindowPos@@@Z.c)
 *     ?SetDisplayChange@@YAXPEAU_WINDOW_ACTION@@@Z @ 0x1402CCA9C (-SetDisplayChange@@YAXPEAU_WINDOW_ACTION@@@Z.c)
 *     ?SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z @ 0x1402CCBD0 (-SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z.c)
 *     ?SetPendingWorkAreaMove@CInterceptWindowProp@@SAXPEAUtagWND@@@Z @ 0x1402CCD34 (-SetPendingWorkAreaMove@CInterceptWindowProp@@SAXPEAUtagWND@@@Z.c)
 *     ?xxxUpdateActionForArrangeMigrate@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_REASON@@U3@PEAKPEAU_WINDOW_ACTION@@@Z @ 0x1402D2F90 (-xxxUpdateActionForArrangeMigrate@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRA.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

unsigned int *__fastcall WindowActions::xxxInterceptMigrateWindow(
        struct tagWND *a1,
        const struct tagMONITOR *a2,
        CMonitorTopology *a3,
        struct tagRECT *a4,
        CMonitorTopology *a5,
        char a6,
        __int64 a7)
{
  struct tagRECT *v7; // rsi
  char v10; // r15
  char v11; // r14
  char v12; // di
  __int64 v13; // rbx
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  char valid; // di
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 Prop; // rax
  __int64 v22; // rbx
  struct tagRECT v23; // xmm0
  __int64 v24; // rdx
  const struct CMonitorTopology::MonitorData *v25; // r13
  unsigned int *result; // rax
  bool v27; // di
  __int64 v28; // rbx
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rax
  struct tagRECT v35; // xmm6
  int v36; // edi
  __int16 v37; // bx
  struct tagRECT *v38; // rax
  const struct tagMONITOR *v39; // rbx
  struct tagRECT v40; // xmm0
  int WindowState; // eax
  int v42; // eax
  __int64 top; // rdx
  bool v44; // r14
  char v45; // di
  const char *WindowActionStateString; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  LONG left; // ecx
  LONG right; // eax
  int v54; // eax
  char v55; // al
  unsigned __int8 v56; // r13
  LONG bottom; // edi
  LONG v58; // r14d
  LONG v59; // ebx
  LONG v60; // esi
  __int64 v61; // rax
  const char *v62; // rdx
  const char *v63; // r10
  const struct CMonitorTopology::MonitorData *v64; // rax
  __int64 v65; // rcx
  bool v66; // di
  char v67; // bl
  __int64 v68; // rax
  int v69; // r8d
  int v70; // edx
  char v71; // r14
  char v72; // si
  __int64 v73; // rax
  int v74; // r8d
  int v75; // edx
  int v76; // [rsp+20h] [rbp-E0h]
  char v77; // [rsp+80h] [rbp-80h]
  char v78; // [rsp+81h] [rbp-7Fh]
  int v81; // [rsp+B0h] [rbp-50h] BYREF
  int v82; // [rsp+B4h] [rbp-4Ch]
  LONG v83; // [rsp+BCh] [rbp-44h]
  int v84; // [rsp+C0h] [rbp-40h]
  int v85; // [rsp+C4h] [rbp-3Ch]
  int v86; // [rsp+C8h] [rbp-38h]
  int v87; // [rsp+D8h] [rbp-28h]
  struct tagRECT v88; // [rsp+DCh] [rbp-24h]
  __int128 v89; // [rsp+ECh] [rbp-14h]
  int v90; // [rsp+FCh] [rbp-4h]
  struct tagRECT v91; // [rsp+110h] [rbp+10h] BYREF
  struct tagRECT v92; // [rsp+120h] [rbp+20h] BYREF

  v7 = a4;
  v10 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v11 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v11 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v12 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v12 = 0;
  }
  if ( v11 || v12 )
  {
    v13 = *(_QWORD *)a1;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
    LOBYTE(v15) = v12;
    LOBYTE(v16) = v11;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v16,
      v15,
      *(_QWORD *)(UserSessionState + 69160),
      5,
      4,
      68,
      (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
      v13);
  }
  valid = HasValidCheckpointPosition(a1);
  v77 = valid;
  v20 = W32GetUserSessionState(v19, v18);
  Prop = GetProp((__int64)a1, *(unsigned __int16 *)(v20 + 41334), 1u);
  v22 = Prop;
  if ( Prop && valid )
    v23 = *(struct tagRECT *)(Prop + 20);
  else
    v23 = *(struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
  v91 = v23;
  v25 = CMonitorTopology::MonitorDataFromRect(a3, a1, &v91);
  if ( v25 )
  {
    memset_0(&v81, 0, 0x60uLL);
    if ( anonymous_namespace_::TestFeature(1LL, v32) && (IsArranged(a1) || v22 && (*(_DWORD *)(v22 + 16) & 8) != 0) )
    {
      v34 = *((_QWORD *)a1 + 5);
      v35 = *(struct tagRECT *)(v34 + 88);
      if ( (*(_BYTE *)(v34 + 31) & 0x20) != 0 )
      {
        v35 = *(struct tagRECT *)(v22 + 36);
        v36 = 2;
      }
      else
      {
        v36 = ((unsigned __int8)~a6 >> 1) & 1;
      }
      v37 = *((_WORD *)v25 + 20);
      v38 = CMonitorTopology::MonitorData::LogicalWorkArea(v25, &v92, a1);
      v91 = v35;
      LOWORD(v76) = v37;
      v39 = a2;
      result = (unsigned int *)xxxUpdateActionForArrangeMigrate(a1, a2, v38, (char *)v25 + 24, v76, v36, &v91, a7, &v81);
      if ( !(_BYTE)result )
        return result;
    }
    else
    {
      v39 = a2;
    }
    if ( (a6 & 2) != 0 )
    {
      SetDisplayChange((struct _WINDOW_ACTION *)&v81);
      if ( (a6 & 8) != 0 )
        CInterceptWindowProp::SetPendingWorkAreaMove(a1);
    }
    if ( (v82 & 0x80u) == 0 && v87 != 3 )
      SetMonitorMovePoint((struct _WINDOW_ACTION *)&v81, v39);
    if ( v7 )
    {
      if ( v77 )
      {
        v40 = *v7;
        v81 |= 0x60u;
        v88 = v40;
        WindowState = AdvancedWindowPos::GetWindowState(a1);
        v42 = MaxStateFromAwpState(WindowState);
        v87 = v42;
        top = *(_QWORD *)&WPP_GLOBAL_Control;
        v44 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
           && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
           && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v45 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v45 = 0;
        }
        if ( v44 || v45 )
        {
          WindowActionStateString = GetWindowActionStateString(v42);
          v49 = W32GetUserSessionState(v48, v47);
          LOBYTE(v50) = v45;
          LOBYTE(v51) = v44;
          WPP_RECORDER_AND_TRACE_SF_s(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v51,
            v50,
            *(_QWORD *)(v49 + 69160),
            5,
            4,
            70,
            (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
            (__int64)WindowActionStateString);
        }
      }
      else
      {
        left = v7->left;
        top = (unsigned int)v7->top;
        right = v7->right;
        v81 |= 6u;
        v85 = right - left;
        v54 = v7->bottom - top;
        v83 = left;
        v86 = v54;
        v84 = top;
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v55 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v55 = 0;
      }
      v78 = v55;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v56 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v56 = 0;
      }
      if ( v55 || v56 )
      {
        bottom = v7->bottom;
        v58 = v7->top;
        v59 = v7->right;
        v60 = v7->left;
        v61 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, top);
        v62 = "WAK_SIZE | WAK_POSITION";
        v63 = "WAK_NORMAL_RECT";
        if ( !v77 )
          v63 = "WAK_SIZE | WAK_POSITION";
        LOBYTE(v62) = v78;
        WPP_RECORDER_AND_TRACE_SF_sdddddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          (_DWORD)v62,
          v56,
          *(_QWORD *)(v61 + 69160),
          5,
          4,
          71,
          (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
          (__int64)v63,
          v60,
          v58,
          v59,
          bottom,
          v59 - v60,
          bottom - v58);
        v7 = a4;
      }
      v91 = *v7;
      v64 = CMonitorTopology::MonitorDataFromRect(a5, a1, &v91);
      v82 |= 0x200u;
      v25 = v64;
      v65 = *((unsigned __int16 *)v64 + 20);
      v90 = *((unsigned __int16 *)v64 + 20);
      v33 = *(_QWORD *)&WPP_GLOBAL_Control;
      v66 = 0;
      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
      {
        v65 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL);
        if ( (v65 & 8) != 0 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
          v66 = 1;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v67 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v67 = 0;
      }
      if ( v66 || v67 )
      {
        v68 = W32GetUserSessionState(v65, *(_QWORD *)&WPP_GLOBAL_Control);
        LOBYTE(v69) = v67;
        LOBYTE(v70) = v66;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v70,
          v69,
          *(_QWORD *)(v68 + 69160),
          5,
          4,
          72,
          (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
          v90);
      }
    }
    v82 |= 0x100u;
    v89 = *(_OWORD *)((char *)v25 + 24);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v71 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v71 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v72 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v72 = 0;
    }
    if ( v71 || v72 )
    {
      v73 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v33);
      LOBYTE(v74) = v72;
      LOBYTE(v75) = v71;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v75,
        v74,
        *(_QWORD *)(v73 + 69160),
        5,
        4,
        73,
        (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
        v89,
        SBYTE4(v89),
        SBYTE8(v89),
        SBYTE12(v89),
        BYTE8(v89) - v89,
        BYTE12(v89) - BYTE4(v89));
    }
    v81 |= 0x100u;
    return (unsigned int *)xxxSendTransformableMessageTimeout(
                             (struct tagTHREADINFO **)a1,
                             838LL,
                             0LL,
                             (struct tagDRAWITEMSTRUCT *)&v81,
                             0,
                             0,
                             0LL,
                             1,
                             1);
  }
  else
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v10 = 0;
    }
    result = &WPP_RECORDER_INITIALIZED;
    v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v28 = *(_QWORD *)a1;
      v29 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v24);
      LOBYTE(v30) = v27;
      LOBYTE(v31) = v10;
      return (unsigned int *)WPP_RECORDER_AND_TRACE_SF_q(
                               *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                               v31,
                               v30,
                               *(_QWORD *)(v29 + 69160),
                               3,
                               4,
                               69,
                               (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
                               v28);
    }
  }
  return result;
}
