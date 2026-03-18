/*
 * XREFs of ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140242AFC
 * Callers:
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140114EA8 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?Release@CMonitorTopology@@QEAAXXZ @ 0x1400229F8 (-Release@CMonitorTopology@@QEAAXXZ.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14002C0F0 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     _DestroyMenu @ 0x140047890 (_DestroyMenu.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400B30B8 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400D9978 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     xxxSetThreadDesktop @ 0x14011499C (xxxSetThreadDesktop.c)
 *     ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x14016C0FC (-ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z.c)
 *     DwmAsyncShellWindowChange @ 0x14017346C (DwmAsyncShellWindowChange.c)
 *     xxxDestroyWindow @ 0x14017EBE0 (xxxDestroyWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_Sq @ 0x1401E5014 (WPP_RECORDER_AND_TRACE_SF_Sq.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqS @ 0x1401EF9D8 (WPP_RECORDER_AND_TRACE_SF_qqS.c)
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 *     ?GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z @ 0x140202C0C (-GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z.c)
 *     ?xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z @ 0x140222B10 (-xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z.c)
 *     RemoteDisableScreen @ 0x14022C670 (RemoteDisableScreen.c)
 *     Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline @ 0x140273F20 (Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline.c)
 *     UnlockDesktopSysMenu @ 0x140285BD8 (UnlockDesktopSysMenu.c)
 *     Feature_ForegroundOnDesktopSwitchEx__private_IsEnabledDeviceUsageNoInline @ 0x140288658 (Feature_ForegroundOnDesktopSwitchEx__private_IsEnabledDeviceUsageNoInline.c)
 *     UnlockDesktopMenu @ 0x1402CA34C (UnlockDesktopMenu.c)
 */

