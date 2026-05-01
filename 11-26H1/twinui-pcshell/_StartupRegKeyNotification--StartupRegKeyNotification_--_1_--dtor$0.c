/*
 * XREFs of _StartupRegKeyNotification::StartupRegKeyNotification_::_1_::dtor$0 @ 0x1806D5DCE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StartupRegKeyNotification::StartupRegKeyNotification_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(*(void **)(a2 + 136));
}
