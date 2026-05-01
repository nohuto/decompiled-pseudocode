/*
 * XREFs of ??_E?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVSwitchRequestedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_1ba8f6de45da3abfb3f065fffecbbbe1_@@$0?0PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUISwitchRequestedEventArgs@6789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@U?$AggregateType@PEAVSwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@PEAUISwitchRequestedEventArgs@2345@@4Foundation@5@@Foundation@Windows@@EAAJPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUISwitchRequestedEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18041F010
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@UIImmersiveApplicationTransitionHelper@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801843D4 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMark_ea_1801843D4.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *,Windows::Foundation::Internal::AggregateType<Windows::Internal::ApplicationModel::WindowManagement::SwitchRequestedEventArgs *,Windows::Internal::ApplicationModel::WindowManagement::ISwitchRequestedEventArgs *>>::*)(Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *,Windows::Internal::ApplicationModel::WindowManagement::ISwitchRequestedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *,Windows::Internal::ApplicationModel::WindowManagement::SwitchRequestedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_1ba8f6de45da3abfb3f065fffecbbbe1_,-1,Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *,Windows::Internal::ApplicationModel::WindowManagement::ISwitchRequestedEventArgs *>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[15] = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>((__int64)(a1 + 2));
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x58);
  return a1;
}
