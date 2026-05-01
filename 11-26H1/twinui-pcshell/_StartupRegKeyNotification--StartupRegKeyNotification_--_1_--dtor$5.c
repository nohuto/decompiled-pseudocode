/*
 * XREFs of _StartupRegKeyNotification::StartupRegKeyNotification_::_1_::dtor$5 @ 0x1806D5E1A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StartupRegKeyNotification::StartupRegKeyNotification_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(*(_QWORD *)(a2 + 80) + 80LL));
}
