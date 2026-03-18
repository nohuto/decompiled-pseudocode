/*
 * XREFs of ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x1400B3A90
 * Callers:
 *     _GetClassInfoEx @ 0x140034694 (_GetClassInfoEx.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     _RegisterClassEx @ 0x1400B2BE4 (_RegisterClassEx.c)
 *     GetCPD @ 0x1400B34F8 (GetCPD.c)
 *     ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1400B379C (-DestroyClassBrush@@YAXAEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     InternalRegisterClassEx @ 0x1400B3B70 (InternalRegisterClassEx.c)
 *     SetRedirectedWindow @ 0x1400B4EC4 (SetRedirectedWindow.c)
 *     xxxSetClassLongPtr @ 0x1400C2140 (xxxSetClassLongPtr.c)
 *     xxxSetClassData @ 0x1400C2294 (xxxSetClassData.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1400C2F84 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     _SetClassWord @ 0x1402881D0 (_SetClassWord.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall SmartObjStackRefBase<tagCLS>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v7; // rbx
  void *CurrentWin32kStackRefLookAside; // rax

  if ( a2 != *(_QWORD *)*a1 )
  {
    v4 = *a1;
    v5 = gSmartObjNullRef;
    if ( v4 != gSmartObjNullRef )
    {
      if ( !--*(_DWORD *)(*a1 + 8) && *(_BYTE *)(*a1 + 12) )
      {
        v7 = *a1;
        CurrentWin32kStackRefLookAside = GetCurrentWin32kStackRefLookAside();
        Win32FreeToPagedLookasideList(CurrentWin32kStackRefLookAside, v7);
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
