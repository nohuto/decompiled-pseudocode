/*
 * XREFs of xxxSetSysMenu @ 0x140046248
 * Callers:
 *     xxxTranslateAccelerator @ 0x14016E680 (xxxTranslateAccelerator.c)
 *     xxxHandleNCMouseGuys @ 0x1401BAF84 (xxxHandleNCMouseGuys.c)
 *     xxxGetSysMenu @ 0x1401BC884 (xxxGetSysMenu.c)
 *     NtUserSetSysMenu @ 0x14024E520 (NtUserSetSysMenu.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140036D34 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     ?_SetCloseDefault@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x140045878 (-_SetCloseDefault@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxEnableMenuItem @ 0x140045E50 (xxxEnableMenuItem.c)
 *     _GetSubMenu @ 0x1400460A4 (_GetSubMenu.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     _SetMenuDefaultItem @ 0x1400464EC (_SetMenuDefaultItem.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140047180 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxGetSysMenuPtr @ 0x140047518 (xxxGetSysMenuPtr.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140049FCC (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     IsSmallerThanScreen @ 0x1401A8004 (IsSmallerThanScreen.c)
 */

__int64 __fastcall xxxSetSysMenu(struct tagWND *a1)
{
  __int64 SysMenuPtr; // rax
  int v3; // r12d
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 SubMenu; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  int v11; // r15d
  int v12; // esi
  int v13; // r13d
  unsigned int v14; // r14d
  __int64 v15; // rcx
  __int64 v16; // rdx
  char v17; // cl
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct tagTHREADINFO *v20; // rax
  char v22; // al
  __int64 v23; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 *v25[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v26; // [rsp+40h] [rbp-10h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v25);
  SysMenuPtr = xxxGetSysMenuPtr(a1);
  v3 = 0;
  v26 = 0LL;
  v4 = SysMenuPtr;
  if ( SysMenuPtr != *v25[0] )
  {
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v25);
    if ( v4 )
    {
      v25[0] = *(__int64 **)(v4 + 152);
      ++*((_DWORD *)v25[0] + 2);
    }
    else
    {
      v25[0] = (__int64 *)gSmartObjNullRef;
    }
  }
  if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v25) )
  {
    v6 = v26;
    if ( !v26 )
      v6 = *v25[0];
    SubMenu = GetSubMenu(v6, v5);
    v26 = 0LL;
    if ( SubMenu == *v25[0]
      || ((SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v25), !SubMenu)
        ? (v25[0] = (__int64 *)gSmartObjNullRef)
        : (__int64 *)(v25[0] = *(__int64 **)(SubMenu + 152), ++*((_DWORD *)v25[0] + 2)),
          (v8 = v26) == 0) )
    {
      if ( !*v25[0] )
        goto LABEL_26;
      v8 = *v25[0];
    }
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, v8);
    v9 = *((_QWORD *)a1 + 5);
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 3;
    v14 = 61536;
    if ( (*(_BYTE *)(v9 + 31) & 0x20) != 0 )
    {
      v13 = 0;
      v3 = 3;
      v12 = 3;
      v14 = 61728;
      v10 = IsTrayWindow(a1, 1LL) != 0 ? 3 : 0;
    }
    else if ( (*(_BYTE *)(v9 + 30) & 2) == 0 )
    {
      v3 = 3;
    }
    v15 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v15 + 30) & 1) != 0 )
    {
      v22 = *(_BYTE *)(v15 + 31);
      if ( (v22 & 1) == 0 )
        goto LABEL_18;
      v10 = 3;
      v13 = 0;
      if ( (v22 & 0x40) == 0 && (unsigned int)IsSmallerThanScreen(a1) )
        v10 = 0;
      v12 = 3;
    }
    v11 = 3;
LABEL_18:
    v16 = *((_QWORD *)a1 + 5);
    v17 = *(_BYTE *)(v16 + 30);
    if ( (v17 & 4) == 0 )
      v12 = 3;
    if ( (*(_BYTE *)(v16 + 30) & 0xC0) != 0x40 && (*(_BYTE *)(v16 + 24) & 1) == 0 || (v17 & 7) != 0 )
    {
      xxxEnableMenuItem(v25, 0xF000u, v12);
      xxxEnableMenuItem(v25, 0xF020u, v3);
      xxxEnableMenuItem(v25, 0xF030u, v11);
      xxxEnableMenuItem(v25, 0xF120u, v13);
    }
    xxxEnableMenuItem(v25, 0xF010u, v10);
    if ( v14 == 61536 )
    {
      _SetCloseDefault(v25);
    }
    else
    {
      v23 = v26;
      if ( !v26 )
        v23 = *v25[0];
      SetMenuDefaultItem(v23, v14, 0LL);
    }
    v20 = PtiCurrent(v19, v18);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v20, BugCheckParameter3);
  }
LABEL_26:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v25);
  return 1LL;
}
