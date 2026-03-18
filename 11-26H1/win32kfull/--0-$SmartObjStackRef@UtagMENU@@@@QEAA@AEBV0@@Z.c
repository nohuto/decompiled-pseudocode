/*
 * XREFs of ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1401203C8
 * Callers:
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x140049CF8 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxSendMenuSelect @ 0x14012018C (xxxSendMenuSelect.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(_QWORD *a1, __int64 **a2)
{
  __int64 v4; // rdi
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdx

  v4 = **a2;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v6 = *CurrentThreadWin32Thread;
  else
    v6 = 0LL;
  v7 = a1 + 1;
  a1[1] = 0LL;
  *a1 = gSmartObjNullRef;
  if ( v4 )
  {
    *a1 = *(_QWORD *)(v4 + 152);
    ++*(_DWORD *)(*(_QWORD *)(v4 + 152) + 8LL);
  }
  *v7 = *(_QWORD *)(v6 + 1672);
  *(_QWORD *)(v6 + 1672) = v7;
  a1[2] = a2[2];
  return a1;
}
