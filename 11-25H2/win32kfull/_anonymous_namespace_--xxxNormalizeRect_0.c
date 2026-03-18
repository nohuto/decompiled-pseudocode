/*
 * XREFs of _anonymous_namespace_::xxxNormalizeRect_0 @ 0x14014DEF4
 * Callers:
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x14014DDEC (_anonymous_namespace_--xxxNormalizeRect.c)
 * Callees:
 *     _GetProp @ 0x14001DE00 (_GetProp.c)
 *     CalculateLogicalMonitorRect @ 0x14002428C (CalculateLogicalMonitorRect.c)
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x1400495FC (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x14014EEC8 (WindowMargins--_anonymous_namespace_--GetWindowMargins.c)
 *     ?HasValidCheckpointPosition@@YA_NPEAUtagWND@@@Z @ 0x14014FD30 (-HasValidCheckpointPosition@@YA_NPEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x14024092C (xxxAppAdjustDpiCandidateRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x14026BB14 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddd @ 0x1402C163C (WPP_RECORDER_AND_TRACE_SF_qdddddd.c)
 *     _anonymous_namespace_::FitRectToWorkArea @ 0x1402D4264 (_anonymous_namespace_--FitRectToWorkArea.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddddd @ 0x1402DB09C (WPP_RECORDER_AND_TRACE_SF_ddddddd.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__m128i *__fastcall anonymous_namespace_::xxxNormalizeRect_0(
        __m128i *a1,
        struct tagWND *a2,
        __m128i *a3,
        __m128i *a4,
        __m128i *a5,
        unsigned __int16 a6,
        __int64 a7,
        char a8)
{
  __m128i *v8; // rsi
  __int64 v9; // rdi
  struct tagWND *v10; // r14
  char v11; // r12
  char v12; // al
  char v13; // r13
  __int64 UserSessionState; // rax
  int v15; // edx
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 Prop; // rbx
  __m128i v21; // xmm0
  __m128i v22; // xmm6
  __int64 v23; // rdx
  unsigned __int16 v24; // cx
  __int32 v25; // r15d
  int v26; // ebx
  bool v27; // zf
  int v28; // r13d
  int v29; // esi
  char v30; // r14
  int v31; // r14d
  char v32; // si
  char v33; // di
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  __int16 v37; // cx
  unsigned __int16 v38; // r10
  char v39; // r15
  char v40; // di
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  const struct tagWND *v44; // r15
  __int64 v45; // rdx
  char v46; // di
  char v47; // bl
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  int v51; // ebx
  INT v52; // r15d
  INT v53; // edi
  INT v54; // eax
  bool v55; // di
  char v56; // bl
  __int64 v57; // rax
  INT v58; // edx
  int v59; // r8d
  __int64 v60; // r9
  INT v61; // r15d
  __m128i v62; // xmm6
  int WindowBordersWithDpiAwareness; // eax
  char v64; // r15
  char v65; // di
  char v66; // si
  __int32 v67; // ebx
  char v68; // r14
  bool v69; // r13
  __int64 v70; // rax
  int v71; // r8d
  int v72; // edx
  __m128i *result; // rax
  __int64 WindowMargins; // rax
  int v75; // r8d
  __int32 v76; // ebx
  int v77; // edi
  int v78; // esi
  int v79; // r14d
  __int32 v80; // r13d
  __int64 v81; // rdx
  int v82; // r11d
  int v83; // r15d
  int v84; // r13d
  int v85; // ecx
  __int64 v86; // r8
  char v87; // al
  __int64 v88; // rax
  int v89; // r8d
  int v90; // edx
  unsigned __int64 v91; // rdx
  char v92; // al
  char v93; // si
  __int64 v94; // rax
  int v95; // edx
  int v96; // r8d
  char v97; // al
  char v98; // r13
  __int64 v99; // rax
  int v100; // edx
  int v101; // r8d
  char v102; // r13
  char v103; // r14
  __int64 v104; // rax
  int v105; // r8d
  int v106; // edx
  char v107; // r13
  char v108; // r15
  __int64 v109; // rax
  int v110; // r8d
  int v111; // edx
  __int64 v112; // rax
  int v113; // edi
  int v114; // r10d
  int v115; // ebx
  int v116; // r9d
  int v117; // edx
  int v118; // r8d
  bool v119; // bl
  __int64 v120; // rax
  int v121; // r8d
  int v122; // edx
  int v123; // [rsp+28h] [rbp-E0h]
  char v124; // [rsp+88h] [rbp-80h]
  char v125; // [rsp+88h] [rbp-80h]
  unsigned __int16 v126; // [rsp+8Ch] [rbp-7Ch]
  INT v127; // [rsp+8Ch] [rbp-7Ch]
  char v128; // [rsp+8Ch] [rbp-7Ch]
  char v129; // [rsp+8Ch] [rbp-7Ch]
  char v130; // [rsp+8Ch] [rbp-7Ch]
  int v131; // [rsp+90h] [rbp-78h]
  __int16 WindowDpiLastNotify; // [rsp+94h] [rbp-74h]
  INT v133; // [rsp+94h] [rbp-74h]
  unsigned int v134; // [rsp+94h] [rbp-74h]
  __int32 v135; // [rsp+98h] [rbp-70h]
  bool v137[16]; // [rsp+B8h] [rbp-50h] BYREF
  __m128i *v138; // [rsp+C8h] [rbp-40h]
  __m128i *v139; // [rsp+D0h] [rbp-38h]
  __m128i *v140; // [rsp+D8h] [rbp-30h]
  __m128i v141; // [rsp+E8h] [rbp-20h]
  __m128i v142; // [rsp+F8h] [rbp-10h] BYREF

  v8 = a3;
  v9 = a7;
  v10 = a2;
  v140 = a1;
  v139 = a4;
  v138 = a3;
  v11 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v12 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v12 = 0;
  }
  v124 = v12;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v13 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v13 = 0;
  }
  if ( v12 || v13 )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
    LOBYTE(v15) = v124;
    LOBYTE(v16) = v13;
    WPP_RECORDER_AND_TRACE_SF_qdddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v15,
      v16,
      *(_QWORD *)(UserSessionState + 69160));
    v8 = v138;
    v9 = a7;
    v10 = a2;
  }
  *(__m128i *)v137 = *CalculateLogicalMonitorRect(
                        (__m128i *)v137,
                        (__m128i *)(v9 + 8),
                        *(_WORD *)(v9 + 40),
                        (*(_DWORD *)(*((_QWORD *)v10 + 5) + 288LL) >> 8) & 0x1FF,
                        *(_WORD *)(v9 + 64));
  WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)v10);
  v19 = W32GetUserSessionState(v18, v17);
  Prop = GetProp((__int64)v10, *(unsigned __int16 *)(v19 + 41334), 1u);
  if ( Prop && HasValidCheckpointPosition(v10) )
    v21 = *(__m128i *)(Prop + 20);
  else
    v21 = *(__m128i *)(*((_QWORD *)v10 + 5) + 88LL);
  v22 = *v8;
  v23 = *((_QWORD *)v10 + 5);
  v24 = *(_WORD *)(v9 + 40);
  v141 = v21;
  v25 = v21.m128i_i32[2] - v21.m128i_i32[0];
  v26 = v21.m128i_i32[3] - v21.m128i_i32[1];
  v131 = _mm_cvtsi128_si32(_mm_srli_si128(v22, 4));
  v27 = (*(_BYTE *)(v23 + 30) & 4) == 0;
  v126 = v24;
  v142 = v22;
  v28 = _mm_cvtsi128_si32(v22);
  if ( v27 )
  {
    v29 = _mm_cvtsi128_si32(_mm_srli_si128(v22, 8));
    v30 = v29 - v28;
    if ( v29 - v28 == v25 && _mm_srli_si128(v22, 8).m128i_i32[1] - v22.m128i_i32[1] == v26 )
    {
      v31 = _mm_cvtsi128_si32(_mm_srli_si128(v22, 12));
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v32 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v32 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v33 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v33 = 0;
      }
      if ( v32 || v33 )
      {
        v34 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v23);
        LOBYTE(v35) = v33;
        LOBYTE(v36) = v32;
        WPP_RECORDER_AND_TRACE_SF_dddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v36,
          v35,
          *(_QWORD *)(v34 + 69160),
          5,
          4,
          14,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
          v30,
          v142.m128i_i8[12] - v131,
          v25,
          v26);
      }
      v29 = v25 + v28;
      v31 = v26 + v131;
      v142.m128i_i32[3] = v26 + v131;
      v142.m128i_i32[2] = v25 + v28;
      v22.m128i_i64[0] = v142.m128i_i64[0];
      v23 = *((_QWORD *)a2 + 5);
    }
    v37 = WindowDpiLastNotify;
    v126 = WindowDpiLastNotify;
  }
  else
  {
    v37 = WindowDpiLastNotify;
    v29 = _mm_cvtsi128_si32(_mm_srli_si128(v22, 8));
    v31 = _mm_cvtsi128_si32(_mm_srli_si128(v22, 12));
  }
  v38 = a6;
  if ( (*(_DWORD *)(v23 + 288) & 0xF) != 2 )
    goto LABEL_71;
  if ( v37 == a6 )
  {
LABEL_57:
    v52 = v126;
    if ( v126 != v38 )
    {
      v53 = v38;
      v127 = EngMulDiv(v29 - v28, v38, v126);
      v54 = EngMulDiv(v31 - v131, v53, v52);
      v133 = v54;
      v55 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v56 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v56 = 0;
      }
      if ( v55 || v56 )
      {
        v57 = W32GetUserSessionState(0LL, *(_QWORD *)&WPP_GLOBAL_Control);
        v58 = v133;
        LOBYTE(v59) = v56;
        v60 = *(_QWORD *)(v57 + 69160);
        LOBYTE(v57) = v52;
        v61 = v127;
        LOBYTE(v58) = v55;
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v58,
          v59,
          v60,
          5,
          4,
          17,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
          v57,
          v29 - v28,
          v31 - v131,
          a6,
          v127,
          v133);
        v54 = v133;
      }
      else
      {
        v61 = v127;
      }
      v51 = v131;
      v29 = v61 + v28;
      v38 = a6;
      v31 = v54 + v131;
      goto LABEL_72;
    }
LABEL_71:
    v51 = v131;
LABEL_72:
    v44 = a2;
    goto LABEL_73;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v39 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v39 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v40 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v40 = 0;
  }
  if ( v39 || v40 )
  {
    v41 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 2LL);
    LOBYTE(v42) = v40;
    LOBYTE(v43) = v39;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v43,
      v42,
      *(_QWORD *)(v41 + 69160),
      5,
      4,
      15,
      (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
      WindowDpiLastNotify,
      a6);
  }
  v44 = a2;
  v141.m128i_i64[0] = v22.m128i_i64[0];
  v141.m128i_i32[2] = v28 + v21.m128i_i32[2] - v21.m128i_i32[0];
  v141.m128i_i32[3] = v26 + v22.m128i_i32[1];
  if ( !(unsigned int)xxxAppAdjustDpiCandidateRect(a2) )
  {
    v38 = a6;
    goto LABEL_57;
  }
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
    LOBYTE(v49) = v47;
    LOBYTE(v50) = v46;
    WPP_RECORDER_AND_TRACE_SF_dddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v50,
      v49,
      *(_QWORD *)(v48 + 69160),
      5,
      4,
      16,
      (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
      v29 - v28,
      v31 - v131,
      v141.m128i_i8[8] - v141.m128i_i8[0],
      v141.m128i_i8[12] - v141.m128i_i8[4]);
  }
  v29 = v28 + v141.m128i_i32[2] - v141.m128i_i32[0];
  v51 = v131;
  v31 = v131 + v141.m128i_i32[3] - v141.m128i_i32[1];
  v38 = a6;
LABEL_73:
  if ( v138->m128i_i32[0] <= *(int *)v137
    && v138->m128i_i32[1] <= *(int *)&v137[4]
    && v138->m128i_i32[2] >= *(int *)&v137[8]
    && v138->m128i_i32[3] >= *(int *)&v137[12] )
  {
    v141 = *v139;
    v62 = v141;
    WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(v44, *(unsigned int *)&v137[8], 0, 0);
    v64 = WindowBordersWithDpiAwareness;
    v65 = WindowBordersWithDpiAwareness + v141.m128i_i8[8];
    v66 = v141.m128i_i8[4] - WindowBordersWithDpiAwareness;
    v141.m128i_i32[2] += WindowBordersWithDpiAwareness;
    v141.m128i_i32[1] -= WindowBordersWithDpiAwareness;
    v67 = _mm_cvtsi128_si32(v62) - WindowBordersWithDpiAwareness;
    v68 = WindowBordersWithDpiAwareness + v141.m128i_i8[12];
    v141.m128i_i32[0] = v67;
    v141.m128i_i32[3] += WindowBordersWithDpiAwareness;
    v69 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v11 = 0;
    }
    if ( v69 || v11 )
    {
      v70 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v71) = v11;
      LOBYTE(v72) = v69;
      WPP_RECORDER_AND_TRACE_SF_ddddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v72,
        v71,
        *(_QWORD *)(v70 + 69160),
        v123,
        4,
        18,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
        v64,
        v67,
        v66,
        v65,
        v68,
        v65 - v67,
        v68 - v66);
    }
    result = v140;
    *v140 = v141;
    return result;
  }
  WindowMargins = WindowMargins::_anonymous_namespace_::GetWindowMargins(v44, v38);
  v75 = *(_DWORD *)&v137[12] - *(_DWORD *)&v137[4];
  v76 = SWORD2(WindowMargins) + v51;
  v77 = v28 + (__int16)WindowMargins;
  v142.m128i_i64[0] = __PAIR64__(v76, v77);
  v78 = v29 - SWORD1(WindowMargins);
  v79 = v31 - SHIWORD(WindowMargins);
  v142.m128i_i64[1] = __PAIR64__(v79, v78);
  v80 = v139->m128i_i32[1];
  v81 = (unsigned int)(v139->m128i_i32[2] - v139->m128i_i32[0]);
  v82 = v139->m128i_i32[3] - v80;
  v83 = v139->m128i_i32[0] - *(_DWORD *)v137;
  v84 = v80 - *(_DWORD *)&v137[4];
  if ( (_DWORD)v81 != *(_DWORD *)&v137[8] - *(_DWORD *)v137 || v82 != v75 )
  {
    v85 = (v82 - v75) * (v76 - *(_DWORD *)&v137[4]);
    v83 += (((int)v81 - (*(_DWORD *)&v137[8] - *(_DWORD *)v137)) * (v77 - *(_DWORD *)v137)
          + (*(_DWORD *)&v137[8] - *(_DWORD *)v137) / 2)
         / (*(_DWORD *)&v137[8] - *(_DWORD *)v137);
    v81 = (unsigned int)((v85 + v75 / 2) >> 31);
    LODWORD(v81) = (v85 + v75 / 2) % v75;
    v84 += (v85 + v75 / 2) / v75;
  }
  v86 = 0LL;
  if ( v83 || v84 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (LOBYTE(v81) = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      LOBYTE(v81) = 0;
    }
    v128 = v81;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v87 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v87 = 0;
    }
    v125 = v87;
    if ( (_BYTE)v81 || v87 )
    {
      v88 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v81);
      LOBYTE(v89) = v125;
      LOBYTE(v90) = v128;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v90,
        v89,
        *(_QWORD *)(v88 + 69160),
        5,
        4,
        19,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
        v83,
        v84);
    }
    v77 += v83;
    v78 += v83;
    v79 += v84;
    v142.m128i_i32[0] = v77;
    v76 += v84;
    *(__int64 *)((char *)v142.m128i_i64 + 4) = __PAIR64__(v78, v76);
    v142.m128i_i32[3] = v79;
  }
  if ( (a8 & 1) != 0 )
  {
    LOBYTE(v86) = (*(_BYTE *)(*((_QWORD *)a2 + 5) + 30LL) & 4) != 0;
    anonymous_namespace_::FitRectToWorkArea(&v142, a5, v86);
    v79 = v142.m128i_i32[3];
    v78 = v142.m128i_i32[2];
    v76 = v142.m128i_i32[1];
    v77 = v142.m128i_i32[0];
  }
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 30LL) & 4) == 0 )
    goto LABEL_160;
  v91 = (unsigned int)(v78 - v77);
  v134 = v78 - v77;
  v135 = v79 - v76;
  if ( (a8 & 2) == 0 )
  {
    if ( (a8 & 8) == 0 )
      goto LABEL_134;
LABEL_122:
    v78 = a5->m128i_i32[2];
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v97 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v97 = 0;
    }
    v91 = (unsigned __int64)&WPP_RECORDER_INITIALIZED;
    v130 = v97;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v98 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v98 = 0;
    }
    if ( v97 || v98 )
    {
      v99 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v100) = v130;
      LOBYTE(v101) = v98;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v100,
        v101,
        *(_QWORD *)(v99 + 69160),
        5,
        4,
        21,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
    }
    if ( (a8 & 2) == 0 )
      v77 = v78 - v134;
    goto LABEL_134;
  }
  v77 = a5->m128i_i32[0];
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v92 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v92 = 0;
  }
  v129 = v92;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v93 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v93 = 0;
  }
  if ( v92 || v93 )
  {
    v94 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v91);
    LOBYTE(v95) = v129;
    LOBYTE(v96) = v93;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v95,
      v96,
      *(_QWORD *)(v94 + 69160),
      5,
      4,
      20,
      (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
    v91 = v134;
  }
  if ( (a8 & 8) != 0 )
    goto LABEL_122;
  v78 = v91 + v77;
LABEL_134:
  if ( (a8 & 4) != 0 )
  {
    v76 = a5->m128i_i32[1];
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v102 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v102 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v103 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v103 = 0;
    }
    if ( v102 || v103 )
    {
      v104 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v91);
      LOBYTE(v105) = v103;
      LOBYTE(v106) = v102;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v106,
        v105,
        *(_QWORD *)(v104 + 69160),
        5,
        4,
        22,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
    }
    if ( (a8 & 0x10) == 0 )
    {
      v79 = v76 + v135;
      goto LABEL_160;
    }
LABEL_148:
    v79 = a5->m128i_i32[3];
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v107 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v107 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v108 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v108 = 0;
    }
    if ( v107 || v108 )
    {
      v109 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v91);
      LOBYTE(v110) = v108;
      LOBYTE(v111) = v107;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v111,
        v110,
        *(_QWORD *)(v109 + 69160),
        5,
        4,
        23,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
    }
    if ( (a8 & 4) == 0 )
      v76 = v79 - v135;
    goto LABEL_160;
  }
  if ( (a8 & 0x10) != 0 )
    goto LABEL_148;
LABEL_160:
  v112 = WindowMargins::_anonymous_namespace_::GetWindowMargins(a2, a6);
  v113 = v77 - (__int16)v112;
  v114 = v113;
  v115 = v76 - SWORD2(v112);
  v116 = v115;
  v117 = v79 + SHIWORD(v112);
  v118 = v78 + SWORD1(v112);
  if ( (*(_BYTE *)(*((_QWORD *)a2 + 5) + 30LL) & 4) != 0
    && v113 <= a5->m128i_i32[0]
    && v115 <= a5->m128i_i32[1]
    && v78 + SWORD1(v112) >= a5->m128i_i32[2]
    && v79 + SHIWORD(v112) >= a5->m128i_i32[3] )
  {
    v119 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v11 = 0;
    }
    if ( v119 || v11 )
    {
      v120 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v121) = v11;
      LOBYTE(v122) = v119;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v122,
        v121,
        *(_QWORD *)(v120 + 69160),
        5,
        4,
        24,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
    }
    v118 = a5->m128i_i32[2] - 1;
    v117 = _mm_cvtsi128_si32(_mm_srli_si128(*a5, 12)) - 1;
    v116 = _mm_cvtsi128_si32(_mm_srli_si128(*a5, 4)) + 1;
    v114 = _mm_cvtsi128_si32(*a5) + 1;
  }
  result = v140;
  v140->m128i_i32[0] = v114;
  result->m128i_i32[1] = v116;
  result->m128i_i32[2] = v118;
  result->m128i_i32[3] = v117;
  return result;
}
