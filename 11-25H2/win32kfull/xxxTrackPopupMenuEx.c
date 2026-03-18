/*
 * XREFs of xxxTrackPopupMenuEx @ 0x14015AE18
 * Callers:
 *     NtUserTrackPopupMenuEx @ 0x14003CDB0 (NtUserTrackPopupMenuEx.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     xxxDoScrollMenu @ 0x1402E8138 (xxxDoScrollMenu.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     FindTimer @ 0x14001A310 (FindTimer.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x14001D970 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1400458EC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNAnimate @ 0x140045C18 (MNAnimate.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x140049CB8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x14005F74C (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x140064724 (xxxInheritWindowMonitor.c)
 *     GetMonitorRectForWindow @ 0x1400908AC (GetMonitorRectForWindow.c)
 *     _MonitorFromPoint @ 0x140091A70 (_MonitorFromPoint.c)
 *     xxxPlayEventSound @ 0x1400D7F00 (xxxPlayEventSound.c)
 *     SubtractRect @ 0x140157E1C (SubtractRect.c)
 *     GetMonitorMenuRectForWindow @ 0x1401599E0 (GetMonitorMenuRectForWindow.c)
 *     FindBestPos @ 0x140159FA4 (FindBestPos.c)
 *     xxxMNLoop @ 0x14015A654 (xxxMNLoop.c)
 *     LockPopupMenu @ 0x14015AD40 (LockPopupMenu.c)
 *     ?IsWindowShellCloakedComponentUIAware@@YA_NPEBUtagWND@@_N@Z @ 0x14015BC30 (-IsWindowShellCloakedComponentUIAware@@YA_NPEBUtagWND@@_N@Z.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x14015BC98 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x14015BD74 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     xxxMNEndMenuState @ 0x14015BDC0 (xxxMNEndMenuState.c)
 *     MNAllocMenuState @ 0x14015BF08 (MNAllocMenuState.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x14015CE78 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     xxxMNStartMenu @ 0x14015D464 (xxxMNStartMenu.c)
 *     xxxDestroyWindow @ 0x14017EBE0 (xxxDestroyWindow.c)
 *     ?IsChildWindowDpiMessageEnabledX@@YA_NPEAUtagWND@@@Z @ 0x14019C404 (-IsChildWindowDpiMessageEnabledX@@YA_NPEAUtagWND@@@Z.c)
 *     ?IsNonClientDpiScalingEnabledX@@YA_NPEAUtagWND@@@Z @ 0x14019C584 (-IsNonClientDpiScalingEnabledX@@YA_NPEAUtagWND@@@Z.c)
 *     ?IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z @ 0x1401A924C (-IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1401E8AB0 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     MNClearCachedPopupSizes @ 0x1401FED6C (MNClearCachedPopupSizes.c)
 *     xxxMNReleaseCapture @ 0x14026AD74 (xxxMNReleaseCapture.c)
 *     ?GetMenuRightAlignHint@@YA_NXZ @ 0x14026E280 (-GetMenuRightAlignHint@@YA_NXZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x140285BFC (safe_cast_fnid_to_PMENUWND.c)
 *     xxxUserModeCallback @ 0x1402BE608 (xxxUserModeCallback.c)
 */

