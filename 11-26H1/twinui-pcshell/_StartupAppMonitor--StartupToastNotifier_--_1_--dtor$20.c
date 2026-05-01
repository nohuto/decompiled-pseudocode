/*
 * XREFs of _StartupAppMonitor::StartupToastNotifier_::_1_::dtor$20 @ 0x1806CE0A2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StartupAppMonitor::StartupToastNotifier_::_1_::dtor_20(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(*(_QWORD *)(a2 + 432) + 8LL));
}
