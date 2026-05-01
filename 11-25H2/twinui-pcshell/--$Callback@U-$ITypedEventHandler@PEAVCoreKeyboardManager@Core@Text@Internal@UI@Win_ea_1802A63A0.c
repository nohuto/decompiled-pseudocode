/*
 * XREFs of ??$Callback@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs@23456@@Foundation@Windows@@UTabTipAdapter@KeyboardHosting@@PEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs@789UI@3@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs@23456@@Foundation@Windows@@@01@PEAUTabTipAdapter@KeyboardHosting@@P834@EAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs@6789Windows@@@Z@Z @ 0x1802A63A0
 * Callers:
 *     ?AddEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1801D95F8 (-AddEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs@23456@@Foundation@Windows@@V_lambda_92384902bfd1f3d1753c5cb1acebd2f0_@@$0?0PEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManager@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs@56783@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_92384902bfd1f3d1753c5cb1acebd2f0_@@@Z @ 0x18046AF4C (--0-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@I_ea_18046AF4C.c)
 */

__int64 *__fastcall Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs *>,KeyboardHosting::TabTipAdapter,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs *>(
        __int64 *a1,
        __int64 a2,
        __int128 *a3)
{
  __int128 v3; // xmm0
  void *v5; // rcx
  __int64 v6; // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+28h] [rbp-20h]

  v3 = *a3;
  v8 = a2;
  v9 = v3;
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = 0LL;
  if ( v5 )
    v6 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs *>,_lambda_92384902bfd1f3d1753c5cb1acebd2f0_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs *>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs *>,_lambda_92384902bfd1f3d1753c5cb1acebd2f0_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs *>(
           v5,
           &v8);
  *a1 = v6;
  return a1;
}
