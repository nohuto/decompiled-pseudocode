/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::UI::WindowId___lambda_e22f66c9943d4383c52f9a8ad3733f3b___::Invoke @ 0x180634F80
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800A8318 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18062AB60 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect@@@details@wil@.c)
 *     ??$ProviderWindowDestroyedEventFired@AEB_K@CloudPCTelemetry@@SAXAEB_K@Z @ 0x180630C38 (--$ProviderWindowDestroyedEventFired@AEB_K@CloudPCTelemetry@@SAXAEB_K@Z.c)
 *     ?OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180635918 (-OnWindowDestroyed@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAX.c)
 *     ?get@?$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x180637C14 (-get@-$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::UI::WindowId___lambda_e22f66c9943d4383c52f9a8ad3733f3b___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 result; // rax
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::get(a1 + 16, &v6);
  try
  {
    if ( v6 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::ReportUsage(
        (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_RetryAndReconnect>::GetImpl'::`2'::impl,
        1u,
        v3,
        v4);
      CloudPCTelemetry::ProviderWindowDestroyedEventFired<unsigned __int64 const &>(&v7);
      winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::OnWindowDestroyed(
        v6,
        (const struct winrt::Windows::UI::WindowId *)&v7);
    }
    if ( v6 )
      winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((_QWORD **)&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
