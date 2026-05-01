/*
 * XREFs of ??$MakeAndInitialize@VInputEaterElement@@V1@AEAPEAUIInputEaterElementNotifications@@@Details@WRL@Microsoft@@YAJPEAPEAVInputEaterElement@@AEAPEAUIInputEaterElementNotifications@@@Z @ 0x1804DA1B8
 * Callers:
 *     ?InputEaterElement_CreateInstance@@YAJPEAUIInputEaterElementNotifications@@AEBU_GUID@@PEAPEAX@Z @ 0x1804DA3B4 (-InputEaterElement_CreateInstance@@YAJPEAUIInputEaterElementNotifications@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@Foundation@Windows@@V_lambda_3d673f836d44ef639fe032b9aedce249_@@$0?0PEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManager@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18003E578 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Te.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CMultitaskingViewElementBase@@QEAA@XZ @ 0x1804B50A4 (--0CMultitaskingViewElementBase@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<InputEaterElement,InputEaterElement,IInputEaterElementNotifications * &>(
        __int64 *a1,
        __int64 *a2)
{
  unsigned int v4; // edi
  void *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rcx
  void *v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = operator new(0xE0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = (__int64)v5;
  v10 = v5;
  if ( v5 )
  {
    CMultitaskingViewElementBase::CMultitaskingViewElementBase((CMultitaskingViewElementBase *)v5);
    *(_DWORD *)(v6 + 212) = 1;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewElementBase>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v6 = &InputEaterElement::`vftable';
    *(_QWORD *)(v6 + 216) = 0LL;
    v11 = v6;
    v10 = 0LL;
    v7 = *a2;
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v8 = *(_QWORD *)(v6 + 216);
      *(_QWORD *)(v6 + 216) = v7;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    *a1 = v6;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  }
  else
  {
    v4 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>(&v10);
  return v4;
}
