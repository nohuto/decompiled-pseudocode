/*
 * XREFs of ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180099A80
 * Callers:
 *     _PnpApiWrapper::Details::EnumerateDevices_::_1_::dtor$1 @ 0x1801D5289 (_PnpApiWrapper--Details--EnumerateDevices_--_1_--dtor$1.c)
 *     _wil::GetActivationFactory_Windows::System::IDispatcherQueueControllerStatics__::_1_::dtor$1 @ 0x1801D9189 (_wil--GetActivationFactory_Windows--System--IDispatcherQueueControllerStatics__--_1_--dtor$1.c)
 *     _SpectrumListener::SpectrumListener_::_1_::dtor$3 @ 0x1801D9646 (_SpectrumListener--SpectrumListener_--_1_--dtor$3.c)
 *     _PnpApiWrapper::Details::OnDeviceNotification_::_1_::dtor$1 @ 0x1801DA28E (_PnpApiWrapper--Details--OnDeviceNotification_--_1_--dtor$1.c)
 *     _Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&SetConstantToDefaultAsyncCasualityName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceOperationStart_::_1_::dtor$0 @ 0x1801DC035 (_Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncActionCompletedHandler_Microsoft--WRL--Det.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::~HStringReference(
        Microsoft::WRL::Wrappers::HStringReference *this)
{
  *((_QWORD *)this + 3) = 0LL;
}
