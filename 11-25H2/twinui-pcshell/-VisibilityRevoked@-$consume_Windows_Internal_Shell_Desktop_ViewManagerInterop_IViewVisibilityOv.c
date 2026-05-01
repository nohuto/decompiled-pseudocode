/*
 * XREFs of ?VisibilityRevoked@?$consume_Windows_Internal_Shell_Desktop_ViewManagerInterop_IViewVisibilityOverride@UIViewVisibilityOverride@ViewManagerInterop@Desktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180351138
 * Callers:
 *     ?OnViewWrapperViewEvent@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18024A260 (-OnViewWrapperViewEvent@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInt.c)
 *     ?OnVisibilityRevokedChanged@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18034C0E4 (-OnVisibilityRevokedChanged@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInt.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall winrt::impl::consume_Windows_Internal_Shell_Desktop_ViewManagerInterop_IViewVisibilityOverride<winrt::Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride>::VisibilityRevoked(
        __int64 *a1)
{
  __int64 v1; // rcx
  int v2; // eax
  int v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+28h] [rbp-30h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h]
  _BYTE v7[8]; // [rsp+40h] [rbp-18h] BYREF

  v1 = *a1;
  v5 = 0;
  v7[0] = 0;
  v6 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v1 + 48LL))(v1, v7);
  winrt::check_hresult(&v4, v2, (__int64)&v5);
  return v7[0];
}
