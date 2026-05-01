/*
 * XREFs of ??1HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@QEAA@XZ @ 0x180342BA0
 * Callers:
 *     wil::details::RunWhenCompleteAction_IUnknown_Windows::Foundation::IAsyncAction____lambda_a7727f50da9d713bf735f2c71ec0999f___ @ 0x18033D1C0 (wil--details--RunWhenCompleteAction_IUnknown_Windows--Foundation--IAsyncAction____lambda_a7727f5.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncActionCompletedHandler::_)(Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_IUnknown___lambda_be6b1a914f7b12eba76d69f77a72b4a6___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_::_DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_IUnknown___lambda_be6b1a914f7b12eba76d69f77a72b4a6___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_ @ 0x180341D44 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IAsyn_ea_180341D44.c)
 *     _lambda_a7727f50da9d713bf735f2c71ec0999f_::operator() @ 0x1803448E0 (_lambda_a7727f50da9d713bf735f2c71ec0999f_--operator().c)
 *     ?HandleGamingPostureHotkey@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18034AD98 (-HandleGamingPostureHotkey@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     _GamingOverlayExperienceManager::HandleGamingPostureHotkey_::_1_::dtor$2 @ 0x1806E43FE (_GamingOverlayExperienceManager--HandleGamingPostureHotkey_--_1_--dtor$2.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180346274 (-Destroy@-$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTa.c)
 */

void __fastcall GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity::~HotkeyEntryPointActivity(
        GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity *this)
{
  *(_QWORD *)this = &GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity::`vftable';
  wil::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
