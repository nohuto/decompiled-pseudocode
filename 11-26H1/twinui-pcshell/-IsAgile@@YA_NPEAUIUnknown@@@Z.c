/*
 * XREFs of ?IsAgile@@YA_NPEAUIUnknown@@@Z @ 0x180170204
 * Callers:
 *     ?SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z @ 0x180170050 (-SetSite@CWRLObjectWithGITSite@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?put_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUIActivationViewSwitcher@ViewManagement@UI@Windows@@@Z @ 0x180678A50 (-put_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUIActivationViewSwitcher@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall IsAgile(struct IUnknown *a1)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  bool v3; // bl
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = 1;
  if ( a1 )
  {
    QueryInterface = a1->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
    if ( ((int (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
           a1,
           &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90,
           &v6) < 0 )
      v3 = 0;
  }
  v4 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v3;
}
