/*
 * XREFs of _anonymous_namespace_::xxxMigrateWindowPosition @ 0x14022B230
 * Callers:
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV5@W4MigrateWindowOptions@@PEAKPEAU6@@Z @ 0x1402D884C (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x1400227A8 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x140026154 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x140026190 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400262EC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _anonymous_namespace_::TestFeature @ 0x14014C74C (_anonymous_namespace_--TestFeature.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEBUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x14014D338 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x14014DDEC (_anonymous_namespace_--xxxNormalizeRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x14018F548 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_ssdddddd @ 0x1401E16DC (WPP_RECORDER_AND_TRACE_SF_ssdddddd.c)
 *     _anonymous_namespace_::xxxAwpMinMaximizeEx @ 0x140221DBC (_anonymous_namespace_--xxxAwpMinMaximizeEx.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A2E8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1402593D8 (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x14026BFEC (-LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::GetArrangedOptions @ 0x1402D4544 (_anonymous_namespace_--GetArrangedOptions.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

char __fastcall anonymous_namespace_::xxxMigrateWindowPosition(
        AdvancedWindowPos *this,
        __int64 a2,
        CMonitorTopology *a3,
        struct tagRECT *a4,
        unsigned int a5,
        unsigned int a6,
        struct tagRECT *a7)
{
  struct tagRECT *v7; // r12
  struct tagRECT v10; // xmm1
  char v11; // si
  char v12; // di
  __int64 UserSessionState; // rax
  LONG right; // r8d
  int v15; // edx
  const struct CMonitorTopology::MonitorData *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r14
  char v19; // bl
  int v20; // r15d
  __int64 v21; // rdx
  unsigned __int16 v22; // ax
  __int64 v23; // rsi
  char v24; // si
  bool v25; // r12
  __int64 v26; // rax
  LONG v27; // r8d
  int v28; // edx
  char v29; // si
  char v30; // bl
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  __int64 v34; // rcx
  char v35; // si
  bool v36; // r14
  const char *StateString; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  __int64 v43; // rax
  __int64 Prop; // rax
  __int64 v45; // rdx
  char v46; // r14
  char v47; // si
  __int64 v48; // rax
  LONG v49; // r8d
  int v50; // edx
  const struct CMonitorTopology::MonitorData *v51; // rax
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v52; // r8
  struct tagRECT v53; // xmm0
  __int64 v54; // r8
  char v55; // si
  char v56; // di
  __int64 v57; // rax
  LONG v58; // r8d
  int v59; // edx
  char v60; // r12
  _DWORD *v61; // rax
  int v62; // esi
  int v63; // r15d
  int v64; // edi
  int v65; // r14d
  int WindowState; // eax
  const char *v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  const char *v71; // r10
  int v72; // edx
  int v73; // r8d
  int v75; // [rsp+20h] [rbp-E0h]
  int v76; // [rsp+28h] [rbp-D8h]
  int v77; // [rsp+30h] [rbp-D0h]
  int v78; // [rsp+38h] [rbp-C8h]
  char v79; // [rsp+80h] [rbp-80h]
  bool v80; // [rsp+81h] [rbp-7Fh]
  int v81; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v82; // [rsp+88h] [rbp-78h]
  int v83; // [rsp+90h] [rbp-70h]
  struct tagRECT *v84; // [rsp+98h] [rbp-68h]
  struct tagRECT v85; // [rsp+A0h] [rbp-60h] BYREF
  CMonitorTopology *v86; // [rsp+B0h] [rbp-50h]
  struct tagRECT v87; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v88; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v89[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v90; // [rsp+100h] [rbp+0h]
  struct tagRECT v91; // [rsp+110h] [rbp+10h] BYREF

  v7 = a7;
  v86 = a3;
  v82 = a2;
  v84 = a7;
  if ( !a4 )
    a4 = (struct tagRECT *)(*((_QWORD *)this + 5) + 88LL);
  v10 = *a4;
  v87 = *a4;
  if ( a7 )
    *a7 = 0LL;
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
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    right = v87.right;
    LOBYTE(v15) = v11;
    LOBYTE(right) = v12;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v15,
      right,
      *(_QWORD *)(UserSessionState + 69160),
      5,
      4,
      34,
      (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
      v87.left,
      v87.top,
      v87.right,
      v87.bottom,
      LOBYTE(v87.right) - LOBYTE(v87.left),
      LOBYTE(v87.bottom) - LOBYTE(v87.top));
    v10 = v87;
  }
  v88 = v10;
  v16 = CMonitorTopology::MonitorDataFromRect(a3, this, &v88);
  v18 = (__int64)v16;
  if ( !v16 )
    return (char)v16;
  v79 = 0;
  v83 = 524308;
  v19 = 0;
  v20 = 1;
  if ( !anonymous_namespace_::TestFeature(1LL, v17) || !IsArranged(this) )
    goto LABEL_28;
  v81 = 0;
  v79 = 1;
  v88 = 0LL;
  CMonitorTopology::MonitorData::LogicalWorkArea((CMonitorTopology::MonitorData *)v18, &v91, this);
  v22 = *(_WORD *)(v18 + 40);
  v85 = v87;
  v23 = v82;
  if ( CallShell::xxxMigrateWindowHandler(
         (struct tagRECT *)this,
         ((a5 >> 1) & 1) == 0,
         (__int64 *)(v18 + 24),
         (__int64 *)&v91.left,
         v22,
         (struct tagWND *)&v85,
         v82,
         (__m128i *)&v88,
         &v81,
         (int *)&a6) )
  {
    if ( v81 != 3 )
    {
      v34 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v35 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v35 = 0;
      }
      v36 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v35 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        StateString = AdvancedWindowPos::GetStateString(v81);
        v40 = W32GetUserSessionState(v39, v38);
        LOBYTE(v41) = v36;
        LOBYTE(v42) = v35;
        WPP_RECORDER_AND_TRACE_SF_s(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v42,
          v41,
          *(_QWORD *)(v40 + 69160),
          4,
          4,
          36,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
          (__int64)StateString);
      }
      v43 = W32GetUserSessionState(v34, v21);
      Prop = GetProp((__int64)this, *(unsigned __int16 *)(v43 + 41334), 1u);
      if ( Prop )
      {
        v87 = *(struct tagRECT *)(Prop + 20);
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v46 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v46 = 0;
        }
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v47 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v47 = 0;
        }
        if ( v46 || v47 )
        {
          v48 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v45);
          v49 = v87.right;
          LOBYTE(v50) = v46;
          LOBYTE(v49) = v47;
          WPP_RECORDER_AND_TRACE_SF_dddddd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v50,
            v49,
            *(_QWORD *)(v48 + 69160),
            5,
            4,
            37,
            (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
            v87.left,
            v87.top,
            v87.right,
            v87.bottom,
            LOBYTE(v87.right) - LOBYTE(v87.left),
            LOBYTE(v87.bottom) - LOBYTE(v87.top));
        }
      }
      v85 = v87;
      v51 = CMonitorTopology::MonitorDataFromRect(v86, this, &v85);
      if ( v51 )
      {
        v53 = *(struct tagRECT *)anonymous_namespace_::xxxNormalizeRect(
                                   (__int64)&v85,
                                   this,
                                   (__int64)&v87,
                                   v82,
                                   (__int64)v51,
                                   1);
        v87 = v53;
      }
      else
      {
        v53 = v87;
      }
      DWORD2(v89[0]) = v81;
      *(_QWORD *)&v89[0] = 0LL;
      HIDWORD(v89[0]) = ((a5 & 4) << 7) | 0x5F;
      v89[1] = v53;
      LODWORD(v90) = a6;
      AdvancedWindowPos::xxxApplyWindowPos(this, (struct tagRECT *)v89, v52);
      v54 = 2LL;
      goto LABEL_90;
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v24 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v24 = 0;
    }
    v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v24 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v26 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v21);
      v27 = v88.right;
      LOBYTE(v28) = v24;
      LOBYTE(v27) = v25;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v28,
        v27,
        *(_QWORD *)(v26 + 69160),
        4,
        4,
        35,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
        v88.left,
        v88.top,
        v88.right,
        v88.bottom,
        LOBYTE(v88.right) - LOBYTE(v88.left),
        LOBYTE(v88.bottom) - LOBYTE(v88.top));
    }
    v19 = 1;
    v7 = v84;
    v87 = v88;
    v83 = 13107220;
LABEL_28:
    v23 = v82;
    goto LABEL_29;
  }
  v20 = anonymous_namespace_::GetArrangedOptions((struct tagWND *)&v87, this, (CMonitorTopology::MonitorData *)v18) | 1;
LABEL_29:
  if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 1) != 0 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v29 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v29 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v30 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v30 = 0;
    }
    if ( v29 || v30 )
    {
      v31 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v21);
      LOBYTE(v32) = v30;
      LOBYTE(v33) = v29;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v33,
        v32,
        *(_QWORD *)(v31 + 69160),
        5,
        4,
        38,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
    }
    *(_QWORD *)&v89[0] = v82;
    memset((char *)v89 + 8, 0, 21);
    v90 = 0LL;
    anonymous_namespace_::xxxAwpMinMaximizeEx((__int64)this, 3LL, ((a5 & 4) << 14) | 0x56, (__int64)v89);
  }
  else
  {
    if ( !v19 )
      v87 = *(struct tagRECT *)anonymous_namespace_::xxxNormalizeRect((__int64)&v91, this, (__int64)&v87, v23, v18, v20);
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v55 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v55 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v56 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v56 = 0;
    }
    if ( v55 || v56 )
    {
      v57 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v21);
      v58 = v87.right;
      LOBYTE(v59) = v55;
      LOBYTE(v58) = v56;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v59,
        v58,
        *(_QWORD *)(v57 + 69160),
        5,
        4,
        39,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
        v87.left,
        v87.top,
        v87.right,
        v87.bottom,
        LOBYTE(v87.right) - LOBYTE(v87.left),
        LOBYTE(v87.bottom) - LOBYTE(v87.top));
    }
    if ( v7 )
      *v7 = v87;
    else
      xxxSetWindowPos(
        this,
        0LL,
        (unsigned int)v87.left,
        (unsigned int)v87.top,
        v87.right - v87.left,
        v87.bottom - v87.top,
        v83);
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v60 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v60 = 0;
  }
  LOBYTE(v16) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  v80 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v60 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v61 = (_DWORD *)*((_QWORD *)this + 5);
    v62 = v61[25];
    v63 = v61[23];
    v64 = v61[24];
    v65 = v61[22];
    WindowState = AdvancedWindowPos::GetWindowState(this);
    v67 = AdvancedWindowPos::GetStateString(WindowState);
    v70 = W32GetUserSessionState(v69, v68);
    v71 = "Migration rect";
    v73 = v62 - v63;
    LOBYTE(v72) = v60;
    LOBYTE(v73) = v80;
    if ( !v84 )
      v71 = "Final window state";
    LOBYTE(v16) = WPP_RECORDER_AND_TRACE_SF_ssdddddd(
                    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                    v72,
                    v73,
                    *(_QWORD *)(v70 + 69160),
                    v75,
                    v76,
                    v77,
                    v78,
                    (__int64)v71,
                    (__int64)v67,
                    v65,
                    v63,
                    v64,
                    v62,
                    (unsigned __int8)v64 - (unsigned __int8)v65,
                    (unsigned __int8)v62 - (unsigned __int8)v63);
  }
  if ( v79 )
  {
    v54 = 1LL;
LABEL_90:
    LOBYTE(v16) = NotifyShell::ArrangementCompleted(this, a6, v54);
  }
  return (char)v16;
}
