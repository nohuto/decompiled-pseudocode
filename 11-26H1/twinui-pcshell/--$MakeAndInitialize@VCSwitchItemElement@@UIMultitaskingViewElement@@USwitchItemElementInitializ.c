/*
 * XREFs of ??$MakeAndInitialize@VCSwitchItemElement@@UIMultitaskingViewElement@@USwitchItemElementInitializeArgs@1@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@$$QEAUSwitchItemElementInitializeArgs@CSwitchItemElement@@@Z @ 0x1804B4EDC
 * Callers:
 *     ?CreateElementForObject@CSwitchItemElementFactory@@UEAAJPEAUIUnknown@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x1804B57C0 (-CreateElementForObject@CSwitchItemElementFactory@@UEAAJPEAUIUnknown@@PEAUISwitchThumbnailFactor.c)
 * Callees:
 *     ??1?$MakeAllocator@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@Foundation@Windows@@V_lambda_3d673f836d44ef639fe032b9aedce249_@@$0?0PEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManager@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@56783@@Z@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18003E578 (--1-$MakeAllocator@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Te.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CSwitchItemElement@@QEAA@XZ @ 0x1804B5138 (--0CSwitchItemElement@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CSwitchItemElement@@QEAAJAEBUSwitchItemElementInitializeArgs@1@@Z @ 0x1804C019C (-RuntimeClassInitialize@CSwitchItemElement@@QEAAJAEBUSwitchItemElementInitializeArgs@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSwitchItemElement,IMultitaskingViewElement,CSwitchItemElement::SwitchItemElementInitializeArgs>(
        _QWORD *a1,
        const struct CSwitchItemElement::SwitchItemElementInitializeArgs *a2)
{
  void *v4; // rax
  int v5; // edi
  CSwitchItemElement *v6; // rbx
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  CSwitchItemElement *v9; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v4 = operator new(0x2A8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  if ( v4 )
  {
    v6 = CSwitchItemElement::CSwitchItemElement((CSwitchItemElement *)v4);
    v9 = v6;
    v8 = 0LL;
    v5 = CSwitchItemElement::RuntimeClassInitialize(v6, a2);
    if ( v5 >= 0 )
    {
      v5 = (**(__int64 (__fastcall ***)(CSwitchItemElement *, GUID *, _QWORD *))v6)(
             v6,
             &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
             a1);
      (*(void (__fastcall **)(CSwitchItemElement *))(*(_QWORD *)v6 + 16LL))(v6);
    }
    else if ( v6 )
    {
      (*(void (__fastcall **)(CSwitchItemElement *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::~MakeAllocator<Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>,_lambda_3d673f836d44ef639fe032b9aedce249_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs *>>(&v8);
  return (unsigned int)v5;
}