__int64 __fastcall xxxTrackPopupMenuEx(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r14d
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // esi
  __int64 v10; // r12
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // rdi
  __int64 v13; // rbx
  int v14; // r15d
  __int16 KeyState; // ax
  _BOOL8 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // ebx
  void *v23; // rdi
  __int64 Window; // rdi
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rdx
  _QWORD **v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // r14d
  int v35; // ebx
  struct tagTHREADINFO *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  struct tagTHREADINFO *v40; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  struct tagTHREADINFO *v44; // rax
  __int64 v45; // rdx
  _DWORD *v46; // rdx
  unsigned int v47; // ecx
  bool v48; // cf
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  int v52; // r9d
  __int64 v53; // rax
  int v54; // ecx
  __int16 WindowDpiLastNotify; // dx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 UserSessionState; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rcx
  struct tagMONITOR *v64; // r9
  __int64 v65; // rcx
  __int64 v66; // rdx
  int BestPos; // ebx
  struct tagWND *TopLevelHostForComponent; // rbx
  unsigned int i; // edx
  __int64 v70; // rax
  int v71; // ecx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  int v75; // eax
  bool v76; // al
  __int64 v77; // rdx
  __int64 v78; // rax
  _QWORD *v79; // rcx
  char v80; // [rsp+20h] [rbp-F0h]
  __int64 v81; // [rsp+90h] [rbp-80h] BYREF
  __int64 v82; // [rsp+98h] [rbp-78h] BYREF
  int v83; // [rsp+A0h] [rbp-70h]
  int v84; // [rsp+A4h] [rbp-6Ch]
  int v85[2]; // [rsp+A8h] [rbp-68h]
  int v86[2]; // [rsp+B0h] [rbp-60h] BYREF
  int v87; // [rsp+B8h] [rbp-58h]
  struct tagMONITOR *v88; // [rsp+C0h] [rbp-50h]
  __int64 v89; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v90; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v91; // [rsp+D8h] [rbp-38h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+E0h] [rbp-30h] BYREF
  __int64 v93[2]; // [rsp+F0h] [rbp-20h] BYREF
  __int128 v94; // [rsp+100h] [rbp-10h] BYREF
  ULONG_PTR v95[2]; // [rsp+110h] [rbp+0h] BYREF
  _QWORD v96[2]; // [rsp+120h] [rbp+10h] BYREF
  __int64 v97[3]; // [rsp+130h] [rbp+20h] BYREF
  _BYTE v98[16]; // [rsp+148h] [rbp+38h] BYREF
  struct tagRECT v99; // [rsp+158h] [rbp+48h] BYREF

  v6 = a2;
  v7 = PtiCurrent(a1, a2);
  v9 = 0;
  v81 = gSmartObjNullRef;
  v91 = 0LL;
  v10 = 0LL;
  v82 = *((_QWORD *)v7 + 209);
  *((_QWORD *)v7 + 209) = &v82;
  v86[0] = 0;
  v83 = 0;
  *(_OWORD *)v93 = 0LL;
  if ( a6 )
  {
    if ( *(_DWORD *)a6 != 20 )
      goto LABEL_83;
    *(_OWORD *)v93 = *(_OWORD *)(a6 + 4);
  }
  v11 = PtiCurrent((__int64)&v82, v8);
  v12 = v11;
  v88 = v11;
  if ( v11 != *(struct tagTHREADINFO **)(a5 + 16) )
  {
LABEL_83:
    v71 = 87;
    goto LABEL_85;
  }
  v13 = *((_QWORD *)v11 + 81);
  v14 = 1;
  if ( v13 )
  {
    if ( (v6 & 1) != 0 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v81, *(_QWORD *)v13);
      v26 = *(_QWORD *)(*(_QWORD *)v81 + 8LL);
      if ( (*(_DWORD *)(v13 + 8) & 4) == 0
        || (**(_DWORD **)v81 & 0x8000) != 0
        || !v26
        || v26 != a5
        || *(_QWORD *)(v13 + 32) != *(_QWORD *)(v26 + 16) )
      {
        goto LABEL_86;
      }
      MNAnimate((__int64 *)v13, 0LL);
      v72 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v81 + 56LL));
      if ( v72 )
        v73 = *(_QWORD *)(v72 + 8);
      else
        v73 = 0LL;
      SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v81, v73);
      if ( *(_QWORD *)v81 && (**(_DWORD **)v81 & 0x2000) != 0 )
      {
        FindTimer(*(_QWORD *)(*(_QWORD *)v81 + 16LL), 65534LL, 0, 1, 0LL);
        **(_DWORD **)v81 &= ~0x2000u;
      }
      if ( (*(_DWORD *)(v13 + 8) & 0x100) == 0 )
        *(_DWORD *)(*((_QWORD *)v12 + 59) + 412LL) &= ~0x100000u;
      goto LABEL_4;
    }
    v71 = 1446;
LABEL_85:
    UserSetLastError(v71);
    goto LABEL_86;
  }
