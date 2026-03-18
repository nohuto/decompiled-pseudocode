/*
 * XREFs of ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1401509D8
 * Callers:
 *     ?GetWindowSmIcon@@YAPEAUtagCURSOR@@PEAUtagWND@@@Z @ 0x14014D3C8 (-GetWindowSmIcon@@YAPEAUtagCURSOR@@PEAUtagWND@@@Z.c)
 *     GetClassIcoCur @ 0x140150968 (GetClassIcoCur.c)
 *     xxxRecreateSmallIcons @ 0x1402608E0 (xxxRecreateSmallIcons.c)
 *     _SetClassWord @ 0x1402A4BA0 (_SetClassWord.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmartObjStackRefBase<tagCLS>::Init(_QWORD *a1, __int64 a2)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v5; // r8
  _QWORD *v6; // rcx
  __int64 result; // rax

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v5 = *CurrentThreadWin32Thread;
  else
    v5 = 0LL;
  v6 = a1 + 1;
  a1[1] = 0LL;
  *a1 = gSmartObjNullRef;
  if ( a2 )
  {
    *a1 = *(_QWORD *)(a2 + 128);
    ++*(_DWORD *)(*(_QWORD *)(a2 + 128) + 8LL);
  }
  result = *(_QWORD *)(v5 + 1672);
  *v6 = result;
  *(_QWORD *)(v5 + 1672) = v6;
  return result;
}
