/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::TryOpenProcessIdKey_::_1_::dtor$2 @ 0x1806CD75B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::TryOpenProcessIdKey_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a2 + 64));
}
