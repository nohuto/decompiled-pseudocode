/*
 * XREFs of ??0?$XamlApplication_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@$$V@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802907C4
 * Callers:
 *     ??0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18007D72C (--0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??0?$atomic@_K@std@@QEAA@_K@Z @ 0x180032450 (--0-$atomic@_K@std@@QEAA@_K@Z.c)
 *     ??$call@AEAV_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@@?$factory_cache_entry@UApplication@Xaml@UI@Windows@winrt@@UIApplicationFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@@Z @ 0x180209FA8 (--$call@AEAV_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@@-$factory_cache_entry@UApplication@Xaml@.c)
 *     ??R_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@QEBA@AEBUIApplicationFactory@Xaml@UI@Windows@winrt@@@Z @ 0x18020A150 (--R_lambda_39ed047273c22ea9d75ce7eaed056bf5_@@QEBA@AEBUIApplicationFactory@Xaml@UI@Windows@winrt.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     ??0?$producers_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@V?$tuple@UXamlApplication@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@56@UIApplicationOverrides@9UI@56@UIApplicationOverrides2@9UI@56@@std@@@impl@winrt@@QEAA@XZ @ 0x180290868 (--0-$producers_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winr.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,>::XamlApplication_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,>(
        _QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 *v5; // [rsp+40h] [rbp+18h]

  winrt::impl::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,std::tuple<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider,winrt::Windows::UI::Xaml::IApplicationOverrides,winrt::Windows::UI::Xaml::IApplicationOverrides2>>::producers_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,std::tuple<winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider,winrt::Windows::UI::Xaml::IApplicationOverrides,winrt::Windows::UI::Xaml::IApplicationOverrides2>>(a1 + 3);
  a1[1] = 0LL;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  std::atomic<unsigned __int64>::atomic<unsigned __int64>((__int64)(a1 + 2), 1LL);
  *a1 = &winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,>::`vftable';
  v2 = winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
         &v4,
         (__int64)a1);
  v5 = &qword_1808DC838;
  _InterlockedIncrement64(&qword_1808DC838);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Application,winrt::Windows::UI::Xaml::IApplicationFactory> )
  {
    _lambda_39ed047273c22ea9d75ce7eaed056bf5_::operator()(
      v2,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Application,winrt::Windows::UI::Xaml::IApplicationFactory>);
    _InterlockedDecrement64(&qword_1808DC838);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DC838);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Application,winrt::Windows::UI::Xaml::IApplicationFactory>::call<_lambda_39ed047273c22ea9d75ce7eaed056bf5_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 **))&qword_1808DC838,
      (__int64)v2);
  }
  return a1;
}
