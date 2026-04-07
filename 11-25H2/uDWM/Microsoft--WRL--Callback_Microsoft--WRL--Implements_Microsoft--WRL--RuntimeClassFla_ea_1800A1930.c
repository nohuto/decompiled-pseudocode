/*
 * XREFs of Microsoft::WRL::Callback_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerPathsFailedOrInvalidatedEventArgs____Microsoft::WRL::FtmBase___lambda_30e9d5213486065023276bc34b6ef1c0___ @ 0x1800A1930
 * Callers:
 *     wil::MakeAgileCallbackNoThrow_Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerPathsFailedOrInvalidatedEventArgs_____lambda_30e9d5213486065023276bc34b6ef1c0___ @ 0x1800A1D08 (wil--MakeAgileCallbackNoThrow_Windows--Foundation--ITypedEventHandler_Windows--Devi_ea_1800A1D08.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::IDisplayManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManagerPathsFailedOrInvalidatedEventArgs___Windows::Devices::Display::Core::IDisplayManagerPathsFailedOrInvalidatedEventArgs_____::_)(Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerPathsFailedOrInvalidatedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerPathsFailedOrInvalidatedEventArgs____Microsoft::WRL::FtmBase___lambda_30e9d5213486065023276bc34b6ef1c0___1_Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerPathsFailedOrInvalidatedEventArgs_____lambda_30e9d5213486065023276bc34b6ef1c0___ @ 0x1800A1BDC (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_1800A1BDC.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVDisplayManager@Core@Display@Devices@Windows@@PEAVDisplayManagerChangedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A3190 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$Implements@U-$.c)
 */

_QWORD *__fastcall Microsoft::WRL::Callback_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerPathsFailedOrInvalidatedEventArgs____Microsoft::WRL::FtmBase___lambda_30e9d5213486065023276bc34b6ef1c0___(
        _QWORD *a1,
        __int64 a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v3 = (__int64 *)Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::IDisplayManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManagerPathsFailedOrInvalidatedEventArgs___Windows::Devices::Display::Core::IDisplayManagerPathsFailedOrInvalidatedEventArgs_____::___Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerPathsFailedOrInvalidatedEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerPathsFailedOrInvalidatedEventArgs____Microsoft::WRL::FtmBase___lambda_30e9d5213486065023276bc34b6ef1c0___1_Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerPathsFailedOrInvalidatedEventArgs_____lambda_30e9d5213486065023276bc34b6ef1c0___(&v7);
  v4 = *v3;
  *v3 = 0LL;
  v5 = v7;
  *a1 = v4;
  if ( v5 )
  {
    v7 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Devices::Display::Core::DisplayManager *,Windows::Devices::Display::Core::DisplayManagerChangedEventArgs *>,Microsoft::WRL::FtmBase>>::Release();
  }
  return a1;
}
