/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::dtor$8 @ 0x1806D5961
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@@winrt@@QEAA@XZ @ 0x18028F234 (--1-$com_ptr@UIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync__ResumeCoro_1_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::dtor_8(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 232) = *(_QWORD *)(a2 + 64) + 624LL;
  return winrt::com_ptr<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>::~com_ptr<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>(*(_QWORD **)(a2 + 232));
}
