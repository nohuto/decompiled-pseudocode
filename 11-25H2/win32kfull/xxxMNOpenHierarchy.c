/*
 * XREFs of xxxMNOpenHierarchy @ 0x14016D6F0
 * Callers:
 *     xxxMNButtonUp @ 0x14003CC8C (xxxMNButtonUp.c)
 *     xxxMNMouseMove @ 0x140044310 (xxxMNMouseMove.c)
 *     xxxMNButtonDown @ 0x14016D560 (xxxMNButtonDown.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     xxxMNKeyDown @ 0x1402BFBCC (xxxMNKeyDown.c)
 *     xxxMNKeyFilter @ 0x1402EC7F8 (xxxMNKeyFilter.c)
 * Callees:
 *     FindTimer @ 0x14001A310 (FindTimer.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x14002EA08 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x14002EA3C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     GetWindowDpiLastNotify @ 0x1400341C8 (GetWindowDpiLastNotify.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140034D4C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     xxxMNCloseHierarchy @ 0x14003CF70 (xxxMNCloseHierarchy.c)
 *     MNGetpItemFromIndex @ 0x140042B84 (MNGetpItemFromIndex.c)
 *     MNIspItemValid @ 0x140043458 (MNIspItemValid.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1400446D8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x140044D78 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1400458EC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x140048F9C (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x140049CB8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x14004F880 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     IntersectRect @ 0x140052D08 (IntersectRect.c)
 *     xxxInheritWindowMonitor @ 0x140064724 (xxxInheritWindowMonitor.c)
 *     GetMonitorRectForWindow @ 0x1400908AC (GetMonitorRectForWindow.c)
 *     xxxPlayEventSound @ 0x1400D7F00 (xxxPlayEventSound.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1401597F0 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     LockPopupMenu @ 0x14015AD40 (LockPopupMenu.c)
 *     xxxDestroyWindow @ 0x14017EBE0 (xxxDestroyWindow.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1401A73E0 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1401E8AB0 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     MNClearCachedPopupSizes @ 0x1401FED6C (MNClearCachedPopupSizes.c)
 *     MNRefreshUAHCachedSizes @ 0x1401FEDEC (MNRefreshUAHCachedSizes.c)
 *     ?GetMenuRightAlignHint@@YA_NXZ @ 0x14026E280 (-GetMenuRightAlignHint@@YA_NXZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x140285BFC (safe_cast_fnid_to_PMENUWND.c)
 *     xxxUserModeCallback @ 0x1402BE608 (xxxUserModeCallback.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall xxxMNOpenHierarchy(__int64 **a1, __int64 a2)
{
  char v2; // r15
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  struct tagTHREADINFO *v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rsi
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 *v21; // r14
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  void *v31; // rbx
  struct tagWND *Window; // rsi
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 *v39; // rax
  __int64 v40; // rcx
  _DWORD *v41; // rcx
  _DWORD *v42; // r8
  int v43; // eax
  _DWORD *v44; // rdx
  __int64 v45; // rcx
  struct tagWND *v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rax
  int v49; // ecx
  __int16 WindowDpiLastNotify; // dx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  int v54; // r10d
  int v55; // r15d
  int v56; // eax
  _DWORD *v57; // r9
  int v58; // edx
  int v59; // ecx
  __int64 *v60; // rax
  __int64 *v61; // rdx
  __int64 v62; // rdx
  int v63; // r8d
  LONG v64; // esi
  LONG v65; // r14d
  _DWORD *v66; // rcx
  unsigned int v67; // eax
  __int64 *v68; // rax
  __int64 v69; // rdx
  int v70; // r9d
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rdx
  struct tagTHREADINFO *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rdx
  struct tagTHREADINFO *v77; // rax
  struct tagTHREADINFO *v78; // rax
  __int64 v80; // rdx
  char v81; // [rsp+20h] [rbp-F0h]
  __int64 *v82; // [rsp+90h] [rbp-80h] BYREF
  __int64 v83; // [rsp+98h] [rbp-78h] BYREF
  __int64 v84; // [rsp+A8h] [rbp-68h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v86; // [rsp+B8h] [rbp-58h]
  struct tagRECT v87; // [rsp+C0h] [rbp-50h] BYREF
  int v88[2]; // [rsp+D0h] [rbp-40h] BYREF
  int v89; // [rsp+D8h] [rbp-38h]
  int v90; // [rsp+DCh] [rbp-34h]
  ULONG_PTR v91[2]; // [rsp+E0h] [rbp-30h] BYREF
  __int64 v92; // [rsp+F0h] [rbp-20h]
  int v93[4]; // [rsp+F8h] [rbp-18h] BYREF
  __int64 v94[3]; // [rsp+108h] [rbp-8h] BYREF
  ULONG_PTR v95[4]; // [rsp+120h] [rbp+10h] BYREF
  _QWORD v96[2]; // [rsp+140h] [rbp+30h] BYREF
  _QWORD v97[2]; // [rsp+150h] [rbp+40h] BYREF
  _QWORD v98[2]; // [rsp+160h] [rbp+50h] BYREF
  _QWORD v99[2]; // [rsp+170h] [rbp+60h] BYREF
  __int128 v100; // [rsp+180h] [rbp+70h] BYREF
  __int64 v101; // [rsp+190h] [rbp+80h]
  __int64 v102; // [rsp+198h] [rbp+88h]
  __int128 v103; // [rsp+1C0h] [rbp+B0h]
  ULONG_PTR v104[2]; // [rsp+1F0h] [rbp+E0h] BYREF
  ULONG_PTR v105[2]; // [rsp+200h] [rbp+F0h] BYREF
  ULONG_PTR v106[2]; // [rsp+210h] [rbp+100h] BYREF
  ULONG_PTR v107[8]; // [rsp+220h] [rbp+110h] BYREF
  LONG v108; // [rsp+270h] [rbp+160h] BYREF
  unsigned int v109; // [rsp+280h] [rbp+170h] BYREF
  int v110; // [rsp+288h] [rbp+178h]

  v2 = 0;
  v5 = 0LL;
  memset_0(&v100, 0, 0x70uLL);
  v9 = PtiCurrent(v7, v6);
  v108 = 0;
  LODWORD(v11) = 0;
  v82 = (__int64 *)gSmartObjNullRef;
  LODWORD(v12) = 0;
  v109 = 0;
  v83 = *((_QWORD *)v9 + 209);
  *((_QWORD *)v9 + 209) = &v83;
  BugCheckParameter3 = -1LL;
  v91[0] = -1LL;
  v13 = *a1;
  v86 = 0LL;
  v91[1] = 0LL;
  v110 = 0;
  v14 = *v13;
  v92 = 0LL;
  v84 = 0LL;
  if ( *(_DWORD *)(v14 + 80) == -1 )
    goto LABEL_117;
  v15 = **a1;
  if ( *(_DWORD *)(v15 + 80) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 40) + 40LL) + 44LL) )
    goto LABEL_116;
  if ( (*(_DWORD *)**a1 & 0x20) == 0 )
    goto LABEL_6;
  if ( (*(_DWORD *)**a1 & 0x4000) == 0 )
  {
LABEL_116:
    Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v91, v15);
    Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(&BugCheckParameter3, v80);
LABEL_117:
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v82, v8);
    return 0LL;
  }
  xxxMNCloseHierarchy(**a1, a2, (__int64)v9, v10);
LABEL_6:
  if ( (*(_DWORD *)**a1 & 0x2000) != 0 )
  {
    FindTimer(*(_QWORD *)(**a1 + 16), 65534LL, 0, 1, 0LL);
    *(_DWORD *)**a1 &= ~0x2000u;
  }
  v16 = MNGetpItemFromIndex(*(_QWORD *)(**a1 + 40), *(_DWORD *)(**a1 + 80));
  v19 = v16;
  if ( !v16 || !*(_QWORD *)(v16 + 16) )
    goto LABEL_111;
  v18 = **a1;
  if ( (*(_DWORD *)v18 & 0x800) == 0 )
  {
    v18 = **a1;
    if ( *(_QWORD *)(v18 + 8) )
    {
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v95, *(_QWORD *)(**a1 + 8));
      v92 = **(_QWORD **)(v19 + 16);
      xxxSendMessage(*(struct tagWND **)(**a1 + 8), 0x117u);
      v110 = 1;
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v95, v20);
      v2 = 0;
    }
  }
  if ( (*(_DWORD *)(a2 + 8) & 4) != 0 )
  {
    v17 = **a1;
    v18 = *(_QWORD *)(*(_QWORD *)(v17 + 40) + 40LL);
    if ( *(_DWORD *)(v17 + 80) >= *(_DWORD *)(v18 + 44) )
      goto LABEL_108;
    v17 = *(_QWORD *)(**a1 + 40);
    v21 = (__int64 *)(*(_QWORD *)(v17 + 88) + 96LL * *(int *)(**a1 + 80));
    v18 = *v21;
    if ( (*(_DWORD *)(*v21 + 4) & 3) != 0 || (v17 = v21[2]) == 0 || !*(_DWORD *)(*(_QWORD *)(v17 + 40) + 44LL) )
    {
      v5 = 0LL;
      goto LABEL_108;
    }
    v22 = *(_OWORD *)(v18 + 16);
    v100 = *(_OWORD *)v18;
    v23 = *(_OWORD *)(v18 + 64);
    v102 = *((_QWORD *)&v22 + 1);
    v103 = v23;
    v101 = v17;
    Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)v91, v17);
    if ( *(_QWORD *)(**a1 + 8) )
    {
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v104, *(_QWORD *)(**a1 + 8));
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 288LL) & 0xF) == 2
        || (v25 = *(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL), (*(_BYTE *)(v25 + 288) & 0xF) == 3) )
      {
        v26 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 256LL));
        v11 = *(_QWORD *)GetMonitorRectForWindow((__int64)v94, v26, *(const struct tagWND **)(**a1 + 16));
        v12 = HIDWORD(v11);
      }
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v25);
      if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
      {
        v29 = PsGetCurrentProcessWin32Process(v28);
        v30 = v29;
        if ( v29 )
          v30 = -(__int64)(*(_QWORD *)v29 != 0LL) & v29;
        if ( (unsigned int)IsImmersiveAppRestricted(v30) )
          v2 = 1;
      }
      v31 = *(void **)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 32LL);
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v95, 0LL);
      Window = (struct tagWND *)xxxCreateWindowEx(
                                  385,
                                  (wchar_t *)0x8000,
                                  0x8000LL,
                                  0LL,
                                  0x80800000,
                                  v11,
                                  v12,
                                  100,
                                  100,
                                  *(struct tagWND **)(**a1 + 8),
                                  (__int64)v95,
                                  v31,
                                  0LL,
                                  0,
                                  0xA00u,
                                  v2,
                                  0LL);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v95, v33);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v104, v34);
      if ( Window )
      {
        v35 = safe_cast_fnid_to_PMENUWND(Window);
        if ( v35
          && (SetOrClrWF(0, Window, 0x408u, 1),
              SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)&v82, *(_QWORD *)(v35 + 8)),
              *v82) )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::Init(&v87, *(_QWORD *)(**a1 + 64));
          *(_DWORD *)*v82 |= 0x10000u;
          if ( **(_QWORD **)&v87.left )
          {
            *(_QWORD *)(*v82 + 72) = *(_QWORD *)(**(_QWORD **)&v87.left + 72LL);
            *(_DWORD *)*v82 |= 0x20000000u;
            v36 = *v82;
            *(_QWORD *)(**(_QWORD **)&v87.left + 72LL) = *v82;
          }
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v87, v36);
          SetOrClrWF(
            (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) >> 6) & 1,
            Window,
            0xA40u,
            1);
          v37 = *v82 + 8;
          v96[1] = *(_QWORD *)(**a1 + 8);
          v96[0] = v37;
          HMAssignmentLock(v96, 0LL);
          SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v94, v101);
          LockPopupMenu((__int64)&v82, (__int64 *)(*v82 + 40), (__int64)v94);
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v94, v38);
          v39 = *a1;
          v97[1] = Window;
          v97[0] = *v39 + 24;
          HMAssignmentLock(v97, 0LL);
          *(_DWORD *)(**a1 + 84) = *(_DWORD *)(**a1 + 80);
          v40 = *v82 + 32;
          v98[1] = *(_QWORD *)(**a1 + 16);
          v98[0] = v40;
          HMAssignmentLock(v98, 0LL);
          *(_QWORD *)(*v82 + 64) = *(_QWORD *)(**a1 + 64);
          *(_DWORD *)*v82 ^= (*(_DWORD *)**a1 ^ *(_DWORD *)*v82) & 2;
          v41 = (_DWORD *)**a1;
          v42 = (_DWORD *)*v82;
          v43 = *(_DWORD *)*v82;
          v110 = 0;
          *v42 = v43 ^ (*v41 ^ v43) & 4;
          *(_DWORD *)*v82 ^= (*(_DWORD *)**a1 ^ *(_DWORD *)*v82) & 0x800;
          *(_DWORD *)*v82 |= 0x200000u;
          *(_DWORD *)*v82 ^= (*(_DWORD *)**a1 ^ *(_DWORD *)*v82) & 0x400000;
          *(_DWORD *)*v82 ^= (*(_DWORD *)**a1 ^ *(_DWORD *)*v82) & 0x10;
          v44 = (_DWORD *)*v82;
          *(_DWORD *)*v82 = *(_DWORD *)**a1 ^ (*(_DWORD *)*v82 ^ *(_DWORD *)**a1) & 0x7FFFFFFF;
          v45 = *(_QWORD *)(*(_QWORD *)(*v82 + 40) + 40LL);
          if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
            *(_DWORD *)(v45 + 40) |= 4u;
          else
            *(_DWORD *)(v45 + 40) &= ~4u;
          *(_DWORD *)*v82 &= ~0x1000u;
          if ( (unsigned int)MNIsUAHMenu(*(struct tagMENU **)(*v82 + 40), (__int64)v44)
            && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v82 + 40) + 40LL) + 40LL) & 1) != 0 )
          {
            MNRefreshUAHCachedSizes(*(_QWORD *)(*v82 + 40));
          }
          Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)&BugCheckParameter3, (__int64)Window);
          if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)Window + 2) + 464LL) + 808LL) & 0x100000) != 0
            || (v46 = Window, (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 288LL) & 0xF) == 2)
            && (_bittest((const signed __int32 *)(*(_QWORD *)(**a1 + 16) + 380LL), 0x14u)
             || ((*(_DWORD *)**a1 & 2) != 0 || (*(_DWORD *)**a1 & 4) != 0)
             && (v46 = Window, (*(_DWORD *)(*(_QWORD *)(**a1 + 16) + 380LL) & 0x80000) != 0)) )
          {
            SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v94, *(_QWORD *)(*v82 + 40));
            v47 = 0LL;
            v46 = Window;
            while ( (unsigned int)v47 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v94[0] + 40LL) + 44LL) )
            {
              if ( (**(_DWORD **)(96LL * (int)v47 + *(_QWORD *)(*(_QWORD *)v94[0] + 88LL)) & 0x100) != 0
                || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v94[0] + 88LL) + 96LL * (int)v47) + 96LL) == -1LL )
              {
                goto LABEL_55;
              }
              v47 = (unsigned int)(v47 + 1);
            }
            xxxEnableChildWindowDpiMessageX(Window, 1);
LABEL_55:
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v94, v47);
          }
          v48 = *((_QWORD *)v46 + 5);
          v49 = *(_DWORD *)(v48 + 288) & 0xF;
          if ( v49 == 3 )
          {
            WindowDpiLastNotify = (*(_DWORD *)(v48 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v48 + 232) & 0x400) != 0 )
          {
            WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)v46);
          }
          else if ( !v49
                 && (v51 = *(_QWORD *)(*((_QWORD *)Window + 2) + 496LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v51 + 8) + 64LL) & 1) != 0 )
          {
            WindowDpiLastNotify = 96;
          }
          else
          {
            WindowDpiLastNotify = *(_WORD *)(*(_QWORD *)(*((_QWORD *)Window + 2) + 464LL) + 272LL);
          }
          if ( WindowDpiLastNotify != *(_WORD *)(*(_QWORD *)(*v82 + 40) + 76LL) )
          {
            *(_WORD *)(*(_QWORD *)(*v82 + 40) + 76LL) = WindowDpiLastNotify;
            MNClearCachedPopupSizes(*(_QWORD *)(*v82 + 40));
          }
          if ( (unsigned int)xxxSendMessage(v46, 0x1E2u) )
          {
            v53 = **a1;
            if ( *(_QWORD *)(v53 + 40) )
            {
              if ( MNIspItemValid(*(_QWORD *)(**a1 + 40), (__int64)v21) )
              {
                v55 = (unsigned __int16)v54 + 6;
                *(_DWORD *)**a1 |= 0x20u;
                v56 = xxxMNPositionHierarchy(
                        (_DWORD)a1,
                        (_DWORD)v21,
                        v55,
                        (unsigned int)HIWORD(v54) + 6,
                        (__int64)&v108,
                        (__int64)&v109,
                        (__int64)&v84);
                *(_DWORD *)*v82 ^= (*(_DWORD *)*v82 ^ (v56 << 23)) & 0xF800000;
                if ( (*(_DWORD *)**a1 & 1) != 0 && (_GetAsyncKeyState(1LL) & 0x8000u) != 0LL )
                {
                  v57 = (_DWORD *)*((_QWORD *)v46 + 5);
                  v87 = 0LL;
                  v58 = v57[23];
                  v93[2] = v57[24] + v108 - v57[22];
                  v59 = v109 - v58 + v57[25];
                  v93[0] = v108;
                  v93[3] = v59;
                  v93[1] = v109;
                  v60 = *a1;
                  v61 = *a1;
                  v88[0] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) + v103;
                  v62 = *v61;
                  v63 = DWORD1(v103) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v60 + 16) + 40LL) + 92LL);
                  v89 = DWORD2(v103) + v88[0];
                  v88[1] = v63;
                  v90 = v63 + HIDWORD(v103);
                  SmartObjStackRefBase<tagPOPUPMENU>::Init(v105, v62);
                  MNGetPopupBoundsRect((__int64)v105, v84, &v87, 0);
                  if ( (unsigned int)IntersectRect(v93, v93, v88) )
                  {
                    v64 = v55 + v103 + DWORD2(v103) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
                    if ( v64 > v87.right )
                      v64 = 0;
                    v65 = v103 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - v55;
                    if ( v65 < v87.left )
                      v65 = 0;
                    if ( (GetMenuRightAlignHint() || (v100 & 0x2000) != 0) && v65 || !v64 )
                    {
                      v108 = v103 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - v55;
                      v66 = (_DWORD *)*v82;
                      v67 = *(_DWORD *)*v82 & 0xF07FFFFF | 0x1000000;
                    }
                    else
                    {
                      v108 = v103 + DWORD2(v103) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
                      v66 = (_DWORD *)*v82;
                      v67 = *(_DWORD *)*v82 & 0xF07FFFFF | 0x800000;
                    }
                    *v66 = v67;
                    if ( v108 <= v87.left )
                    {
                      v108 = v89;
                      *(_DWORD *)*v82 = *(_DWORD *)*v82 & 0xF07FFFFF | 0x1000000;
                    }
                  }
                }
                if ( (*(_DWORD *)**a1 & 1) != 0 )
                {
                  if ( (*(_DWORD *)**a1 & 0x400) == 0 )
                    *(_DWORD *)*v82 |= 0x8000000u;
                  if ( (*(_DWORD *)**a1 & 0x10) != 0 || (*(_DWORD *)*v82 & 0xF800000) == 0x1000000 )
                    *(_DWORD *)*v82 |= 0x10u;
                  *(_DWORD *)**a1 |= 0x400u;
                }
                else
                {
                  *(_DWORD *)*v82 |= 0x8000000u;
                  if ( (*(_DWORD *)*v82 & 0xF800000) == 0x1000000 )
                    *(_DWORD *)*v82 |= 0x10u;
                }
                v68 = *a1;
                v99[1] = v46;
                v99[0] = *(_QWORD *)(*v68 + 64) + 56LL;
                HMAssignmentLock(v99, 0LL);
                if ( *(_QWORD *)(*v82 + 8) )
                {
                  Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v106, *(_QWORD *)(*v82 + 8));
                  xxxInternalUpdateWindow(*(struct tagWND **)(*v82 + 8), 1u);
                  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v106, v71);
                }
                if ( (*(_DWORD *)(a2 + 8) & 0x400) != 0 )
                {
                  v84 = *(_QWORD *)v46;
                  xxxUserModeCallback(100, (unsigned int)&v84, 8, v70, v81);
                }
                xxxPlayEventSound(5LL, v69);
                if ( (W32GetCurrentThreadDpiAwarenessContext(v72) & 0xF) == 2 )
                  *(_DWORD *)(*((_QWORD *)v46 + 5) + 288LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL)
                                                                        + 288LL);
                xxxSetWindowPos(
                  v46,
                  ((*(_DWORD *)(a2 + 8) & 0x100) != 0) - 1LL,
                  (unsigned int)v108,
                  v109,
                  0,
                  0,
                  ~(unsigned __int8)(*(_DWORD *)(a2 + 8) >> 4) & 0x10 | 0x241);
                xxxInheritWindowMonitor(v46, *(struct tagWND **)(**a1 + 16), 1);
                xxxWindowEvent(6u, v46, -4, 0, 0);
                if ( *(_DWORD *)(a2 + 20) == 1 )
                  xxxSendMessage(v46, 0x1E5u);
                xxxInternalUpdateWindow(v46, 1u);
                v5 = (__int64)v46;
                Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(&BugCheckParameter3, v73);
                goto LABEL_33;
              }
            }
          }
          v74 = PtiCurrent(v53, v52);
          v75 = Win32HM_UnlockFromThread<1>((ULONG_PTR)v74, &BugCheckParameter3);
          BugCheckParameter3 = -1LL;
          v86 = 0LL;
          if ( v75 )
            xxxDestroyWindow(v46);
          HMAssignmentUnlock(**a1 + 24);
        }
        else
        {
          xxxDestroyWindow(Window);
        }
      }
      v5 = 0LL;
    }
    else
    {
      v5 = 0LL;
    }
LABEL_33:
    Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v91, v24);
    goto LABEL_108;
  }
  v5 = -1LL;
LABEL_108:
  if ( v110 )
  {
    v18 = **a1;
    if ( *(_QWORD *)(v18 + 8) )
    {
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v107, *(_QWORD *)(**a1 + 8));
      xxxSendMessage(*(struct tagWND **)(**a1 + 8), 0x125u);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)v107, v76);
    }
  }
LABEL_111:
  if ( v91[0] != -1LL )
  {
    v77 = PtiCurrent(v18, v17);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v77, v91);
  }
  if ( BugCheckParameter3 != -1LL )
  {
    v78 = PtiCurrent(v18, v17);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v78, &BugCheckParameter3);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v82, v17);
  return v5;
}
