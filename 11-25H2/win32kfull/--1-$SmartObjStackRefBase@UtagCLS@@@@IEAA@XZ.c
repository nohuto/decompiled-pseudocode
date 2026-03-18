/*
 * XREFs of ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1400B33E0
 * Callers:
 *     _HasCaptionIcon @ 0x1400B2A98 (_HasCaptionIcon.c)
 *     _RegisterClassEx @ 0x1400B2BE4 (_RegisterClassEx.c)
 *     DereferenceClass @ 0x1400B2D10 (DereferenceClass.c)
 *     DestroyClass @ 0x1400B2E28 (DestroyClass.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1400B315C (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1400B33C8 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     GetCPD @ 0x1400B34F8 (GetCPD.c)
 *     ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1400B379C (-DestroyClassBrush@@YAXAEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     SetRedirectedWindow @ 0x1400B4EC4 (SetRedirectedWindow.c)
 *     ?GetWindowSmIcon@@YAPEAUtagCURSOR@@PEAUtagWND@@@Z @ 0x1400C1194 (-GetWindowSmIcon@@YAPEAUtagCURSOR@@PEAUtagWND@@@Z.c)
 *     GetClassIcoCur @ 0x1400C1210 (GetClassIcoCur.c)
 *     xxxSetClassLongPtr @ 0x1400C2140 (xxxSetClassLongPtr.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1400C2F84 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     xxxRecreateSmallIcons @ 0x140226FA0 (xxxRecreateSmallIcons.c)
 *     _SetClassWord @ 0x1402881D0 (_SetClassWord.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

_QWORD *__fastcall SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(__int64 *a1, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rdi
  _QWORD *result; // rax
  __int64 v6; // rbx
  void *CurrentWin32kStackRefLookAside; // rax

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v4 = *CurrentThreadNonPaged;
  else
    v4 = 0LL;
  if ( *a1 != gSmartObjNullRef && !--*(_DWORD *)(*a1 + 8) )
  {
    if ( *(_BYTE *)(*a1 + 12) )
    {
      v6 = *a1;
      CurrentWin32kStackRefLookAside = GetCurrentWin32kStackRefLookAside();
      Win32FreeToPagedLookasideList(CurrentWin32kStackRefLookAside, v6);
    }
  }
  result = *(_QWORD **)(v4 + 1672);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v4 + 1672) = result;
  }
  return result;
}
