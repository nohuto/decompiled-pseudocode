/*
 * XREFs of _lambda_d12d1524a0e5f53c0c1207645a73e7d0_::__lambda_d12d1524a0e5f53c0c1207645a73e7d0_ @ 0x180645444
 * Callers:
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId_::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId___lambda_d12d1524a0e5f53c0c1207645a73e7d0___ @ 0x1806453B4 (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--Shell--Clou_ea_1806453B4.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId___lambda_d12d1524a0e5f53c0c1207645a73e7d0___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId___lambda_d12d1524a0e5f53c0c1207645a73e7d0___ @ 0x180645474 (winrt--impl--implements_delegate_winrt--Windows--Foundation--TypedEventHandler_winr_ea_180645474.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId_::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId___lambda_d12d1524a0e5f53c0c1207645a73e7d0____::_1_::dtor$0 @ 0x1806DC42C (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--Shell--Clo_ea_1806DC42C.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801D2024 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall lambda_d12d1524a0e5f53c0c1207645a73e7d0_::__lambda_d12d1524a0e5f53c0c1207645a73e7d0_(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 16));
  v2 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
}
