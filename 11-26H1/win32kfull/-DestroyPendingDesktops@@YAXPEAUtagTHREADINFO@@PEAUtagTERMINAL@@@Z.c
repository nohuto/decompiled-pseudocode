/*
 * XREFs of ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140277DD8
 * Callers:
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140057734 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     _DestroyMenu @ 0x140033000 (_DestroyMenu.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxSetThreadDesktop @ 0x1400595D4 (xxxSetThreadDesktop.c)
 *     xxxDestroyWindow @ 0x140084380 (xxxDestroyWindow.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x14014FB64 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x14015FDB4 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14017B358 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x14019AE58 (-ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z.c)
 *     RemoteDisableScreen @ 0x1401B25E8 (RemoteDisableScreen.c)
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 *     DwmAsyncShellWindowChange @ 0x14020292C (DwmAsyncShellWindowChange.c)
 *     WPP_RECORDER_AND_TRACE_SF_Sq @ 0x14020F474 (WPP_RECORDER_AND_TRACE_SF_Sq.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqS @ 0x140224E40 (WPP_RECORDER_AND_TRACE_SF_qqS.c)
 *     ?GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z @ 0x140232FE4 (-GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z.c)
 *     Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline @ 0x1402537B8 (Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline.c)
 *     UnlockDesktopSysMenu @ 0x140255520 (UnlockDesktopSysMenu.c)
 *     UnlockDesktopMenu @ 0x140255544 (UnlockDesktopMenu.c)
 *     ?xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z @ 0x14025CD50 (-xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z.c)
 */

