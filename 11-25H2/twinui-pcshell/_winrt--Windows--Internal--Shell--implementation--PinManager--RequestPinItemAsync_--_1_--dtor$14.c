/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::RequestPinItemAsync_::_1_::dtor$14 @ 0x1806D65EF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::RequestPinItemAsync_::_1_::dtor_14(
        __int64 a1,
        __int64 a2)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(*(volatile signed __int32 ***)(a2 + 216));
}
