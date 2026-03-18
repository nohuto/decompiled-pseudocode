/*
 * XREFs of xxxSetClassLongPtr @ 0x1400C2140
 * Callers:
 *     NtUserSetClassLongPtr @ 0x14029E4A0 (NtUserSetClassLongPtr.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1400B33E0 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x1400B3A90 (--4-$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z.c)
 *     xxxSetClassData @ 0x1400C2294 (xxxSetClassData.c)
 */

__int64 __fastcall xxxSetClassLongPtr(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  struct tagTHREADINFO *v6; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rdx
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 i; // rdx
  __int64 **v16; // [rsp+20h] [rbp-10h] BYREF
  __int64 v17; // [rsp+28h] [rbp-8h] BYREF

  v3 = (int)a2;
  v6 = PtiCurrent((__int64)a1, a2);
  v16 = (__int64 **)gSmartObjNullRef;
  v17 = *((_QWORD *)v6 + 209);
  *((_QWORD *)v6 + 209) = &v17;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(&v17);
  v8 = 0LL;
  v9 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) != v9 )
  {
    v12 = 5;
LABEL_8:
    UserSetLastError(v12);
    goto LABEL_6;
  }
  if ( (int)v3 < 0 )
  {
    v8 = xxxSetClassData(a1);
    goto LABEL_6;
  }
  SmartObjStackRefBase<tagCLS>::operator=((__int64 *)&v16, *(_QWORD *)(*((_QWORD *)a1 + 17) + 56LL));
  if ( (int)v3 + 8 < (unsigned int)v3 || (unsigned int)(v3 + 8) > *(_DWORD *)((*v16)[1] + 12) )
  {
    v12 = 1413;
    goto LABEL_8;
  }
  v13 = (*v16)[1];
  v14 = *(_QWORD *)(v13 + v3 + 88);
  *(_QWORD *)(v13 + v3 + 88) = a3;
  for ( i = (*v16)[8]; ; i = **v16 )
  {
    SmartObjStackRefBase<tagCLS>::operator=((__int64 *)&v16, i);
    if ( !*v16 )
      break;
    *(_QWORD *)((*v16)[1] + v3 + 88) = a3;
  }
  v8 = v14;
LABEL_6:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64 *)&v16, v10);
  return v8;
}
