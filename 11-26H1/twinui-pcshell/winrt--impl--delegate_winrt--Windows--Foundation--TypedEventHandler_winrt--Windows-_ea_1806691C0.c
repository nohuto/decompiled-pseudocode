/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId___lambda_97ea773e353b0db0e215eb811349f3a3___::Invoke @ 0x1806691C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA?AV?$shared_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1804A9FA8 (-lock@-$weak_ptr@UBootProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@QEBA-.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_FailFast_V2_Provider@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180669810 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_FailFast_V2_Provider@@@details@w.c)
 *     ?clear@?$vector@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAAXXZ @ 0x180669A98 (-clear@-$vector@U-$event_revoker@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId___lambda_97ea773e353b0db0e215eb811349f3a3___::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-10h]
  int v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  std::weak_ptr<winrt::Windows::Internal::Shell::implementation::BootProviderActivator>::lock(a1 + 16, &v5);
  try
  {
    v2 = v5;
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 24LL))(v5, &v8);
      LOBYTE(v3) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_FailFast_V2_Provider>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_W365Boot_FailFast_V2_Provider>::GetImpl'::`2'::impl,
        v3);
      std::vector<winrt::event_revoker<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>>::clear(v2 + 8);
    }
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v7);
  }
  return result;
}
