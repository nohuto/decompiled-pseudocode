/*
 * XREFs of ?SetFocused@CScrollViewer@@UEAAX_N@Z @ 0x1804C72D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UIMultitaskingViewElement@@@?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804A7230 (--$As@UIMultitaskingViewElement@@@-$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z @ 0x1804B1530 (-SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScrollViewer::SetFocused(CScrollViewer *this, char a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  CMultitaskingViewElementBase::SetFocused(this, a2);
  if ( *((_BYTE *)this + 176) && !*((_QWORD *)this + 21) )
  {
    v3 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IScrollViewer>::As<IMultitaskingViewElement>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 31,
                &v3) >= 0 )
      (*(void (__fastcall **)(CScrollViewer *, __int64))(*(_QWORD *)this + 288LL))(this, v3);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v3);
  }
}
