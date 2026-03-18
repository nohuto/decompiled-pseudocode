/*
 * XREFs of ?xxxTransformRectToMonitor@AdvancedWindowPos@@YA?AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CMonitorTopology@@2_N@Z @ 0x1402D9920
 * Callers:
 *     ?xxxAdjustRectsForMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@PEAUCHECKPOINT@@PEAUtagRECT@@3PEAPEBUMonitorData@CMonitorTopology@@@Z @ 0x1402D6CAC (-xxxAdjustRectsForMonitor@AdvancedWindowPos@@YAXPEAUtagWND@@PEBUWindowAction@1@PEAUCHECKPOINT@@P.c)
 * Callees:
 *     CalculateLogicalMonitorRect @ 0x14002428C (CalculateLogicalMonitorRect.c)
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x1400495FC (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     IntersectRect @ 0x140052D08 (IntersectRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014DD7C (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014EE58 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     _anonymous_namespace_::IsFullscreenRect @ 0x140225830 (_anonymous_namespace_--IsFullscreenRect.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x14024092C (xxxAppAdjustDpiCandidateRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x14026BB14 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     ?LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA?AUtagRECT@@PEBUtagWND@@@Z @ 0x14026BFEC (-LogicalWorkArea@MonitorData@CMonitorTopology@@QEBA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1402720AC (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddd @ 0x1402C163C (WPP_RECORDER_AND_TRACE_SF_qdddddd.c)
 *     _anonymous_namespace_::FitRectToWorkArea @ 0x1402D4264 (_anonymous_namespace_--FitRectToWorkArea.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddddd @ 0x1402DB09C (WPP_RECORDER_AND_TRACE_SF_ddddddd.c)
 *     ?GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z @ 0x1402DCB7C (-GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

struct tagRECT *__fastcall AdvancedWindowPos::xxxTransformRectToMonitor(
        struct tagRECT *this,
        struct tagRECT *__return_ptr retstr,
        __m128i *a3,
        struct tagRECT *a4,
        const struct CMonitorTopology::MonitorData *a5,
        const struct CMonitorTopology::MonitorData *a6)
{
  const struct CMonitorTopology::MonitorData *v6; // r14
  __m128i *v7; // rsi
  struct tagRECT *v8; // r15
  char v9; // r12
  char v10; // al
  char v11; // r13
  __int64 UserSessionState; // rax
  int v13; // edx
  int v14; // r8d
  struct CHECKPOINT *IfValid; // rax
  __int16 v16; // r11
  struct tagRECT *v17; // rdx
  __m128i v18; // xmm0
  __int32 v19; // r9d
  int v20; // edi
  unsigned __int16 WindowDpiLastNotify; // r8
  __m128i v22; // xmm6
  unsigned __int16 v23; // r10
  __int64 v24; // rdx
  int v25; // r14d
  bool v26; // zf
  int v27; // esi
  char v28; // r13
  int v29; // r13d
  char v30; // r14
  char v31; // si
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  unsigned __int16 v35; // cx
  char v36; // r14
  char v37; // bl
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  char v41; // al
  char v42; // r14
  __int32 v43; // ebx
  __int32 v44; // edi
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  INT v48; // edi
  bool v49; // di
  char v50; // bl
  __int64 v51; // rax
  int v52; // r8d
  __int32 v53; // edx
  __m128i v54; // xmm0
  __int64 v55; // rax
  unsigned __int16 v56; // r8
  __m128i v57; // xmm6
  __int64 v58; // rdx
  int WindowBordersWithDpiAwareness; // eax
  char v60; // r15
  char v61; // di
  char v62; // si
  __int32 v63; // ebx
  char v64; // r14
  bool v65; // r13
  __int64 v66; // rax
  int v67; // r8d
  int v68; // edx
  struct tagRECT *result; // rax
  struct tagRECT v70; // xmm0
  __int32 v71; // r9d
  __int32 v72; // ebx
  int v73; // r8d
  int v74; // r13d
  __int32 v75; // r14d
  __int32 v76; // ebx
  __int32 v77; // edi
  __int32 v78; // esi
  char v79; // si
  char v80; // di
  __int64 v81; // rax
  int v82; // r8d
  int v83; // edx
  __int64 v84; // rdx
  char v85; // di
  char v86; // bl
  __int64 v87; // rax
  int v88; // r8d
  int v89; // edx
  __int64 v90; // rdx
  struct tagRECT v91; // xmm1
  LONG left; // esi
  char v93; // di
  char v94; // bl
  __int64 v95; // rax
  int v96; // r8d
  int v97; // edx
  unsigned int v98; // [rsp+28h] [rbp-E0h]
  char v99; // [rsp+88h] [rbp-80h]
  unsigned __int16 v100; // [rsp+88h] [rbp-80h]
  char v101; // [rsp+88h] [rbp-80h]
  unsigned __int16 v102; // [rsp+8Ah] [rbp-7Eh]
  int v103; // [rsp+8Ch] [rbp-7Ch]
  unsigned __int16 v104; // [rsp+90h] [rbp-78h]
  INT v105; // [rsp+90h] [rbp-78h]
  __m128i v106; // [rsp+98h] [rbp-70h] BYREF
  int v107; // [rsp+A8h] [rbp-60h]
  __m128i v108; // [rsp+B8h] [rbp-50h] BYREF
  struct tagRECT v109; // [rsp+C8h] [rbp-40h] BYREF
  CMonitorTopology::MonitorData *v110; // [rsp+D8h] [rbp-30h]
  struct tagRECT *v111; // [rsp+E0h] [rbp-28h]
  __m128i v112; // [rsp+E8h] [rbp-20h] BYREF

  v6 = a5;
  v7 = a3;
  v108.m128i_i64[0] = (__int64)a5;
  v8 = retstr;
  v110 = (CMonitorTopology::MonitorData *)a4;
  *(_QWORD *)&v109.left = a3;
  v106.m128i_i64[0] = (__int64)retstr;
  v111 = this;
  v9 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v10 = 0;
  }
  v99 = v10;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || (v11 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
  {
    v11 = 0;
  }
  if ( v10 || v11 )
  {
    UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
    LOBYTE(v13) = v99;
    LOBYTE(v14) = v11;
    WPP_RECORDER_AND_TRACE_SF_qdddddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v13,
      v14,
      *(_QWORD *)(UserSessionState + 69160));
    v8 = (struct tagRECT *)v106.m128i_i64[0];
    v7 = *(__m128i **)&v109.left;
    v6 = (const struct CMonitorTopology::MonitorData *)v108.m128i_i64[0];
  }
  IfValid = CHECKPOINT::GetIfValid((struct tagWND *)v8);
  v16 = 0;
  v17 = v8;
  if ( IfValid )
    v18 = *(__m128i *)((char *)IfValid + 20);
  else
    v18 = *(__m128i *)(*(_QWORD *)&v8[2].right + 88LL);
  v112 = v18;
  v19 = v18.m128i_i32[2] - v18.m128i_i32[0];
  v20 = v18.m128i_i32[3] - v18.m128i_i32[1];
  v106.m128i_i32[0] = v18.m128i_i32[2] - v18.m128i_i32[0];
  if ( !IfValid || (WindowDpiLastNotify = *((_WORD *)IfValid + 26), (v104 = WindowDpiLastNotify) == 0) )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)v8);
    v104 = WindowDpiLastNotify;
  }
  v22 = *v7;
  v23 = *((_WORD *)v6 + 20);
  v24 = *(_QWORD *)&v17[2].right;
  v25 = _mm_cvtsi128_si32(*v7);
  v103 = _mm_cvtsi128_si32(_mm_srli_si128(*v7, 4));
  v26 = (*(_BYTE *)(v24 + 30) & 4) == 0;
  v100 = v23;
  v112 = *v7;
  v107 = v25;
  if ( v26 )
  {
    v27 = _mm_cvtsi128_si32(_mm_srli_si128(v22, 8));
    v28 = v27 - v25;
    if ( v27 - v25 == v19 && _mm_srli_si128(v22, 8).m128i_i32[1] - v22.m128i_i32[1] == v20 )
    {
      v29 = _mm_cvtsi128_si32(_mm_srli_si128(v22, 12));
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v30 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v30 = v16;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v31 = 1, *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) == v16) )
      {
        v31 = v16;
      }
      if ( v30 || v31 )
      {
        v32 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v24);
        LOBYTE(v33) = v31;
        LOBYTE(v34) = v30;
        WPP_RECORDER_AND_TRACE_SF_dddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v34,
          v33,
          *(_QWORD *)(v32 + 69160),
          5,
          4,
          71,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
          v28,
          v112.m128i_i8[12] - v103,
          v106.m128i_i8[0],
          v20);
        v19 = v106.m128i_i32[0];
        v16 = 0;
      }
      v25 = v107;
      v24 = *(_QWORD *)&v8[2].right;
      v29 = v20 + v103;
      WindowDpiLastNotify = v104;
      v27 = v19 + v107;
      v112.m128i_i32[3] = v20 + v103;
      v112.m128i_i32[2] = v19 + v107;
      v22.m128i_i64[0] = v112.m128i_i64[0];
    }
    v100 = WindowDpiLastNotify;
  }
  else
  {
    v27 = _mm_cvtsi128_si32(_mm_srli_si128(v22, 8));
    v29 = _mm_cvtsi128_si32(_mm_srli_si128(v22, 12));
  }
  v35 = *((_WORD *)v110 + 20);
  v102 = v35;
  if ( (*(_DWORD *)(v24 + 288) & 0xF) == 2 )
  {
    if ( WindowDpiLastNotify != v35 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v36 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v36 = v16;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v37 = 1, *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) == v16) )
      {
        v37 = v16;
      }
      if ( v36 || v37 )
      {
        v38 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v24);
        LOBYTE(v39) = v37;
        LOBYTE(v40) = v36;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v40,
          v39,
          *(_QWORD *)(v38 + 69160),
          5,
          4,
          72,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
          v104,
          v102);
        v19 = v106.m128i_i32[0];
      }
      v25 = v107;
      v106.m128i_i64[0] = v22.m128i_i64[0];
      v106.m128i_i32[2] = v19 + v107;
      v106.m128i_i32[3] = v20 + v22.m128i_i32[1];
      if ( (unsigned int)xxxAppAdjustDpiCandidateRect((struct tagTHREADINFO **)v8, v102, &v106, &v106) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || (v41 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
        {
          v41 = 0;
        }
        v101 = v41;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v42 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v42 = 0;
        }
        v43 = v106.m128i_i32[3];
        v44 = v106.m128i_i32[2];
        if ( v41 || v42 )
        {
          v45 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          LOBYTE(v46) = v42;
          LOBYTE(v47) = v101;
          WPP_RECORDER_AND_TRACE_SF_dddd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v47,
            v46,
            *(_QWORD *)(v45 + 69160),
            5,
            4,
            73,
            (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
            v27 - v107,
            v29 - v103,
            v44 - v106.m128i_i8[0],
            v43 - v106.m128i_i8[4]);
        }
        v112.m128i_i32[3] = v103 + v43 - v106.m128i_i32[1];
        v112.m128i_i32[2] = v107 + v44 - v106.m128i_i32[0];
        goto LABEL_72;
      }
      v35 = v102;
    }
    if ( v100 != v35 )
    {
      v48 = v35;
      v106.m128i_i32[0] = EngMulDiv(v27 - v25, v35, v100);
      v105 = EngMulDiv(v29 - v103, v48, v100);
      v49 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v50 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v50 = 0;
      }
      if ( v49 || v50 )
      {
        v51 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, *(_QWORD *)&WPP_GLOBAL_Control);
        LOBYTE(v52) = v50;
        v53 = v106.m128i_i32[0];
        LOBYTE(v53) = v49;
        WPP_RECORDER_AND_TRACE_SF_dddddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v53,
          v52,
          *(_QWORD *)(v51 + 69160),
          5,
          4,
          74,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
          v100,
          v27 - v25,
          v29 - v103,
          v102,
          v106.m128i_i8[0],
          v105);
      }
      v112.m128i_i32[2] = v25 + v106.m128i_i32[0];
      v112.m128i_i32[3] = v103 + v105;
    }
  }
LABEL_72:
  v54 = *CalculateLogicalMonitorRect(
           &v108,
           (__m128i *)(v108.m128i_i64[0] + 8),
           *(_WORD *)(v108.m128i_i64[0] + 40),
           (*(_DWORD *)(*(_QWORD *)&v8[2].right + 288LL) >> 8) & 0x1FF,
           *(_WORD *)(v108.m128i_i64[0] + 64));
  v55 = *(_QWORD *)&v8[2].right;
  v56 = *((_WORD *)v110 + 20);
  v108 = v54;
  v57 = *CalculateLogicalMonitorRect(
           &v106,
           (__m128i *)((char *)v110 + 8),
           v56,
           (*(_DWORD *)(v55 + 288) >> 8) & 0x1FF,
           *((_WORD *)v110 + 32));
  v106 = v57;
  if ( anonymous_namespace_::IsFullscreenRect(*(_DWORD **)&v109.left, &v108) )
  {
    v112 = v57;
    WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness((const struct tagWND *)v8, v58, 0, 0);
    v60 = WindowBordersWithDpiAwareness;
    v61 = WindowBordersWithDpiAwareness + v112.m128i_i8[8];
    v62 = v112.m128i_i8[4] - WindowBordersWithDpiAwareness;
    v112.m128i_i32[2] += WindowBordersWithDpiAwareness;
    v112.m128i_i32[1] -= WindowBordersWithDpiAwareness;
    v63 = _mm_cvtsi128_si32(v57) - WindowBordersWithDpiAwareness;
    v64 = WindowBordersWithDpiAwareness + v112.m128i_i8[12];
    v112.m128i_i32[0] = v63;
    v112.m128i_i32[3] += WindowBordersWithDpiAwareness;
    v65 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
    {
      v9 = 0;
    }
    if ( v65 || v9 )
    {
      v66 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v67) = v9;
      LOBYTE(v68) = v65;
      WPP_RECORDER_AND_TRACE_SF_ddddddd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v68,
        v67,
        *(_QWORD *)(v66 + 69160),
        v98,
        4,
        75,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
        v60,
        v63,
        v62,
        v61,
        v64,
        v61 - v63,
        v64 - v62);
    }
    result = v111;
    *v111 = (struct tagRECT)v112;
    return result;
  }
  v70 = *WindowMargins::ReduceRect(
           (WindowMargins *)&v109,
           v8,
           (const struct tagWND *)&v112,
           (const struct tagRECT *)v102);
  v71 = v106.m128i_i32[3] - v106.m128i_i32[1];
  v72 = v106.m128i_i32[0] - v108.m128i_i32[0];
  v112 = (__m128i)v70;
  v73 = v108.m128i_i32[3] - v108.m128i_i32[1];
  v74 = _mm_cvtsi128_si32((__m128i)v70);
  v75 = v106.m128i_i32[1] - v108.m128i_i32[1];
  if ( v106.m128i_i32[2] - v106.m128i_i32[0] != v108.m128i_i32[2] - v108.m128i_i32[0] || v71 != v73 )
  {
    v72 += ((v106.m128i_i32[2] - v106.m128i_i32[0] - (v108.m128i_i32[2] - v108.m128i_i32[0]))
          * (v74 - v108.m128i_i32[0])
          + (v108.m128i_i32[2] - v108.m128i_i32[0]) / 2)
         / (v108.m128i_i32[2] - v108.m128i_i32[0]);
    v75 += ((v71 - v73) * (v112.m128i_i32[1] - v108.m128i_i32[1]) + v73 / 2) / v73;
  }
  if ( v72 || v75 )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v79 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v79 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v80 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v80 = 0;
    }
    if ( v79 || v80 )
    {
      v81 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, 0LL);
      LOBYTE(v82) = v80;
      LOBYTE(v83) = v79;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v83,
        v82,
        *(_QWORD *)(v81 + 69160),
        5,
        4,
        76,
        (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids,
        v72,
        v75);
    }
    v74 += v72;
    v77 = v72 + v112.m128i_i32[2];
    v76 = v75 + v112.m128i_i32[3];
    v112.m128i_i32[0] = v74;
    v78 = v75 + v112.m128i_i32[1];
    v112.m128i_i32[2] = v77;
    v112.m128i_i32[1] += v75;
    v112.m128i_i32[3] += v75;
  }
  else
  {
    v76 = v112.m128i_i32[3];
    v77 = v112.m128i_i32[2];
    v78 = v112.m128i_i32[1];
  }
  CMonitorTopology::MonitorData::LogicalWorkArea(v110, &v109, (const struct tagWND *)v8);
  if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !(_BYTE)a6 )
    {
      v108 = 0LL;
      IntersectRect(&v108, v112.m128i_i32, &v109.left);
      if ( (v108.m128i_i32[2] - v108.m128i_i32[0]) * (v108.m128i_i32[3] - v108.m128i_i32[1]) >= (unsigned int)((v77 - v74) * (v76 - v78)) >> 1 )
        goto LABEL_117;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v85 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v85 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v86 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v86 = 0;
      }
      if ( v85 || v86 )
      {
        v87 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v84);
        LOBYTE(v88) = v86;
        LOBYTE(v89) = v85;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v89,
          v88,
          *(_QWORD *)(v87 + 69160),
          5,
          4,
          77,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
      }
    }
  }
  else if ( !(_BYTE)a6 )
  {
    goto LABEL_117;
  }
  anonymous_namespace_::FitRectToWorkArea(
    v112.m128i_i32,
    (unsigned int *)&v109,
    (*(_BYTE *)(*(_QWORD *)&v8[2].right + 30LL) & 4) != 0);
LABEL_117:
  v91 = *WindowMargins::ExtendRect(
           (struct tagRECT *)&v108,
           v8,
           (const struct tagWND *)&v112,
           (const struct tagRECT *)v102);
  if ( (*(_BYTE *)(*(_QWORD *)&v8[2].right + 30LL) & 4) != 0 )
  {
    left = v109.left;
    if ( _mm_cvtsi128_si32((__m128i)v91) <= v109.left
      && v91.top <= v109.top
      && _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v91, 8)) >= v109.right
      && _mm_srli_si128(*(__m128i *)&v91, 8).m128i_i32[1] >= v109.bottom )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v93 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v93 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v94 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v94 = 0;
      }
      if ( v93 || v94 )
      {
        v95 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v90);
        LOBYTE(v96) = v94;
        LOBYTE(v97) = v93;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v97,
          v96,
          *(_QWORD *)(v95 + 69160),
          5,
          4,
          78,
          (__int64)&WPP_465f200ce2533ca40a0cb60e63eb1667_Traceguids);
      }
      v112.m128i_i32[2] = v109.right - 1;
      v112.m128i_i32[1] = v109.top + 1;
      v112.m128i_i32[3] = v109.bottom - 1;
      v112.m128i_i32[0] = left + 1;
      v91 = (struct tagRECT)v112;
    }
  }
  result = v111;
  *v111 = v91;
  return result;
}
