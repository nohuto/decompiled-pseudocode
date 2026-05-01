/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::dtor$6 @ 0x1806FDE50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::dtor_6(
        __int64 a1,
        __int64 a2)
{
  if ( *(_WORD *)(*(_QWORD *)(a2 + 32) + 10LL) )
  {
    *(_QWORD *)(a2 + 120) = 1600LL;
    *(_QWORD *)(a2 + 128) = *(_QWORD *)(a2 + 32) - 112LL;
    operator delete(*(void **)(a2 + 128), *(const struct std::nothrow_t **)(a2 + 120));
  }
}
