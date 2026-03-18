/*
 * XREFs of ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x14014FA30
 * Callers:
 *     ?GetWindowSmIcon@@YAPEAUtagCURSOR@@PEAUtagWND@@@Z @ 0x14014D3C8 (-GetWindowSmIcon@@YAPEAUtagCURSOR@@PEAUtagWND@@@Z.c)
 *     SetRedirectedWindow @ 0x14014DABC (SetRedirectedWindow.c)
 *     _HasCaptionIcon @ 0x14014E1C4 (_HasCaptionIcon.c)
 *     _RegisterClassEx @ 0x14014ECE0 (_RegisterClassEx.c)
 *     DereferenceClass @ 0x14014EE40 (DereferenceClass.c)
 *     DestroyClass @ 0x14014EF4C (DestroyClass.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x14014F7F0 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x14014F808 (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x14014FD14 (-DestroyClassBrush@@YAXAEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     GetCPD @ 0x140150018 (GetCPD.c)
 *     GetClassIcoCur @ 0x140150968 (GetClassIcoCur.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x140150B00 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     xxxSetClassLongPtr @ 0x140150DF0 (xxxSetClassLongPtr.c)
 *     xxxRecreateSmallIcons @ 0x1402608E0 (xxxRecreateSmallIcons.c)
 *     _SetClassWord @ 0x1402A4BA0 (_SetClassWord.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(__int64 *a1)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v3; // rdi
  __int64 v4; // rbx
  void *CurrentWin32kStackRefLookAside; // rax
  _QWORD *result; // rax

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v3 = *CurrentThreadWin32Thread;
  else
    v3 = 0LL;
  if ( *a1 != gSmartObjNullRef && !--*(_DWORD *)(*a1 + 8) )
  {
    if ( *(_BYTE *)(*a1 + 12) )
    {
      v4 = *a1;
      CurrentWin32kStackRefLookAside = GetCurrentWin32kStackRefLookAside();
      Win32FreeToPagedLookasideList(CurrentWin32kStackRefLookAside, v4);
    }
  }
  result = *(_QWORD **)(v3 + 1672);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v3 + 1672) = result;
  }
  return result;
}
