/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::dtor$12 @ 0x1806FDC9A
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync__ResumeCoro_1_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::dtor_12(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 288) = *(_QWORD *)(a2 + 88) + 1008LL;
  *(_DWORD *)(a2 + 48) = **(_DWORD **)(a2 + 288);
  if ( (*(_DWORD *)(a2 + 48) & 2) != 0 )
  {
    *(_QWORD *)(a2 + 296) = *(_QWORD *)(a2 + 88) + 1008LL;
    *(_QWORD *)(a2 + 304) = *(_QWORD *)(a2 + 88) + 1008LL;
    *(_DWORD *)(a2 + 48) = **(_DWORD **)(a2 + 304);
    *(_DWORD *)(a2 + 312) = *(_DWORD *)(a2 + 48) & 0xFFFFFFFD;
    **(_DWORD **)(a2 + 296) = *(_DWORD *)(a2 + 312);
    *(_QWORD *)(a2 + 320) = *(_QWORD *)(a2 + 88) + 704LL;
    winrt::handle_type<winrt::impl::hstring_traits>::close(*(volatile signed __int32 ***)(a2 + 320));
  }
}
