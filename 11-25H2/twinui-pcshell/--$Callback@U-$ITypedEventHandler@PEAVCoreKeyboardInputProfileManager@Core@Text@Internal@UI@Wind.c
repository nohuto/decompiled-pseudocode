/*
 * XREFs of ??$Callback@U?$ITypedEventHandler@PEAVCoreKeyboardInputProfileManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@23456@@Foundation@Windows@@VInputAppPreloader@KeyboardHosting@@PEAUICoreKeyboardInputProfileManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@789UI@3@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVCoreKeyboardInputProfileManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@23456@@Foundation@Windows@@@01@PEAVInputAppPreloader@KeyboardHosting@@P834@EAAJPEAUICoreKeyboardInputProfileManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@6789Windows@@@Z@Z @ 0x1802B4F50
 * Callers:
 *     ??0InputAppPreloader@KeyboardHosting@@QEAA@PEAVTouchKeyboardExperienceManager@@@Z @ 0x1802B5308 (--0InputAppPreloader@KeyboardHosting@@QEAA@PEAVTouchKeyboardExperienceManager@@@Z.c)
 * Callees:
 *     ??0?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCoreKeyboardInputProfileManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@23456@@Foundation@Windows@@V_lambda_f2653944a1f8e8e1a0d5ae701a288a85_@@$0?0PEAUICoreKeyboardInputProfileManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCoreKeyboardInputProfileManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardInputProfileManager@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUICoreKeyboardInputProfileManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@56783@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_f2653944a1f8e8e1a0d5ae701a288a85_@@@Z @ 0x1802B1B18 (--0-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAVCoreKeyboardInputProfileManager@Core@Text@In.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardInputProfileManager *,Windows::UI::Internal::Text::Core::CoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *>,KeyboardHosting::InputAppPreloader,Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *>(
        __int64 *a1,
        __int64 a2)
{
  void *v3; // rcx
  __int64 v4; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&v6 = a2;
  *((_QWORD *)&v6 + 1) = KeyboardHosting::InputAppPreloader::OnEnabledInputProfilesChanged;
  v3 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = 0LL;
  if ( v3 )
    v4 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardInputProfileManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardInputProfileManager *,Windows::UI::Internal::Text::Core::CoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *>,_lambda_f2653944a1f8e8e1a0d5ae701a288a85_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardInputProfileManager *,Windows::UI::Internal::Text::Core::CoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *>,_lambda_f2653944a1f8e8e1a0d5ae701a288a85_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *>(
           (__int64)v3,
           &v6);
  *a1 = v4;
  return a1;
}
