/*
 * XREFs of ?xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D8AA4
 * Callers:
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402D775C (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 * Callees:
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z @ 0x140022A24 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@UtagRECT@@KK@Z.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x140026154 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400262EC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     _MonitorFromRect @ 0x1400913B0 (_MonitorFromRect.c)
 *     _MonitorFromPoint @ 0x140091A70 (_MonitorFromPoint.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEBUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x14014D338 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014DD7C (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014EE58 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x14018F548 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x1401DCD80 (--1-$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ.c)
 *     ?Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z @ 0x14026B5C0 (-Restore@CHECKPOINT@@SAPEAU1@PEAUtagWND@@AEBUtagRECT@@@Z.c)
 *     ?PhysicalToLogicalDPIRect@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEAU3@K@Z @ 0x1402ACFA0 (-PhysicalToLogicalDPIRect@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEAU3@K@Z.c)
 *     ?NormalizeArrangeRect@AdvancedWindowPos@@YA?AUtagRECT@@AEBU2@00@Z @ 0x1402D4EDC (-NormalizeArrangeRect@AdvancedWindowPos@@YA-AUtagRECT@@AEBU2@00@Z.c)
 *     ?GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z @ 0x1402DCB7C (-GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

void __fastcall AdvancedWindowPos::xxxModifyActionForArrangement(
        AdvancedWindowPos *this,
        struct tagWND *a2,
        struct AdvancedWindowPos::WindowAction *a3)
{
  char v5; // si
  bool v6; // r14
  bool v7; // r12
  __int64 v8; // rbx
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  struct CHECKPOINT *IfValid; // rax
  struct CHECKPOINT *v13; // r14
  AdvancedWindowPos *v14; // r13
  struct tagRECT v15; // xmm0
  CMonitorTopology *v16; // rcx
  __int64 v17; // rax
  CMonitorTopology::MonitorData *v18; // rax
  struct tagRECT *v19; // rdx
  __int64 v20; // r9
  unsigned int WindowDpiLastNotify; // eax
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  INT *v26; // rcx
  unsigned int v27; // r8d
  __int64 v28; // rbx
  struct tagTHREADINFO *v29; // rax
  __int64 v30; // rdx
  int v31; // ecx
  char v32; // bl
  int v33; // eax
  struct tagRECT v34; // xmm6
  int v35; // eax
  LONG v36; // ecx
  bool v37; // bl
  bool v38; // r13
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  int v42; // edx
  __int64 v43; // rdx
  __int64 v44; // rdx
  char v45; // bl
  bool v46; // r14
  __m128i v47; // xmm1
  __int64 v48; // rax
  int v49; // edx
  int v50; // r8d
  bool v51; // cl
  char v52; // r15
  bool v53; // r12
  char v54; // bl
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  int v58; // eax
  char v59; // al
  bool v60; // bl
  bool v61; // r14
  __int64 v62; // rax
  int v63; // r8d
  int v64; // edx
  __m128i *v65; // rax
  __int64 v66; // xmm0_8
  int v67; // eax
  char v68; // r15
  char v69; // r14
  const char *StateString; // rbx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  int v74; // r8d
  int v75; // edx
  char v76; // di
  const char *v77; // rbx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rax
  int v81; // r8d
  int v82; // edx
  __int64 v83; // kr08_8
  int v84; // eax
  unsigned int v85; // eax
  char v86; // r14
  __int64 v87; // rax
  int v88; // r8d
  int v89; // edx
  __int16 v90; // [rsp+38h] [rbp-D0h]
  bool v91; // [rsp+78h] [rbp-90h]
  char v92; // [rsp+79h] [rbp-8Fh]
  char v93; // [rsp+7Ah] [rbp-8Eh]
  int v94; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v95; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v96; // [rsp+84h] [rbp-84h]
  int v97; // [rsp+88h] [rbp-80h]
  struct tagRECT v98; // [rsp+98h] [rbp-70h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+A8h] [rbp-60h] BYREF
  struct tagRECT v100; // [rsp+B8h] [rbp-50h] BYREF
  __m128i v101; // [rsp+C8h] [rbp-40h] BYREF
  struct tagRECT v102; // [rsp+D8h] [rbp-30h] BYREF
  struct tagRECT v103; // [rsp+E8h] [rbp-20h] BYREF
  struct tagRECT v104; // [rsp+F8h] [rbp-10h] BYREF

  v5 = 1;
  v6 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
  v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v8 = *(_QWORD *)this;
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
    LOBYTE(v10) = v7;
    LOBYTE(v11) = v6;
    WPP_RECORDER_AND_TRACE_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      4,
      131,
      (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
      v8);
  }
  IfValid = CHECKPOINT::GetIfValid(this);
  v13 = IfValid;
  v14 = this;
  if ( IfValid )
    v15 = *(struct tagRECT *)((char *)IfValid + 20);
  else
    v15 = *(struct tagRECT *)(*((_QWORD *)this + 5) + 88LL);
  v16 = (CMonitorTopology *)*((_QWORD *)a2 + 19);
  v100 = v15;
  v17 = *((_QWORD *)this + 5);
  v102 = v15;
  v100 = v15;
  v18 = CMonitorTopology::MonitorDataFromRect(v16, &v100, 2, *(_DWORD *)(v17 + 288));
  v19 = (struct tagRECT *)((char *)a2 + 60);
  v20 = *((_QWORD *)this + 5);
  if ( (*((_DWORD *)a2 + 1) & 0x80u) == 0 )
    v19 = (struct tagRECT *)((char *)v18 + 24);
  v103 = *v19;
  CMonitorTopology::MonitorData::PhysicalToLogicalDPIRect(v18, &v104, (__m128i *)&v103, *(_DWORD *)(v20 + 288));
  if ( _bittest((const signed __int32 *)a2 + 1, 8u) )
    WindowDpiLastNotify = *((_DWORD *)a2 + 24);
  else
    WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)this);
  v22 = *(_DWORD *)a2;
  v96 = WindowDpiLastNotify;
  if ( (v22 & 0x100) != 0 )
  {
    v23 = MonitorFromPoint(*(_QWORD *)((char *)a2 + 100), 2u, 0x12u);
  }
  else
  {
    if ( (v22 & 0x40) != 0 )
    {
      v26 = (INT *)((char *)a2 + 44);
      v27 = 18;
    }
    else
    {
      v26 = (INT *)&v102;
      v27 = *(_DWORD *)(*((_QWORD *)this + 5) + 288LL);
    }
    v23 = MonitorFromRect(v26, 2u, v27);
  }
  v28 = v23;
  *(_QWORD *)&v102.left = v23;
  v29 = PtiCurrent(v25, v24);
  Win32HM_LockIntoThread<1>((__int64)v29, v28, (__int64 *)BugCheckParameter3);
  v31 = *(_DWORD *)a2;
  v32 = *(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 0x20;
  v33 = *(_DWORD *)a2 & 0x20;
  if ( v33 )
    v91 = *((_DWORD *)a2 + 10) == 2;
  else
    v91 = v32 != 0;
  v93 = 1;
  v34 = 0LL;
  v100 = 0LL;
  if ( (v31 & 6) == 0 )
  {
    if ( !v33 && v32 && v13 && (*((_DWORD *)v13 + 4) & 8) != 0 )
    {
      v34 = *(struct tagRECT *)((char *)v13 + 36);
    }
    else
    {
      if ( !IsArranged(this) )
      {
        v93 = 0;
        goto LABEL_39;
      }
      v34 = *(struct tagRECT *)(*((_QWORD *)this + 5) + 88LL);
    }
    goto LABEL_37;
  }
  v30 = *((unsigned int *)a2 + 4);
  v35 = *((_DWORD *)a2 + 1);
  v100.left = *((_DWORD *)a2 + 3);
  v100.right = *((_DWORD *)a2 + 5) + v100.left;
  v36 = v30 + *((_DWORD *)a2 + 6);
  v100.top = v30;
  v100.bottom = v36;
  if ( (v35 & 1) != 0 )
  {
    v34 = *WindowMargins::ExtendRect(
             &v98,
             (struct tagRECT *)this,
             (const struct tagWND *)&v100,
             (const struct tagRECT *)v96);
LABEL_37:
    v100 = v34;
    goto LABEL_39;
  }
  v34 = v100;
LABEL_39:
  v95 = 0;
  LOBYTE(v30) = v91;
  v92 = 0;
  v94 = 3;
  v101 = 0LL;
  if ( v32 && !v91 && v13 && *((_BYTE *)v13 + 54) )
  {
    v97 = *((_DWORD *)v13 + 14);
    v37 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v38 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v37 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v39 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v30);
      LOBYTE(v40) = v38;
      LOBYTE(v41) = v37;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v41,
        v40,
        *(_QWORD *)(v39 + 69160),
        4,
        4,
        132,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
        v97,
        0);
      LOBYTE(v30) = 0;
    }
    v14 = this;
    v95 = v97;
    *((_BYTE *)v13 + 54) = 0;
    v92 = 1;
  }
  else if ( (*(_DWORD *)a2 & 0x400) != 0 )
  {
    v95 = *((_DWORD *)a2 + 33);
  }
  if ( (*(_DWORD *)a2 & 0x200) != 0 )
    v42 = 2 * (unsigned __int8)v30;
  else
    v42 = 1;
  v98 = v34;
  if ( !CallShell::xxxMigrateWindowHandler(
          (struct tagRECT *)this,
          v42,
          (__int64 *)&v104.left,
          (__int64 *)&v103.left,
          v96,
          (struct tagWND *)&v98,
          *(__int64 *)&v102.left,
          &v101,
          &v94,
          &v95) )
  {
    v60 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v61 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v60 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v62 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v43);
      LOBYTE(v63) = v61;
      LOBYTE(v64) = v60;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v64,
        v63,
        *(_QWORD *)(v62 + 69160),
        4,
        4,
        135,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
    }
    if ( v93 )
    {
      v100 = *WindowMargins::ReduceRect(
                (WindowMargins *)&v98,
                (struct tagRECT *)this,
                (const struct tagWND *)&v100,
                (const struct tagRECT *)v96);
      v65 = (__m128i *)AdvancedWindowPos::NormalizeArrangeRect(
                         &v98,
                         &v100,
                         &v103,
                         (const struct tagRECT *)(*(_QWORD *)(*(_QWORD *)&v102.left + 40LL) + 44LL));
      v47 = *v65;
      v66 = _mm_srli_si128(*v65, 8).m128i_u64[0];
      v101.m128i_i64[0] = v65->m128i_i64[0];
      v101.m128i_i64[1] = v66;
LABEL_99:
      v44 = v47.m128i_i64[0];
      goto LABEL_100;
    }
    v94 = 0;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v45 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v45 = 0;
    }
    v46 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v45 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    {
LABEL_98:
      v47 = v101;
      goto LABEL_99;
    }
    v48 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v43);
    v90 = 136;
LABEL_97:
    LOBYTE(v50) = v46;
    LOBYTE(v49) = v45;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v49,
      v50,
      *(_QWORD *)(v48 + 69160),
      4,
      4,
      v90,
      (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
    goto LABEL_98;
  }
  v44 = v101.m128i_i64[0];
  if ( v93 || *(_OWORD *)&v100 != *(_OWORD *)&v101 )
  {
    v51 = v91;
    if ( !v91 )
    {
      v47 = v101;
      v59 = 1;
      goto LABEL_101;
    }
    if ( v13 || (v13 = CHECKPOINT::Restore(this, (const struct tagRECT *)(*((_QWORD *)v14 + 5) + 88LL))) != 0LL )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v52 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v52 = 0;
      }
      v53 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v52 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v54 = v95;
        v55 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v44);
        LOBYTE(v56) = v53;
        LOBYTE(v57) = v52;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v57,
          v56,
          *(_QWORD *)(v55 + 69160),
          4,
          4,
          134,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
          v54);
      }
      v58 = v95;
      *((_BYTE *)v13 + 54) = 1;
      *((_DWORD *)v13 + 14) = v58;
    }
    goto LABEL_98;
  }
  v94 = 0;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v45 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v45 = 0;
  }
  v46 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v45 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v48 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v101.m128i_i64[0]);
    v90 = 133;
    goto LABEL_97;
  }
  v47 = v101;
LABEL_100:
  v59 = v92;
  v51 = v91;
LABEL_101:
  if ( v59 )
  {
    *(_DWORD *)a2 |= 0x400u;
    *((_DWORD *)a2 + 27) |= 2u;
    v67 = v95;
    *((__m128i *)a2 + 7) = v47;
    *((_DWORD *)a2 + 32) = 3;
    *((_DWORD *)a2 + 33) = v67;
  }
  *(_DWORD *)a2 |= 0x20u;
  if ( v51 )
  {
    *((_DWORD *)a2 + 10) = 2;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v68 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v68 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v69 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v69 = 0;
    }
    if ( v68 || v69 )
    {
      StateString = AdvancedWindowPos::GetStateString(v94);
      v73 = W32GetUserSessionState(v72, v71);
      LOBYTE(v74) = v69;
      LOBYTE(v75) = v68;
      WPP_RECORDER_AND_TRACE_SF_s(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v75,
        v74,
        *(_QWORD *)(v73 + 69160),
        5,
        4,
        137,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
        (__int64)StateString);
      v44 = v101.m128i_i64[0];
    }
    if ( v94 == 3 )
    {
      *((_DWORD *)a2 + 1) |= 0x40u;
      goto LABEL_132;
    }
    if ( v94 == 1 )
    {
      *((_DWORD *)a2 + 1) |= 0x20u;
      goto LABEL_118;
    }
    *((_DWORD *)a2 + 1) |= 0x10u;
  }
  else
  {
    *((_DWORD *)a2 + 10) = v94;
  }
  if ( v94 == 3 )
  {
LABEL_132:
    v83 = *(__int64 *)((char *)v101.m128i_i64 + 4);
    *((_DWORD *)a2 + 1) |= 1u;
    *((_DWORD *)a2 + 5) = HIDWORD(v83) - v44;
    v84 = v101.m128i_i32[3] - v83;
    *((_DWORD *)a2 + 3) = v44;
    *((_DWORD *)a2 + 6) = v84;
    v85 = *(_DWORD *)a2 & 0xFFFFFEFF;
    *((_DWORD *)a2 + 4) = v83;
    *(_DWORD *)a2 = v85 | 6;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v86 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v86 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v5 = 0;
    }
    if ( v86 || v5 )
    {
      v87 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v44);
      LOBYTE(v88) = v5;
      LOBYTE(v89) = v86;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v89,
        v88,
        *(_QWORD *)(v87 + 69160),
        5,
        4,
        138,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
        v101.m128i_i8[0],
        v101.m128i_i8[4],
        v101.m128i_i8[8],
        v101.m128i_i8[12],
        v101.m128i_i8[8] - v101.m128i_i8[0],
        v101.m128i_i32[3] - v101.m128i_i32[1]);
    }
    goto LABEL_128;
  }
LABEL_118:
  *(_DWORD *)a2 &= 0xFFFFFFF9;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v76 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v76 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v5 = 0;
  }
  if ( v76 || v5 )
  {
    v77 = AdvancedWindowPos::GetStateString(v94);
    v80 = W32GetUserSessionState(v79, v78);
    LOBYTE(v81) = v5;
    LOBYTE(v82) = v76;
    WPP_RECORDER_AND_TRACE_SF_s(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v82,
      v81,
      *(_QWORD *)(v80 + 69160),
      5,
      4,
      139,
      (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
      (__int64)v77);
  }
LABEL_128:
  Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(BugCheckParameter3, v44);
}
