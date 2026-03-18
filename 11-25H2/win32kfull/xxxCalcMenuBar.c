/*
 * XREFs of xxxCalcMenuBar @ 0x140050EB4
 * Callers:
 *     NtUserCalcMenuBar @ 0x140050D90 (NtUserCalcMenuBar.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxMenuBarCompute @ 0x14004007C (xxxMenuBarCompute.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 */

__int64 __fastcall xxxCalcMenuBar(__int64 a1, __int64 a2, int a3, unsigned int a4, _DWORD *a5)
{
  int v8; // esi
  __int64 v9; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  struct tagTHREADINFO *v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // rdx
  struct tagTHREADINFO *v18; // rax
  __int64 v19; // rdx
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+38h] [rbp-28h]
  __int64 v22[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h]

  v8 = a2;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v22, a2);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) != 0x40 && (v9 = *(_QWORD *)(a1 + 168)) != 0 )
  {
    v23 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v22, v9);
    v13 = v23;
    if ( !v23 )
      v13 = *(_QWORD *)v22[0];
    v14 = PtiCurrent(v12, v11);
    Win32HM_LockIntoThread<0>((__int64)v14, v13, &BugCheckParameter3);
    *(_DWORD *)(*(_QWORD *)(v13 + 40) + 40LL) |= 0x200u;
    xxxMenuBarCompute((__int64)v22, a1, a4, v8, a5[2] - *a5 - v8 - a3);
    v15 = *(_DWORD *)(*(_QWORD *)v22[0] + 68LL);
    v16 = v21;
    v17 = *(_QWORD *)(v21 + 40);
    *(_DWORD *)(v17 + 40) &= ~0x200u;
    v18 = PtiCurrent(v16, v17);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v18, &BugCheckParameter3);
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v22, v19);
    return v15;
  }
  else
  {
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v22, v9);
    return 0LL;
  }
}
