/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopItemCollection@@V1@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItemCollection@@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x1804B1A98
 * Callers:
 *     ?VirtualDesktopItemCollection_CreateInstance@@YAJPEAUIVirtualDesktopItemFactory@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x1804B241C (-VirtualDesktopItemCollection_CreateInstance@@YAJPEAUIVirtualDesktopItemFactory@@PEAUIVirtualDes.c)
 * Callees:
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@Foundation@Windows@@V_lambda_3d673f836d44ef639fe032b9aedce249_@@$0?0PEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManager@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18003E578 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Te.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0VirtualDesktopItemCollection@@QEAA@XZ @ 0x1804B1B7C (--0VirtualDesktopItemCollection@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x1804B1F94 (-InternalRelease@-$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopItemCollection@@QEAAJPEAUIVirtualDesktopItemFactory@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1804B20E4 (-RuntimeClassInitialize@VirtualDesktopItemCollection@@QEAAJPEAUIVirtualDesktopItemFactory@@PEAUI.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopItemCollection,VirtualDesktopItemCollection,IVirtualDesktopItemFactory * &,IVirtualDesktopManagerInternal * &,IVirtualDesktopNotificationService * &>(
        VirtualDesktopItemCollection **a1,
        struct IVirtualDesktopItemFactory **a2,
        struct IVirtualDesktopManagerInternal **a3,
        struct IVirtualDesktopNotificationService **a4)
{
  void *v8; // rax
  int v9; // edi
  VirtualDesktopItemCollection *v10; // rbx
  volatile int *v11; // rdx
  void *v13; // [rsp+20h] [rbp-28h] BYREF
  VirtualDesktopItemCollection *v14; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v8;
  if ( v8 )
  {
    v10 = VirtualDesktopItemCollection::VirtualDesktopItemCollection((VirtualDesktopItemCollection *)v8);
    v14 = v10;
    v13 = 0LL;
    v9 = VirtualDesktopItemCollection::RuntimeClassInitialize(v10, *a2, *a3, *a4);
    if ( v9 >= 0 )
    {
      if ( v10 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((VirtualDesktopItemCollection *)((char *)v10 + 156), v11);
      *a1 = v10;
      Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::InternalRelease(&v14);
      v9 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::InternalRelease(&v14);
    }
  }
  else
  {
    v9 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>(&v13);
  return (unsigned int)v9;
}
