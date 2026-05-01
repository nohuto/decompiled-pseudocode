/*
 * XREFs of ??$ActivateInstance@ULogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AULogoLoader@LogoLoading@UnifiedTile@Shell@WindowsInternal@3@XZ @ 0x1805DE2E0
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_cb9c074cd4f47cf0d3e01dbc2dd3609e_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x1805DE120 (-_lambda_invoker_cdecl_@_lambda_cb9c074cd4f47cf0d3e01dbc2dd3609e_@@CA@AEBUIActivationFactory@Fou.c)
 *     _anonymous_namespace_::TryLoadLogoImageStream @ 0x1805EBEC8 (_anonymous_namespace_--TryLoadLogoImageStream.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180029578 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IUnknown *__fastcall winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoLoader>(
        __int64 *a1,
        struct IUnknown *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, void **); // rbx
  void **v5; // rax
  int v6; // eax
  void (__fastcall ***v7)(_QWORD, _QWORD, _QWORD); // rax
  int v9; // [rsp+28h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-30h]
  struct IUnknownVtbl *v11; // [rsp+40h] [rbp-20h] BYREF
  void (__fastcall ***v12)(_QWORD, void *, struct IUnknownVtbl **); // [rsp+48h] [rbp-18h] BYREF

  v12 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v3 = *a1;
  v4 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)*a1 + 48LL);
  v5 = winrt::put_abi((winrt *)&v12, a2);
  v6 = v4(v3, v5);
  winrt::check_hresult((int *)&v11, v6, (__int64)&v9);
  v7 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
  if ( v12 )
  {
    v11 = 0LL;
    (**v12)(v12, &winrt::impl::guid_v<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::ILogoLoader>, &v11);
    a2->lpVtbl = v11;
    v7 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
  }
  else
  {
    a2->lpVtbl = 0LL;
  }
  if ( v7 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
  return a2;
}