void __fastcall DestroyPendingDesktops(struct tagTHREADINFO *a1, struct tagTERMINAL *a2)
{
  struct tagTHREADINFO *v2; // r15
  __int64 *v4; // r13
  unsigned int *v5; // rdx
  __int64 v6; // r14
  char v7; // di
  bool v8; // si
  const unsigned __int16 *DesktopName; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  bool v20; // bl
  unsigned int *v21; // rdx
  bool v22; // di
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  __int64 v26; // rcx
  char v27; // bl
  bool v28; // di
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  char v37; // bl
  bool v38; // di
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rcx
  _QWORD *v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  void *v52; // rdi
  char v53; // bl
  bool v54; // si
  __int64 v55; // rax
  int v56; // r8d
  int v57; // edx
  char v58; // si
  bool v59; // r15
  const unsigned __int16 *v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  int v64; // r8d
  int v65; // edx
  struct tagTERMINAL *v66; // rdi
  void *v67; // rsi
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 i; // rbx
  __int64 v71; // rbx
  __int64 v72; // rcx
  __int64 v73; // rax
  _DWORD *v74; // r13
  __int64 v75; // r15
  __int64 v76; // rdx
  struct _HEAD *v77; // rcx
  __int64 v78; // rdx
  struct _HEAD *v79; // rcx
  __int64 v80; // rdx
  struct _HEAD *v81; // rcx
  __int64 v82; // rdx
  struct _HEAD *v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 **v87; // rax
  __int64 v88; // rbx
  void *v89; // rax
  __int64 v90; // rax
  _QWORD *v91; // rax
  _QWORD *v92; // rax
  struct tagWND *v93; // rbx
  CMonitorTopology *v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 j; // rax
  struct tagTERMINAL *v98; // r12
  char v99; // di
  bool v100; // si
  __int64 v101; // rbx
  __int64 v102; // rax
  int v103; // r8d
  int v104; // edx
  char v105; // r15
  bool v106; // r12
  const unsigned __int16 *v107; // rax
  __int64 v108; // rdi
  __int64 v109; // rbx
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rax
  int v113; // r8d
  int v114; // edx
  __int64 v115; // rbx
  struct tagWND *v116; // rbx
  __int64 v117; // rdx
  char v118; // bl
  bool v119; // di
  __int64 v120; // rax
  int v121; // r8d
  int v122; // edx
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rax
  char v126; // bl
  bool v127; // di
  __int64 v128; // rax
  int v129; // r8d
  int v130; // edx
  __int64 v131; // rcx
  char v132; // bl
  bool v133; // di
  __int64 v134; // rax
  int v135; // r8d
  int v136; // edx
  __int64 v137; // rax
  __int64 v138; // rdx
  int v139; // [rsp+28h] [rbp-A9h]
  int v140; // [rsp+30h] [rbp-A1h]
  int v141; // [rsp+38h] [rbp-99h]
  int v142; // [rsp+40h] [rbp-91h]
  __int64 v143[2]; // [rsp+68h] [rbp-69h] BYREF
  struct _HEAD *v144; // [rsp+78h] [rbp-59h]
  _QWORD v145[2]; // [rsp+80h] [rbp-51h] BYREF
  __int64 v146; // [rsp+90h] [rbp-41h]
  _QWORD v147[2]; // [rsp+98h] [rbp-39h] BYREF
  __int64 v148; // [rsp+A8h] [rbp-29h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+B0h] [rbp-21h] BYREF
  _QWORD v150[3]; // [rsp+C0h] [rbp-11h] BYREF
  _QWORD v151[10]; // [rsp+D8h] [rbp+7h] BYREF
  __int64 v154; // [rsp+148h] [rbp+77h]

  v2 = a1;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v143, (__int64)a2);
  v4 = (__int64 *)((char *)a2 + 48);
  v5 = &WPP_RECORDER_INITIALIZED;
  v6 = *v4;
  if ( *v4 )
  {
    while ( 1 )
    {
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
        || (v7 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v7 = 0;
      }
      v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        DesktopName = GetDesktopName((PVOID)v6, (__int64)&WPP_RECORDER_INITIALIZED);
        UserSessionState = W32GetUserSessionState(v11, v10);
        LOBYTE(v13) = v8;
        LOBYTE(v14) = v7;
        WPP_RECORDER_AND_TRACE_SF_Sq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v14,
          v13,
          *(_QWORD *)(UserSessionState + 69160),
          v139,
          v140,
          11,
          v142,
          (__int64)DesktopName,
          v6);
      }
      Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v151, (void *)v6);
      v15 = *(_QWORD *)(v6 + 40);
      Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v147, (void *)v15);
      LockObjectAssignment(v4, *(_QWORD *)(v6 + 32));
      DeferrableUnlockObjectAssignment<tagDESKTOP>((_QWORD **)(v6 + 32));
      if ( v6 == *(_QWORD *)(W32GetUserSessionState(v17, v16) + 19144) )
        break;
      if ( v6 != *((_QWORD *)v2 + 62) )
        goto LABEL_60;
      LOBYTE(v67) = 0;
      v71 = 0LL;
      v66 = a2;
      v72 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 63520);
      if ( v72 )
      {
        while ( (*(_DWORD *)(v72 + 64) & 0x10) != 0
             || *(struct tagTERMINAL **)(v72 + 56) != a2
             || !*(_QWORD *)(v72 + 16) )
        {
          v72 = *(_QWORD *)(v72 + 8);
          if ( !v72 )
            goto LABEL_75;
        }
        v71 = *(_QWORD *)(v72 + 16);
        while ( v71 == v6 )
        {
          v71 = *(_QWORD *)(v71 + 32);
          if ( !v71 )
          {
            if ( !v6 )
              v71 = 0LL;
            break;
          }
        }
      }
LABEL_75:
      xxxSetThreadDesktop(0LL, v71);
