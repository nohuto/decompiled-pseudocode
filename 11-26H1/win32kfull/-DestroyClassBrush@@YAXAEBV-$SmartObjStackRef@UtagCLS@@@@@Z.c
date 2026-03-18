/*
 * XREFs of ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x14014FD14
 * Callers:
 *     DestroyClass @ 0x14014EF4C (DestroyClass.c)
 * Callees:
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x14000EC1C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x14014FA30 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x14014FEF0 (--4-$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z.c)
 */

_QWORD *__fastcall DestroyClassBrush(__int64 **a1)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rdx
  __int64 i; // r14
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 *v11; // rbx
  __int64 j; // rdx
  __int64 **v13; // [rsp+20h] [rbp-10h] BYREF
  __int64 v14; // [rsp+28h] [rbp-8h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v4 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v4 = ((unsigned __int128)-(__int128)*(unsigned __int64 *)CurrentProcessWin32Process >> 64) & CurrentProcessWin32Process;
  v5 = PtiCurrent(v3);
  v13 = (__int64 **)gSmartObjNullRef;
  v14 = *((_QWORD *)v5 + 209);
  *((_QWORD *)v5 + 209) = &v14;
  if ( *(_QWORD *)(*(_QWORD *)(**a1 + 8) + 72LL) > 0x1FuLL )
  {
    for ( i = 0LL; (unsigned int)i < 0x1F; i = (unsigned int)(i + 1) )
    {
      v8 = **a1;
      v9 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 72LL);
      if ( v9 == *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, v6) + 19904) + 8 * i + 4696) )
        return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64 *)&v13);
    }
    SmartObjStackRefBase<tagCLS>::operator=(&v13, *(_QWORD *)(v4 + 360));
    while ( *v13 )
    {
      if ( *v13 != (__int64 *)**a1 && *(_QWORD *)((*v13)[1] + 72) == *(_QWORD *)(*(_QWORD *)(**a1 + 8) + 72LL) )
        return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64 *)&v13);
      v11 = (__int64 *)**v13;
      if ( v11 != *v13 )
      {
        SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree((__int64 *)&v13);
        if ( v11 )
        {
          v13 = (__int64 **)v11[16];
          ++*((_DWORD *)v13 + 2);
        }
        else
        {
          v13 = (__int64 **)gSmartObjNullRef;
        }
      }
    }
    for ( j = *(_QWORD *)(v4 + 352); ; j = **v13 )
    {
      SmartObjStackRefBase<tagCLS>::operator=(&v13, j);
      if ( !*v13 )
        break;
      if ( *v13 != (__int64 *)**a1 && *(_QWORD *)((*v13)[1] + 72) == *(_QWORD *)(*(_QWORD *)(**a1 + 8) + 72LL) )
        return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64 *)&v13);
    }
    GreDeleteObject(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 72LL));
  }
  return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64 *)&v13);
}
