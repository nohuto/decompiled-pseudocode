/*
 * XREFs of ?LaunchBootToCloudAsync@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18064E430
 * Callers:
 *     ?LaunchAsync@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x1806692B0 (-LaunchAsync@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AU-$IAsyncO.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 *     ?GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ @ 0x1802BC584 (-GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ.c)
 *     ?LaunchBootToCloudAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18064E3AC (-LaunchBootToCloudAsync@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winr.c)
 */

_QWORD *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::LaunchBootToCloudAsync(
        _QWORD *a1,
        __int64 **a2)
{
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel **FactoryImplObj; // rax
  _QWORD *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = a1;
  FactoryImplObj = (winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel **)winrt::Windows::Internal::Shell::implementation::GetFactoryImplObj((winrt::Windows::Internal::Shell::implementation *)&v6);
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::LaunchBootToCloudAsync(
    *FactoryImplObj,
    (const struct winrt::Windows::Foundation::Uri *)a1,
    a2);
  if ( v6 )
    winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v6);
  return a1;
}