LABEL_61:
      if ( v6 == *(_QWORD *)(W32GetUserSessionState(v19, v18) + 19152) )
      {
        for ( i = *(_QWORD *)(v15 + 16);
              i
           && (i == *(_QWORD *)(W32GetUserSessionState(v69, v68) + 62976)
            || i == *(_QWORD *)(W32GetUserSessionState(v69, v68) + 62984));
              i = *(_QWORD *)(i + 32) )
        {
          ;
        }
        v73 = W32GetUserSessionState(v69, v68);
        LockObjectAssignment(v73 + 19152, i);
      }
      if ( (*(_DWORD *)v66 & 2) == 0 )
        W32GetUserSessionState(v69, v68);
      v74 = (_DWORD *)*((_QWORD *)v2 + 62);
      v75 = *((_QWORD *)v2 + 79);
      v154 = v75;
      Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v145, v74);
      xxxSetThreadDesktop(0LL, v6);
      if ( (unsigned int)Feature_ForegroundOnDesktopSwitchEx__private_IsEnabledDeviceUsageNoInline() )
        tagUNIQUE_WINDOW_HANDLE::Clear((tagUNIQUE_WINDOW_HANDLE *)(v6 + 88));
      else
        HMAssignmentUnlock(v6 + 104);
      HMAssignmentUnlock(v6 + 192);
      *(_DWORD *)(v6 + 48) &= 0xFFFFFC3F;
      v76 = *(_QWORD *)(v6 + 56);
      if ( v76 )
      {
        v144 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=((__int64)v143, v76);
        if ( UnlockDesktopSysMenu(v6 + 56) )
        {
          v77 = v144;
          if ( !v144 )
            v77 = *(struct _HEAD **)v143[0];
          DestroyMenu(v77);
        }
      }
      v78 = *(_QWORD *)(v6 + 64);
      if ( v78 )
      {
        v144 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=((__int64)v143, v78);
        if ( UnlockDesktopSysMenu(v6 + 64) )
        {
          v79 = v144;
          if ( !v144 )
            v79 = *(struct _HEAD **)v143[0];
          DestroyMenu(v79);
        }
      }
      v80 = *(_QWORD *)(v6 + 72);
      if ( v80 )
      {
        v144 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=((__int64)v143, v80);
        if ( UnlockDesktopMenu(v6 + 72) )
        {
          v81 = v144;
          if ( !v144 )
            v81 = *(struct _HEAD **)v143[0];
          DestroyMenu(v81);
        }
      }
      v82 = *(_QWORD *)(v6 + 80);
      if ( v82 )
      {
        v144 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=((__int64)v143, v82);
        if ( UnlockDesktopMenu(v6 + 80) )
        {
          v83 = v144;
          if ( !v144 )
            v83 = *(struct _HEAD **)v143[0];
          DestroyMenu(v83);
        }
      }
      v84 = *(_QWORD *)(v6 + 8);
      if ( v84 )
      {
        v85 = *(_QWORD *)(v84 + 168);
        if ( v85 )
        {
          if ( (unsigned int)IsWindowDesktopComposed(v85) )
          {
            v87 = *(__int64 ***)(v6 + 8);
            v88 = **v87;
            v89 = (void *)ReferenceDwmApiPort(*v87, v86);
            DwmAsyncShellWindowChange(v89, 0LL, v88);
          }
          v90 = *(_QWORD *)(v6 + 8);
          *(_QWORD *)(*(_QWORD *)v90 + 24LL) = 0LL;
          HMAssignmentUnlock(v90 + 168);
        }
        v91 = *(_QWORD **)(v6 + 8);
        if ( v91[23] )
        {
          *(_QWORD *)(*v91 + 32LL) = 0LL;
          HMAssignmentUnlock(v91 + 23);
        }
        v92 = *(_QWORD **)(v6 + 8);
        if ( v92[24] )
        {
          *(_QWORD *)(*v92 + 40LL) = 0LL;
          HMAssignmentUnlock(v92 + 24);
        }
      }
      v93 = *(struct tagWND **)(v6 + 112);
      if ( v93 && HMAssignmentUnlock(v6 + 112) )
        xxxDestroyWindow(v93, v82);
      v94 = *(CMonitorTopology **)(v6 + 264);
      if ( v94 )
      {
        CMonitorTopology::Release(v94);
        *(_QWORD *)(v6 + 264) = 0LL;
      }
      v95 = *((_QWORD *)v66 + 1);
      if ( v95 && *(_QWORD *)(v95 + 24) == v6 )
      {
        if ( (*(_DWORD *)v66 & 2) != 0 )
        {
          if ( *(_QWORD *)(W32GetUserSessionState(v94, v82) + 63520) )
          {
            v94 = *(CMonitorTopology **)(W32GetUserSessionState(v94, v96) + 63520);
            for ( j = *((_QWORD *)v94 + 1); j; j = *(_QWORD *)(j + 8) )
            {
              v67 = *(void **)(j + 16);
              v96 = 0LL;
              if ( v67 )
                goto LABEL_139;
            }
          }
        }
        else
        {
          v67 = *(void **)(v15 + 16);
          v96 = 0LL;
          if ( v67 )
          {
LABEL_139:
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
              || (v105 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
            {
              v105 = 0;
            }
            v106 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v105 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v107 = GetDesktopName(v67, 0LL);
              v108 = *((_QWORD *)v66 + 1);
              v109 = (__int64)v107;
              v112 = W32GetUserSessionState(v111, v110);
              LOBYTE(v113) = v106;
              LOBYTE(v114) = v105;
              WPP_RECORDER_AND_TRACE_SF_qqS(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v114,
                v113,
                *(_QWORD *)(v112 + 69160),
                v139,
                v140,
                v141,
                v142,
                v108,
                (char)v67,
                v109);
            }
            v98 = a2;
            LockObjectAssignment(*((_QWORD *)a2 + 1) + 24LL, v67);
            v75 = v154;
            goto LABEL_148;
          }
        }
        v98 = a2;
        if ( a2 == (struct tagTERMINAL *)(W32GetUserSessionState(v94, v96) + 68464) )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
            || (v99 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v99 = (char)v67;
          }
          v100 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v99 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v101 = *((_QWORD *)a2 + 1);
            v102 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v82);
            LOBYTE(v103) = v100;
            LOBYTE(v104) = v99;
            WPP_RECORDER_AND_TRACE_SF_q(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v104,
              v103,
              *(_QWORD *)(v102 + 69160),
              4,
              8,
              17,
              (__int64)&WPP_e1faede55423302b9088ff86a1f044f2_Traceguids,
              v101);
          }
          xxxCleanupMotherDesktopWindow(a2);
        }
      }
      else
      {
        v98 = a2;
      }
