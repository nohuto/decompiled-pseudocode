/*
 * XREFs of xxxPaintMenuBar @ 0x14003F7B0
 * Callers:
 *     NtUserPaintMenuBar @ 0x14003DEB0 (NtUserPaintMenuBar.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x140022DA4 (-IsInsideUserApiHook@@YAHXZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendUAHInitMenuMessage @ 0x14003FA78 (xxxSendUAHInitMenuMessage.c)
 *     xxxSendUAHMenuMessage @ 0x14003FB0C (xxxSendUAHMenuMessage.c)
 *     xxxMenuBarCompute @ 0x14004007C (xxxMenuBarCompute.c)
 *     xxxMenuDraw @ 0x140043508 (xxxMenuDraw.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x140048F9C (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GrePatBlt @ 0x14009F4D0 (GrePatBlt.c)
 */

__int64 __fastcall xxxPaintMenuBar(__int64 a1, HDC a2, int a3, int a4, int a5, char a6)
{
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagMENU *v14; // rsi
  struct tagTHREADINFO *v15; // rax
  __int64 v16; // rax
  int v17; // r14d
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct tagTHREADINFO *v23; // rax
  struct tagMENU *v24; // rcx
  __int64 v25; // rdx
  struct tagMENU *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct tagTHREADINFO *v29; // rax
  struct tagMENU *v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rsi
  struct tagMENU *v34; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-40h] BYREF
  ULONG_PTR v36[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v37[2]; // [rsp+50h] [rbp-20h] BYREF
  struct tagMENU *v38; // [rsp+60h] [rbp-10h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v37);
  v10 = *(_QWORD *)(a1 + 168);
  v11 = 0;
  v38 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v37, v10);
  v14 = v38;
  if ( !v38 )
  {
    if ( !*(_QWORD *)v37[0] )
      goto LABEL_17;
    v14 = *(struct tagMENU **)v37[0];
  }
  v15 = PtiCurrent(v13, v12);
  Win32HM_LockIntoThread<0>(v15, v14, BugCheckParameter3);
  *(_DWORD *)(*((_QWORD *)v14 + 5) + 40LL) |= 0x200u;
  v16 = *(_QWORD *)(*(_QWORD *)v37[0] + 40LL);
  if ( (a6 & 1) != 0 )
    *(_DWORD *)(v16 + 40) &= ~0x10u;
  else
    *(_DWORD *)(v16 + 40) |= 0x10u;
  v17 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 96LL) - *(_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL) - a3 - a4;
  v18 = *(_QWORD *)(*(_QWORD *)v37[0] + 80LL);
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v36, v18);
  if ( a1 != *(_QWORD *)(*(_QWORD *)v37[0] + 80LL)
    || !*(_DWORD *)(*(_QWORD *)v37[0] + 64LL)
    || (v20 = *(_QWORD *)v37[0], !*(_DWORD *)(*(_QWORD *)v37[0] + 68LL)) )
  {
    xxxMenuBarCompute((unsigned int)v37, a1, a5, a3, v17);
  }
  if ( IsInsideUserApiHook(v20, v19) && v18 && (unsigned int)xxxSendUAHInitMenuMessage(v18, v37, a2) )
  {
    v31 = v38;
    if ( !v38 )
      v31 = *(struct tagMENU **)v37[0];
    xxxSendUAHMenuMessage(v18, 145LL, v31, a2);
  }
  v23 = PtiCurrent(v22, v21);
  Win32HM_UnlockFromThread<1>((ULONG_PTR)v23, v36);
  v24 = v38;
  if ( !v38 )
    v24 = *(struct tagMENU **)v37[0];
  if ( (unsigned int)MNIsUAHMenu(v24) )
  {
    v26 = v38;
    if ( !v38 )
      v26 = *(struct tagMENU **)v37[0];
    xxxMenuDraw(a2, v26);
  }
  else
  {
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v37[0] + 40LL) + 24LL) )
      v32 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v37[0] + 40LL) + 24LL);
    else
      v32 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(*(_QWORD *)v37[0], v25) + 19872) + 4936LL);
    v33 = GreSelectBrush(a2, v32);
    GrePatBlt(a2, a3, a5, *(_DWORD *)(*(_QWORD *)v37[0] + 64LL), *(_DWORD *)(*(_QWORD *)v37[0] + 68LL), 15728673);
    v34 = v38;
    if ( !v38 )
      v34 = *(struct tagMENU **)v37[0];
    xxxMenuDraw(a2, v34);
    GreSelectBrush(a2, v33);
  }
  v11 = *(_DWORD *)(*(_QWORD *)v37[0] + 68LL);
  v28 = *(_QWORD *)(BugCheckParameter3[1] + 40);
  *(_DWORD *)(v28 + 40) &= ~0x200u;
  v29 = PtiCurrent(v28, v27);
  Win32HM_UnlockFromThread<0>((ULONG_PTR)v29, BugCheckParameter3);
LABEL_17:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v37);
  return v11;
}
