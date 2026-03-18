/*
 * XREFs of ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x14014FEF0
 * Callers:
 *     SetRedirectedWindow @ 0x14014DABC (SetRedirectedWindow.c)
 *     InternalRegisterClassEx @ 0x14014E310 (InternalRegisterClassEx.c)
 *     _GetClassInfoEx @ 0x14014F1DC (_GetClassInfoEx.c)
 *     ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x14014FD14 (-DestroyClassBrush@@YAXAEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x140150B00 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     xxxSetClassLongPtr @ 0x140150DF0 (xxxSetClassLongPtr.c)
 *     xxxSetClassData @ 0x140151060 (xxxSetClassData.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     _SetClassWord @ 0x1402A4BA0 (_SetClassWord.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall SmartObjStackRefBase<tagCLS>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  void *CurrentWin32kStackRefLookAside; // rax

  if ( a2 != *(_QWORD *)*a1 )
  {
    v4 = *a1;
    v5 = gSmartObjNullRef;
    if ( v4 != gSmartObjNullRef )
    {
      if ( !--*(_DWORD *)(*a1 + 8) && *(_BYTE *)(*a1 + 12) )
      {
        v6 = *a1;
        CurrentWin32kStackRefLookAside = GetCurrentWin32kStackRefLookAside();
        Win32FreeToPagedLookasideList(CurrentWin32kStackRefLookAside, v6);
      }
      v5 = gSmartObjNullRef;
    }
    if ( a2 )
    {
      *a1 = *(_QWORD *)(a2 + 128);
      ++*(_DWORD *)(*a1 + 8);
    }
    else
    {
      *a1 = v5;
    }
  }
  return a1;
}
