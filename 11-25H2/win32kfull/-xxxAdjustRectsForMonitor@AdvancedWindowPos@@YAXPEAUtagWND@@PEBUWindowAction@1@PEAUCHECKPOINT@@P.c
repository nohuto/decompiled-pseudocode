/*
 * XREFs of ?xxxAdjustRectsForMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@PEAUCHECKPOINT@@PEAUtagRECT@@3PEAPEBUMonitorData@CMonitorTopology@@@Z @ 0x1402D6CAC
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z @ 0x140022A24 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z.c)
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x14018F548 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?PhysicalToLogicalDPIRect@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEAU3@K@Z @ 0x1402ACFA0 (-PhysicalToLogicalDPIRect@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEAU3@K@Z.c)
 *     ?xxxTransformRectToMonitor@AdvancedWindowPos@@YA?AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CMonitorTopology@@2_N@Z @ 0x1402D9920 (-xxxTransformRectToMonitor@AdvancedWindowPos@@YA-AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CM.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void __fastcall AdvancedWindowPos::xxxAdjustRectsForMonitor(
        struct tagRECT *this,
        struct tagWND *a2,
        const struct AdvancedWindowPos::WindowAction *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        struct tagRECT *a6)
{
  CMonitorTopology *v6; // rcx
  const struct CMonitorTopology::MonitorData *v7; // rax
  __int64 v8; // rcx
  char v9; // r15
  char v10; // r14
  char v11; // si
  int v12; // ebx
  int v13; // edi
  __int64 UserSessionState; // rax
  int v15; // edx
  int v16; // r8d
  LONG v17; // eax
  CMonitorTopology *v18; // rcx
  const struct CMonitorTopology::MonitorData *v19; // r9
  int v20; // ebx
  int v21; // edi
  __int64 v22; // r9
  int v23; // ebx
  int v24; // edi
  struct tagWND *v25; // rsi
  __int128 v26; // xmm7
  char v27; // di
  char v28; // bl
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  __int128 v32; // xmm6
  bool v33; // di
  char v34; // bl
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  struct tagRECT *v38; // r14
  unsigned int WindowDpiLastNotify; // esi
  char v40; // di
  char v41; // bl
  __int64 v42; // rax
  int v43; // edx
  int v44; // r8d
  bool v45; // di
  char v46; // bl
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  __int64 v50; // rcx
  __int16 v51; // r8
  bool v52; // di
  char v53; // bl
  __int64 v54; // rax
  int v55; // r8d
  int v56; // edx
  unsigned int v57; // eax
  unsigned int v58; // ebx
  struct tagRECT *v59; // rsi
  bool v60; // r13
  char v61; // r12
  LONG bottom; // edi
  LONG top; // r14d
  LONG right; // ebx
  LONG left; // esi
  __int64 v66; // rax
  int v67; // r8d
  int v68; // edx
  struct tagRECT *v69; // rsi
  bool v70; // r13
  char v71; // r12
  LONG v72; // edi
  LONG v73; // r14d
  LONG v74; // ebx
  LONG v75; // esi
  __int64 v76; // rax
  int v77; // r8d
  int v78; // edx
  int v79; // edi
  bool v80; // si
  char v81; // bl
  __int64 v82; // rax
  int v83; // r8d
  int v84; // edx
  __int64 v85; // r9
  const char *v86; // rax
  __int64 v87; // rbx
  struct tagRECT *v88; // rdi
  struct tagRECT v89; // xmm0
  struct tagRECT *v90; // rax
  struct CMonitorTopology::MonitorData *v91; // [rsp+28h] [rbp-D8h]
  bool v92; // [rsp+30h] [rbp-D0h]
  __int16 v93; // [rsp+30h] [rbp-D0h]
  __int16 v94; // [rsp+30h] [rbp-D0h]
  char v95; // [rsp+40h] [rbp-C0h]
  char v96; // [rsp+40h] [rbp-C0h]
  char v97; // [rsp+48h] [rbp-B8h]
  struct tagRECT v98; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT *v99; // [rsp+80h] [rbp-80h]
  const struct AdvancedWindowPos::WindowAction *v100; // [rsp+88h] [rbp-78h]
  struct tagWND *v101; // [rsp+90h] [rbp-70h]
  struct tagRECT *v102; // [rsp+98h] [rbp-68h]
  struct tagRECT *v103; // [rsp+A0h] [rbp-60h]
  struct tagRECT *v104; // [rsp+A8h] [rbp-58h]
  struct tagRECT v105; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v106[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v107; // [rsp+C8h] [rbp-38h]
  __int128 v108; // [rsp+D8h] [rbp-28h]
  __int16 v109; // [rsp+E8h] [rbp-18h]
  unsigned int v110; // [rsp+100h] [rbp+0h]

  v102 = this;
  v100 = a3;
  v104 = a4;
  v101 = a2;
  v103 = a5;
  v99 = a6;
  if ( a4 )
  {
    v6 = (CMonitorTopology *)*((_QWORD *)a2 + 19);
    v98 = *a4;
    v7 = CMonitorTopology::MonitorDataFromRect(v6, &v98, 2, 0x12u);
    *(_QWORD *)&v98.left = v7;
    a2 = *(struct tagWND **)&WPP_GLOBAL_Control;
    v9 = 1;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (v8 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v8 & 8) == 0)
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
      v12 = *((_DWORD *)v7 + 7);
      v13 = *((_DWORD *)v7 + 6);
      UserSessionState = W32GetUserSessionState(v8, *(_QWORD *)&WPP_GLOBAL_Control);
      v97 = v12;
      v95 = v13;
      v93 = 94;
LABEL_33:
      LOBYTE(v16) = v11;
      LOBYTE(v15) = v10;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v15,
        v16,
        *(_QWORD *)(UserSessionState + 69160),
        5,
        4,
        v93,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
        v95,
        v97);
    }
  }
  else if ( (*(_DWORD *)a2 & 0x100) != 0 )
  {
    v17 = *((_DWORD *)a2 + 25);
    v18 = (CMonitorTopology *)*((_QWORD *)a2 + 19);
    v98.top = *((_DWORD *)a2 + 26);
    v98.bottom = v98.top;
    v98.left = v17;
    v98.right = v17;
    v19 = CMonitorTopology::MonitorDataFromRect(v18, &v98, 2, 0x12u);
    *(_QWORD *)&v98.left = v19;
    v9 = 1;
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
      v20 = *((_DWORD *)v19 + 7);
      v21 = *((_DWORD *)v19 + 6);
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      v97 = v20;
      v95 = v21;
      v93 = 95;
      goto LABEL_33;
    }
  }
  else
  {
    v22 = *(_QWORD *)&a6->left;
    *(_QWORD *)&v98.left = *(_QWORD *)&a6->left;
    v9 = 1;
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
      v23 = *(_DWORD *)(v22 + 28);
      v24 = *(_DWORD *)(v22 + 24);
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      v97 = v23;
      v95 = v24;
      v93 = 96;
      goto LABEL_33;
    }
  }
  v25 = v101;
  if ( (*((_DWORD *)v101 + 1) & 0x80u) == 0 )
  {
    v38 = v99;
    v26 = *(_OWORD *)(*(_QWORD *)&v99->left + 24LL);
    v32 = *(_OWORD *)(*(_QWORD *)&v99->left + 8LL);
    v45 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v46 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v46 = 0;
    }
    if ( v45 || v46 )
    {
      v47 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      LOBYTE(v48) = v46;
      LOBYTE(v49) = v45;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v49,
        v48,
        *(_QWORD *)(v47 + 69160),
        5,
        4,
        99,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
    }
  }
  else
  {
    v26 = *(_OWORD *)((char *)v101 + 60);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u )
    {
      a2 = 0LL;
      v27 = 0;
    }
    else
    {
      v27 = 1;
      a2 = 0LL;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v28 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v28 = 0;
    }
    if ( v27 || v28 )
    {
      v29 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
      LOBYTE(v30) = v28;
      LOBYTE(v31) = v27;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v31,
        v30,
        *(_QWORD *)(v29 + 69160),
        5,
        4,
        97,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
    }
    if ( (*((_DWORD *)v25 + 1) & 0x4000) != 0 )
    {
      v32 = *(_OWORD *)((char *)v25 + 76);
      v33 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v34 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v34 = 0;
      }
      if ( v33 || v34 )
      {
        v35 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
        LOBYTE(v36) = v34;
        LOBYTE(v37) = v33;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v37,
          v36,
          *(_QWORD *)(v35 + 69160),
          5,
          4,
          98,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
      }
    }
    else
    {
      v32 = v26;
    }
    v38 = v99;
  }
  if ( (*((_DWORD *)v25 + 1) & 0x100) != 0 )
  {
    WindowDpiLastNotify = *((_DWORD *)v25 + 24);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v40 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v40 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v41 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v41 = 0;
    }
    if ( v40 || v41 )
    {
      v42 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      v96 = WindowDpiLastNotify;
      v94 = 100;
LABEL_115:
      LOBYTE(v44) = v41;
      LOBYTE(v43) = v40;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v43,
        v44,
        *(_QWORD *)(v42 + 69160),
        5,
        4,
        v94,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
        v96);
    }
  }
  else if ( (*(_DWORD *)v25 & 0x40) != 0 )
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)&v38->left + 40LL);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v40 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v40 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v41 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v41 = 0;
    }
    if ( v40 || v41 )
    {
      v42 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      v96 = WindowDpiLastNotify;
      v94 = 101;
      goto LABEL_115;
    }
  }
  else if ( v100 && *((_WORD *)v100 + 26) )
  {
    WindowDpiLastNotify = *((unsigned __int16 *)v100 + 26);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v40 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v40 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v41 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v41 = 0;
    }
    if ( v40 || v41 )
    {
      v42 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      v96 = WindowDpiLastNotify;
      v94 = 102;
      goto LABEL_115;
    }
  }
  else
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)v102);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (v50 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), (v50 & 8) == 0)
      || (v40 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v40 = v51;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v41 = 1, *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) == v51) )
    {
      v41 = v51;
    }
    if ( v40 || v41 )
    {
      v42 = W32GetUserSessionState(v50, *(_QWORD *)&WPP_GLOBAL_Control);
      v96 = WindowDpiLastNotify;
      v94 = 103;
      goto LABEL_115;
    }
  }
  memset_0(v106, 0, 0x48uLL);
  v107 = v32;
  v109 = WindowDpiLastNotify;
  v108 = v26;
  if ( (*((_DWORD *)v101 + 1) & 0x8000) != 0 )
  {
    v110 = *((_DWORD *)v101 + 23);
    v52 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v53 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v53 = 0;
    }
    if ( v52 || v53 )
    {
      v54 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
      LOBYTE(v55) = v53;
      LOBYTE(v56) = v52;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v56,
        v55,
        *(_QWORD *)(v54 + 69160),
        5,
        4,
        104,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
    }
  }
  else
  {
    v57 = *(_DWORD *)(*(_QWORD *)&v98.left + 64LL);
    if ( WindowDpiLastNotify < v57 )
      v57 = WindowDpiLastNotify;
    v110 = v57;
  }
  v58 = *(_DWORD *)(*(_QWORD *)&v102[2].right + 288LL);
  LODWORD(v100) = v58;
  if ( (v58 & 0xF) != 2 )
  {
    v59 = v103;
    *v59 = *CMonitorTopology::MonitorData::PhysicalToLogicalDPIRect(
              (CMonitorTopology::MonitorData *)v106,
              &v105,
              (__m128i *)v103,
              v58);
    v60 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v61 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v61 = 0;
    }
    if ( v60 || v61 )
    {
      bottom = v59->bottom;
      top = v59->top;
      right = v59->right;
      left = v59->left;
      v66 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
      LOBYTE(v67) = v61;
      LOBYTE(v68) = v60;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v68,
        v67,
        *(_QWORD *)(v66 + 69160),
        5,
        4,
        105,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
        left,
        top,
        right,
        bottom,
        right - left);
      v58 = (unsigned int)v100;
    }
    v69 = v104;
    if ( v104 )
    {
      *v69 = *CMonitorTopology::MonitorData::PhysicalToLogicalDPIRect(
                *(CMonitorTopology::MonitorData **)&v98.left,
                &v105,
                (__m128i *)v104,
                v58);
      v70 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v71 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v71 = 0;
      }
      if ( v70 || v71 )
      {
        v72 = v69->bottom;
        v73 = v69->top;
        v74 = v69->right;
        v75 = v69->left;
        v76 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
        LOBYTE(v77) = v71;
        LOBYTE(v78) = v70;
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v78,
          v77,
          *(_QWORD *)(v76 + 69160),
          5,
          4,
          106,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
          v75,
          v73,
          v74,
          v72,
          v74 - v75);
      }
    }
  }
  v79 = *(_DWORD *)v101 & 0x80;
  v80 = v79 != 0;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v81 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v81 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v9 = 0;
  }
  if ( v81 || v9 )
  {
    v82 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
    LOBYTE(v83) = v9;
    LOBYTE(v84) = v81;
    v85 = *(_QWORD *)(v82 + 69160);
    v86 = "true";
    if ( !v79 )
      v86 = "false";
    WPP_RECORDER_AND_TRACE_SF_s(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v84,
      v83,
      v85,
      5,
      4,
      107,
      (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
      (__int64)v86);
  }
  v87 = *(_QWORD *)&v98.left;
  v88 = v103;
  LOBYTE(v91) = v80;
  v89 = *AdvancedWindowPos::xxxTransformRectToMonitor(
           (AdvancedWindowPos *)&v105,
           v102,
           (struct tagWND *)v103,
           *(const struct tagRECT **)&v98.left,
           (const struct CMonitorTopology::MonitorData *)v106,
           v91,
           v92);
  v90 = v99;
  *v88 = v89;
  *(_QWORD *)&v90->left = v87;
}
