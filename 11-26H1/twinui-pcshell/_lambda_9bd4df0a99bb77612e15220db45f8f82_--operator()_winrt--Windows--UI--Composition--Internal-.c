/*
 * XREFs of _lambda_9bd4df0a99bb77612e15220db45f8f82_::operator()_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_const_&_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs_const_&_ @ 0x1804A22B0
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs___lambda_9bd4df0a99bb77612e15220db45f8f82___::Invoke @ 0x1804A68F0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Composit.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802E7978 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ?TriggerFired@?$consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner@UICompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUevent_token@3@@Z @ 0x1804A9748 (-TriggerFired@-$consume_Windows_UI_Composition_Internal_ICompositionAnimationTrigge_ea_1804A9748.c)
 *     ?lock@?$weak_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA?AV?$shared_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1804A9FA8 (-lock@-$weak_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA-.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_9bd4df0a99bb77612e15220db45f8f82_::operator()_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_const___winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs_const___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3;
  std::weak_ptr<winrt::Windows::Internal::Shell::implementation::BootProviderActivator>::lock(a1, &v6);
  v4 = v6;
  if ( v6 )
  {
    winrt::impl::consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner<winrt::Windows::UI::Composition::Internal::ICompositionAnimationTriggerPartner>::TriggerFired(
      v6 + 480,
      v6 + 472);
    if ( *(_BYTE *)(a1 + 16) == *(_BYTE *)(v4 + 171) )
    {
      v8 = *(_QWORD *)(v4 + 176);
      v5 = *(_QWORD *)(v4 + 312);
      if ( !v5 )
      {
        std::_Xbad_function_call();
        __debugbreak();
      }
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 16LL))(v5, &v8);
      if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
        *(_BYTE *)(v4 + 185) = 1;
    }
  }
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
}
