/*
 * XREFs of wil::details::ScopeExitFn__lambda_3a6d53bdb7b70071c869d320bc39bec7___::_ScopeExitFn__lambda_3a6d53bdb7b70071c869d320bc39bec7___ @ 0x1804FCCC8
 * Callers:
 *     _TabletModeViewManager::ShowWindowArrangementView_::_1_::dtor$3 @ 0x1806CB1C8 (_TabletModeViewManager--ShowWindowArrangementView_--_1_--dtor$3.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
HRESULT __fastcall wil::details::ScopeExitFn__lambda_3a6d53bdb7b70071c869d320bc39bec7___::_ScopeExitFn__lambda_3a6d53bdb7b70071c869d320bc39bec7___(
        IUnknown ***a1)
{
  IUnknown *v2; // rcx
  HRESULT result; // eax

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    v2 = (*a1)[19];
    if ( v2 )
    {
      ((void (__fastcall *)(IUnknown *))v2->lpVtbl[2].AddRef)(v2);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)*a1 + 19);
    }
    return IUnknown_SetSite(*a1[1], 0LL);
  }
  return result;
}
