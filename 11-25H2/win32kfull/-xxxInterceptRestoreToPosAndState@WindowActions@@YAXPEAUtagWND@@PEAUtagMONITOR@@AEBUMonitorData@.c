/*
 * XREFs of ?xxxInterceptRestoreToPosAndState@WindowActions@@YAXPEAUtagWND@@PEAUtagMONITOR@@AEBUMonitorData@CMonitorTopology@@W4State@AdvancedWindowPos@@UtagRECT@@4W4ApplyOption@7@PEAK@Z @ 0x1402D12FC
 * Callers:
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x14020C498 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     _MonitorFromRect @ 0x1400913B0 (_MonitorFromRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x14018F548 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x14026BFEC (-LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     ?GetWindowActionStateString@@YAPEBDW4_WINDOW_PLACEMENT_STATE@@@Z @ 0x1402CB748 (-GetWindowActionStateString@@YAPEBDW4_WINDOW_PLACEMENT_STATE@@@Z.c)
 *     ?MaxStateFromAwpState@@YA?AW4_WINDOW_PLACEMENT_STATE@@W4State@AdvancedWindowPos@@@Z @ 0x1402CB784 (-MaxStateFromAwpState@@YA-AW4_WINDOW_PLACEMENT_STATE@@W4State@AdvancedWindowPos@@@Z.c)
 *     ?SetDisplayChange@@YAXPEAU_WINDOW_ACTION@@@Z @ 0x1402CCA9C (-SetDisplayChange@@YAXPEAU_WINDOW_ACTION@@@Z.c)
 *     ?SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z @ 0x1402CCBD0 (-SetMonitorMovePoint@@YAXPEAU_WINDOW_ACTION@@PEBUtagMONITOR@@@Z.c)
 *     ?xxxMigrateArrangedRect@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_REASON@@U3@PEAW4State@AdvancedWindowPos@@PEAKPEAU_WINDOW_ACTION@@@Z @ 0x1402D27A4 (-xxxMigrateArrangedRect@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

unsigned __int64 __fastcall WindowActions::xxxInterceptRestoreToPosAndState(
        struct tagWND *a1,
        const struct tagMONITOR *a2,
        CMonitorTopology::MonitorData *a3,
        int a4,
        __int128 *a5,
        INT *a6,
        char a7,
        __int64 a8)
{
  CMonitorTopology::MonitorData *v8; // rbx
  int v9; // edi
  char v10; // r14
  char v11; // si
  __int64 v12; // rbx
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  __int16 v16; // bx
  struct tagRECT *v17; // rax
  unsigned __int64 result; // rax
  char v19; // si
  char v20; // di
  const char *WindowActionStateString; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  __int128 v27; // xmm0
  char v28; // r14
  char v29; // si
  int v30; // edx
  int v31; // r8d
  __int64 v32; // r9
  const struct tagMONITOR *v33; // rax
  char v34; // di
  char v35; // bl
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  __int128 v39; // xmm0
  CMonitorTopology::MonitorData *v40; // r15
  __int64 v41; // rcx
  __int64 v42; // rdx
  char v43; // r14
  char v44; // si
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  int v48; // eax
  char v49; // di
  char v50; // bl
  __int64 v51; // rax
  int v52; // r8d
  int v53; // edx
  int v54; // [rsp+20h] [rbp-E0h]
  __int16 v55; // [rsp+30h] [rbp-D0h]
  char v56; // [rsp+40h] [rbp-C0h]
  char v57; // [rsp+48h] [rbp-B8h]
  char v58; // [rsp+50h] [rbp-B0h]
  char v59; // [rsp+58h] [rbp-A8h]
  char v60; // [rsp+60h] [rbp-A0h]
  __int64 v61; // [rsp+68h] [rbp-98h]
  int v62; // [rsp+68h] [rbp-98h]
  int v64; // [rsp+78h] [rbp-88h] BYREF
  CMonitorTopology::MonitorData *v65; // [rsp+80h] [rbp-80h]
  struct tagWND *v66; // [rsp+88h] [rbp-78h]
  __int128 v67; // [rsp+90h] [rbp-70h] BYREF
  int v68; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v69; // [rsp+A4h] [rbp-5Ch]
  unsigned int v70; // [rsp+C8h] [rbp-38h]
  __int128 v71; // [rsp+CCh] [rbp-34h]
  __int128 v72; // [rsp+DCh] [rbp-24h]
  int v73; // [rsp+ECh] [rbp-14h]
  struct tagRECT v74; // [rsp+100h] [rbp+0h] BYREF

  v8 = a3;
  v9 = a4;
  v65 = a3;
  v66 = a1;
  v64 = a4;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v10 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v11 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v11 = 0;
  }
  if ( v10 || v11 )
  {
    v12 = *(_QWORD *)a1;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a1);
    LOBYTE(v14) = v11;
    LOBYTE(v15) = v10;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v15,
      v14,
      *(_QWORD *)(UserSessionState + 69160),
      5,
      4,
      74,
      (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
      v12);
    v8 = v65;
  }
  memset_0(&v68, 0, 0x60uLL);
  if ( v9 == 3 )
  {
    v16 = *((_WORD *)v8 + 20);
    v17 = CMonitorTopology::MonitorData::LogicalWorkArea(v65, &v74, v66);
    v67 = *a5;
    LOWORD(v54) = v16;
    result = xxxMigrateArrangedRect(v66, a2, v17, (char *)v65 + 24, v54, 0, &v67, &v64, a8, &v68);
    if ( !(_BYTE)result )
      return result;
    v9 = v64;
    if ( !v64 )
      *a5 = *(_OWORD *)a6;
  }
  v68 |= 0x20u;
  v70 = MaxStateFromAwpState(v9);
  SetDisplayChange((struct _WINDOW_ACTION *)&v68);
  if ( !v70 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v34 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v34 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v35 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v35 = 0;
    }
    if ( v34 || v35 )
    {
      v36 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v37) = v35;
      LOBYTE(v38) = v34;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v38,
        v37,
        *(_QWORD *)(v36 + 69160),
        5,
        4,
        75,
        (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids);
    }
    v39 = *a5;
    v68 |= 0x40u;
    v71 = v39;
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
    if ( !v28 && !v29 )
      goto LABEL_62;
    v32 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED) + 69160);
    v62 = HIDWORD(v71) - DWORD1(v71);
    v60 = BYTE8(v71) - v71;
    v59 = BYTE12(v71);
    v58 = BYTE8(v71);
    v57 = BYTE4(v71);
    v56 = v71;
    v55 = 76;
LABEL_61:
    LOBYTE(v31) = v29;
    LOBYTE(v30) = v28;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v30,
      v31,
      v32,
      5,
      4,
      v55,
      (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
      v56,
      v57,
      v58,
      v59,
      v60,
      v62);
    goto LABEL_62;
  }
  if ( v70 != 1 && v70 != 3 )
    goto LABEL_62;
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
    WindowActionStateString = GetWindowActionStateString(v70);
    v24 = W32GetUserSessionState(v23, v22);
    LOBYTE(v25) = v20;
    LOBYTE(v26) = v19;
    WPP_RECORDER_AND_TRACE_SF_s(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v26,
      v25,
      *(_QWORD *)(v24 + 69160),
      5,
      4,
      77,
      (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
      (__int64)WindowActionStateString);
  }
  if ( (a7 & 8) != 0 )
  {
    v27 = *(_OWORD *)a6;
    v68 |= 0x40u;
    v71 = v27;
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
    if ( !v28 && !v29 )
      goto LABEL_62;
    v32 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED) + 69160);
    v62 = HIDWORD(v71) - DWORD1(v71);
    v60 = BYTE8(v71) - v71;
    v59 = BYTE12(v71);
    v58 = BYTE8(v71);
    v57 = BYTE4(v71);
    v56 = v71;
    v55 = 78;
    goto LABEL_61;
  }
  if ( (a7 & 4) == 0 )
  {
LABEL_62:
    v33 = a2;
    goto LABEL_63;
  }
  v33 = (const struct tagMONITOR *)MonitorFromRect(a6, 2u, 0x12u);
LABEL_63:
  if ( v70 <= 1 )
    SetMonitorMovePoint((struct _WINDOW_ACTION *)&v68, v33);
  v41 = v69;
  v40 = v65;
  LODWORD(v41) = v69 | 0x100;
  v69 |= 0x100u;
  v72 = *(_OWORD *)((char *)v65 + 24);
  v42 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
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
    v45 = W32GetUserSessionState(v41, *(_QWORD *)&WPP_GLOBAL_Control);
    LOBYTE(v46) = v44;
    LOBYTE(v47) = v43;
    LODWORD(v61) = HIDWORD(v72) - DWORD1(v72);
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v47,
      v46,
      *(_QWORD *)(v45 + 69160),
      5,
      4,
      79,
      (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
      v72,
      SBYTE4(v72),
      SBYTE8(v72),
      SBYTE12(v72),
      BYTE8(v72) - v72,
      v61);
    LODWORD(v41) = v69;
  }
  v48 = *((unsigned __int16 *)v40 + 20);
  v69 = v41 | 0x200;
  v73 = v48;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v49 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v49 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v50 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v50 = 0;
  }
  if ( v49 || v50 )
  {
    v51 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v42);
    LOBYTE(v52) = v50;
    LOBYTE(v53) = v49;
    WPP_RECORDER_AND_TRACE_SF_d(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v53,
      v52,
      *(_QWORD *)(v51 + 69160),
      5,
      4,
      80,
      (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
      v73);
  }
  v68 |= 0x100u;
  return xxxSendTransformableMessageTimeout(
           (struct tagTHREADINFO **)v66,
           838LL,
           0LL,
           (struct tagDRAWITEMSTRUCT *)&v68,
           0,
           0,
           0LL,
           1,
           1);
}
