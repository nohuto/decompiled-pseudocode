/*
 * XREFs of ?query_interface@?$root_implements@UXamlExplorerHostWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@UIXamlExplorerHostWindowFactory@34567@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180243408
 * Callers:
 *     ?QueryInterface@?$produce_base@UXamlExplorerHostWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1801CCAA0 (-QueryInterface@-$produce_base@UXamlExplorerHostWindow@factory_implementation@XamlExplorerHost@S.c)
 *     ?QueryInterface@?$produce_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMapView@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x180220AD0 (-QueryInterface@-$produce_base@U-$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@.c)
 *     ?QueryInterface@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18022B0C0 (-QueryInterface@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@w.c)
 *     ?QueryInterface@?$produce_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@U?$IIterable@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1802A9560 (-QueryInterface@-$produce_base@U-$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@wi.c)
 *     ?QueryInterface@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIPrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1802BE210 (-QueryInterface@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI_ea_1802BE210.c)
 *     ?QueryInterface@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIInitializeActivatedEventArgs@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1802BE970 (-QueryInterface@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI_ea_1802BE970.c)
 *     ?QueryInterface@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UIActivatedEventArgsWithUser@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1803C66B0 (-QueryInterface@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI_ea_1803C66B0.c)
 *     ?QueryInterface@?$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UILaunchActivatedEventArgs2@Activation@ApplicationModel@Windows@6@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1803C66D0 (-QueryInterface@-$produce_base@USearchAppActivatedEventArgs@implementation@Shell@UI_ea_1803C66D0.c)
 * Callees:
 *     ?AddRef@?$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x1801C7F30 (-AddRef@-$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt.c)
 *     ?query_interface_common@?$root_implements@URemoteSystemStateChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1802E05CC (-query_interface_common@-$root_implements@URemoteSystemStateChangedEventArgs@implementation@Shel.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostWindow,winrt::Windows::Foundation::IActivationFactory,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowFactory>::query_interface(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v6; // rax

  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  *a3 = v6;
  if ( !v6 )
    return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs,winrt::Windows::Internal::Shell::RemoteSystemStateChangedEventArgs>::query_interface_common(
             a1,
             a2,
             a3);
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef(a1);
  return 0LL;
}
