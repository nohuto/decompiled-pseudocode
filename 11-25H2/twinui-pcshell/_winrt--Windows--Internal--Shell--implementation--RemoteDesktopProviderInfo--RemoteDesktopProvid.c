/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo::RemoteDesktopProviderInfo_::_1_::dtor$1 @ 0x1806DBD6B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo::RemoteDesktopProviderInfo_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(*(_QWORD *)(a2 + 48) + 24LL));
}
