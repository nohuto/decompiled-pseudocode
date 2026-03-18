/*
 * XREFs of xxxSetMenuInfo @ 0x1401B2AB8
 * Callers:
 *     NtUserThunkedMenuInfo @ 0x1401B24D0 (NtUserThunkedMenuInfo.c)
 *     xxxLoadSysMenu @ 0x1401B260C (xxxLoadSysMenu.c)
 *     xxxSetMenuInfo @ 0x1401B2AB8 (xxxSetMenuInfo.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x140034CF8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x140034D4C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     MNGetpItemFromIndex @ 0x140042B84 (MNGetpItemFromIndex.c)
 *     MNGetPopupFromMenu @ 0x140045940 (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x140045B70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x140045BC0 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxSetMenuInfo @ 0x1401B2AB8 (xxxSetMenuInfo.c)
 *     xxxMNUpdateShownMenu @ 0x1402E23B4 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxSetMenuInfo(__int64 **a1, __int64 a2)
{
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rdx
  int v6; // r8d
  int v7; // r12d
  int v8; // r13d
  unsigned int v9; // r15d
  __int64 *v10; // rcx
  unsigned int v11; // r14d
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct tagTHREADINFO *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v22; // [rsp+20h] [rbp-40h] BYREF
  __int64 v23; // [rsp+28h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v25[4]; // [rsp+40h] [rbp-20h] BYREF

  v4 = PtiCurrent((__int64)a1, a2);
  v22 = gSmartObjNullRef;
  v23 = *((_QWORD *)v4 + 209);
  v6 = 0;
  *((_QWORD *)v4 + 209) = &v23;
  v7 = 0;
  v8 = 0;
  v9 = 1;
  if ( (*(_DWORD *)(a2 + 4) & 0x10) != 0 )
  {
    v7 = 1;
    v5 = (*(_DWORD *)(a2 + 8) ^ *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL)) & 0xFC000000;
    *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) ^= v5;
  }
  if ( (*(_DWORD *)(a2 + 4) & 1) != 0 )
  {
    v7 = 1;
    v5 = *(unsigned int *)(a2 + 12);
    *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 52LL) = v5;
  }
  if ( (*(_DWORD *)(a2 + 4) & 2) != 0 )
  {
    v8 = 1;
    v5 = *(_QWORD *)(**a1 + 40);
    *(_QWORD *)(v5 + 24) = *(_QWORD *)(a2 + 16);
    if ( (*(_BYTE *)(**a1 + 124) & 3) != 0 )
      v9 = 5;
  }
  if ( (*(_DWORD *)(a2 + 4) & 4) != 0 )
  {
    v5 = *(_QWORD *)(**a1 + 40);
    *(_DWORD *)(v5 + 48) = *(_DWORD *)(a2 + 24);
  }
  if ( (*(_DWORD *)(a2 + 4) & 8) != 0 )
  {
    v5 = *(_QWORD *)(**a1 + 40);
    *(_QWORD *)(v5 + 16) = *(_QWORD *)(a2 + 32);
  }
  if ( *(int *)(a2 + 4) < 0 )
  {
    v10 = a1[2];
    v11 = 0;
    if ( !v10 )
      v10 = (__int64 *)**a1;
    if ( *(_DWORD *)(v10[5] + 44) )
      v12 = v10[11];
    else
      v12 = 0LL;
    if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 44LL) )
    {
      do
      {
        if ( !v12 )
          break;
        v13 = *(_QWORD *)(v12 + 16);
        if ( v13 )
        {
          SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v25, v13);
          Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(
            BugCheckParameter3,
            *(_QWORD *)(v12 + 16));
          xxxSetMenuInfo(v25, a2);
          v16 = PtiCurrent(v15, v14);
          Win32HM_UnlockFromThread<1>((ULONG_PTR)v16, BugCheckParameter3);
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v25, v17);
        }
        v18 = (__int64)a1[2];
        ++v11;
        if ( !v18 )
          v18 = **a1;
        v12 = MNGetpItemFromIndex(v18, v11);
        v5 = **a1;
      }
      while ( v11 < *(_DWORD *)(*(_QWORD *)(v5 + 40) + 44LL) );
    }
  }
  if ( v7 )
  {
    *(_DWORD *)(**a1 + 64) = v6;
    *(_DWORD *)(**a1 + 68) = v6;
  }
  else if ( !v8 )
  {
    goto LABEL_30;
  }
  v19 = (__int64)a1[2];
  if ( !v19 )
    v19 = **a1;
  v20 = MNGetPopupFromMenu(v19, 0LL);
  if ( v20 != *(_QWORD *)v22 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(&v22);
    if ( v20 )
    {
      v22 = *(_QWORD *)(v20 + 88);
      ++*(_DWORD *)(v22 + 8);
    }
    else
    {
      v22 = gSmartObjNullRef;
    }
  }
  if ( *(_QWORD *)v22 )
    xxxMNUpdateShownMenu(&v22, 0LL, v9);
LABEL_30:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v22, v5);
  return 1LL;
}
