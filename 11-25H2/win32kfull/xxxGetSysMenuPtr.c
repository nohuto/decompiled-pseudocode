/*
 * XREFs of xxxGetSysMenuPtr @ 0x140047518
 * Callers:
 *     xxxMNInvertItem @ 0x14003E628 (xxxMNInvertItem.c)
 *     xxxSetSysMenu @ 0x140046248 (xxxSetSysMenu.c)
 *     xxxMNCanClose @ 0x1400471A0 (xxxMNCanClose.c)
 *     xxxMNLoop @ 0x14015A654 (xxxMNLoop.c)
 *     xxxHandleNCMouseGuys @ 0x1401BAF84 (xxxHandleNCMouseGuys.c)
 *     xxxGetSysMenu @ 0x1401BC884 (xxxGetSysMenu.c)
 *     NtUserGetSysMenuOffset @ 0x140298860 (NtUserGetSysMenuOffset.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140049F78 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x140049FCC (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     xxxLoadSysDesktopMenu @ 0x1401B23E8 (xxxLoadSysDesktopMenu.c)
 */

__int64 __fastcall xxxGetSysMenuPtr(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  bool v4; // zf
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v8; // rdi
  __int64 SysDesktopMenu; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v11; // [rsp+30h] [rbp-10h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v10);
  v4 = (*(_BYTE *)(a1[5] + 30LL) & 8) == 0;
  v11 = 0LL;
  if ( v4 )
  {
    if ( !*(_QWORD *)v10[0] )
      goto LABEL_7;
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v10);
    v10[0] = gSmartObjNullRef;
LABEL_11:
    v6 = v11;
    if ( v11 )
      goto LABEL_8;
    goto LABEL_7;
  }
  v5 = a1[20];
  if ( v5 != *(_QWORD *)v10[0] )
  {
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v10);
    if ( v5 )
    {
      v10[0] = *(_QWORD *)(v5 + 152);
      ++*(_DWORD *)(v10[0] + 8LL);
    }
    else
    {
      v10[0] = gSmartObjNullRef;
    }
    if ( v11 )
      goto LABEL_11;
  }
  if ( !*(_QWORD *)v10[0] )
  {
    v8 = *(_QWORD *)(a1[3] + 56LL);
    v11 = 0LL;
    if ( v8 == *(_QWORD *)v10[0]
      || ((SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v10), !v8)
        ? (v10[0] = gSmartObjNullRef)
        : (v10[0] = *(_QWORD *)(v8 + 152), ++*(_DWORD *)(v10[0] + 8LL)),
          !v11) )
    {
      if ( *(_QWORD *)v10[0] )
        goto LABEL_7;
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v3, v2) + 132, 0, 0) & 5) == 0 )
      {
        SysDesktopMenu = xxxLoadSysDesktopMenu(a1[3] + 56LL, 16LL);
        v11 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v10, SysDesktopMenu);
      }
    }
    goto LABEL_11;
  }
LABEL_7:
  v6 = *(_QWORD *)v10[0];
LABEL_8:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v10);
  return v6;
}