void __fastcall DestroyPendingDesktops(struct tagTHREADINFO *a1, struct tagTERMINAL *a2)
{
  struct tagTHREADINFO *v2; // r13
  __int64 v4; // r14
  unsigned int *v5; // rdx
  __int64 *v6; // r15
  __int64 *v7; // rbx
  char v8; // di
  bool v9; // si
  const unsigned __int16 *DesktopName; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  char v22; // bl
  __int64 v23; // rdx
  bool v24; // di
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  struct MOVESIZEDATA *v28; // rcx
  char v29; // bl
  bool v30; // di
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  struct MOVESIZEDATA *v38; // rcx
  char v39; // bl
  bool v40; // di
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // rcx
  _QWORD *v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  void *v54; // rdi
  char v55; // bl
  bool v56; // si
  __int64 v57; // rax
  int v58; // r8d
  int v59; // edx
  char v60; // si
  bool v61; // r15
  const unsigned __int16 *v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  int v66; // r8d
  int v67; // edx
  struct tagTERMINAL *v68; // rdi
  void *v69; // rsi
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 j; // rbx
  __int64 v73; // rbx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // r13
  void *v77; // rdx
  __int64 v78; // r15
  __int64 v79; // rdx
  struct _HEAD *v80; // rcx
  __int64 v81; // rdx
  struct _HEAD *v82; // rcx
  __int64 v83; // rdx
  struct _HEAD *v84; // rcx
  __int64 v85; // rdx
  struct _HEAD *v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 **v90; // rax
  __int64 v91; // rbx
  void *v92; // rax
  __int64 v93; // rcx
  _QWORD *v94; // rcx
  _QWORD *v95; // rcx
  struct tagWND *v96; // rbx
  struct MOVESIZEDATA *v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 k; // rax
  struct tagTERMINAL *v101; // r12
  char v102; // di
  bool v103; // si
  __int64 v104; // rbx
  __int64 v105; // rax
  int v106; // r8d
  int v107; // edx
  char v108; // r15
  char v109; // r12
  const unsigned __int16 *v110; // rax
  __int64 v111; // rdi
  const char *v112; // rbx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // rax
  __int64 v116; // rbx
  struct tagWND *v117; // rbx
  char v118; // bl
  bool v119; // di
  __int64 v120; // rax
  int v121; // r8d
  int v122; // edx
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rcx
  char v126; // bl
  bool v127; // di
  __int64 v128; // rax
  int v129; // r8d
  int v130; // edx
  struct MOVESIZEDATA *v131; // rcx
  char v132; // bl
  bool v133; // di
  __int64 v134; // rax
  int v135; // r8d
  int v136; // edx
  __int64 v137; // rax
  int v138; // [rsp+20h] [rbp-E0h]
  int v139; // [rsp+28h] [rbp-D8h]
  int v140; // [rsp+30h] [rbp-D0h]
  int v141; // [rsp+38h] [rbp-C8h]
  __int64 v142[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _HEAD *v143; // [rsp+70h] [rbp-90h]
  char *v144; // [rsp+78h] [rbp-88h]
  __int64 v145; // [rsp+80h] [rbp-80h]
  _QWORD v146[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v147; // [rsp+98h] [rbp-68h]
  _QWORD v148[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v149; // [rsp+B0h] [rbp-50h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v151[3]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v152[12]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v155; // [rsp+160h] [rbp+60h]
  __int64 *i; // [rsp+168h] [rbp+68h]

  v2 = a1;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v142);
  v4 = *((_QWORD *)a2 + 6);
  v5 = &WPP_RECORDER_INITIALIZED;
  v144 = (char *)a2 + 48;
  if ( v4 )
  {
    v6 = (__int64 *)((char *)v2 + 488);
    v7 = (__int64 *)((char *)v2 + 488);
    v155 = (__int64 *)((char *)v2 + 488);
    for ( i = (__int64 *)((char *)v2 + 488); ; v7 = i )
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
        || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v8 = 0;
      }
      v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        DesktopName = GetDesktopName((PVOID)v4, (__int64)&WPP_RECORDER_INITIALIZED);
        UserSessionState = W32GetUserSessionState(v12, v11);
        LOBYTE(v14) = v9;
        LOBYTE(v15) = v8;
        WPP_RECORDER_AND_TRACE_SF_Sq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v15,
          v14,
          *(_QWORD *)(UserSessionState + 69152),
          v138,
          v139,
          11,
          v141,
          (__int64)DesktopName,
          v4);
        v7 = i;
      }
      Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v152, (void *)v4);
      v16 = *(_QWORD *)(v4 + 40);
      Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v148, (void *)v16);
      LockObjectAssignment(v144, *(_QWORD *)(v4 + 32));
      DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD *)(v4 + 32), v17);
      if ( v4 == *(_QWORD *)(W32GetUserSessionState(v19, v18) + 19176) )
        break;
      v6 = v7;
      v155 = v7;
      if ( v4 != *v7 )
        goto LABEL_61;
      LOBYTE(v69) = 0;
      v73 = 0LL;
      v68 = a2;
      v74 = *(_QWORD *)(W32GetUserSessionState(v21, v20) + 63512);
      if ( v74 )
      {
        while ( (*(_DWORD *)(v74 + 32) & 0x10) != 0
             || *(struct tagTERMINAL **)(v74 + 24) != a2
             || !*(_QWORD *)(v74 + 16) )
        {
          v74 = *(_QWORD *)(v74 + 8);
          if ( !v74 )
            goto LABEL_74;
        }
        v73 = *(_QWORD *)(v74 + 16);
        do
        {
          if ( v73 != v4 )
            break;
          v73 = *(_QWORD *)(v73 + 32);
        }
        while ( v73 );
      }
LABEL_74:
      xxxSetThreadDesktop(0LL, v73);
      v6 = i;
      v155 = i;
