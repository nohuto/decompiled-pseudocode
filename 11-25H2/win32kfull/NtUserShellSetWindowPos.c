/*
 * XREFs of NtUserShellSetWindowPos @ 0x1402A1990
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x1400262EC (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x14014BC9C (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ValidateHwndIAM @ 0x14015C6C4 (ValidateHwndIAM.c)
 *     IAMThreadAccessGranted @ 0x14015C7E0 (IAMThreadAccessGranted.c)
 *     ?IsGhostWindowClass@@YA_NPEBUtagWND@@@Z @ 0x14016C5AC (-IsGhostWindowClass@@YA_NPEBUtagWND@@@Z.c)
 *     ?RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z @ 0x14018D9E0 (-RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1402720AC (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdqd @ 0x1402A4A0C (WPP_RECORDER_AND_TRACE_SF_qdqd.c)
 *     ?PositionWindowAsyncOld@ShellWindowPos@@YA?AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__@@AEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1402C1D24 (-PositionWindowAsyncOld@ShellWindowPos@@YA-AW4PositionWindowAsyncResult@1@PEAUtagWND@@PEAUHWND__.c)
 *     ?ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDOWPOS_STATE@@W4_SHELLSETWINDOWPOS_OPTIONS@@K@Z @ 0x1402C26F0 (-ShellSetWindowPosAsync@ShellWindowPos@@YAXPEAUtagWND@@PEAUHWND__@@PEBUtagRECT@@W4_SHELLSETWINDO.c)
 *     ?ReserveSystemOperationDataSlot@WindowActions@@YA_NPEAUtagWND@@@Z @ 0x1402CBF04 (-ReserveSystemOperationDataSlot@WindowActions@@YA_NPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserShellSetWindowPos(__int64 a1, __int64 a2, __int128 *a3, unsigned int a4, int a5, int a6)
{
  char v10; // di
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ebx
  bool v18; // si
  __int64 v19; // rax
  int v20; // edx
  int v21; // r8d
  int v22; // ecx
  bool v23; // si
  int v24; // edx
  int v25; // r8d
  __int64 v26; // r9
  bool v27; // si
  __int64 UserSessionState; // rax
  int v29; // r8d
  int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r13
  bool v35; // si
  __int64 v36; // rax
  int v37; // edx
  int v38; // r8d
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rax
  bool v47; // si
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  bool v51; // si
  __int64 v52; // rax
  int v53; // r8d
  int v54; // edx
  __int64 v55; // rdx
  bool v56; // si
  __int64 v57; // rax
  int v58; // edx
  int v59; // r8d
  struct tagWND *v60; // rdx
  __int64 v61; // rdx
  int v62; // eax
  bool v63; // si
  __int64 v64; // rax
  int v65; // edx
  int v66; // r8d
  char v67; // r12
  char v68; // r12
  __int64 v69; // rax
  int v70; // edx
  int v71; // r8d
  __int64 v72; // rdx
  bool v73; // si
  __int64 v74; // rax
  int v75; // r8d
  int v76; // edx
  __int64 v77; // rdx
  int v78; // eax
  __int64 v79; // rcx
  __int16 v81; // [rsp+30h] [rbp-C8h]
  __int16 v82; // [rsp+30h] [rbp-C8h]
  __int16 v83; // [rsp+30h] [rbp-C8h]
  __int16 v84; // [rsp+30h] [rbp-C8h]
  __int16 v85; // [rsp+30h] [rbp-C8h]
  __int16 v86; // [rsp+30h] [rbp-C8h]
  char v87; // [rsp+40h] [rbp-B8h]
  char v88; // [rsp+40h] [rbp-B8h]
  char v89; // [rsp+40h] [rbp-B8h]
  char v90; // [rsp+60h] [rbp-98h]
  bool v91; // [rsp+61h] [rbp-97h]
  unsigned int v92; // [rsp+64h] [rbp-94h]
  _BYTE v94[16]; // [rsp+90h] [rbp-68h] BYREF
  __int128 v95; // [rsp+A0h] [rbp-58h] BYREF

  v92 = a4;
  v10 = 1;
  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v94);
  v95 = 0LL;
  v13 = PtiCurrent(v12, v11);
  LOBYTE(v14) = IAMThreadAccessGranted(v13);
  v17 = 0;
  if ( v14 )
  {
    if ( (a5 & 0xFFFFFFC0) != 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v10 = 0;
      }
      v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v26 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v15) + 69160);
      v87 = a5;
      v82 = 61;
      goto LABEL_20;
    }
    if ( a4 > 3 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v10 = 0;
      }
      v27 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v15);
        LOBYTE(v29) = v27;
        LOBYTE(v30) = v10;
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v30,
          v29,
          *(_QWORD *)(UserSessionState + 69160),
          3,
          4,
          62,
          (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids,
          a4);
      }
      goto LABEL_21;
    }
    if ( (W32GetCurrentThreadDpiAwarenessContext(v16) & 0xF) != 2 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v10 = 0;
      }
      v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_10;
      v19 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v31);
      v81 = 63;
      goto LABEL_9;
    }
    v32 = ValidateHwndIAM(a1, v31);
    v34 = v32;
    if ( !v32 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v10 = 0;
      }
      v35 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v36 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v33);
      v88 = a1;
      v83 = 64;
      goto LABEL_46;
    }
    if ( !IsTopLevelWindow(v32) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v10 = 0;
      }
      v35 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v36 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v39);
      v88 = a1;
      v83 = 65;
      goto LABEL_46;
    }
    if ( *(struct tagTHREADINFO **)(v34 + 16) == PtiCurrent(v40, v39) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v10 = 0;
      }
      v35 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v36 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v41);
      v88 = a1;
      v83 = 66;
      goto LABEL_46;
    }
    if ( a2 )
    {
      v42 = ValidateHwndIAM(a2, v41);
      if ( !v42 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
        {
          v10 = 0;
        }
        v35 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_21;
        v36 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v43);
        v88 = a2;
        v83 = 67;
LABEL_46:
        LOBYTE(v38) = v35;
        LOBYTE(v37) = v10;
        WPP_RECORDER_AND_TRACE_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v37,
          v38,
          *(_QWORD *)(v36 + 69160),
          3,
          4,
          v83,
          (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids,
          v88);
        goto LABEL_21;
      }
      v44 = *(_QWORD *)(v42 + 40);
      v45 = *(unsigned int *)(v44 + 236);
      v46 = *(_QWORD *)(v34 + 40);
      if ( *(_DWORD *)(v46 + 236) != (_DWORD)v45 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
        {
          v10 = 0;
        }
        v47 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v48 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v45);
          LOBYTE(v49) = v47;
          LOBYTE(v50) = v10;
          WPP_RECORDER_AND_TRACE_SF_qdqd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v50,
            v49,
            *(_QWORD *)(v48 + 69160));
        }
        goto LABEL_10;
      }
      if ( ((*(_BYTE *)(v44 + 24) ^ *(_BYTE *)(v46 + 24)) & 8) != 0 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
        {
          v10 = 0;
        }
        v51 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v52 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v45);
          LOBYTE(v53) = v51;
          LOBYTE(v54) = v10;
          WPP_RECORDER_AND_TRACE_SF_qdqd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v54,
            v53,
            *(_QWORD *)(v52 + 69160));
        }
        goto LABEL_21;
      }
    }
    if ( IsHungWindow((const struct tagTHREADINFO **)v34) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v10 = 0;
      }
      v56 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_97;
      v57 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v55);
      v89 = a1;
      v84 = 70;
LABEL_96:
      LOBYTE(v59) = v56;
      LOBYTE(v58) = v10;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v58,
        v59,
        *(_QWORD *)(v57 + 69160),
        3,
        4,
        v84,
        (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids,
        v89);
LABEL_97:
      v22 = 5023;
      goto LABEL_11;
    }
    if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline()
      && (*(_DWORD *)(v34 + 384) & 0x10) != 0
      && !WindowActions::ReserveSystemOperationDataSlot((WindowActions *)v34, v60) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v10 = 0;
      }
      v56 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_97;
      v57 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v60);
      v89 = a1;
      v84 = 71;
      goto LABEL_96;
    }
    if ( IsGhostWindowClass((const struct tagWND *)v34, (__int64)v60) )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v10 = 0;
      }
      v56 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_97;
      v57 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v61);
      v89 = a1;
      v84 = 72;
      goto LABEL_96;
    }
    v62 = a5 & 0x10;
    if ( (a5 & 0x10) != 0 && a2 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v10 = 0;
      }
      v63 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v64 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v61);
      v85 = 73;
      goto LABEL_125;
    }
    v67 = 0;
    v90 = 0;
    if ( a3 )
    {
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (__int128 *)MmUserProbeAddress;
      v95 = *a3;
      v67 = 1;
      v90 = 1;
      v62 = a5 & 0x10;
    }
    if ( v67 )
      goto LABEL_161;
    if ( (a5 & 0xC) != 0 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
      {
        v10 = 0;
      }
      v23 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_21;
      v26 = *(_QWORD *)(W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v61) + 69160);
      v87 = a5;
      v82 = 75;
LABEL_20:
      LOBYTE(v25) = v23;
      LOBYTE(v24) = v10;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v24,
        v25,
        v26,
        3,
        4,
        v82,
        (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids,
        v87);
LABEL_21:
      v22 = 87;
      goto LABEL_11;
    }
    if ( v92 != 3 )
    {
LABEL_161:
      if ( (unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( (a5 & 0x10) != 0 && !RunForegroundAccessCheck(v34, 3LL) )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
            || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
          {
            v10 = 0;
          }
          v73 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v10 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v74 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v72);
            LOBYTE(v75) = v73;
            LOBYTE(v76) = v10;
            WPP_RECORDER_AND_TRACE_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v76,
              v75,
              *(_QWORD *)(v74 + 69160),
              3,
              4,
              80,
              (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids);
          }
          goto LABEL_97;
        }
        ShellWindowPos::ShellSetWindowPosAsync(v34, a2, (unsigned __int64)&v95 & -(__int64)(v67 != 0), v92, a5, a6);
      }
      else
      {
        v78 = ShellWindowPos::PositionWindowAsyncOld(v34, a2, &v95, v92, a5, a6) - 2;
        if ( !v78 )
        {
          v22 = 14;
          goto LABEL_11;
        }
        if ( v78 == 1 )
          goto LABEL_97;
      }
      v17 = 1;
      goto LABEL_192;
    }
    if ( v62 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v68 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v68 = 0;
      }
      v91 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v68 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_158;
      v69 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v61);
      v86 = 76;
    }
    else
    {
      if ( !a2 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
        {
          v10 = 0;
        }
        v63 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_21;
        v64 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v61);
        v85 = 78;
        goto LABEL_125;
      }
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
        || (v68 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v68 = 0;
      }
      v91 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( !v68 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      {
LABEL_158:
        if ( (*(_BYTE *)(*(_QWORD *)(v34 + 40) + 31LL) & 0x20) != 0 )
        {
          v92 = 0;
LABEL_160:
          v67 = v90;
          goto LABEL_161;
        }
        if ( IsArranged((const struct tagWND *)v34) )
          goto LABEL_160;
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
          || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
        {
          v10 = 0;
        }
        v63 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_21;
        v64 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v77);
        v85 = 79;
LABEL_125:
        LOBYTE(v66) = v63;
        LOBYTE(v65) = v10;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v65,
          v66,
          *(_QWORD *)(v64 + 69160),
          3,
          4,
          v85,
          (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids);
        goto LABEL_21;
      }
      v69 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v61);
      v86 = 77;
    }
    LOBYTE(v71) = v91;
    LOBYTE(v70) = v68;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v70,
      v71,
      *(_QWORD *)(v69 + 69160),
      4,
      4,
      v86,
      (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids);
    goto LABEL_158;
  }
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
  {
    v10 = 0;
  }
  v18 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( !v10 && *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    goto LABEL_10;
  v19 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v15);
  v81 = 60;
LABEL_9:
  LOBYTE(v21) = v18;
  LOBYTE(v20) = v10;
  WPP_RECORDER_AND_TRACE_SF_(
    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
    v20,
    v21,
    *(_QWORD *)(v19 + 69160),
    3,
    4,
    v81,
    (__int64)&WPP_212fca24ed3e3073058b582086d1855d_Traceguids);
LABEL_10:
  v22 = 5;
LABEL_11:
  UserSetLastError(v22);
LABEL_192:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v94);
  UserSessionSwitchLeaveCrit(v79);
  return v17;
}
