/*
 * XREFs of ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x14004617C
 * Callers:
 *     _GetSubMenu @ 0x1400460A4 (_GetSubMenu.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall SmartObjStackRefBase<tagMENU>::Init(_QWORD *a1, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v5; // r8
  _QWORD *v6; // rcx
  __int64 result; // rax

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v5 = *CurrentThreadNonPaged;
  else
    v5 = 0LL;
  v6 = a1 + 1;
  a1[1] = 0LL;
  *a1 = gSmartObjNullRef;
  if ( a2 )
  {
    *a1 = *(_QWORD *)(a2 + 152);
    ++*(_DWORD *)(*(_QWORD *)(a2 + 152) + 8LL);
  }
  result = *(_QWORD *)(v5 + 1672);
  *v6 = result;
  *(_QWORD *)(v5 + 1672) = v6;
  return result;
}
