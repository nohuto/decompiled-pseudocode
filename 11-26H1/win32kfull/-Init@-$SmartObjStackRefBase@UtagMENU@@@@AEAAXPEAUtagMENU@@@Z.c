/*
 * XREFs of ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x14000F2C0
 * Callers:
 *     _GetSubMenu @ 0x14000F1E0 (_GetSubMenu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmartObjStackRefBase<tagMENU>::Init(_QWORD *a1, __int64 a2)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v5; // r8
  _QWORD *v6; // rcx
  __int64 result; // rax

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread();
  if ( CurrentThreadWin32Thread )
    v5 = *CurrentThreadWin32Thread;
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