LABEL_62:
      if ( v4 == *(_QWORD *)(W32GetUserSessionState(v21, v20) + 19184) )
      {
        for ( j = *(_QWORD *)(v16 + 16);
              j
           && (j == *(_QWORD *)(W32GetUserSessionState(v71, v70) + 62968)
            || j == *(_QWORD *)(W32GetUserSessionState(v71, v70) + 62976));
              j = *(_QWORD *)(j + 32) )
        {
          ;
        }
        v75 = W32GetUserSessionState(v71, v70);
        LockObjectAssignment(v75 + 19184, j);
      }
      if ( (*(_DWORD *)v68 & 2) == 0 )
        W32GetUserSessionState(v71, v70);
      v76 = *v6;
      v77 = (void *)*v6;
      v78 = *((_QWORD *)a1 + 78);
      v145 = v78;
      Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v146, v77);
      xxxSetThreadDesktop(0LL, v4);
      tagUNIQUE_WINDOW_HANDLE::Clear((tagUNIQUE_WINDOW_HANDLE *)(v4 + 88));
      HMAssignmentUnlock(v4 + 192);
      *(_DWORD *)(v4 + 48) &= 0xFFFFFC3F;
      v79 = *(_QWORD *)(v4 + 56);
      if ( v79 )
      {
        v143 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=((__int64)v142, v79);
        if ( UnlockDesktopSysMenu(v4 + 56) )
        {
          v80 = v143;
          if ( !v143 )
            v80 = *(struct _HEAD **)v142[0];
          DestroyMenu(v80);
        }
      }
      v81 = *(_QWORD *)(v4 + 64);
      if ( v81 )
      {
        v143 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=((__int64)v142, v81);
        if ( UnlockDesktopSysMenu(v4 + 64) )
        {
          v82 = v143;
          if ( !v143 )
            v82 = *(struct _HEAD **)v142[0];
          DestroyMenu(v82);
        }
      }
      v83 = *(_QWORD *)(v4 + 72);
      if ( v83 )
      {
        v143 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=((__int64)v142, v83);
        if ( UnlockDesktopMenu(v4 + 72) )
        {
          v84 = v143;
          if ( !v143 )
            v84 = *(struct _HEAD **)v142[0];
          DestroyMenu(v84);
        }
      }
      v85 = *(_QWORD *)(v4 + 80);
      if ( v85 )
      {
        v143 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=((__int64)v142, v85);
        if ( UnlockDesktopMenu(v4 + 80) )
        {
          v86 = v143;
          if ( !v143 )
            v86 = *(struct _HEAD **)v142[0];
          DestroyMenu(v86);
        }
      }
      v87 = *(_QWORD *)(v4 + 8);
      if ( v87 )
      {
        v88 = *(_QWORD *)(v87 + 168);
        if ( v88 )
        {
          if ( (unsigned int)IsWindowDesktopComposed(v88) )
          {
            v90 = *(__int64 ***)(v4 + 8);
            v91 = **v90;
            v92 = (void *)ReferenceDwmApiPort(*v90, v89);
            DwmAsyncShellWindowChange(v92, 0LL, v91);
          }
          v93 = *(_QWORD *)(v4 + 8) + 168LL;
          *(_QWORD *)(**(_QWORD **)(v4 + 8) + 24LL) = 0LL;
          HMAssignmentUnlock(v93);
        }
        v94 = (_QWORD *)(*(_QWORD *)(v4 + 8) + 184LL);
        if ( *v94 )
        {
          *(_QWORD *)(**(_QWORD **)(v4 + 8) + 32LL) = 0LL;
          HMAssignmentUnlock(v94);
        }
        v95 = (_QWORD *)(*(_QWORD *)(v4 + 8) + 192LL);
        if ( *v95 )
        {
          *(_QWORD *)(**(_QWORD **)(v4 + 8) + 40LL) = 0LL;
          HMAssignmentUnlock(v95);
        }
      }
      v96 = *(struct tagWND **)(v4 + 112);
      if ( v96 && HMAssignmentUnlock(v4 + 112) )
        xxxDestroyWindow(v96);
      v97 = *(struct MOVESIZEDATA **)(v4 + 264);
      if ( v97 )
      {
        CMonitorTopology::Release(v97);
        *(_QWORD *)(v4 + 264) = 0LL;
      }
      v98 = *((_QWORD *)v68 + 1);
      if ( !v98 || *(_QWORD *)(v98 + 24) != v4 )
      {
        v101 = a2;
        goto LABEL_144;
      }
      if ( (*(_DWORD *)v68 & 2) != 0 )
      {
        if ( *(_QWORD *)(W32GetUserSessionState(v97, v85) + 63512) )
        {
          v97 = *(struct MOVESIZEDATA **)(W32GetUserSessionState(v97, v99) + 63512);
          for ( k = *((_QWORD *)v97 + 1); k; k = *(_QWORD *)(k + 8) )
          {
            v69 = *(void **)(k + 16);
            v99 = 0LL;
            if ( v69 )
              goto LABEL_135;
          }
        }
LABEL_126:
        v101 = a2;
        if ( a2 == (struct tagTERMINAL *)(W32GetUserSessionState(v97, v99) + 68456) )
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
            || (v102 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v102 = (char)v69;
          }
          v103 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v102 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v104 = *((_QWORD *)a2 + 1);
            v105 = W32GetUserSessionState(WPP_GLOBAL_Control, v85);
            LOBYTE(v106) = v103;
            LOBYTE(v107) = v102;
            WPP_RECORDER_AND_TRACE_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v107,
              v106,
              *(_QWORD *)(v105 + 69152),
              4,
              8,
              17,
              (__int64)&WPP_a33b1e5f7b3e3e982b3dd7cd6c940086_Traceguids,
              v104);
          }
          xxxCleanupMotherDesktopWindow(a2);
        }
        goto LABEL_144;
      }
      v69 = *(void **)(v16 + 16);
      v99 = 0LL;
      if ( !v69 )
        goto LABEL_126;
