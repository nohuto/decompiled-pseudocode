/*
 * XREFs of wil::details::ScopeExitFn__lambda_7f57f26ac444fb3354da6dd48979a63d___::_ScopeExitFn__lambda_7f57f26ac444fb3354da6dd48979a63d___ @ 0x1804FCD58
 * Callers:
 *     _TabletModeViewManager::ShowAppResizeView_::_1_::dtor$4 @ 0x1806CB1A4 (_TabletModeViewManager--ShowAppResizeView_--_1_--dtor$4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

HRESULT __fastcall wil::details::ScopeExitFn__lambda_7f57f26ac444fb3354da6dd48979a63d___::_ScopeExitFn__lambda_7f57f26ac444fb3354da6dd48979a63d___(
        IUnknown ***a1)
{
  HRESULT result; // eax

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    ((void (__fastcall *)(IUnknown *))(*a1)[19]->lpVtbl[2].AddRef)((*a1)[19]);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)*a1 + 19);
    return IUnknown_SetSite(*a1[1], 0LL);
  }
  return result;
}
