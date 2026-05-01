/*
 * XREFs of ??$Make@U?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_b5fc8668da1d75b680eab80eff8dd753_@@$0?0PEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowWatcher@2345@@Internal@Foundation@Windows@@PEAUIInspectable@@@Foundation@Windows@@EAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUIInspectable@@@Z@Details@WRL@Microsoft@@V_lambda_b5fc8668da1d75b680eab80eff8dd753_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_b5fc8668da1d75b680eab80eff8dd753_@@$0?0PEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowWatcher@2345@@Internal@Foundation@Windows@@PEAUIInspectable@@@Foundation@Windows@@EAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUIInspectable@@@Z@Details@WRL@Microsoft@@@12@$$QEAV_lambda_b5fc8668da1d75b680eab80eff8dd753_@@@Z @ 0x18041A740
 * Callers:
 *     ??$MakeAgileCallback@U?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@AEBQEAVWindowManagerBridge@@P84@EAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUIInspectable@@@_E@wil@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@AEBQEAVWindowManagerBridge@@$$QEAP84@EAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@_E@Z @ 0x18041BBA0 (--$MakeAgileCallback@U-$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@I.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVWindowChangedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801C4D40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$I_ea_1801C4D40.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VFtmBase@23@@23@@WRL@Microsoft@@QEAA@XZ @ 0x18041D67C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$Implements@U-$RuntimeC_ea_18041D67C.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *>,IInspectable *>::*)(Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *,IInspectable *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,IInspectable *>,Microsoft::WRL::FtmBase>,_lambda_b5fc8668da1d75b680eab80eff8dd753_,-1,Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *,IInspectable *>,_lambda_b5fc8668da1d75b680eab80eff8dd753_>(
        volatile signed __int32 **a1,
        __int64 a2)
{
  void *v4; // rax
  _OWORD *v5; // rbx
  __int64 v6; // xmm1_8
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,IInspectable *>,Microsoft::WRL::FtmBase>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,IInspectable *>,Microsoft::WRL::FtmBase>>(v4);
    v5[4] = *(_OWORD *)a2;
    v6 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)v5 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *>,IInspectable *>::*)(Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *,IInspectable *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,IInspectable *>,Microsoft::WRL::FtmBase>,_lambda_b5fc8668da1d75b680eab80eff8dd753_,-1,Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *,IInspectable *>::`vftable'{for `Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,IInspectable *>'};
    *((_QWORD *)v5 + 1) = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *>,IInspectable *>::*)(Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *,IInspectable *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,IInspectable *>,Microsoft::WRL::FtmBase>,_lambda_b5fc8668da1d75b680eab80eff8dd753_,-1,Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *,IInspectable *>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_QWORD *)v5 + 10) = v6;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs *>,Microsoft::WRL::FtmBase>>::Release(*a1);
    v8 = 0LL;
    *a1 = (volatile signed __int32 *)v5;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
  return a1;
}
