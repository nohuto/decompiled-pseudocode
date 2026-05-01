/*
 * XREFs of ??$Callback@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@V_lambda_e125143ae31b20b5bd0db8d36a87865c_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@01@$$QEAV_lambda_e125143ae31b20b5bd0db8d36a87865c_@@@Z @ 0x18068133C
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18002098C (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??$Make@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@V_lambda_e125143ae31b20b5bd0db8d36a87865c_@@$0?0PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@3@PEAUIClientWindowReadyForPresentationChangedEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@EAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@3@PEAUIClientWindowReadyForPresentationChangedEventArgs@5673@@Z@Details@WRL@Microsoft@@V_lambda_e125143ae31b20b5bd0db8d36a87865c_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@V_lambda_e125143ae31b20b5bd0db8d36a87865c_@@$0?0PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@3@PEAUIClientWindowReadyForPresentationChangedEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@EAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@3@PEAUIClientWindowReadyForPresentationChangedEventArgs@5673@@Z@Details@WRL@Microsoft@@@12@$$QEAV_lambda_e125143ae31b20b5bd0db8d36a87865c_@@@Z @ 0x180681384 (--$Make@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAUIClientWindowState@ViewMa_ea_180681384.c)
 */

_QWORD *__fastcall Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,_lambda_e125143ae31b20b5bd0db8d36a87865c_>(
        _QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>::*)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,_lambda_e125143ae31b20b5bd0db8d36a87865c_,-1,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,_lambda_e125143ae31b20b5bd0db8d36a87865c_>(&v6);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v6;
  *a1 = v3;
  if ( v4 )
  {
    v6 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v4);
  }
  return a1;
}
