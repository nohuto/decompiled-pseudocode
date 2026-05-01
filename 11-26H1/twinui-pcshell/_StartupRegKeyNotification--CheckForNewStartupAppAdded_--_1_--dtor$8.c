/*
 * XREFs of _StartupRegKeyNotification::CheckForNewStartupAppAdded_::_1_::dtor$8 @ 0x1806DB0CA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StartupRegKeyNotification::CheckForNewStartupAppAdded_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 424));
}