LABEL_4:
  v84 = v6 & 2;
  if ( (v6 & 2) != 0 )
  {
    v87 = (unsigned __int16)_GetKeyState(2LL) >> 15;
  }
  else
  {
    KeyState = _GetKeyState(1LL);
    v16 = KeyState < 0;
    v87 = KeyState < 0;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v16) & 0xF) == 2
    || (W32GetCurrentThreadDpiAwarenessContext(v17) & 0xF) == 3 )
  {
    *(_QWORD *)v86 = __PAIR64__(a4, a3);
    v18 = *(_QWORD *)(MonitorFromPoint(__SPAIR64__(a4, a3), 2u, 0) + 40);
    v86[0] = *(_DWORD *)(v18 + 28);
    v83 = *(_DWORD *)(v18 + 32);
  }
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v18);
  if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
    goto LABEL_10;
  v74 = PsGetCurrentProcessWin32Process(v20);
  if ( v74 )
    v74 &= -(__int64)(*(_QWORD *)v74 != 0LL);
  v75 = IsImmersiveAppRestricted(v74);
  v85[0] = 1;
  if ( !v75 )
LABEL_10:
    v85[0] = 0;
  v21 = *(_QWORD *)(a5 + 40);
  v22 = *(_DWORD *)(v21 + 236);
  v23 = *(void **)(v21 + 32);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v97, 0LL);
  Window = xxxCreateWindowEx(
             385,
             (wchar_t *)0x8000,
             0x8000LL,
             0LL,
             0x80800000,
             v86[0],
             v83,
             100,
             100,
             (struct tagWND *)(a5 & -(__int64)((*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 40LL) & 0x40000000) != 0)),
             (__int64)v97,
             v23,
             0LL,
             v22,
             0xA00u,
             v85[0],
             0LL);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v97, v25);
  if ( Window )
  {
    *(_QWORD *)v85 = safe_cast_fnid_to_PMENUWND(Window);
    if ( !*(_QWORD *)v85 )
    {
      xxxDestroyWindow((struct tagWND *)Window);
LABEL_33:
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v81, v38);
      return v9;
    }
    v27 = (__int64)v88;
    Win32HM_LockIntoThread<0>((__int64)v88, Window, BugCheckParameter3);
    if ( (W32GetCurrentThreadDpiAwarenessContext(v28) & 0xF) == 2 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v27 + 464) + 808LL) & 0x100000) != 0
        || ((v6 & 0x200) == 0
          ? (!IsTopLevelWindow(a5)
           ? (v76 = IsChildWindowDpiMessageEnabledX((struct tagWND *)a5))
           : (v76 = IsWindowBroadcastingDpiToChildrenX((struct tagWND *)a5)))
          : (v76 = IsNonClientDpiScalingEnabledX((struct tagWND *)a5)),
            v76) )
      {
        xxxEnableChildWindowDpiMessageX((struct tagWND *)Window, 1);
      }
      v30 = (_QWORD **)a1;
    }
    else
    {
      v30 = (_QWORD **)a1;
      if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 40LL) & 0x40000000) == 0 )
        xxxInheritWindowMonitor((struct tagWND *)Window, (struct tagWND *)a5, 0);
    }
    v31 = (__int64)*v30;
    *(_QWORD *)v86 = 0LL;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v31 + 40LL) + 40LL) & 0x40000000) == 0 )
    {
      TopLevelHostForComponent = (struct tagWND *)Window;
      if ( (!(unsigned int)CoreWindowProp::IsComponent((const struct tagWND *)Window, v29)
         || (TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent((const struct tagWND *)Window)) != 0LL)
        && (*(_BYTE *)(*((_QWORD *)TopLevelHostForComponent + 5) + 233LL) & 0x20) != 0
        && !IsWindowShellCloakedComponentUIAware((const struct tagWND *)a5, 0) )
      {
        zzzSetWindowCompositionCloak(Window, 0LL);
      }
      v30 = (_QWORD **)a1;
    }
    if ( (((v6 & 0x8000) == 0) & (unsigned __int8)~(*(_BYTE *)(*(_QWORD *)(a5 + 40) + 26LL) >> 6)) == 0 )
      SetOrClrWF(1, (struct tagWND *)Window, 0xA40u, 1);
    SetOrClrWF(0, (struct tagWND *)Window, 0x408u, 1);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v81, *(_QWORD *)(*(_QWORD *)v85 + 8LL));
    if ( !*(_QWORD *)v81 )
      goto LABEL_20;
    v96[1] = a5;
    v96[0] = *(_QWORD *)v81 + 8LL;
    HMAssignmentLock(v96, 0LL);
    LockPopupMenu((__int64)&v81, (__int64 *)(*(_QWORD *)v81 + 40LL), (__int64)v30);
    *((_QWORD *)&v94 + 1) = Window;
    *(_QWORD *)&v94 = *(_QWORD *)v81 + 56LL;
    HMAssignmentLock(&v94, 0LL);
    v44 = PtiCurrent(v43, v42);
    v89 = gSmartObjNullRef;
    v90 = *((_QWORD *)v44 + 209);
    *((_QWORD *)v44 + 209) = &v90;
    **(_DWORD **)v81 |= 0x10000u;
    if ( *(_QWORD *)v89 )
    {
      *(_QWORD *)(*(_QWORD *)v81 + 72LL) = *(_QWORD *)(*(_QWORD *)v89 + 72LL);
      **(_DWORD **)v81 |= 0x20000000u;
      v45 = *(_QWORD *)v81;
      *(_QWORD *)(*(_QWORD *)v89 + 72LL) = *(_QWORD *)v81;
    }
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v89, v45);
    *(_QWORD *)(*(_QWORD *)v81 + 64LL) = *(_QWORD *)v81;
    **(_DWORD **)v81 |= 8u;
    v46 = *(_DWORD **)v81;
    v47 = (v87 << 9) | **(_DWORD **)v81 & 0xFFFFFDFF;
    v48 = v84 != 0;
    v84 = -v84;
    *v46 = v47;
    **(_DWORD **)v81 = **(_DWORD **)v81 & 0xFFFFFFBF | (v48 ? 0x40 : 0);
    if ( GetMenuRightAlignHint() || (*(_DWORD *)(*(_QWORD *)(**v30 + 40LL) + 40LL) & 0x20) != 0 )
      **(_DWORD **)v81 |= 0x10u;
    **(_DWORD **)v81 = **(_DWORD **)v81 & 0xFFFFF7FF | (16 * (v6 & 0x80));
    v84 = v6 & 0x100;
    if ( (v6 & 0x100) != 0 )
      **(_DWORD **)v81 |= 0x100u;
    **(_DWORD **)v81 = **(_DWORD **)v81 & 0xFFFFFFFB | (v6 >> 7) & 4;
    v10 = MNAllocMenuState(&v81);
    if ( v10 )
    {
      if ( PtiCurrent(v50, v49) == *(struct tagTHREADINFO **)(v10 + 32) )
      {
        ++*(_DWORD *)(v10 + 40);
        v51 = v10;
      }
      else
      {
        v51 = 0LL;
      }
      *(_QWORD *)v86 = v51;
      if ( (**(_DWORD **)v81 & 0x800) == 0 )
        xxxSendMessage((struct tagWND *)a5, 0x211u);
      if ( (unsigned int)xxxMNStartMenu(&v81, v10, 0xFFFFFFFFLL) )
      {
        if ( (*(_DWORD *)(v10 + 8) & 0x400) != 0 )
        {
          v89 = *(_QWORD *)Window;
          xxxUserModeCallback(100, (unsigned int)&v89, 8, v52, v80);
        }
        if ( (**(_DWORD **)v81 & 0x800) == 0 && *(_QWORD *)(*(_QWORD *)v81 + 8LL) )
        {
          Win32HM_LockIntoThread<0>((__int64)v88, *(_QWORD *)(*(_QWORD *)v81 + 8LL), v95);
          xxxSendMessage(*(struct tagWND **)(*(_QWORD *)v81 + 8LL), 0x117u);
          **(_DWORD **)v81 |= 0x200000u;
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v95, v77);
        }
        if ( (*(_DWORD *)(Window + 380) & 0x100000) != 0 )
        {
          for ( i = 0; i < *(_DWORD *)(*(_QWORD *)(**v30 + 40LL) + 44LL); ++i )
          {
            if ( (**(_DWORD **)(96LL * (int)i + *(_QWORD *)(**v30 + 88LL)) & 0x100) != 0
              || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**v30 + 88LL) + 96LL * (int)i) + 96LL) == -1LL )
            {
              xxxEnableChildWindowDpiMessageX((struct tagWND *)Window, 0);
              break;
            }
          }
        }
        v53 = *(_QWORD *)(Window + 40);
        v54 = *(_DWORD *)(v53 + 288) & 0xF;
        if ( v54 == 3 )
        {
          WindowDpiLastNotify = (*(_DWORD *)(v53 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v53 + 232) & 0x400) != 0 )
        {
          WindowDpiLastNotify = GetWindowDpiLastNotify(Window);
        }
        else if ( !v54
               && (v78 = *(_QWORD *)(*(_QWORD *)(Window + 16) + 496LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v78 + 8) + 64LL) & 1) != 0 )
        {
          WindowDpiLastNotify = 96;
        }
        else
        {
          WindowDpiLastNotify = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(Window + 16) + 464LL) + 272LL);
        }
        if ( WindowDpiLastNotify != *(_WORD *)(**v30 + 76LL) )
        {
          *(_WORD *)(**v30 + 76LL) = WindowDpiLastNotify;
          v79 = v30[2];
          if ( !v79 )
            v79 = (_QWORD *)**v30;
          MNClearCachedPopupSizes(v79);
        }
        v89 = xxxSendMessage((struct tagWND *)Window, 0x1E2u);
        if ( (_DWORD)v89 )
        {
          UserSessionState = W32GetUserSessionState(v57, v56);
          if ( (unsigned int)CInputGlobals::GetLastInputType(*(_QWORD *)(UserSessionState + 3056)) == 1
            || (v70 = W32GetUserSessionState(v60, v59),
                (unsigned int)CInputGlobals::GetLastInputType(*(_QWORD *)(v70 + 3056)) == 4) )
          {
            *(_DWORD *)(v10 + 8) |= 0x20u;
            *(_DWORD *)(*(_QWORD *)(**v30 + 40LL) + 40LL) |= 4u;
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)(**v30 + 40LL) + 40LL) &= ~4u;
          }
          v85[0] = (unsigned __int16)v89 + 6;
          v83 = WORD1(v89) + 6;
          v91 = __PAIR64__(a4, a3);
          v61 = __PAIR64__(a4, a3);
          v62 = MonitorFromPoint(__SPAIR64__(a4, a3), 2u, 0);
          v63 = *(_QWORD *)(a5 + 40);
          v64 = (struct tagMONITOR *)v62;
          v88 = (struct tagMONITOR *)v62;
          if ( (*(_BYTE *)(v63 + 26) & 0x40) != 0 && (v6 & 4) == 0 )
            v6 ^= 8u;
          if ( (v6 & 8) != 0 )
          {
            a3 -= v85[0];
            **(_DWORD **)v81 = **(_DWORD **)v81 & 0xF07FFFFF | 0x1000000;
          }
          else if ( (v6 & 4) != 0 )
          {
            a3 -= (unsigned int)v85[0] >> 1;
          }
          else
          {
            **(_DWORD **)v81 = **(_DWORD **)v81 & 0xF07FFFFF | ((((**(_DWORD **)v81 & 0x10) != 0) + 1) << 23);
          }
          if ( (v6 & 0x20) != 0 )
          {
            a4 -= v83;
            **(_DWORD **)v81 |= 0x4000000u;
          }
          else if ( (v6 & 0x10) != 0 )
          {
            a4 -= (unsigned int)v83 >> 1;
          }
          else
          {
            **(_DWORD **)v81 |= 0x2000000u;
          }
          if ( (v6 & 0x3C00) != 0 )
            **(_DWORD **)v81 = ((v6 & 0x3C00) << 13) | **(_DWORD **)v81 & 0xF07FFFFF;
          v65 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v81 + 16LL) + 40LL);
          if ( a6 )
          {
            if ( *(_DWORD *)(v65 + 236) != 1 )
            {
LABEL_66:
              BestPos = FindBestPos(a3, a4, v85[0], v83, (struct tagRECT *)v93, v6, (__int64 **)&v81, v64, v61);
              if ( (*(_BYTE *)(*(_QWORD *)(a5 + 40) + 26LL) & 0x40) != 0 )
              {
                v66 = *(_QWORD *)v81;
                if ( (**(_DWORD **)v81 & 0x1800000) != 0 )
                {
                  v66 = *(_QWORD *)v81;
                  **(_DWORD **)v81 ^= 0x1800000u;
                }
              }
              if ( (**(_DWORD **)v81 & 0xF800000) != 0 && (v6 & 0x4000) == 0 )
                **(_DWORD **)v81 |= 0x8000000u;
              xxxPlayEventSound(5LL, v66);
              xxxSetWindowPos(
                (struct tagWND *)Window,
                ((*(_DWORD *)(v10 + 8) & 0x100) != 0) - 1LL,
                (unsigned int)(__int16)BestPos,
                (unsigned int)SHIWORD(BestPos),
                0,
                0,
                ~(unsigned __int8)(*(_DWORD *)(v10 + 8) >> 4) & 0x10 | 0x241);
              xxxWindowEvent(6u, (struct tagWND *)Window, -4, 0, 0);
              *(_DWORD *)(v10 + 8) = (8 * v87) | *(_DWORD *)(v10 + 8) & 0xFFFFFFF7;
              v35 = xxxMNLoop((__int64 **)&v81, v10, 0LL, 0);
              v34 = v84;
              if ( (*(_DWORD *)(v10 + 8) & 0x100) != 0 )
                goto LABEL_28;
              goto LABEL_24;
            }
          }
          else
          {
            if ( *(_DWORD *)(v65 + 236) != 1 )
            {
              *(_OWORD *)v93 = 0LL;
              **(_DWORD **)v81 &= ~0x80000000;
              goto LABEL_66;
            }
            v94 = *(_OWORD *)GetMonitorRectForWindow((__int64)v98, v62, (const struct tagWND *)Window);
            *(struct tagRECT *)v95 = *GetMonitorMenuRectForWindow(&v99, (__int64)v88, (const struct tagWND *)Window);
            SubtractRect((__int64)v93, (int *)&v94, (int *)v95);
            v64 = v88;
          }
          **(_DWORD **)v81 |= 0x80000000;
          goto LABEL_66;
        }
      }
    }
    else
    {
LABEL_20:
      LOBYTE(v6) = v6 | 0x80;
    }
    xxxWindowEvent(5u, (struct tagWND *)a5, 0, 0, 0);
    xxxMNReleaseCapture(v10);
    if ( (v6 & 0x80u) == 0 )
      xxxSendMessage((struct tagWND *)a5, 0x212u);
    v34 = 1;
    v35 = 0;
LABEL_24:
    v36 = PtiCurrent(v33, v32);
    v37 = Win32HM_UnlockFromThread<0>((ULONG_PTR)v36, BugCheckParameter3);
    BugCheckParameter3[0] = -1LL;
    BugCheckParameter3[1] = 0LL;
    if ( v37 && *(char *)(*(_QWORD *)(Window + 40) + 19LL) >= 0 )
      xxxDestroyWindow((struct tagWND *)Window);
    if ( v10 )
      xxxMNEndMenuState(v10);
    xxxDeliverRestoreFocusMessage((struct tagWND *)a5);
LABEL_28:
    if ( v34 )
      v14 = v35;
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)v86);
    if ( BugCheckParameter3[0] != -1LL )
    {
      v40 = PtiCurrent(v39, v38);
      Win32HM_UnlockFromThread<0>((ULONG_PTR)v40, BugCheckParameter3);
    }
    v9 = v14;
    goto LABEL_33;
  }
LABEL_86:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v81, v26);
  return 0LL;
}
