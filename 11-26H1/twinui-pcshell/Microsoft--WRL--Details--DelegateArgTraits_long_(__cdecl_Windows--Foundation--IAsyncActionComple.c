/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncActionCompletedHandler::_)(Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_IUnknown___lambda_be6b1a914f7b12eba76d69f77a72b4a6___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_IUnknown___lambda_be6b1a914f7b12eba76d69f77a72b4a6___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_ @ 0x180341310
 * Callers:
 *     wil::details::RunWhenCompleteAction_IUnknown_Windows::Foundation::IAsyncAction____lambda_a7727f50da9d713bf735f2c71ec0999f___ @ 0x18033D1C0 (wil--details--RunWhenCompleteAction_IUnknown_Windows--Foundation--IAsyncAction____lambda_a7727f5.c)
 * Callees:
 *     ??0?$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180340B08 (--0-$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Para.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncActionCompletedHandler@Foundation@Windows@@UIUnknown@@@23@@WRL@Microsoft@@QEAA@XZ @ 0x180341388 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$Implements@U-$RuntimeC_ea_180341388.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncActionCompletedHandler::___Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus__::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_IUnknown___lambda_be6b1a914f7b12eba76d69f77a72b4a6___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_IUnknown___lambda_be6b1a914f7b12eba76d69f77a72b4a6___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncActionCompletedHandler,IUnknown>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncActionCompletedHandler,IUnknown>>();
  wil::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)(a1 + 40),
    a2,
    *(_DWORD *)(a2 + 312) != 0);
  *(_QWORD *)(a1 + 40) = &GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity::`vftable';
  *(_BYTE *)(a1 + 368) = *(_BYTE *)(a2 + 328);
  *(_QWORD *)a1 = &off_1807321C8;
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncActionCompletedHandler,IUnknown>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IUnknown>'};
  return a1;
}
