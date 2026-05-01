/*
 * XREFs of _lambda_eb02d5272acc639a9001bc530d909dad_::operator()_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_const_&_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs_const_&_ @ 0x1804915E8
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs___lambda_eb02d5272acc639a9001bc530d909dad___::Invoke @ 0x1804959F0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Composit.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?TriggerFired@?$consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner@UICompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUevent_token@3@@Z @ 0x180498A90 (-TriggerFired@-$consume_Windows_UI_Composition_Internal_ICompositionAnimationTrigge_ea_180498A90.c)
 *     ?lock@?$weak_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA?AV?$shared_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1804990F8 (-lock@-$weak_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA-.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_eb02d5272acc639a9001bc530d909dad_::operator()_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_const___winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs_const___(
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
    }
  }
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
}
