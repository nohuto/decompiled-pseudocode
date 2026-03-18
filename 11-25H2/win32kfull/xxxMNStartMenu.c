/*
 * XREFs of xxxMNStartMenu @ 0x14015D464
 * Callers:
 *     xxxMNLoop @ 0x14015A654 (xxxMNLoop.c)
 *     xxxTrackPopupMenuEx @ 0x14015AE18 (xxxTrackPopupMenuEx.c)
 *     xxxMNKeyFilter @ 0x1402EC7F8 (xxxMNKeyFilter.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendMessage @ 0x140030230 (xxxSendMessage.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140034D4C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1Win32HMThreadLockAlwaysMenuNoModify@@QEAA@XZ @ 0x14003D8E0 (--1Win32HMThreadLockAlwaysMenuNoModify@@QEAA@XZ.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x14003DA44 (xxxMNRecomputeBarIfNeeded.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140047180 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     LockPopupMenu @ 0x14015AD40 (LockPopupMenu.c)
 *     xxxGetSysMenu @ 0x1401BC884 (xxxGetSysMenu.c)
 *     ??0Win32HMThreadLockAlwaysMenuNoModify@@QEAA@PEAUtagMENU@@@Z @ 0x1401E7918 (--0Win32HMThreadLockAlwaysMenuNoModify@@QEAA@PEAUtagMENU@@@Z.c)
 *     MNPositionSysMenu @ 0x140209594 (MNPositionSysMenu.c)
 *     xxxMNSetCapture @ 0x1402677EC (xxxMNSetCapture.c)
 *     xxxMNReleaseCapture @ 0x14026AD74 (xxxMNReleaseCapture.c)
 *     ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1402B58D8 (-xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z.c)
 *     xxxClientLoadOLE @ 0x1402E97B8 (xxxClientLoadOLE.c)
 */

_BOOL8 __fastcall xxxMNStartMenu(unsigned int ***a1, __int64 a2, int a3)
{
  __int64 v6; // rdx
  struct tagWND *v7; // rsi
  unsigned int v8; // ecx
  struct tagMENU *InitMenuParam; // rax
  __int64 v10; // rdx
  bool v12; // zf
  __int64 SysMenu; // rax
  struct tagMENU *v14; // rax
  __int64 v15; // r8
  int v16; // r9d
  __int64 v17; // rdx
  int v18; // r8d
  unsigned int *v19; // rcx
  BOOL v20; // ebx
  __int64 v21; // rdx
  struct tagTHREADINFO *v22; // rax
  __int64 v23; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v25[16]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v26[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v27; // [rsp+60h] [rbp-20h]
  __int64 v28[3]; // [rsp+68h] [rbp-18h] BYREF
  int v29; // [rsp+A0h] [rbp+20h] BYREF

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v26, a2);
  if ( (***a1 & 0x8000) != 0 || !*((_QWORD *)**a1 + 1) )
    goto LABEL_6;
  v7 = (struct tagWND *)*((_QWORD *)**a1 + 1);
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v7);
  *(_DWORD *)(a2 + 8) |= 1u;
  *(_DWORD *)(a2 + 20) = a3;
  v8 = ((unsigned __int16)_GetKeyState(1LL) >> 9) & 0x7FFFC0 | *(_DWORD *)(a2 + 8) & 0xFFFFFFBF;
  *(_DWORD *)(a2 + 8) = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(v8 >> 3)) & 8;
  xxxMNSetCapture(a1, a2);
  xxxSendMessage(v7, 0x20u);
  if ( (***a1 & 1) != 0 )
  {
    v29 = 0;
    InitMenuParam = xxxGetInitMenuParam(v7, &v29);
    v27 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v26, (__int64)InitMenuParam);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v26) )
    {
      *(_DWORD *)(a2 + 8) &= ~1u;
      xxxMNReleaseCapture(a2);
      Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v10);
LABEL_6:
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v26, v6);
      return 0LL;
    }
    LockPopupMenu((__int64)a1, (__int64 *)**a1 + 5, (__int64)v26);
    v12 = v29 == 0;
    ***a1 = (v29 != 0 ? 4 : 0) | ***a1 & 0xFFFFFFFB;
    if ( v12 )
    {
      SysMenu = xxxGetSysMenu(v7, 0LL);
      v27 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=((__int64)v26, SysMenu);
      LockPopupMenu((__int64)a1, (__int64 *)**a1 + 6, (__int64)v26);
    }
  }
  *(_DWORD *)(a2 + 8) ^= ((unsigned __int8)*(_DWORD *)(a2 + 8) ^ (unsigned __int8)(***a1 >> 1)) & 2;
  if ( (***a1 & 0x800) == 0 )
  {
    if ( (***a1 & 8) != 0 && (***a1 & 4) != 0 )
      v14 = xxxGetInitMenuParam(v7, 0LL);
    else
      v14 = (struct tagMENU *)*((_QWORD *)**a1 + 5);
    v27 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v26, (__int64)v14);
    SmartObjStackRef<tagMENU>::operator==((__int64)v26);
    xxxSendMessage(v7, 0x116u);
  }
  if ( (***a1 & 8) == 0 )
  {
    if ( (***a1 & 4) == 0 )
    {
      if ( (***a1 & 1) == 0 || !*((_QWORD *)**a1 + 5) )
        goto LABEL_21;
      Win32HMThreadLockAlwaysMenuNoModify::Win32HMThreadLockAlwaysMenuNoModify(
        (Win32HMThreadLockAlwaysMenuNoModify *)v25,
        *((struct tagMENU **)**a1 + 5));
      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v28, *((_QWORD *)**a1 + 5));
      xxxMNRecomputeBarIfNeeded((__int64)v7, v28, v15, v16);
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v28, v17);
      Win32HMThreadLockAlwaysMenuNoModify::~Win32HMThreadLockAlwaysMenuNoModify((Win32HMThreadLockAlwaysMenuNoModify *)v25);
    }
    MNPositionSysMenu(v7);
  }
LABEL_21:
  if ( (***a1 & 0x8000) == 0 && *((_QWORD *)**a1 + 5) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)**a1 + 5) + 40LL) + 40LL) & 0x40000000) != 0 )
      *(_DWORD *)(a2 + 8) |= 0x100u;
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)**a1 + 5) + 40LL) + 40LL) & 0x20000000) != 0
      && (int)xxxClientLoadOLE() >= 0 )
    {
      *(_DWORD *)(a2 + 8) |= 0x400u;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)**a1 + 5) + 40LL) + 40LL) & 0x10000000) != 0 )
      *(_DWORD *)(a2 + 8) |= 0x800u;
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)**a1 + 5) + 40LL) + 40LL) & 0x8000000) != 0 )
      *(_DWORD *)(a2 + 8) |= 0x20000u;
  }
  if ( (***a1 & 4) != 0 )
    v18 = -1;
  else
    v18 = (***a1 & 1) != 0 ? 0xFFFFFFFD : 0;
  xxxWindowEvent(4u, v7, v18, 0, 0);
  v19 = **a1;
  v20 = (*v19 & 0x8000) == 0;
  v22 = PtiCurrent((__int64)v19, v21);
  Win32HM_UnlockFromThread<1>((ULONG_PTR)v22, BugCheckParameter3);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v26, v23);
  return v20;
}
