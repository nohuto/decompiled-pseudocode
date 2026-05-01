/*
 * XREFs of ??$MakeAndInitialize@VTouchKeyboardExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTouchKeyboardExperienceManager@@@Z @ 0x1801E7788
 * Callers:
 *     ?CreateInstance@TouchKeyboardExperienceManagerCF@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18022EE50 (-CreateInstance@TouchKeyboardExperienceManagerCF@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@Foundation@Windows@@V_lambda_3d673f836d44ef639fe032b9aedce249_@@$0?0PEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManager@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18003E578 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Te.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIApplicationFrameEventHandler@@UIImmersiveLayoutChanges@@UIImmersiveWindowMessageNotification@@UITouchKeyboardExperienceManager@@UIApplicationStateChangeHandler@@UILightDismissNotification@@UIGlobalRudeWindowNotifications@@UIClipboardViewLauncher@DataTransfer@Internal@ApplicationModel@Windows@@UIDWMStoryboardListener@@UITextInputHostInfoProvider@@UIInputExperienceHost@Text@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180173B00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_180173B00.c)
 *     ?RuntimeClassInitialize@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x1801E7838 (-RuntimeClassInitialize@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ?InternalAddRef@?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1802BD030 (-InternalAddRef@-$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1802C5378 (-InternalRelease@-$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0TouchKeyboardExperienceManager@@QEAA@XZ @ 0x180467F80 (--0TouchKeyboardExperienceManager@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TouchKeyboardExperienceManager,TouchKeyboardExperienceManager,>(
        TouchKeyboardExperienceManager **a1)
{
  unsigned int v2; // ebx
  void *v3; // rax
  TouchKeyboardExperienceManager *v4; // rdi
  int v5; // esi
  TouchKeyboardExperienceManager *v7; // [rsp+40h] [rbp+8h] BYREF
  void *v8; // [rsp+48h] [rbp+10h] BYREF
  void *v9; // [rsp+50h] [rbp+18h]

  v2 = 0;
  *a1 = 0LL;
  v3 = operator new(0x948uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v3;
  v7 = (TouchKeyboardExperienceManager *)v3;
  if ( !v3 )
  {
    v2 = -2147024882;
LABEL_8:
    Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>(&v8);
    return v2;
  }
  v9 = v3;
  v4 = TouchKeyboardExperienceManager::TouchKeyboardExperienceManager((TouchKeyboardExperienceManager *)v3);
  v7 = v4;
  v8 = 0LL;
  v5 = TouchKeyboardExperienceManager::RuntimeClassInitialize(v4);
  if ( v5 >= 0 )
  {
    Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalAddRef(&v7);
    *a1 = v4;
    Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::InternalRelease(&v7);
    goto LABEL_8;
  }
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IApplicationFrameEventHandler,IImmersiveLayoutChanges,IImmersiveWindowMessageNotification,ITouchKeyboardExperienceManager,IApplicationStateChangeHandler,ILightDismissNotification,IGlobalRudeWindowNotifications,Windows::ApplicationModel::Internal::DataTransfer::IClipboardViewLauncher,IDWMStoryboardListener,ITextInputHostInfoProvider,Windows::Internal::Shell::Text::IInputExperienceHost,Microsoft::WRL::FtmBase>::Release((__int64)v4);
  return (unsigned int)v5;
}