LABEL_148:
      v115 = *(_QWORD *)(v6 + 8);
      if ( v115 )
      {
        v116 = *(struct tagWND **)(v115 + 24);
        if ( v116 )
        {
          LOBYTE(v82) = *(_BYTE *)(*((_QWORD *)v116 + 5) + 31LL);
          if ( (v82 & 0x10) != 0 )
          {
            Win32HM_LockIntoThread<0>((__int64)a1, (__int64)v116, BugCheckParameter3);
            xxxSetWindowPos(v116, 0LL, 0LL, 0LL, 0, 0, 1183);
            Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v117);
          }
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
            || (v118 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v118 = 0;
          }
          v119 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v118 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v120 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v82);
            LOBYTE(v121) = v119;
            LOBYTE(v122) = v118;
            WPP_RECORDER_AND_TRACE_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v122,
              v121,
              *(_QWORD *)(v120 + 69160),
              4,
              8,
              19,
              (__int64)&WPP_e1faede55423302b9088ff86a1f044f2_Traceguids);
          }
          xxxDestroyWindow(*(struct tagWND **)(*(_QWORD *)(v6 + 8) + 24LL), v82);
          if ( v6 == *(_QWORD *)(W32GetUserSessionState(v124, v123) + 19144) )
          {
            if ( !(unsigned int)Feature_ShowHideCursorWinEventFix__private_IsEnabledDeviceUsageNoInline() )
              *(_DWORD *)(v6 + 48) |= 1u;
            v94 = *(CMonitorTopology **)&WPP_GLOBAL_Control;
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
              || (v126 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
            {
              v126 = 0;
            }
            v127 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v126 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              v128 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v82);
              LOBYTE(v129) = v127;
              LOBYTE(v130) = v126;
              WPP_RECORDER_AND_TRACE_SF_q(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v130,
                v129,
                *(_QWORD *)(v128 + 69160),
                4,
                8,
                20,
                (__int64)&WPP_e1faede55423302b9088ff86a1f044f2_Traceguids,
                v6);
            }
          }
          else
          {
            v125 = *(_QWORD *)(v6 + 8);
            *(_QWORD *)(*(_QWORD *)v125 + 8LL) = 0LL;
            HMAssignmentUnlock(v125 + 24);
          }
          *(_DWORD *)(v6 + 48) |= 2u;
        }
      }
      if ( (*(_DWORD *)v98 & 2) == 0 || !v74 || (v74[12] & 6) == 0 )
        xxxSetThreadDesktop(v75, (__int64)v74);
      if ( (*(_DWORD *)v98 & 2) == 0 )
        W32GetUserSessionState(v94, v82);
      if ( v146 != -1 )
      {
        PopAndFreeW32ThreadLock((__int64)v145, v82);
        v146 = -1LL;
      }
      if ( v148 != -1 )
      {
        PopAndFreeW32ThreadLock((__int64)v147, v82);
        v148 = -1LL;
      }
      if ( v151[2] != -1LL )
        PopAndFreeW32ThreadLock((__int64)v151, v82);
      v2 = a1;
      v4 = (__int64 *)((char *)v98 + 48);
      v6 = *((_QWORD *)v98 + 6);
      if ( !v6 )
      {
        v5 = &WPP_RECORDER_INITIALIZED;
        goto LABEL_185;
      }
    }
    v20 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
       && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) != 0
       && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v21 = &WPP_RECORDER_INITIALIZED;
    v22 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v20 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v23 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v24) = v22;
      LOBYTE(v25) = v20;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v25,
        v24,
        *(_QWORD *)(v23 + 69160),
        4,
        8,
        12,
        (__int64)&WPP_e1faede55423302b9088ff86a1f044f2_Traceguids);
      v21 = &WPP_RECORDER_INITIALIZED;
    }
    if ( (*(_DWORD *)(v15 + 64) & 1) != 0 )
    {
      v26 = *(_QWORD *)&WPP_GLOBAL_Control;
      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
        || (v27 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
      {
        v27 = 0;
      }
      v28 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v27 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        v29 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        LOBYTE(v30) = v28;
        LOBYTE(v31) = v27;
        WPP_RECORDER_AND_TRACE_SF_(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v31,
          v30,
          *(_QWORD *)(v29 + 69160),
          4,
          8,
          13,
          (__int64)&WPP_e1faede55423302b9088ff86a1f044f2_Traceguids);
      }
      if ( *(_QWORD *)(W32GetUserSessionState(v26, v21) + 62984) )
      {
        if ( v6 == *(_QWORD *)(W32GetUserSessionState(v33, v32) + 62976)
          || !*(_QWORD *)(W32GetUserSessionState(v34, v32) + 62976)
          || (v33 = *(_QWORD *)(W32GetUserSessionState(v35, v32) + 62976), (*(_DWORD *)(v33 + 48) & 2) != 0) )
        {
          v36 = *(_QWORD *)&WPP_GLOBAL_Control;
          if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
            || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
            || (v37 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
          {
            v37 = 0;
          }
          v38 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          if ( v37 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v39 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v32);
            LOBYTE(v40) = v38;
            LOBYTE(v41) = v37;
            WPP_RECORDER_AND_TRACE_SF_(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
              v41,
              v40,
              *(_QWORD *)(v39 + 69160),
              4,
              8,
              14,
              (__int64)&WPP_e1faede55423302b9088ff86a1f044f2_Traceguids);
          }
          v42 = W32GetUserSessionState(v36, v32);
          v45 = W32GetUserSessionState(v44, v43);
          v48 = *(_QWORD **)(W32GetUserSessionState(v47, v46) + 62984);
          v51 = W32GetUserSessionState(v50, v49);
          RemoteDisableScreen(*(_QWORD **)(v51 + 19144), v48, v45 + 19152, (_DWORD *)(v42 + 62832));
LABEL_60:
          v66 = a2;
          LOBYTE(v67) = 0;
          goto LABEL_61;
        }
      }
      v52 = *(void **)(W32GetUserSessionState(v33, v32) + 62976);
    }
    else
    {
      v52 = *(void **)(v15 + 16);
      if ( v52 == (void *)v6 )
        v52 = *(void **)(v6 + 32);
      if ( !v52 )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
          || (v53 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
        {
          v53 = 0;
        }
        v54 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v53 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v55 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
          LOBYTE(v56) = v54;
          LOBYTE(v57) = v53;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v57,
            v56,
            *(_QWORD *)(v55 + 69160),
            4,
            8,
            15,
            (__int64)&WPP_e1faede55423302b9088ff86a1f044f2_Traceguids);
        }
        ClearWakeBit(v2, 15367, 0);
      }
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
      || (v58 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v58 = 0;
    }
    v59 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v58 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v60 = GetDesktopName(v52, (__int64)v21);
      v63 = W32GetUserSessionState(v62, v61);
      LOBYTE(v64) = v59;
      LOBYTE(v65) = v58;
      WPP_RECORDER_AND_TRACE_SF_Sq(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v65,
        v64,
        *(_QWORD *)(v63 + 69160),
        v139,
        v140,
        16,
        v142,
        (__int64)v60,
        (char)v52);
    }
    Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v150, v52);
    xxxSwitchDesktop(v15, (__int64)v52, 0, 0);
    if ( v150[2] != -1LL )
      PopAndFreeW32ThreadLock((__int64)v150, v18);
    v2 = a1;
    goto LABEL_60;
  }
LABEL_185:
  v131 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
    || (v132 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v132 = 0;
  }
  v133 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v132 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v134 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v135) = v133;
    LOBYTE(v136) = v132;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v136,
      v135,
      *(_QWORD *)(v134 + 69160),
      4,
      8,
      21,
      (__int64)&WPP_e1faede55423302b9088ff86a1f044f2_Traceguids);
  }
  v137 = W32GetUserSessionState(v131, v5);
  KeSetEvent(*(PRKEVENT *)(v137 + 62944), 1, 0);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v143, v138);
}
