/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::HostProcessData::HostProcessData_::_1_::dtor$0 @ 0x1806D1EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::HostProcessData::HostProcessData_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(*(_QWORD *)(a2 + 48) + 8LL));
}
