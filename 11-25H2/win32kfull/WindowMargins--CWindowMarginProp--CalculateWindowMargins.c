/*
 * XREFs of WindowMargins::CWindowMarginProp::CalculateWindowMargins @ 0x14014EFC4
 * Callers:
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140037578 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x14014EEC8 (WindowMargins--_anonymous_namespace_--GetWindowMargins.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     ?IsWindowNCRenderingEnabled@@YA_NPEBUtagWND@@@Z @ 0x140034DBC (-IsWindowNCRenderingEnabled@@YA_NPEBUtagWND@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CalculateContentRect@@YA?AUtagRECT@@PEBUtagWND@@PEAH@Z @ 0x140037D74 (-CalculateContentRect@@YA-AUtagRECT@@PEBUtagWND@@PEAH@Z.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x1400495FC (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     IntersectRect @ 0x140052D08 (IntersectRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     GetMonitorRectForWindow @ 0x1400908AC (GetMonitorRectForWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_sqddddd @ 0x14018AFA8 (WPP_RECORDER_AND_TRACE_SF_sqddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1401A48DC (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     ?IsWDAGContainer@@YAHXZ @ 0x1401DCC04 (-IsWDAGContainer@@YAHXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddddd @ 0x140229024 (WPP_RECORDER_AND_TRACE_SF_dddddddd.c)
 *     WindowMargins::CWindowMarginProp::GetOverrideMargins @ 0x1402C0FD8 (WindowMargins--CWindowMarginProp--GetOverrideMargins.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddd @ 0x1402C150C (WPP_RECORDER_AND_TRACE_SF_ddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qsdddd @ 0x1402C17B0 (WPP_RECORDER_AND_TRACE_SF_qsdddd.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

_QWORD *__fastcall WindowMargins::CWindowMarginProp::CalculateWindowMargins(
        __int64 a1,
        _QWORD *a2,
        const struct tagWND *a3,
        unsigned int a4,
        unsigned int a5)
{
  const struct tagWND *v6; // r14
  __int64 v8; // rdx
  char v9; // si
  char v10; // bl
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  _QWORD *result; // rax
  char v15; // si
  __int64 v16; // rdx
  char v17; // r14
  bool v18; // bl
  __int64 UserSessionState; // rax
  int v20; // r8d
  int v21; // edx
  struct tagRECT *v22; // rax
  INT v23; // r8d
  struct tagRECT v24; // xmm0
  __int64 v25; // rax
  int v26; // ecx
  unsigned int WindowDpiLastNotify; // r14d
  __int64 v28; // rdx
  __int64 v29; // rcx
  char v30; // bl
  int v31; // edx
  int v32; // r8d
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  INT v37; // eax
  const struct tagWND *v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rax
  __int128 v41; // xmm0
  int v42; // eax
  __int64 v43; // rdx
  unsigned __int64 v44; // rbx
  __int64 v45; // r12
  char v46; // al
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  _DWORD *v50; // rax
  INT v51; // r12d
  __int64 v52; // rdx
  int v53; // r10d
  char v54; // al
  char v55; // bl
  __int64 v56; // rax
  int v57; // r8d
  int v58; // edx
  __int16 WindowBordersWithDpiAwareness; // ax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rdx
  char v63; // al
  __int64 v64; // rdi
  char v65; // bl
  __int64 v66; // rax
  int v67; // r8d
  int v68; // edx
  __int64 v69; // r9
  const char *v70; // rax
  __int64 v71; // rcx
  char v72; // al
  __int64 v73; // rbx
  __int64 v74; // rax
  int v75; // r8d
  int v76; // edx
  __int64 v77; // r9
  const char *v78; // rax
  char v79; // bl
  __int64 v80; // rax
  int v81; // r8d
  int v82; // edx
  __int16 v83; // ax
  int v84; // r14d
  INT v85; // ebx
  __int16 v86; // r8
  int v87; // r14d
  char v88; // al
  __int64 v89; // rax
  int v90; // r8d
  int v91; // edx
  int v92; // eax
  __int16 v93; // r12
  int v94; // eax
  __int16 v95; // dx
  __int64 v96; // rdx
  __int32 v97; // eax
  __int64 v98; // rdx
  __int64 v99; // rcx
  int v100; // eax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rdx
  __int64 v104; // rcx
  struct tagTHREADINFO *v105; // rax
  const struct tagWND *v106; // rdx
  __int64 v107; // rcx
  int v108; // eax
  __int64 v109; // rcx
  bool v110; // al
  char v111; // bl
  __int64 v112; // rax
  int v113; // r8d
  int v114; // edx
  __int16 v115; // ax
  __int64 v116; // rax
  __int16 v117; // ax
  char v118; // r15
  bool v119; // r13
  __int64 v120; // rdi
  __int64 v121; // rax
  const char *v122; // rdx
  const char *v123; // rbx
  int v124; // r8d
  _QWORD *v125; // rcx
  __m128i *v126; // [rsp+20h] [rbp-C1h]
  int v127; // [rsp+28h] [rbp-B9h]
  int v128; // [rsp+30h] [rbp-B1h]
  __int16 v129; // [rsp+30h] [rbp-B1h]
  int v130; // [rsp+38h] [rbp-A9h]
  char v131; // [rsp+80h] [rbp-61h]
  char v132; // [rsp+80h] [rbp-61h]
  char v133; // [rsp+80h] [rbp-61h]
  char v134; // [rsp+80h] [rbp-61h]
  char v135; // [rsp+80h] [rbp-61h]
  char v136; // [rsp+80h] [rbp-61h]
  bool v137; // [rsp+80h] [rbp-61h]
  char v138; // [rsp+81h] [rbp-60h]
  char v139; // [rsp+81h] [rbp-60h]
  char v140; // [rsp+81h] [rbp-60h]
  char v141; // [rsp+81h] [rbp-60h]
  unsigned int a; // [rsp+84h] [rbp-5Dh]
  __int16 aa; // [rsp+84h] [rbp-5Dh]
  __int16 v145; // [rsp+90h] [rbp-51h]
  bool v146; // [rsp+90h] [rbp-51h]
  unsigned __int16 ScaledLogPixels; // [rsp+90h] [rbp-51h]
  unsigned int v148; // [rsp+94h] [rbp-4Dh]
  __int128 v149; // [rsp+98h] [rbp-49h] BYREF
  INT b; // [rsp+A8h] [rbp-39h]
  _QWORD *v151; // [rsp+B0h] [rbp-31h]
  __m128i v152; // [rsp+C0h] [rbp-21h] BYREF
  struct tagRECT v153; // [rsp+D0h] [rbp-11h] BYREF

  v6 = a3;
  v151 = a2;
  b = a4;
  v126 = &v152;
  v152.m128i_i64[0] = 0LL;
  if ( !(unsigned __int8)WindowMargins::CWindowMarginProp::GetOverrideMargins(a1, a3, a4, a5) )
  {
    v15 = 1;
    if ( a5 == 1 && (*(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL) & 1) != 0 && (unsigned int)IsWDAGContainer() )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), 0x14u)
        || (v17 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v17 = 0;
      }
      v18 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
         && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
      if ( v17 || v18 )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v16);
        LOBYTE(v20) = v18;
        LOBYTE(v21) = v17;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v21,
          v20,
          *(_QWORD *)(UserSessionState + 69160),
          5,
          21,
          12,
          (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids);
      }
      v6 = a3;
LABEL_28:
      v22 = CalculateContentRect(&v153, v6, 0LL);
      v23 = 96;
      v24 = *v22;
      v25 = *((_QWORD *)v6 + 5);
      v153 = v24;
      v26 = *(_DWORD *)(v25 + 288) & 0xF;
      if ( v26 == 3 )
      {
        WindowDpiLastNotify = (*(_DWORD *)(v25 + 288) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v25 + 232) & 0x400) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a3);
      }
      else if ( !v26
             && (v36 = *(_QWORD *)(*((_QWORD *)a3 + 2) + 496LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v36 + 8) + 64LL) & 1) != 0 )
      {
        WindowDpiLastNotify = 96;
      }
      else
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 464LL) + 272LL);
      }
      v37 = EngMulDiv(1, b, v23);
      v38 = a3;
      LODWORD(v149) = v37;
      v152.m128i_i32[0] = 0;
      if ( a5 == 1 && (v39 = *((_QWORD *)a3 + 5), (*(_BYTE *)(v39 + 31) & 1) != 0) )
      {
        v40 = ValidateHmonitor(*(_QWORD *)(v39 + 256));
        v41 = *(_OWORD *)GetMonitorRectForWindow((__int64)&v152, v40, a3);
        v152 = 0LL;
        v149 = v41;
        v42 = IntersectRect(&v152, &v153.left, (int *)&v149);
        v44 = *(_QWORD *)&v153.right;
        v45 = *(_QWORD *)&v153.left;
        if ( v42 && *(_OWORD *)&v152 != *(_OWORD *)&v153 )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), 0x14u)
            || (LOBYTE(v43) = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
          {
            LOBYTE(v43) = 0;
          }
          v131 = v43;
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (v46 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
          {
            v46 = 0;
          }
          v138 = v46;
          if ( (_BYTE)v43 || v46 )
          {
            v47 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v43);
            LOBYTE(v48) = v138;
            LOBYTE(v49) = v131;
            WPP_RECORDER_AND_TRACE_SF_dddddddd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v49,
              v48,
              *(_QWORD *)(v47 + 69160),
              5,
              21,
              15,
              (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
              v152.m128i_i8[0],
              v152.m128i_i8[4],
              v152.m128i_i8[8],
              v152.m128i_i8[12],
              v45,
              v153.top,
              v44,
              v153.bottom);
          }
          v45 = v152.m128i_i64[0];
          v44 = _mm_srli_si128(v152, 8).m128i_u64[0];
        }
        v38 = a3;
        LODWORD(v149) = 0;
        v152.m128i_i64[0] = (unsigned int)(HIDWORD(v45) - *(_DWORD *)(*((_QWORD *)a3 + 5) + 92LL));
      }
      else
      {
        v44 = *(_QWORD *)&v153.right;
        LODWORD(v45) = v153.left;
      }
      v50 = (_DWORD *)*((_QWORD *)v38 + 5);
      v51 = v45 - v50[22];
      v52 = (unsigned int)(v50[24] - v44);
      v53 = v50[25] - HIDWORD(v44);
      a = v50[24] - v44;
      v148 = v53;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), 0x14u)
        || (v54 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v54 = 0;
      }
      v132 = v54;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v55 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v55 = 0;
      }
      if ( v54 || v55 )
      {
        v56 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v52);
        LOBYTE(v57) = v55;
        LOBYTE(v58) = v132;
        WPP_RECORDER_AND_TRACE_SF_ddddd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v58,
          v57,
          *(_QWORD *)(v56 + 69160),
          (_DWORD)v126,
          v127,
          v128,
          v130,
          v51,
          v152.m128i_i8[0],
          a,
          v148,
          WindowDpiLastNotify);
        v52 = a;
        v38 = a3;
        v53 = v148;
      }
      if ( !a5 )
      {
        v139 = *(_BYTE *)(*((_QWORD *)v38 + 5) + 31LL);
        if ( (v139 & 0x21) != 0 )
        {
          if ( *(_BYTE *)(a1 + 24) )
          {
            v51 = *(_DWORD *)(a1 + 28);
            WindowDpiLastNotify = *(_DWORD *)(a1 + 40);
            a = *(_DWORD *)(a1 + 32);
            v148 = *(_DWORD *)(a1 + 36);
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || !_bittest((const signed __int32 *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), 0x14u)
              || (LOBYTE(v52) = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
            {
              LOBYTE(v52) = 0;
            }
            v140 = v52;
            if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
              || (v63 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
            {
              v63 = 0;
            }
            v133 = v63;
            if ( (_BYTE)v52 || v63 )
            {
              v64 = *(_QWORD *)v38;
              v65 = *(_BYTE *)(*((_QWORD *)v38 + 5) + 31LL);
              v66 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v52);
              LOBYTE(v67) = v133;
              LOBYTE(v68) = v140;
              v69 = *(_QWORD *)(v66 + 69160);
              v70 = "Maximized";
              if ( (v65 & 1) == 0 )
                v70 = "Minimized";
              WPP_RECORDER_AND_TRACE_SF_qsdddd(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v68,
                v67,
                v69,
                (_DWORD)v126,
                v127,
                v128,
                v130,
                v64,
                (__int64)v70,
                v51,
                a,
                v148,
                WindowDpiLastNotify);
            }
          }
          else
          {
            v71 = *(_QWORD *)&WPP_GLOBAL_Control;
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || !_bittest((const signed __int32 *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), 0x14u)
              || (v72 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u) )
            {
              v72 = 0;
            }
            v134 = v72;
            v146 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v72 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v73 = *(_QWORD *)v38;
              LOBYTE(v71) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
              v74 = W32GetUserSessionState(v71, v52);
              LOBYTE(v75) = v146;
              LOBYTE(v76) = v134;
              v77 = *(_QWORD *)(v74 + 69160);
              v78 = "Maximized";
              if ( (v139 & 1) == 0 )
                v78 = "Minimized";
              WPP_RECORDER_AND_TRACE_SF_qs(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v76,
                v75,
                v77,
                2,
                21,
                18,
                (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
                v73,
                (__int64)v78);
            }
          }
        }
        else
        {
          *(_DWORD *)(a1 + 28) = v51;
          *(_DWORD *)(a1 + 32) = v52;
          *(_DWORD *)(a1 + 36) = v53;
          *(_DWORD *)(a1 + 40) = WindowDpiLastNotify;
          *(_BYTE *)(a1 + 24) = 1;
        }
      }
      WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a3, v52, 1, b);
      v145 = WindowBordersWithDpiAwareness;
      if ( WindowDpiLastNotify == b )
      {
        v84 = WindowBordersWithDpiAwareness;
      }
      else
      {
        v62 = *(_QWORD *)&WPP_GLOBAL_Control;
        LOBYTE(v61) = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
                   && _bittest((const signed __int32 *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), 0x14u)
                   && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
        v135 = v61;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
          || (v79 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
        {
          v79 = 0;
        }
        if ( (_BYTE)v61 || v79 )
        {
          v80 = W32GetUserSessionState(v61, *(_QWORD *)&WPP_GLOBAL_Control);
          LOBYTE(v81) = v79;
          LOBYTE(v82) = v135;
          WPP_RECORDER_AND_TRACE_SF_Dd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v82,
            v81,
            *(_QWORD *)(v80 + 69160),
            5,
            21,
            19,
            (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
            WindowDpiLastNotify,
            b);
        }
        v83 = GetWindowBordersWithDpiAwareness(a3, v62, 1, WindowDpiLastNotify);
        v84 = v145;
        v85 = v83;
        v51 = EngMulDiv(v51, v145, v83);
        a = EngMulDiv(a, v145, v85);
        v148 = EngMulDiv(v148, v145, v85);
      }
      v86 = v149;
      v87 = v84 - (__int16)v149;
      if ( v87 <= 0 )
        v87 = 0;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), 0x14u)
        || (LOBYTE(v60) = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        LOBYTE(v60) = 0;
      }
      v141 = v60;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v88 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
      {
        v88 = 0;
      }
      v136 = v88;
      if ( (_BYTE)v60 || v88 )
      {
        v89 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v60);
        LOBYTE(v90) = v136;
        LOBYTE(v91) = v141;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v91,
          v90,
          *(_QWORD *)(v89 + 69160),
          5,
          21,
          20,
          (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
          v145,
          v87);
        v86 = v149;
      }
      v92 = v51 - v86;
      if ( v92 <= 0 )
        v92 = 0;
      if ( v87 >= v92 )
      {
        if ( v51 - v86 <= 0 )
        {
          v93 = 0;
          LOWORD(v149) = 0;
        }
        else
        {
          v93 = v51 - v86;
          LOWORD(v149) = v93;
        }
      }
      else
      {
        v93 = v87;
        LOWORD(v149) = v87;
      }
      v94 = a - v86;
      if ( v94 <= 0 )
        v94 = 0;
      if ( v87 >= v94 )
      {
        if ( (int)(a - v86) <= 0 )
        {
          aa = 0;
          WORD1(v149) = 0;
LABEL_154:
          v96 = v152.m128i_i64[0];
          v97 = v152.m128i_i32[0] - v86;
          if ( v97 <= 0 )
            v97 = 0;
          if ( v87 >= v97 )
          {
            if ( v152.m128i_i32[0] - v86 <= 0 )
            {
              v152.m128i_i64[0] = 0LL;
              WORD2(v149) = 0;
              goto LABEL_162;
            }
            LOWORD(v96) = v152.m128i_i16[0] - v86;
          }
          else
          {
            v96 = (unsigned __int16)v87;
          }
          v152.m128i_i64[0] = v96;
          WORD2(v149) = v96;
LABEL_162:
          v98 = v148;
          v99 = v148 - v86;
          v100 = v148 - v86;
          if ( v100 <= 0 )
            v100 = 0;
          if ( v87 >= v100 )
          {
            if ( (int)v99 <= 0 )
            {
              LOWORD(v87) = 0;
              WORD3(v149) = 0;
            }
            else
            {
              LOWORD(v98) = v148 - v86;
              LOWORD(v87) = v148 - v86;
              WORD3(v149) = v148 - v86;
            }
          }
          else
          {
            WORD3(v149) = v87;
          }
          if ( a5 == 1 && PtiCurrent(v99, v98) && *((_QWORD *)PtiCurrent(v102, v101) + 62) )
          {
            v105 = PtiCurrent(v104, v103);
            v106 = a3;
            if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)v105 + 62) + 8LL) + 64LL) & 1) != 0 )
            {
              v107 = *((_QWORD *)a3 + 5);
              v108 = *(_DWORD *)(v107 + 288);
              if ( (v108 & 0xF) == 0 && (v108 & 0x40000000) != 0 )
              {
                ScaledLogPixels = GreGetScaledLogPixels(*(unsigned __int16 *)(v107 + 284));
                v110 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
                    && _bittest((const signed __int32 *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), 0x14u)
                    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
                v137 = v110;
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                  || (v111 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
                {
                  v111 = 0;
                }
                if ( v110 || v111 )
                {
                  v112 = W32GetUserSessionState(v109, *(_QWORD *)&WPP_GLOBAL_Control);
                  LOBYTE(v113) = v111;
                  LOBYTE(v114) = v137;
                  WPP_RECORDER_AND_TRACE_SF_d(
                    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                    v114,
                    v113,
                    *(_QWORD *)(v112 + 69160),
                    5,
                    21,
                    21,
                    (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids,
                    ScaledLogPixels);
                }
                v115 = EngMulDiv(v93, ScaledLogPixels, 96);
                LOBYTE(v93) = v115;
                LOWORD(v149) = v115;
                LODWORD(v116) = EngMulDiv(v152.m128i_i16[0], ScaledLogPixels, 96);
                v152.m128i_i64[0] = v116;
                WORD2(v149) = v116;
                aa = EngMulDiv(aa, ScaledLogPixels, 96);
                WORD1(v149) = aa;
                v117 = EngMulDiv((__int16)v87, ScaledLogPixels, 96);
                v106 = a3;
                LOBYTE(v87) = v117;
                WORD3(v149) = v117;
              }
            }
          }
          else
          {
            v106 = a3;
          }
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), 0x14u)
            || (v118 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v118 = 0;
          }
          v119 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v118 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v120 = *(_QWORD *)v106;
            v121 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v106);
            v122 = "Win32k";
            v123 = "Dwm";
            LOBYTE(v124) = v119;
            if ( a5 != 1 )
              v123 = "Win32k";
            LOBYTE(v122) = v118;
            WPP_RECORDER_AND_TRACE_SF_sqddddd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              (_DWORD)v122,
              v124,
              *(_QWORD *)(v121 + 69160),
              (_DWORD)v126,
              v127,
              v128,
              v130,
              (__int64)v123,
              v120,
              b,
              v93,
              v152.m128i_i8[0],
              aa,
              v87);
          }
          v35 = v149;
          goto LABEL_197;
        }
        v95 = a - v86;
      }
      else
      {
        v95 = v87;
      }
      aa = v95;
      WORD1(v149) = v95;
      goto LABEL_154;
    }
    if ( IsWindowNCRenderingEnabled(v6) )
    {
      if ( (*(_BYTE *)(W32GetUserSessionState(v29, v28) + 21044) & 1) == 0 )
        goto LABEL_28;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), 0x14u)
        || (v30 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v30 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
      {
        v15 = 0;
      }
      if ( !v30 && !v15 )
      {
LABEL_53:
        v35 = 0LL;
LABEL_197:
        v125 = v151;
        *v151 = v35;
        return v125;
      }
      v33 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v34) + 69160);
      v129 = 14;
    }
    else
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), 0x14u)
        || (v30 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
      {
        v30 = 0;
      }
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
      {
        v15 = 0;
      }
      if ( !v30 && !v15 )
        goto LABEL_53;
      v33 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v28) + 69160);
      v129 = 13;
    }
    LOBYTE(v32) = v15;
    LOBYTE(v31) = v30;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v31,
      v32,
      v33,
      5,
      21,
      v129,
      (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids);
    goto LABEL_53;
  }
  v9 = 1;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), 0x14u)
    || (v10 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
  {
    v10 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
  {
    v9 = 0;
  }
  if ( v10 || v9 )
  {
    v11 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v8);
    LOBYTE(v12) = v9;
    LOBYTE(v13) = v10;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v13,
      v12,
      *(_QWORD *)(v11 + 69160),
      5,
      21,
      11,
      (__int64)&WPP_eee9cda623e73e3ec961397a6ae94f7b_Traceguids);
  }
  result = a2;
  *a2 = v152.m128i_i64[0];
  return result;
}
