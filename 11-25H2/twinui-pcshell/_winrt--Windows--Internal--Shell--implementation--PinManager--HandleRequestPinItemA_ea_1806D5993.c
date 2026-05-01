/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::dtor$11 @ 0x1806D5993
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync__ResumeCoro_1_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::dtor_11(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 240) = *(_QWORD *)(a2 + 64) + 1008LL;
  *(_DWORD *)(a2 + 48) = **(_DWORD **)(a2 + 240);
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_QWORD *)(a2 + 248) = *(_QWORD *)(a2 + 64) + 1008LL;
    *(_QWORD *)(a2 + 256) = *(_QWORD *)(a2 + 64) + 1008LL;
    *(_DWORD *)(a2 + 48) = **(_DWORD **)(a2 + 256);
    *(_DWORD *)(a2 + 264) = *(_DWORD *)(a2 + 48) & 0xFFFFFFFE;
    **(_DWORD **)(a2 + 248) = *(_DWORD *)(a2 + 264);
    *(_QWORD *)(a2 + 272) = *(_QWORD *)(a2 + 64) + 696LL;
    winrt::handle_type<winrt::impl::hstring_traits>::close(*(volatile signed __int32 ***)(a2 + 272));
  }
}
