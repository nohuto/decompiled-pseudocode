/*
 * XREFs of ??$MakeAndInitialize@VXamlSnapAssistViewHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlSnapAssistViewHost@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x1802B1BB0
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VXamlSnapAssistViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA?AV?$ComPtr@VXamlSnapAssistViewHost@@@WRL@Microsoft@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x1801FFD98 (--$MakeAndInitializeOrThrow@VXamlSnapAssistViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA-AV.c)
 * Callees:
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@Foundation@Windows@@V_lambda_3d673f836d44ef639fe032b9aedce249_@@$0?0PEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManager@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18003E578 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Te.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x1801FFE08 (-InternalRelease@-$ComPtr@VSwitchItemCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0XamlSnapAssistViewHost@@QEAA@XZ @ 0x1806A8BBC (--0XamlSnapAssistViewHost@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1806A9D4C (-RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<XamlSnapAssistViewHost,XamlSnapAssistViewHost,XamlViewHostInitializeArgs const &>(
        volatile signed __int64 **a1,
        const struct XamlViewHostInitializeArgs *a2)
{
  XamlSnapAssistViewHost *v4; // rax
  volatile signed __int64 *v6; // rbx
  volatile int *v7; // rdx
  int v8; // edi
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  volatile signed __int64 *v11; // [rsp+30h] [rbp+8h] BYREF
  void *v12; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (XamlSnapAssistViewHost *)operator new(0x2D8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return 2147942414LL;
  v6 = (volatile signed __int64 *)XamlSnapAssistViewHost::XamlSnapAssistViewHost(v4);
  v11 = v6;
  v12 = 0LL;
  v8 = XamlSnapAssistViewHost::RuntimeClassInitialize((XamlSnapAssistViewHost *)v6, a2);
  if ( v8 >= 0 )
  {
    if ( v6 )
    {
      v9 = *((_QWORD *)v6 + 23);
      while ( v9 >= 0 )
      {
        if ( (_DWORD)v9 != 0x7FFFFFFF )
        {
          v10 = v9;
          v9 = _InterlockedCompareExchange64(v6 + 23, v9 + 1, v9);
          if ( v10 != v9 )
            continue;
        }
        goto LABEL_11;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v9 + 16), v7);
    }
LABEL_11:
    *a1 = v6;
    v8 = 0;
  }
  Microsoft::WRL::ComPtr<SwitchItemCollection>::InternalRelease((__int64 *)&v11);
  Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>(&v12);
  return (unsigned int)v8;
}