LABEL_135:
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
        || (v108 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v108 = 0;
      }
      v109 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v108 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v110 = GetDesktopName(v69, 0LL);
        v111 = *((_QWORD *)v68 + 1);
        v112 = (const char *)v110;
        v115 = W32GetUserSessionState(v114, v113);
        WPP_RECORDER_AND_TRACE_SF_qqS(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v108,
          v109,
          *(_QWORD *)(v115 + 69152),
          v138,
          v139,
          v140,
          v141,
          v111,
          (char)v69,
          v112);
      }
      v101 = a2;
      LockObjectAssignment(*((_QWORD *)a2 + 1) + 24LL, v69);
      v78 = v145;
LABEL_144:
      v116 = *(_QWORD *)(v4 + 8);
      if ( v116 )
      {
        v117 = *(struct tagWND **)(v116 + 24);
        if ( v117 )
        {
          LOBYTE(v85) = *(_BYTE *)(*((_QWORD *)v117 + 5) + 31LL);
          if ( (v85 & 0x10) != 0 )
          {
            Win32HM_LockIntoThread<0>((__int64)a1, (__int64)v117, BugCheckParameter3);
            xxxSetWindowPos(v117, 0LL, 0LL, 0LL, 0, 0, 1183);
            Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
          }
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
            || (v118 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v118 = 0;
          }
          v119 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v118 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v120 = W32GetUserSessionState(WPP_GLOBAL_Control, v85);
            LOBYTE(v121) = v119;
            LOBYTE(v122) = v118;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v122,
              v121,
              *(_QWORD *)(v120 + 69152),
              4,
              8,
              19,
              (__int64)&WPP_a33b1e5f7b3e3e982b3dd7cd6c940086_Traceguids);
          }
          xxxDestroyWindow(*(struct tagWND **)(*(_QWORD *)(v4 + 8) + 24LL));
          if ( v4 == *(_QWORD *)(W32GetUserSessionState(v124, v123) + 19176) )
          {
            if ( !(unsigned int)Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline() )
              *(_DWORD *)(v4 + 48) |= 1u;
            v97 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
              || (v126 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v126 = 0;
            }
            v127 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v126 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v128 = W32GetUserSessionState(WPP_GLOBAL_Control, v85);
              LOBYTE(v129) = v127;
              LOBYTE(v130) = v126;
              WPP_RECORDER_AND_TRACE_SF_q(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v130,
                v129,
                *(_QWORD *)(v128 + 69152),
                4,
                8,
                20,
                (__int64)&WPP_a33b1e5f7b3e3e982b3dd7cd6c940086_Traceguids,
                v4);
            }
          }
          else
          {
            v125 = *(_QWORD *)(v4 + 8) + 24LL;
            *(_QWORD *)(**(_QWORD **)(v4 + 8) + 8LL) = 0LL;
            HMAssignmentUnlock(v125);
          }
          *(_DWORD *)(v4 + 48) |= 2u;
        }
      }
      if ( (*(_DWORD *)v101 & 2) == 0 || !v76 || (*(_DWORD *)(v76 + 48) & 6) == 0 )
        xxxSetThreadDesktop(v78, v76);
      if ( (*(_DWORD *)v101 & 2) == 0 )
        W32GetUserSessionState(v97, v85);
      if ( v147 != -1 )
      {
        PopAndFreeW32ThreadLock((__int64)v146);
        v147 = -1LL;
      }
      if ( v149 != -1 )
      {
        PopAndFreeW32ThreadLock((__int64)v148);
        v149 = -1LL;
      }
      if ( v152[2] != -1LL )
        PopAndFreeW32ThreadLock((__int64)v152);
      v4 = *((_QWORD *)v101 + 6);
      v5 = &WPP_RECORDER_INITIALIZED;
      if ( !v4 )
        goto LABEL_181;
      v6 = v155;
      v2 = a1;
    }
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v23 = 0LL;
      v22 = 0;
    }
    else
    {
      v22 = 1;
      v23 = 0LL;
    }
    v24 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v22 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v25 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
      LOBYTE(v26) = v24;
      LOBYTE(v27) = v22;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v27,
        v26,
        *(_QWORD *)(v25 + 69152),
        4,
        8,
        12,
        (__int64)&WPP_a33b1e5f7b3e3e982b3dd7cd6c940086_Traceguids);
      v23 = 0LL;
    }
    if ( (*(_DWORD *)(v16 + 32) & 1) != 0 )
    {
      v28 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
        || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v29 = 0;
      }
      v30 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v29 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v31 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
        LOBYTE(v32) = v30;
        LOBYTE(v33) = v29;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v33,
          v32,
          *(_QWORD *)(v31 + 69152),
          4,
          8,
          13,
          (__int64)&WPP_a33b1e5f7b3e3e982b3dd7cd6c940086_Traceguids);
      }
      if ( *(_QWORD *)(W32GetUserSessionState(v28, v23) + 62976) )
      {
        if ( v4 == *(_QWORD *)(W32GetUserSessionState(v35, v34) + 62968)
          || !*(_QWORD *)(W32GetUserSessionState(v36, v34) + 62968)
          || (v35 = *(_QWORD *)(W32GetUserSessionState(v37, v34) + 62968), (*(_DWORD *)(v35 + 48) & 2) != 0) )
        {
          v38 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
            || (v39 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v39 = 0;
          }
          v40 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v39 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v41 = W32GetUserSessionState(WPP_GLOBAL_Control, v34);
            LOBYTE(v42) = v40;
            LOBYTE(v43) = v39;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v43,
              v42,
              *(_QWORD *)(v41 + 69152),
              4,
              8,
              14,
              (__int64)&WPP_a33b1e5f7b3e3e982b3dd7cd6c940086_Traceguids);
          }
          v44 = W32GetUserSessionState(v38, v34);
          v47 = W32GetUserSessionState(v46, v45);
          v50 = *(_QWORD **)(W32GetUserSessionState(v49, v48) + 62976);
          v53 = W32GetUserSessionState(v52, v51);
          RemoteDisableScreen(*(_QWORD **)(v53 + 19176), v50, v47 + 19184, (_DWORD *)(v44 + 62824));
