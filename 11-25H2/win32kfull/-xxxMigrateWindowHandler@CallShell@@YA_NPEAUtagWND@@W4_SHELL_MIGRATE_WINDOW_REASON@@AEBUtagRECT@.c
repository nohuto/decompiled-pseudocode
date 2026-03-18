/*
 * XREFs of ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEBUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x14014D338
 * Callers:
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x14020C498 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x140227550 (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x14022B230 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?xxxMigrateArrangedRect@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_REASON@@U3@PEAW4State@AdvancedWindowPos@@PEAKPEAU_WINDOW_ACTION@@@Z @ 0x1402D27A4 (-xxxMigrateArrangedRect@@YA_NPEAUtagWND@@PEAUtagMONITOR@@AEBUtagRECT@@2GW4_SHELL_MIGRATE_WINDOW_.c)
 *     ?xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402D8AA4 (-xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1400503E8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IntersectRect @ 0x140052D08 (IntersectRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x14014B994 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014EE58 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ScaleDPIRect @ 0x140159C30 (ScaleDPIRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x14018F548 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1401A48DC (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

char __fastcall CallShell::xxxMigrateWindowHandler(
        struct tagRECT *a1,
        int a2,
        __int64 *a3,
        __int64 *a4,
        unsigned __int16 a5,
        struct tagWND *a6,
        __int64 a7,
        __m128i *a8,
        _DWORD *a9,
        int *a10)
{
  __int128 v14; // xmm6
  __int64 v15; // rax
  int v16; // r9d
  __int128 v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rdx
  char v20; // r15
  char v21; // di
  bool v22; // si
  const char *v23; // rbx
  __int64 UserSessionState; // rax
  int v25; // r8d
  int v26; // edx
  bool v27; // r13
  char v28; // r12
  char v29; // di
  char v30; // r14
  char v31; // bl
  char v32; // si
  __int64 v33; // rax
  int v34; // r8d
  int v35; // edx
  char v36; // r13
  char v37; // r12
  char v38; // di
  char v39; // r14
  char v40; // bl
  char v41; // si
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  char v45; // r14
  char v46; // si
  char v47; // bl
  char v48; // di
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  char v52; // r13
  char v53; // r12
  char v54; // di
  char v55; // r14
  char v56; // bl
  char v57; // si
  __int64 v58; // rax
  int v59; // r8d
  int v60; // edx
  __int64 v61; // rdx
  char v62; // bl
  __int64 v63; // rax
  int v64; // r8d
  int v65; // edx
  int v66; // ebx
  bool v67; // bl
  __int64 v68; // rax
  int v69; // r8d
  int v70; // edx
  _DWORD *v71; // rcx
  char v72; // si
  bool v73; // r14
  const char *v74; // rdi
  __int64 v75; // rax
  int v76; // r8d
  int v77; // edx
  __m128i v79; // xmm6
  char v80; // bl
  int v81; // r13d
  bool v82; // r14
  unsigned __int64 v83; // xmm1_8
  int v84; // r12d
  __int64 v85; // rax
  int v86; // r8d
  int v87; // edx
  __int64 v88; // rdx
  BOOL v89; // r14d
  int v90; // eax
  unsigned __int64 v91; // rcx
  int v92; // ebx
  bool v93; // di
  __int64 v94; // rax
  int v95; // edx
  int v96; // r8d
  bool v97; // bl
  __int64 v98; // rax
  int v99; // r8d
  int v100; // edx
  __int64 v101; // r9
  const char *v102; // rax
  unsigned int v103; // [rsp+28h] [rbp-E0h]
  __int16 v104; // [rsp+38h] [rbp-D0h]
  char v105; // [rsp+48h] [rbp-C0h]
  __int128 v106; // [rsp+78h] [rbp-90h] BYREF
  __m128i *v107; // [rsp+88h] [rbp-80h]
  __int64 v108; // [rsp+98h] [rbp-70h] BYREF
  int v109; // [rsp+A0h] [rbp-68h]
  int v110; // [rsp+A8h] [rbp-60h]
  int v111; // [rsp+ACh] [rbp-5Ch]
  __int128 v112; // [rsp+B0h] [rbp-58h]
  unsigned __int16 v113; // [rsp+C0h] [rbp-48h]
  __int128 v114; // [rsp+C4h] [rbp-44h]
  __int128 v115; // [rsp+D4h] [rbp-34h]
  __int16 v116; // [rsp+E4h] [rbp-24h]
  __m128i v117; // [rsp+E8h] [rbp-20h]
  int v118; // [rsp+F8h] [rbp-10h]
  __int128 v119; // [rsp+108h] [rbp+0h] BYREF
  __int128 v120; // [rsp+118h] [rbp+10h] BYREF
  struct tagRECT v121; // [rsp+128h] [rbp+20h] BYREF

  v107 = a8;
  *a9 = 3;
  *a8 = 0LL;
  *(_QWORD *)&v119 = a9;
  *(_QWORD *)&v106 = a10;
  v14 = (__int128)*WindowMargins::ReduceRect((WindowMargins *)&v121, a1, a6, (const struct tagRECT *)a5, v103);
  v15 = *(_QWORD *)&a1[2].right;
  v120 = v14;
  v16 = *(_DWORD *)(v15 + 288) >> 8;
  LOWORD(v16) = v16 & 0x1FF;
  if ( (_WORD)v16 )
  {
    ScaleDPIRect((unsigned int)&v120, (unsigned int)&v120, a5, v16, *a3, *a4);
    v14 = v120;
  }
  memset_0(&v108, 0, 0x68uLL);
  v17 = *(_OWORD *)a3;
  v108 = *(_QWORD *)&a1->left;
  v111 = *a10;
  v112 = v17;
  v109 = 3;
  v110 = a2;
  v18 = *(_QWORD *)(a7 + 40);
  v113 = a5;
  v114 = v14;
  v115 = *(_OWORD *)(v18 + 44);
  v116 = *(_WORD *)(v18 + 60);
  v117 = 0LL;
  v118 = 3;
  v19 = 0LL;
  v20 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v21 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v21 = 0;
  }
  v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v21 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    if ( a2 )
    {
      v23 = "programmatic";
      if ( a2 != 1 )
        v23 = "restore from minimize";
    }
    else
    {
      v23 = "recalc";
    }
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
    LOBYTE(v25) = v22;
    LOBYTE(v26) = v21;
    WPP_RECORDER_AND_TRACE_SF_qs(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v26,
      v25,
      *(_QWORD *)(UserSessionState + 69160),
      4,
      4,
      28,
      (__int64)&WPP_e1166448f6f3316d3174cdc4436fb45b_Traceguids,
      v108,
      (__int64)v23);
  }
  v27 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
     && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
     && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v28 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v28 = 0;
  }
  if ( v27 || v28 )
  {
    v29 = BYTE12(v112);
    v30 = BYTE4(v112);
    v31 = BYTE8(v112);
    v32 = v112;
    v33 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
    LOBYTE(v34) = v28;
    LOBYTE(v35) = v27;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v35,
      v34,
      *(_QWORD *)(v33 + 69160),
      5,
      4,
      29,
      (__int64)&WPP_e1166448f6f3316d3174cdc4436fb45b_Traceguids,
      v32,
      v30,
      v31,
      v29,
      v31 - v32,
      v29 - v30);
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v36 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v36 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v37 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v37 = 0;
  }
  if ( v36 || v37 )
  {
    v38 = BYTE12(v115);
    v39 = BYTE4(v115);
    v40 = BYTE8(v115);
    v41 = v115;
    v42 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
    LOBYTE(v43) = v37;
    LOBYTE(v44) = v36;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v44,
      v43,
      *(_QWORD *)(v42 + 69160),
      5,
      4,
      30,
      (__int64)&WPP_e1166448f6f3316d3174cdc4436fb45b_Traceguids,
      v41,
      v39,
      v40,
      v38,
      v40 - v41,
      v38 - v39);
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v45 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v45 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v46 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v46 = 0;
  }
  if ( v45 || v46 )
  {
    v47 = v116;
    v48 = v113;
    v49 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
    LOBYTE(v50) = v46;
    LOBYTE(v51) = v45;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v51,
      v50,
      *(_QWORD *)(v49 + 69160),
      5,
      4,
      31,
      (__int64)&WPP_e1166448f6f3316d3174cdc4436fb45b_Traceguids,
      v48,
      v47);
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
    v54 = BYTE12(v114);
    v55 = BYTE4(v114);
    v56 = BYTE8(v114);
    v57 = v114;
    v58 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v19);
    LOBYTE(v59) = v53;
    LOBYTE(v60) = v52;
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v60,
      v59,
      *(_QWORD *)(v58 + 69160),
      5,
      4,
      32,
      (__int64)&WPP_e1166448f6f3316d3174cdc4436fb45b_Traceguids,
      v57,
      v55,
      v56,
      v54,
      v56 - v57,
      v54 - v55);
  }
  if ( !anonymous_namespace_::xxxCallIAMWindowManagementHandler((struct tagDRAWITEMSTRUCT *)&v108, 0) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v62 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v62 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v20 = 0;
    }
    if ( v62 || v20 )
    {
      v63 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v61);
      LOBYTE(v64) = v20;
      LOBYTE(v65) = v62;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v65,
        v64,
        *(_QWORD *)(v63 + 69160),
        5,
        4,
        33,
        (__int64)&WPP_e1166448f6f3316d3174cdc4436fb45b_Traceguids);
    }
    return 0;
  }
  v66 = v118;
  if ( v118 == 2 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v20 = 0;
    }
    v67 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v20 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v68 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v61);
      LOBYTE(v69) = v67;
      LOBYTE(v70) = v20;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v70,
        v69,
        *(_QWORD *)(v68 + 69160),
        2,
        4,
        34,
        (__int64)&WPP_e1166448f6f3316d3174cdc4436fb45b_Traceguids);
    }
    return 0;
  }
  if ( v118 > 3 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v20 = 0;
    }
    v93 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v20 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v94 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v61);
    v105 = v66;
    v104 = 35;
  }
  else
  {
    v71 = (_DWORD *)v106;
    *(_DWORD *)v119 = v118;
    *v71 = v111;
    if ( v66 != 3 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v72 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v72 = 0;
      }
      v73 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v72 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        if ( v66 )
        {
          v74 = "maximized";
          if ( v66 != 1 )
            v74 = "minimized";
        }
        else
        {
          v74 = "restored";
        }
        v75 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v61);
        LOBYTE(v76) = v73;
        LOBYTE(v77) = v72;
        WPP_RECORDER_AND_TRACE_SF_s(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v77,
          v76,
          *(_QWORD *)(v75 + 69160),
          4,
          4,
          36,
          (__int64)&WPP_e1166448f6f3316d3174cdc4436fb45b_Traceguids,
          (__int64)v74);
      }
      return 1;
    }
    v79 = v117;
    v106 = v115;
    v121 = (struct tagRECT)v117;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v80 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v80 = 0;
    }
    v81 = _mm_cvtsi128_si32(_mm_srli_si128(v117, 12));
    v82 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    v83 = _mm_srli_si128(v117, 8).m128i_u64[0];
    v84 = _mm_cvtsi128_si32(_mm_srli_si128(v117, 4));
    if ( v80 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v85 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
      LOBYTE(v86) = v82;
      LOBYTE(v87) = v80;
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v87,
        v86,
        *(_QWORD *)(v85 + 69160),
        4,
        4,
        37,
        (__int64)&WPP_e1166448f6f3316d3174cdc4436fb45b_Traceguids,
        v79.m128i_i8[0],
        v84,
        v83,
        v81,
        v83 - v79.m128i_i8[0],
        v81 - v84);
    }
    v119 = 0LL;
    v89 = IsRectEmptyInl(&v121);
    if ( v89 )
      goto LABEL_117;
    v90 = IntersectRect(&v119, &v121.left, (int *)&v106);
    v88 = 0LL;
    if ( !v90 )
      goto LABEL_117;
    v91 = v119 - v79.m128i_i64[0];
    if ( (_QWORD)v119 == v79.m128i_i64[0] )
      v91 = *((_QWORD *)&v119 + 1) - v83;
    if ( v91 )
    {
LABEL_117:
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
      {
        v20 = v88;
      }
      v97 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v20 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v98 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v88);
        LOBYTE(v99) = v97;
        LOBYTE(v100) = v20;
        v101 = *(_QWORD *)(v98 + 69160);
        v102 = "rect is empty";
        if ( !v89 )
          v102 = "rect not contained by work area";
        WPP_RECORDER_AND_TRACE_SF_s(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v100,
          v99,
          v101,
          2,
          4,
          38,
          (__int64)&WPP_e1166448f6f3316d3174cdc4436fb45b_Traceguids,
          (__int64)v102);
      }
      return 0;
    }
    v92 = v79.m128i_i32[0] == v106;
    if ( v84 == DWORD1(v106) )
      ++v92;
    if ( (_DWORD)v83 == DWORD2(v106) )
      ++v92;
    if ( v81 == HIDWORD(v106) )
      ++v92;
    if ( (unsigned int)(v92 - 2) <= 1 )
    {
      *v107 = v79;
      return 1;
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
    {
      v20 = 0;
    }
    v93 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( !v20 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      return 0;
    v94 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
    v105 = v92;
    v104 = 39;
  }
  LOBYTE(v96) = v93;
  LOBYTE(v95) = v20;
  WPP_RECORDER_AND_TRACE_SF_d(
    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
    v95,
    v96,
    *(_QWORD *)(v94 + 69160),
    2,
    4,
    v104,
    (__int64)&WPP_e1166448f6f3316d3174cdc4436fb45b_Traceguids,
    v105);
  return 0;
}
