/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopThumbnailWindowFilter@@V1@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUITabletModeController@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUITabletModeController@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x1804AB5B8
 * Callers:
 *     ?VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x1804AC160 (-VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@Foundation@Windows@@V_lambda_3d673f836d44ef639fe032b9aedce249_@@$0?0PEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManager@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18003E578 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Te.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0VirtualDesktopThumbnailWindowFilter@@QEAA@XZ @ 0x1804AB7EC (--0VirtualDesktopThumbnailWindowFilter@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopThumbnailWindowFilter@@@WRL@Microsoft@@IEAAKXZ @ 0x1804ABC98 (-InternalRelease@-$ComPtr@VVirtualDesktopThumbnailWindowFilter@@@WRL@Microsoft@@IEAAKXZ.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register @ 0x1804ABD60 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_1804ABD60.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopThumbnailWindowFilter,VirtualDesktopThumbnailWindowFilter,IVirtualDesktopManagerInternal * &,ITabletModeController * &,IVirtualDesktopNotificationService * &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  VirtualDesktopThumbnailWindowFilter *v8; // rax
  unsigned int v9; // ebx
  __int64 *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rbx
  int v13; // eax
  volatile int *v14; // rdx
  int v16[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 *v18; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (VirtualDesktopThumbnailWindowFilter *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  *(_QWORD *)v16 = v8;
  if ( v8 )
  {
    v10 = (__int64 *)VirtualDesktopThumbnailWindowFilter::VirtualDesktopThumbnailWindowFilter(v8);
    v18 = v10;
    *(_QWORD *)v16 = 0LL;
    v11 = *a4;
    v12 = *a3;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v10 + 3, *a2);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v10 + 4, v12);
    v13 = EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register(
            v10 + 6,
            v11);
    v9 = v13;
    if ( v13 >= 0 )
    {
      if ( v10 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)v10 + 20), v14);
      *a1 = v10;
      Microsoft::WRL::ComPtr<VirtualDesktopThumbnailWindowFilter>::InternalRelease(&v18);
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7E,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopthumbnailwindowfilter.cpp",
        (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<VirtualDesktopThumbnailWindowFilter>::InternalRelease(&v18);
    }
  }
  else
  {
    v9 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>((void **)v16);
  return v9;
}
