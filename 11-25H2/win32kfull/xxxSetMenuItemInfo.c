/*
 * XREFs of xxxSetMenuItemInfo @ 0x1400468EC
 * Callers:
 *     xxxLoadSysMenu @ 0x1401B260C (xxxLoadSysMenu.c)
 *     NtUserThunkedMenuItemInfo @ 0x1402A2A70 (NtUserThunkedMenuItemInfo.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MNLookUpItem @ 0x1400476D8 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x140048FE0 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x140049828 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140049FCC (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     MakeMenuRtoL @ 0x1402EAF70 (MakeMenuRtoL.c)
 */

__int64 __fastcall xxxSetMenuItemInfo(_QWORD **a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // r12d
  struct tagTHREADINFO *v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rsi
  unsigned int v13; // ebx
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rbx
  struct tagTHREADINFO *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct tagTHREADINFO *v20; // rax
  _QWORD *v22; // rcx
  __int64 v23; // [rsp+30h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v25; // [rsp+48h] [rbp-18h] BYREF
  __int64 v26; // [rsp+50h] [rbp-10h] BYREF
  __int64 v27; // [rsp+58h] [rbp-8h]
  int v28; // [rsp+90h] [rbp+30h] BYREF

  v7 = a2;
  v9 = PtiCurrent((__int64)a1, a2);
  v25 = gSmartObjNullRef;
  v26 = *((_QWORD *)v9 + 209);
  *((_QWORD *)v9 + 209) = &v26;
  v27 = 0LL;
  v23 = *(_QWORD *)v25;
  v10 = a1[2];
  if ( !v10 )
    v10 = (_QWORD *)**a1;
  v12 = MNLookUpItem(v10, v7, a3, &v23);
  v27 = 0LL;
  v13 = 1;
  v14 = v23;
  v15 = *(_QWORD *)v25;
  if ( v23 != *(_QWORD *)v25 )
  {
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v25);
    if ( v14 )
    {
      v25 = *(_QWORD *)(v14 + 152);
      ++*(_DWORD *)(v25 + 8);
    }
    else
    {
      v15 = gSmartObjNullRef;
      v25 = gSmartObjNullRef;
    }
  }
  if ( v12 )
  {
    if ( (*(_DWORD *)(a4 + 4) & 0x10) != 0 )
    {
      if ( (*(_DWORD *)(a4 + 8) & 0x2000) != 0
        || (v13 = 0, v15 = *(unsigned int *)(*(_QWORD *)(**a1 + 40LL) + 40LL), (v15 & 0x20) != 0) )
      {
        v22 = a1[2];
        if ( !v22 )
          v22 = (_QWORD *)**a1;
        MakeMenuRtoL(v22, v13);
      }
    }
    v16 = v27;
    if ( !v27 )
      v16 = *(_QWORD *)v25;
    v17 = PtiCurrent(v15, v11);
    Win32HM_LockIntoThread<1>(v17, v16, BugCheckParameter3);
    v28 = 0;
    v13 = SetLPITEMInfoNoRedraw((unsigned int)&v25, v12, a4, a5, (__int64)&v28);
    if ( v28 )
      xxxRedrawForSetLPITEMInfo(&v25, v12);
    v20 = PtiCurrent(v19, v18);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v20, BugCheckParameter3);
  }
  else if ( a3 || v7 != 61744 )
  {
    UserSetLastError(1456);
    v13 = 0;
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(&v25);
  return v13;
}
