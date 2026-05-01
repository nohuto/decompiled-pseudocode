/*
 * XREFs of ??$MakeAndInitialize@VNotificationDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVNotificationDispatcher@@@Z @ 0x180229DEC
 * Callers:
 *     ??$MakeAndInitialize@VNotificationDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@@012@@Z @ 0x1802C6210 (--$MakeAndInitialize@VNotificationDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-$C.c)
 * Callees:
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@Foundation@Windows@@V_lambda_3d673f836d44ef639fe032b9aedce249_@@$0?0PEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManager@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18003E578 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Te.c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800717E8 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEBAXXZ @ 0x1800C27EC (-InternalAddRef@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0NotificationDispatcher@@QEAA@XZ @ 0x180307860 (--0NotificationDispatcher@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@NotificationDispatcher@@QEAAJXZ @ 0x18030A30C (-RuntimeClassInitialize@NotificationDispatcher@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<NotificationDispatcher,NotificationDispatcher,>(
        NotificationDispatcher **a1)
{
  NotificationDispatcher *v2; // rax
  NotificationDispatcher *v4; // rdi
  int v5; // ebx
  NotificationDispatcher *v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = (NotificationDispatcher *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return 2147942414LL;
  v6 = NotificationDispatcher::NotificationDispatcher(v2);
  v4 = v6;
  v7 = 0LL;
  v5 = NotificationDispatcher::RuntimeClassInitialize(v6);
  if ( v5 >= 0 )
  {
    Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalAddRef((__int64 *)&v6);
    v5 = 0;
    *a1 = v4;
  }
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease((volatile signed __int32 **)&v6);
  Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>(&v7);
  return (unsigned int)v5;
}
