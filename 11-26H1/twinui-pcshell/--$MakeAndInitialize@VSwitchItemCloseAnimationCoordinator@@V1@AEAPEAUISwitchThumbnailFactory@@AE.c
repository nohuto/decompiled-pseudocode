/*
 * XREFs of ??$MakeAndInitialize@VSwitchItemCloseAnimationCoordinator@@V1@AEAPEAUISwitchThumbnailFactory@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemCloseAnimationCoordinator@@AEAPEAUISwitchThumbnailFactory@@AEBU_GUID@@@Z @ 0x1804D6F8C
 * Callers:
 *     ?SwitchItemCloseAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x1804D76D0 (-SwitchItemCloseAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@AEBU_GUID@@.c)
 * Callees:
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@Foundation@Windows@@V_lambda_3d673f836d44ef639fe032b9aedce249_@@$0?0PEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManager@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18003E578 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Te.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VItemAnimationCoordinatorBase@@@WRL@Microsoft@@QEAA@XZ @ 0x1804D704C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VItemAnimationCoordinatorBase@@@WRL@Mi.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemCloseAnimationCoordinator@@@WRL@Microsoft@@IEAAKXZ @ 0x1804D756C (-InternalRelease@-$ComPtr@VSwitchItemCloseAnimationCoordinator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@ItemAnimationCoordinatorBase@@QEAAJPEAUISwitchThumbnailFactory@@AEBU_GUID@@@Z @ 0x1804E02FC (-RuntimeClassInitialize@ItemAnimationCoordinatorBase@@QEAAJPEAUISwitchThumbnailFactory@@AEBU_GUI.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SwitchItemCloseAnimationCoordinator,SwitchItemCloseAnimationCoordinator,ISwitchThumbnailFactory * &,_GUID const &>(
        _QWORD *a1,
        struct ISwitchThumbnailFactory **a2,
        const struct _GUID *a3)
{
  char *v6; // rax
  char *v7; // rbx
  int v8; // edi
  volatile int *v9; // rdx
  char *v11; // [rsp+40h] [rbp+8h] BYREF
  char *v12; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = (char *)operator new(0xF8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v12 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ItemAnimationCoordinatorBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ItemAnimationCoordinatorBase>(v6);
    *(_QWORD *)v7 = &SwitchItemCloseAnimationCoordinator::`vftable';
    v11 = v7;
    v12 = 0LL;
    v8 = ItemAnimationCoordinatorBase::RuntimeClassInitialize((ItemAnimationCoordinatorBase *)v7, *a2, a3);
    if ( v8 >= 0 )
    {
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v7 + 244), v9);
      *a1 = v7;
      Microsoft::WRL::ComPtr<SwitchItemCloseAnimationCoordinator>::InternalRelease(&v11);
      v8 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<SwitchItemCloseAnimationCoordinator>::InternalRelease(&v11);
    }
  }
  else
  {
    v8 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>((void **)&v12);
  return (unsigned int)v8;
}
