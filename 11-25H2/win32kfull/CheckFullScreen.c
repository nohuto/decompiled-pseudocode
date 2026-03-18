/*
 * XREFs of CheckFullScreen @ 0x140236038
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x140232CAC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14003D91C (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x1400495FC (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x14009047C (GetMonitorWorkRectForWindow.c)
 *     GetMonitorRectForWindow @ 0x1400908AC (GetMonitorRectForWindow.c)
 *     _MonitorFromRect @ 0x1400913B0 (_MonitorFromRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x14018C8D4 (WPP_RECORDER_AND_TRACE_SF_dddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RECTFromSIZERECT @ 0x1401AA49C (RECTFromSIZERECT.c)
 *     ?IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z @ 0x1401C3D38 (-IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z.c)
 *     GetScreenRectForWindow @ 0x1401DC898 (GetScreenRectForWindow.c)
 *     ?AddWFFULLSCREEN@@YAXPEAUtagWND@@@Z @ 0x140208DA8 (-AddWFFULLSCREEN@@YAXPEAUtagWND@@@Z.c)
 *     ?WindowHasPendingRecalc@DesktopRecalc@@YA_NPEBUtagWND@@@Z @ 0x140259954 (-WindowHasPendingRecalc@DesktopRecalc@@YA_NPEBUtagWND@@@Z.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1402720AC (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_sq @ 0x140272638 (WPP_RECORDER_AND_TRACE_SF_sq.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

char __fastcall CheckFullScreen(struct tagWND *a1, struct tagSIZERECT *a2, char a3, char a4)
{
  int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // r15
  __int64 v11; // rdx
  _DWORD **v12; // rcx
  char *v13; // rbx
  _DWORD *v14; // rdx
  struct tagTHREADINFO *v15; // rax
  __int64 v16; // rdx
  struct tagRECT v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // r10
  int v20; // ecx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v22; // rax
  int DpiDependentMetric; // edi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // ecx
  int v29; // ecx
  __int64 v30; // rcx
  char v31; // al
  __int64 v32; // rbx
  __int64 v33; // rax
  int v34; // r8d
  __int64 v35; // r9
  const char *v36; // rax
  char v37; // al
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  char v41; // al
  int v42; // ebx
  int v43; // edi
  int v44; // esi
  int v45; // r14d
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  char v49; // al
  __int64 v50; // rax
  LONG v51; // edx
  LONG top; // r8d
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  bool v56; // al
  __int64 v57; // rbx
  __int64 v58; // rax
  int v59; // r8d
  int v60; // edx
  char v61; // al
  char v62; // r12
  __int64 v63; // rax
  int v64; // r8d
  int v65; // edx
  char v66; // al
  char v67; // r12
  int v68; // ebx
  int v69; // edi
  int v70; // esi
  int v71; // r14d
  __int64 v72; // rax
  int v73; // edx
  int v74; // r8d
  int v75; // ecx
  char v76; // r12
  int v77; // eax
  char v78; // di
  __int64 v79; // rax
  int v80; // edx
  int v81; // r8d
  __int64 v82; // r10
  char v83; // si
  bool v84; // r14
  __int64 v85; // rbx
  __int64 v86; // rax
  int v87; // r8d
  int v88; // edx
  char v89; // r8
  char v90; // al
  int v91; // ebx
  int v92; // edi
  int v93; // esi
  int v94; // r14d
  __int64 v95; // rax
  int v96; // r8d
  int v97; // edx
  char v98; // di
  __int64 v99; // rax
  LONG v100; // r8d
  int v101; // edx
  char v102; // si
  bool v103; // r14
  __int64 v104; // rbx
  __int64 UserSessionState; // rax
  int v106; // r8d
  int v107; // edx
  char v108; // r8
  char v109; // al
  int v110; // ebx
  int v111; // edi
  int v112; // esi
  int v113; // r14d
  __int64 v114; // rax
  int v115; // r8d
  int v116; // edx
  char v117; // di
  __int64 v118; // rax
  LONG right; // r8d
  int v120; // edx
  bool v122; // [rsp+70h] [rbp-29h]
  char v123; // [rsp+70h] [rbp-29h]
  char v124; // [rsp+70h] [rbp-29h]
  char v125; // [rsp+70h] [rbp-29h]
  bool v126; // [rsp+70h] [rbp-29h]
  char v127; // [rsp+70h] [rbp-29h]
  char v128; // [rsp+70h] [rbp-29h]
  char v129; // [rsp+70h] [rbp-29h]
  char v130; // [rsp+70h] [rbp-29h]
  unsigned __int8 v131; // [rsp+71h] [rbp-28h]
  char v132; // [rsp+71h] [rbp-28h]
  char v133; // [rsp+71h] [rbp-28h]
  char v134; // [rsp+71h] [rbp-28h]
  char v135; // [rsp+71h] [rbp-28h]
  char v136; // [rsp+71h] [rbp-28h]
  char v137; // [rsp+72h] [rbp-27h]
  bool v139; // [rsp+73h] [rbp-26h]
  int WindowBordersWithDpiAwareness; // [rsp+74h] [rbp-25h]
  int v141; // [rsp+74h] [rbp-25h]
  struct tagRECT v142; // [rsp+78h] [rbp-21h] BYREF
  int v143; // [rsp+88h] [rbp-11h]
  int v144; // [rsp+8Ch] [rbp-Dh]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+90h] [rbp-9h] BYREF
  struct tagRECT v146; // [rsp+A0h] [rbp+7h] BYREF

  v146 = 0LL;
  if ( (a3 & 0x23) != 0x23 || (LOBYTE(v6) = DesktopRecalc::WindowHasPendingRecalc(a1, a2), !(_BYTE)v6) )
  {
    v7 = *(_QWORD *)(GetDispInfo(a1) + 104);
    v10 = 1;
    v12 = *(_DWORD ***)(W32GetUserSessionState(v9, v8) + 56968);
    if ( **v12 <= 1u )
    {
      v13 = (char *)a1 + 40;
      goto LABEL_7;
    }
    v142 = (struct tagRECT)*GetScreenRectForWindow((__m128i *)&v142, a1);
    v6 = IsMaxedRect(&v142, a2);
    if ( !v6 )
    {
      RECTFromSIZERECT(&v146, v14);
      v13 = (char *)a1 + 40;
      v7 = MonitorFromRect(&v146.left, 1u, *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL));
LABEL_7:
      v15 = PtiCurrent((__int64)v12, v11);
      Win32HM_LockIntoThread<0>((__int64)v15, v7, BugCheckParameter3);
      v146 = *(struct tagRECT *)GetMonitorWorkRectForWindow((__int64)&v146, v7, a1);
      if ( !IsMaxedRect(&v146, a2) )
      {
        if ( (*(_BYTE *)(*(_QWORD *)v13 + 31LL) & 1) != 0 )
          SetOrClrWF(0, a1, 0x340u, 1);
        if ( (*(_BYTE *)(*(_QWORD *)v13 + 20LL) & 0x40) != 0 )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || (v102 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v102 = 0;
          }
          v103 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v102 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v104 = *(_QWORD *)a1;
            UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v16);
            LOBYTE(v106) = v103;
            LOBYTE(v107) = v102;
            WPP_RECORDER_AND_TRACE_SF_q(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v107,
              v106,
              *(_QWORD *)(UserSessionState + 69160),
              4,
              4,
              31,
              (__int64)&WPP_4c3561661974375d62aab8fc6250b2f0_Traceguids,
              v104);
          }
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || (v108 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
          {
            v108 = 0;
          }
          v136 = v108;
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (v109 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
          {
            v109 = 0;
          }
          v130 = v109;
          if ( v108 || v109 )
          {
            v110 = *((_DWORD *)a2 + 3);
            v111 = *((_DWORD *)a2 + 2);
            v112 = *((_DWORD *)a2 + 1);
            v113 = *(_DWORD *)a2;
            v114 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, *(_QWORD *)&WPP_GLOBAL_Control);
            LOBYTE(v115) = v130;
            LOBYTE(v116) = v136;
            WPP_RECORDER_AND_TRACE_SF_dddddd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v116,
              v115,
              *(_QWORD *)(v114 + 69160),
              5,
              4,
              32,
              (__int64)&WPP_4c3561661974375d62aab8fc6250b2f0_Traceguids,
              v113,
              v112,
              v113 + v111,
              v112 + v110,
              v111,
              v110);
          }
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || (v117 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
          {
            v117 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
          {
            v10 = 0;
          }
          if ( v117 || v10 )
          {
            v118 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, *(_QWORD *)&WPP_GLOBAL_Control);
            right = v146.right;
            LOBYTE(v120) = v117;
            LOBYTE(right) = v10;
            WPP_RECORDER_AND_TRACE_SF_dddddd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v120,
              right,
              *(_QWORD *)(v118 + 69160),
              5,
              4,
              33,
              (__int64)&WPP_4c3561661974375d62aab8fc6250b2f0_Traceguids,
              v146.left,
              v146.top,
              v146.right,
              v146.bottom,
              LOBYTE(v146.right) - LOBYTE(v146.left),
              LOBYTE(v146.bottom) - LOBYTE(v146.top));
          }
        }
        SetOrClrWF(0, a1, 0x440u, 0);
        goto LABEL_174;
      }
      v17 = *(struct tagRECT *)GetMonitorRectForWindow((__int64)&v142, v7, a1);
      v18 = *(_QWORD *)v13;
      v142 = v17;
      if ( (*(_BYTE *)(v18 + 31) & 1) != 0 )
        SetOrClrWF(1, a1, 0x340u, 1);
      v19 = *(_QWORD *)v13;
      if ( (*(_BYTE *)(*(_QWORD *)v13 + 31LL) & 1) == 0
        || (((*(_BYTE *)(v19 + 30) & 0xC0) == 0xC0) & *(_BYTE *)(v19 + 30)) == 0 )
      {
        if ( !IsMaxedRect(&v142, a2) )
        {
LABEL_174:
          LOBYTE(v6) = Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(BugCheckParameter3, v53);
          return v6;
        }
        if ( (*(_BYTE *)(v82 + 20) & 0x40) == 0 )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || (v83 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v83 = 0;
          }
          v84 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v83 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v85 = *(_QWORD *)a1;
            v86 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v53);
            LOBYTE(v87) = v84;
            LOBYTE(v88) = v83;
            WPP_RECORDER_AND_TRACE_SF_q(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v88,
              v87,
              *(_QWORD *)(v86 + 69160),
              4,
              4,
              28,
              (__int64)&WPP_4c3561661974375d62aab8fc6250b2f0_Traceguids,
              v85);
          }
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || (v89 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
          {
            v89 = 0;
          }
          v135 = v89;
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (v90 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
          {
            v90 = 0;
          }
          v129 = v90;
          if ( v89 || v90 )
          {
            v91 = *((_DWORD *)a2 + 3);
            v92 = *((_DWORD *)a2 + 2);
            v93 = *((_DWORD *)a2 + 1);
            v94 = *(_DWORD *)a2;
            v95 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, *(_QWORD *)&WPP_GLOBAL_Control);
            LOBYTE(v96) = v129;
            LOBYTE(v97) = v135;
            WPP_RECORDER_AND_TRACE_SF_dddddd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v97,
              v96,
              *(_QWORD *)(v95 + 69160),
              5,
              4,
              29,
              (__int64)&WPP_4c3561661974375d62aab8fc6250b2f0_Traceguids,
              v94,
              v93,
              v94 + v92,
              v93 + v91,
              v92,
              v91);
          }
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || (v98 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
          {
            v98 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
          {
            v10 = 0;
          }
          if ( v98 || v10 )
          {
            v99 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, *(_QWORD *)&WPP_GLOBAL_Control);
            v100 = v142.right;
            LOBYTE(v101) = v98;
            LOBYTE(v100) = v10;
            WPP_RECORDER_AND_TRACE_SF_dddddd(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v101,
              v100,
              *(_QWORD *)(v99 + 69160),
              5,
              4,
              30,
              (__int64)&WPP_4c3561661974375d62aab8fc6250b2f0_Traceguids,
              v142.left,
              v142.top,
              v142.right,
              v142.bottom,
              LOBYTE(v142.right) - LOBYTE(v142.left),
              LOBYTE(v142.bottom) - LOBYTE(v142.top));
          }
        }
LABEL_142:
        AddWFFULLSCREEN(a1);
        goto LABEL_174;
      }
      v20 = *(_DWORD *)(v19 + 288) & 0xF;
      if ( v20 == 3 )
      {
        WindowDpiLastNotify = (*(_DWORD *)(v19 + 288) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v19 + 232) & 0x400) != 0 )
      {
        WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
      }
      else if ( !v20
             && (v22 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 496LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v22 + 8) + 64LL) & 1) != 0 )
      {
        WindowDpiLastNotify = 96;
      }
      else
      {
        WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 272LL);
      }
      DpiDependentMetric = GetDpiDependentMetric(2, WindowDpiLastNotify);
      if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline(v25, v24, v26) )
      {
        if ( *(_DWORD *)a2 <= v142.left && *((_DWORD *)a2 + 2) + *(_DWORD *)a2 >= v142.right )
        {
          v29 = *((_DWORD *)a2 + 1);
          if ( v29 + DpiDependentMetric <= v142.top )
          {
            LOBYTE(v27) = 1;
            if ( *((_DWORD *)a2 + 3) + v29 >= v142.bottom )
            {
LABEL_32:
              v137 = v27;
              if ( (_BYTE)v27 == ((~*(_BYTE *)(*(_QWORD *)v13 + 20LL) & 0x40) != 0) )
              {
                v30 = *(_QWORD *)&WPP_GLOBAL_Control;
                if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                  || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
                  || (v31 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
                {
                  v31 = 0;
                }
                v131 = v31;
                v122 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                if ( v31 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  v32 = *(_QWORD *)a1;
                  LOBYTE(v30) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                  v33 = W32GetUserSessionState(v30, v27);
                  LOBYTE(v34) = v122;
                  v35 = *(_QWORD *)(v33 + 69160);
                  v36 = "Setting";
                  if ( !v137 )
                    v36 = "Clearing";
                  WPP_RECORDER_AND_TRACE_SF_sq(
                    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                    v131,
                    v34,
                    v35,
                    4,
                    4,
                    20,
                    (__int64)&WPP_4c3561661974375d62aab8fc6250b2f0_Traceguids,
                    (__int64)v36,
                    v32);
                }
                if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                  || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
                  || (LOBYTE(v27) = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
                {
                  LOBYTE(v27) = 0;
                }
                v123 = v27;
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                  || (v37 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
                {
                  v37 = 0;
                }
                v132 = v37;
                if ( (_BYTE)v27 || v37 )
                {
                  v38 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v27);
                  LOBYTE(v39) = v132;
                  LOBYTE(v40) = v123;
                  WPP_RECORDER_AND_TRACE_SF_d(
                    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                    v40,
                    v39,
                    *(_QWORD *)(v38 + 69160),
                    5,
                    4,
                    21,
                    (__int64)&WPP_4c3561661974375d62aab8fc6250b2f0_Traceguids,
                    DpiDependentMetric);
                }
                if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                  || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
                  || (LOBYTE(v27) = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
                {
                  LOBYTE(v27) = 0;
                }
                v133 = v27;
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                  || (v41 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
                {
                  v41 = 0;
                }
                v124 = v41;
                if ( (_BYTE)v27 || v41 )
                {
                  v42 = *((_DWORD *)a2 + 3);
                  v43 = *((_DWORD *)a2 + 2);
                  v44 = *((_DWORD *)a2 + 1);
                  v45 = *(_DWORD *)a2;
                  v46 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v27);
                  LOBYTE(v47) = v124;
                  LOBYTE(v48) = v133;
                  WPP_RECORDER_AND_TRACE_SF_dddddd(
                    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                    v48,
                    v47,
                    *(_QWORD *)(v46 + 69160),
                    5,
                    4,
                    22,
                    (__int64)&WPP_4c3561661974375d62aab8fc6250b2f0_Traceguids,
                    v45,
                    v44,
                    v43 + v45,
                    v42 + v44,
                    v43,
                    v42);
                }
                if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                  || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
                  || (LOBYTE(v27) = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
                {
                  LOBYTE(v27) = 0;
                }
                v134 = v27;
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                  || (v49 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
                {
                  v49 = 0;
                }
                v125 = v49;
                if ( (_BYTE)v27 || v49 )
                {
                  v50 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v27);
                  v51 = v142.right;
                  top = v142.top;
                  LOBYTE(v51) = v134;
                  LOBYTE(top) = v125;
                  WPP_RECORDER_AND_TRACE_SF_dddddd(
                    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                    v51,
                    top,
                    *(_QWORD *)(v50 + 69160),
                    5,
                    4,
                    23,
                    (__int64)&WPP_4c3561661974375d62aab8fc6250b2f0_Traceguids,
                    v142.left,
                    v142.top,
                    v142.right,
                    v142.bottom,
                    LOBYTE(v142.right) - LOBYTE(v142.left),
                    LOBYTE(v142.bottom) - LOBYTE(v142.top));
                }
                LOBYTE(v27) = v137;
              }
              if ( !(_BYTE)v27 )
              {
                SetOrClrWF(0, a1, 0x440u, 0);
                v53 = 0LL;
                if ( a4 )
                {
                  WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1, 0LL, 0, 0);
                  v55 = *(_QWORD *)&WPP_GLOBAL_Control;
                  v56 = 0;
                  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
                  {
                    v54 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL);
                    if ( (v54 & 8) != 0 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
                      v56 = 1;
                  }
                  v126 = v56;
                  v139 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                  if ( v56 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    v57 = *(_QWORD *)a1;
                    LOBYTE(v54) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                    v58 = W32GetUserSessionState(v54, *(_QWORD *)&WPP_GLOBAL_Control);
                    LOBYTE(v59) = v139;
                    LOBYTE(v60) = v126;
                    WPP_RECORDER_AND_TRACE_SF_q(
                      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                      v60,
                      v59,
                      *(_QWORD *)(v58 + 69160),
                      4,
                      4,
                      24,
                      (__int64)&WPP_4c3561661974375d62aab8fc6250b2f0_Traceguids,
                      v57);
                  }
                  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
                    || (v61 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
                  {
                    v61 = 0;
                  }
                  v127 = v61;
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                    || (v62 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
                  {
                    v62 = 0;
                  }
                  if ( v61 || v62 )
                  {
                    v63 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v55);
                    LOBYTE(v64) = v62;
                    LOBYTE(v65) = v127;
                    WPP_RECORDER_AND_TRACE_SF_d(
                      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                      v65,
                      v64,
                      *(_QWORD *)(v63 + 69160),
                      5,
                      4,
                      25,
                      (__int64)&WPP_4c3561661974375d62aab8fc6250b2f0_Traceguids,
                      WindowBordersWithDpiAwareness);
                  }
                  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
                    || (v66 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
                  {
                    v66 = 0;
                  }
                  v128 = v66;
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                    || (v67 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
                  {
                    v67 = 0;
                  }
                  if ( v66 || v67 )
                  {
                    v68 = *((_DWORD *)a2 + 3);
                    v69 = *((_DWORD *)a2 + 2);
                    v70 = *((_DWORD *)a2 + 1);
                    v71 = *(_DWORD *)a2;
                    v72 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v55);
                    LOBYTE(v73) = v128;
                    LOBYTE(v74) = v67;
                    WPP_RECORDER_AND_TRACE_SF_dddddd(
                      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                      v73,
                      v74,
                      *(_QWORD *)(v72 + 69160),
                      5,
                      4,
                      26,
                      (__int64)&WPP_4c3561661974375d62aab8fc6250b2f0_Traceguids,
                      v71,
                      v70,
                      v71 + v69,
                      v70 + v68,
                      v69,
                      v68);
                  }
                  v75 = WindowBordersWithDpiAwareness;
                  v76 = LOBYTE(v146.left) - WindowBordersWithDpiAwareness;
                  v77 = v146.top - WindowBordersWithDpiAwareness;
                  *(_DWORD *)a2 = v146.left - WindowBordersWithDpiAwareness;
                  v141 = v77;
                  *((_DWORD *)a2 + 1) = v77;
                  v53 = (unsigned int)(2 * v75 - v146.top);
                  v144 = 2 * v75 - v146.left + v146.right;
                  *((_DWORD *)a2 + 2) = v144;
                  v143 = v53 + v146.bottom;
                  *((_DWORD *)a2 + 3) = v53 + v146.bottom;
                  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
                    || (v78 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
                  {
                    v78 = 0;
                  }
                  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                    || !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL) )
                  {
                    v10 = 0;
                  }
                  if ( v78 || v10 )
                  {
                    v79 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v53);
                    v80 = v141;
                    v81 = v144;
                    LOBYTE(v81) = v10;
                    LOBYTE(v80) = v78;
                    WPP_RECORDER_AND_TRACE_SF_dddddd(
                      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                      v80,
                      v81,
                      *(_QWORD *)(v79 + 69160),
                      5,
                      4,
                      27,
                      (__int64)&WPP_4c3561661974375d62aab8fc6250b2f0_Traceguids,
                      v76,
                      v141,
                      v76 + v144,
                      v141 + v143,
                      v144,
                      v143);
                  }
                }
                goto LABEL_174;
              }
              goto LABEL_142;
            }
          }
        }
      }
      else
      {
        v27 = *(unsigned int *)a2;
        if ( (int)v27 + DpiDependentMetric <= v142.right && (int)v27 + *((_DWORD *)a2 + 2) >= v142.right )
        {
          v28 = *((_DWORD *)a2 + 1);
          if ( v28 + DpiDependentMetric <= v142.top && *((_DWORD *)a2 + 3) + v28 >= v142.bottom )
          {
            LOBYTE(v27) = 1;
            goto LABEL_32;
          }
        }
      }
      LOBYTE(v27) = 0;
      goto LABEL_32;
    }
  }
  return v6;
}
