/*
 * XREFs of ??$MakeAgileCallback@U?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVWindowChangedEventArgs@2345@@Foundation@Windows@@AEBQEAVWindowManagerBridge@@P84@EAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUIWindowChangedEventArgs@6783@@_E@wil@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVWindowChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@AEBQEAVWindowManagerBridge@@$$QEAP84@EAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowChangedEventArgs@6789@@_E@Z @ 0x18041BC28
 * Callers:
 *     _lambda_dd171a1d9ebdedee3576b89a841e614b_::operator() @ 0x18041EBE8 (_lambda_dd171a1d9ebdedee3576b89a841e614b_--operator().c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVWindowChangedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801C4D40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$I_ea_1801C4D40.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802ED74C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@U?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVWindowChangedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_8fa6991b191c0e4b65e539d2639c91cd_@@$0?0PEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowChangedEventArgs@6789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowWatcher@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVWindowChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowChangedEventArgs@2345@@234@@Foundation@Windows@@EAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUIWindowChangedEventArgs@5673@@Z@Details@WRL@Microsoft@@V_lambda_8fa6991b191c0e4b65e539d2639c91cd_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAVWindowChangedEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_8fa6991b191c0e4b65e539d2639c91cd_@@$0?0PEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowChangedEventArgs@6789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowWatcher@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVWindowChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowChangedEventArgs@2345@@234@@Foundation@Windows@@EAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@3@PEAUIWindowChangedEventArgs@5673@@Z@Details@WRL@Microsoft@@@12@$$QEAV_lambda_8fa6991b191c0e4b65e539d2639c91cd_@@@Z @ 0x18041A7E0 (--$Make@U-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsof_ea_18041A7E0.c)
 */

volatile signed __int32 **__fastcall ___MakeAgileCallback_U__ITypedEventHandler_PEAVWindowWatcher_WindowManagement_ApplicationModel_Internal_Windows__PEAVWindowChangedEventArgs_2345__Foundation_Windows__AEBQEAVWindowManagerBridge__P84_EAAJPEAUIWindowWatcher_WindowManagement_ApplicationModel_Internal_3_PEAUIWindowChangedEventArgs_6783___E_wil__YA_AV__ComPtr_U__ITypedEventHandler_PEAVWindowWatcher_WindowManagement_ApplicationModel_Internal_Windows__PEAVWindowChangedEventArgs_2345__Foundation_Windows___WRL_Microsoft__AEBQEAVWindowManagerBridge____QEAP84_EAAJPEAUIWindowWatcher_WindowManagement_ApplicationModel_Internal_Windows__PEAUIWindowChangedEventArgs_6789___E_Z(
        volatile signed __int32 **a1,
        __int64 *a2,
        __int128 *a3)
{
  volatile signed __int32 **v4; // rax
  const char *v5; // r9
  volatile signed __int32 *v6; // rcx
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  volatile signed __int32 *v11; // [rsp+58h] [rbp+10h] BYREF

  v8 = *a2;
  v9 = *a3;
  v4 = Microsoft::WRL::Details::Make<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *>,Windows::Foundation::Internal::AggregateType<Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs *,Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs *>>::*)(Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs *>,Microsoft::WRL::FtmBase>,_lambda_8fa6991b191c0e4b65e539d2639c91cd_,-1,Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::IWindowChangedEventArgs *>,_lambda_8fa6991b191c0e4b65e539d2639c91cd_>(
         &v11,
         (__int64)&v8);
  *a1 = *v4;
  *v4 = 0LL;
  v6 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher *,Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs *>,Microsoft::WRL::FtmBase>>::Release(v6);
  }
  if ( !*a1 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x55,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v5);
  return a1;
}
