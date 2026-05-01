/*
 * XREFs of ?Invoke@?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAVCoreKeyboardInputProfileManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@23456@@Foundation@Windows@@V_lambda_f2653944a1f8e8e1a0d5ae701a288a85_@@$0?0PEAUICoreKeyboardInputProfileManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@67893@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVCoreKeyboardInputProfileManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardInputProfileManager@23456@@Internal@Foundation@Windows@@U?$AggregateType@PEAVCoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@23456@@234@@Foundation@Windows@@EAAJPEAUICoreKeyboardInputProfileManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@56783@@Z@Details@WRL@Microsoft@@UEAAJPEAUICoreKeyboardInputProfileManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@789UI@Windows@@@Z @ 0x180142080
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x180142648 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardInputProfileManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManager *>,Windows::Foundation::Internal::AggregateType<Windows::UI::Internal::Text::Core::CoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *,Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *>>::*)(Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardInputProfileManager *,Windows::UI::Internal::Text::Core::CoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *>,_lambda_f2653944a1f8e8e1a0d5ae701a288a85_,-1,Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *>::Invoke(
        __int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 24))(*(_QWORD *)(a1 + 16));
  v2 = v1;
  if ( v1 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v1);
  return v2;
}
