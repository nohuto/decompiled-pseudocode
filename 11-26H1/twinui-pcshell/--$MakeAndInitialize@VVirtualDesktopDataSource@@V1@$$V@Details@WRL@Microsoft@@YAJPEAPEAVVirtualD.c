/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopDataSource@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopDataSource@@@Z @ 0x1802259BC
 * Callers:
 *     ?VirtualDesktopDataSource_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D52D8 (-VirtualDesktopDataSource_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@Foundation@Windows@@V_lambda_3d673f836d44ef639fe032b9aedce249_@@$0?0PEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManager@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18003E578 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Te.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180072320 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopDataSource@@@WRL@Microsoft@@IEAAKXZ @ 0x18022F828 (-InternalRelease@-$ComPtr@VVirtualDesktopDataSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0VirtualDesktopDataSource@@QEAA@XZ @ 0x18048F824 (--0VirtualDesktopDataSource@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopDataSource,VirtualDesktopDataSource,>(
        VirtualDesktopDataSource **a1)
{
  VirtualDesktopDataSource *v2; // rax
  VirtualDesktopDataSource *v4; // rax
  volatile int *v5; // rdx
  VirtualDesktopDataSource *v6; // r8
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  VirtualDesktopDataSource *v9; // [rsp+30h] [rbp+8h] BYREF
  void *v10; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = (VirtualDesktopDataSource *)operator new(0x120uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return 2147942414LL;
  v4 = VirtualDesktopDataSource::VirtualDesktopDataSource(v2);
  v9 = v4;
  v6 = v4;
  v10 = 0LL;
  if ( v4 )
  {
    v7 = *((_QWORD *)v4 + 11);
    while ( v7 >= 0 )
    {
      if ( (_DWORD)v7 != 0x7FFFFFFF )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 11, v7 + 1, v7);
        if ( v8 != v7 )
          continue;
      }
      goto LABEL_10;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v7 + 16), v5);
  }
LABEL_10:
  *a1 = v6;
  Microsoft::WRL::ComPtr<VirtualDesktopDataSource>::InternalRelease(&v9);
  Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>(&v10);
  return 0LL;
}