LABEL_61:
          v68 = a2;
          LOBYTE(v69) = 0;
          goto LABEL_62;
        }
      }
      v54 = *(void **)(W32GetUserSessionState(v35, v34) + 62968);
    }
    else
    {
      v54 = *(void **)(v16 + 16);
      if ( v54 == (void *)v4 )
        v54 = *(void **)(v4 + 32);
      if ( !v54 )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
          || (v55 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v55 = 0;
        }
        v56 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v55 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v57 = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
          LOBYTE(v58) = v56;
          LOBYTE(v59) = v55;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v59,
            v58,
            *(_QWORD *)(v57 + 69152),
            4,
            8,
            15,
            (__int64)&WPP_a33b1e5f7b3e3e982b3dd7cd6c940086_Traceguids);
        }
        ClearWakeBit(v2, 15367, 0);
      }
    }
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
      || (v60 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v60 = 0;
    }
    v61 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v60 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v62 = GetDesktopName(v54, 0LL);
      v65 = W32GetUserSessionState(v64, v63);
      LOBYTE(v66) = v61;
      LOBYTE(v67) = v60;
      WPP_RECORDER_AND_TRACE_SF_Sq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v67,
        v66,
        *(_QWORD *)(v65 + 69152),
        v138,
        v139,
        16,
        v141,
        (__int64)v62,
        (char)v54);
    }
    Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v151, v54);
    xxxSwitchDesktop(v16, (__int64)v54, 0, 0);
    if ( v151[2] != -1LL )
      PopAndFreeW32ThreadLock((__int64)v151);
    v6 = v155;
    goto LABEL_61;
  }
LABEL_181:
  v131 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
    || (v132 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v132 = 0;
  }
  v133 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v132 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v134 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v135) = v133;
    LOBYTE(v136) = v132;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v136,
      v135,
      *(_QWORD *)(v134 + 69152),
      4,
      8,
      21,
      (__int64)&WPP_a33b1e5f7b3e3e982b3dd7cd6c940086_Traceguids);
  }
  v137 = W32GetUserSessionState(v131, v5);
  KeSetEvent(*(PRKEVENT *)(v137 + 62936), 1, 0);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v142);
}
