/*
 * XREFs of ??$Make@VSnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAW4SnapEventType@23456@AEAUDateTime@Foundation@6@AEA_K@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@@12@AEAW4SnapEventType@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAUDateTime@Foundation@9@AEA_K@Z @ 0x1803FF2FC
 * Callers:
 *     ?CreateSnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@YA?AV?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@W4SnapEventType@12345@UDateTime@Foundation@5@_K@Z @ 0x1803FF408 (-CreateSnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@YA-AV-$com_ptr_t@UISnapSignalD.c)
 * Callees:
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@Foundation@Windows@@V_lambda_3d673f836d44ef639fe032b9aedce249_@@$0?0PEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManager@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18003E578 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Te.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIFocusNavigateEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801D0368 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIFocusNavigateEventArgs.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1803FF590 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UISnapSignalData@D.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::Details::Make<Windows::Internal::Shell::TaskFlow::DataEngine::SnapSignalData,enum Windows::Internal::Shell::TaskFlow::DataEngine::SnapEventType &,Windows::Foundation::DateTime &,unsigned __int64 &>(
        _QWORD *a1,
        int *a2,
        __int64 *a3,
        __int64 *a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // rbx
  int v12; // r14d
  void *v14; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  v14 = v8;
  if ( v8 )
  {
    v10 = *a4;
    v11 = *a3;
    v12 = *a2;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs>((__int64)v8);
    *v9 = &Microsoft::WRL::RuntimeClass<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData>::`vftable'{for `Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData'};
    v9[1] = &Microsoft::WRL::RuntimeClass<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v9 = &Windows::Internal::Shell::TaskFlow::DataEngine::SnapSignalData::`vftable'{for `Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData'};
    v9[1] = &Microsoft::WRL::RuntimeClass<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>'};
    *((_DWORD *)v9 + 8) = v12;
    v9[5] = v11;
    v9[6] = v10;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData>::Release();
    *a1 = v9;
    v14 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>(&v14);
  return a1;
}
