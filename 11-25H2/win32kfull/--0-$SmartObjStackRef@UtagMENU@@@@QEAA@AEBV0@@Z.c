/*
 * XREFs of ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x14003F404
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     xxxSendMenuSelect @ 0x14003F1D4 (xxxSendMenuSelect.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x140046AC4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(_QWORD *a1, __int64 **a2)
{
  __int64 v4; // rdi
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdx

  v4 = **a2;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v6 = *CurrentThreadNonPaged;
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
