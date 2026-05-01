/*
 * XREFs of ??$MakeAndInitialize@VApplicationViewFilteredCollection@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIObjectCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewFilteredCollection@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIObjectCollection@@@Z @ 0x1801BE568
 * Callers:
 *     ?ApplicationViewFilteredCollection_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIObjectCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1801BE488 (-ApplicationViewFilteredCollection_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIAppli.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@Foundation@Windows@@V_lambda_3d673f836d44ef639fe032b9aedce249_@@$0?0PEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManager@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18003E578 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Te.c)
 *     ?RuntimeClassInitialize@ApplicationViewFilteredCollection@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIObjectCollection@@@Z @ 0x1800876A8 (-RuntimeClassInitialize@ApplicationViewFilteredCollection@@QEAAJPEAUIApplicationViewCollection@@.c)
 *     ??0ApplicationViewFilteredCollection@@QEAA@XZ @ 0x18029A2F8 (--0ApplicationViewFilteredCollection@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ApplicationViewFilteredCollection,ApplicationViewFilteredCollection,IApplicationViewCollection * &,IApplicationViewVisibilityDebouncedNotificationService * &,IObjectCollection * &>(
        ApplicationViewFilteredCollection **a1,
        struct IApplicationViewCollection **a2,
        struct IApplicationViewVisibilityDebouncedNotificationService **a3,
        struct IObjectCollection **a4)
{
  void *v8; // rax
  int v9; // edi
  ApplicationViewFilteredCollection *v10; // rbx
  __int64 v12[5]; // [rsp+20h] [rbp-28h] BYREF
  void *v13; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v8;
  v12[0] = (__int64)v8;
  if ( !v8 )
  {
    v9 = -2147024882;
LABEL_5:
    Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>(&v13);
    return (unsigned int)v9;
  }
  v12[1] = (__int64)v8;
  v10 = ApplicationViewFilteredCollection::ApplicationViewFilteredCollection((ApplicationViewFilteredCollection *)v8);
  v12[0] = (__int64)v10;
  v13 = 0LL;
  v9 = ApplicationViewFilteredCollection::RuntimeClassInitialize(v10, *a2, *a3, *a4);
  if ( v9 < 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v12);
    goto LABEL_5;
  }
  if ( v10 )
    (*(void (__fastcall **)(ApplicationViewFilteredCollection *))(*(_QWORD *)v10 + 8LL))(v10);
  *a1 = v10;
  if ( v10 )
    (*(void (__fastcall **)(ApplicationViewFilteredCollection *))(*(_QWORD *)v10 + 16LL))(v10);
  return 0LL;
}
