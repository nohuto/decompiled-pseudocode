/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopManager@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence@@$$TAEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopManager@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence@@$$QEA$$TAEAPEAUIVirtualDesktopLock@@@Z @ 0x180081D78
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800826D8 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@Foundation@Windows@@V_lambda_3d673f836d44ef639fe032b9aedce249_@@$0?0PEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManager@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18003E578 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Te.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopManager@@QEAAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopNotification@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopPersistence@@PEAUIUnknown@@PEAUIVirtualDesktopLock@@@Z @ 0x1800812AC (-RuntimeClassInitialize@CVirtualDesktopManager@@QEAAJPEAUIVirtualDesktopCollection@@PEAUIVirtual.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180081AD0 (-InternalRelease@-$ComPtr@VCVirtualDesktopManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIVirtualDesktopManagerPrivate@@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@VNil@Details@WRL@Microsoft@@V4567@V4567@V4567@V4567@V4567@V4567@@23@UIVirtualDesktopManagerInternal@@UIVirtualDesktopManagerInternal2@@UISuspendableVirtualDesktopManager@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180081B00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$Ch_ea_180081B00.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CVirtualDesktopManager@@QEAA@XZ @ 0x180551798 (--0CVirtualDesktopManager@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopManager,CVirtualDesktopManager,IVirtualDesktopCollection * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopNotification * &,IVirtualDesktopForegroundPolicy * &,IVirtualDesktopPersistence * &,std::nullptr_t,IVirtualDesktopLock * &>(
        volatile signed __int64 **a1,
        struct IVirtualDesktopCollection **a2,
        struct IVirtualDesktopVisibilityPolicy **a3,
        struct IVirtualDesktopNotification **a4,
        struct IVirtualDesktopForegroundPolicy **a5,
        struct IVirtualDesktopPersistence **a6,
        __int64 a7,
        struct IVirtualDesktopLock **a8)
{
  unsigned int v12; // ebx
  CVirtualDesktopManager *v13; // rax
  volatile signed __int64 *v14; // rdi
  volatile int *v15; // rdx
  int v16; // ebp
  signed __int64 v17; // rax
  signed __int64 v19; // rtt
  struct IUnknown *v20; // [rsp+30h] [rbp-28h]
  volatile signed __int64 *v21; // [rsp+60h] [rbp+8h] BYREF

  v12 = 0;
  *a1 = 0LL;
  v13 = (CVirtualDesktopManager *)operator new(0x130uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v13 )
    return (unsigned int)-2147024882;
  v14 = (volatile signed __int64 *)CVirtualDesktopManager::CVirtualDesktopManager(v13);
  v21 = v14;
  a7 = 0LL;
  v16 = CVirtualDesktopManager::RuntimeClassInitialize((CVirtualDesktopManager *)v14, *a2, *a3, *a4, *a5, *a6, v20, *a8);
  if ( v16 >= 0 )
  {
    if ( v14 )
    {
      v17 = *((_QWORD *)v14 + 12);
      while ( v17 >= 0 )
      {
        if ( (_DWORD)v17 != 0x7FFFFFFF )
        {
          v19 = v17;
          v17 = _InterlockedCompareExchange64(v14 + 12, v17 + 1, v17);
          if ( v19 != v17 )
            continue;
        }
        goto LABEL_7;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v17 + 16), v15);
    }
LABEL_7:
    *a1 = v14;
    if ( v14 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IVirtualDesktopManagerPrivate,IVirtualDesktopManagerInternal,IVirtualDesktopManagerInternal2,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IVirtualDesktopManagerInternal,IVirtualDesktopManagerInternal2,ISuspendableVirtualDesktopManager,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::Release(v14);
    return v12;
  }
  Microsoft::WRL::ComPtr<CVirtualDesktopManager>::InternalRelease((__int64 *)&v21);
  Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>((void **)&a7);
  return (unsigned int)v16;
}
