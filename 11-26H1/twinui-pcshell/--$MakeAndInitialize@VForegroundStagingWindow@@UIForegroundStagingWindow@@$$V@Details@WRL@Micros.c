/*
 * XREFs of ??$MakeAndInitialize@VForegroundStagingWindow@@UIForegroundStagingWindow@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIForegroundStagingWindow@@@Z @ 0x180134A80
 * Callers:
 *     ?Initialize@ForegroundStaging@@QEAAJXZ @ 0x180134888 (-Initialize@ForegroundStaging@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ @ 0x1801348CC (-RuntimeClassInitialize@CMultitaskingViewServiceProvider@@QEAAJXZ.c)
 * Callees:
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@Foundation@Windows@@V_lambda_3d673f836d44ef639fe032b9aedce249_@@$0?0PEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManager@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18003E578 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Te.c)
 *     ?RuntimeClassInitialize@ForegroundStagingWindow@@QEAAJXZ @ 0x180134B48 (-RuntimeClassInitialize@ForegroundStagingWindow@@QEAAJXZ.c)
 *     ??0ForegroundStagingWindow@@QEAA@XZ @ 0x180134C5C (--0ForegroundStagingWindow@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ForegroundStagingWindow,IForegroundStagingWindow,>(
        _QWORD *a1)
{
  void *v2; // rax
  ForegroundStagingWindow *v3; // rbx
  int v4; // edi
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  ForegroundStagingWindow *v7; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( !v2 )
  {
    v4 = -2147024882;
LABEL_8:
    Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>(&v6);
    return (unsigned int)v4;
  }
  v3 = ForegroundStagingWindow::ForegroundStagingWindow((ForegroundStagingWindow *)v2);
  v7 = v3;
  v6 = 0LL;
  v4 = ForegroundStagingWindow::RuntimeClassInitialize(v3);
  if ( v4 >= 0 )
  {
    v4 = (**(__int64 (__fastcall ***)(ForegroundStagingWindow *, GUID *, _QWORD *))v3)(
           v3,
           &GUID_2e678f79_addb_4142_b6ee_a3c27b456805,
           a1);
    (*(void (__fastcall **)(ForegroundStagingWindow *))(*(_QWORD *)v3 + 16LL))(v3);
    goto LABEL_8;
  }
  if ( v3 )
    (*(void (__fastcall **)(ForegroundStagingWindow *))(*(_QWORD *)v3 + 16LL))(v3);
  return (unsigned int)v4;
}
