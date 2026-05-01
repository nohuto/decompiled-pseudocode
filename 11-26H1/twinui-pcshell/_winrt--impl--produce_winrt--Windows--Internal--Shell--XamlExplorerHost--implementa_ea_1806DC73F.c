/*
 * XREFs of _winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication_winrt::Windows::UI::Xaml::IApplicationOverrides_::OnLaunched_::_1_::catch$4 @ 0x1806DC73F
 * Callers:
 *     <none>
 * Callees:
 *     ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1802D7AF0 (-to_hresult@winrt@@YA-AUhresult@1@XZ.c)
 */

__int64 __fastcall winrt::impl::produce_winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication_winrt::Windows::UI::Xaml::IApplicationOverrides_::OnLaunched_::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 32) = *winrt::to_hresult((_DWORD *)(a2 + 32));
  return 0LL;
}
