/*
 * XREFs of ??1?$_Optional_destruct_base@Uhstring@winrt@@$0A@@std@@QEAA@XZ @ 0x1802CFC54
 * Callers:
 *     ?GetAppThatWasDeleted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@Uhstring@winrt@@@std@@PEAUHKEY__@@PEBG@Z @ 0x1801BF13C (-GetAppThatWasDeleted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$op.c)
 *     ?RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4RegistryChangeKind@wil@@PEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@8@@Z @ 0x180284418 (-RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4R.c)
 *     ??1?$optional@Uhstring@winrt@@@std@@QEAA@XZ @ 0x1802D1888 (--1-$optional@Uhstring@winrt@@@std@@QEAA@XZ.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032F7A0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032F7A0.c)
 *     ?Insert@?$produce@U?$map_impl@Uhstring@winrt@@U12@V?$map@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX0PEA_N@Z @ 0x1803390E0 (-Insert@-$produce@U-$map_impl@Uhstring@winrt@@U12@V-$map@Uhstring@winrt@@U12@U-$less@Uhstring@wi.c)
 *     ?RemoveAt@?$vector_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@@winrt@@QEAAXI@Z @ 0x1805F81F4 (-RemoveAt@-$vector_base@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uh.c)
 *     ?RemoveAtEnd@?$vector_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@@winrt@@QEAAXXZ @ 0x1805F82F0 (-RemoveAtEnd@-$vector_base@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator.c)
 *     ?SetAt@?$vector_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@@winrt@@QEAAXIAEBUhstring@2@@Z @ 0x1805F860C (-SetAt@-$vector_base@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uhstr.c)
 *     ?GetSystemId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@AEBUWindowId@UI@56@@Z @ 0x180628018 (-GetSystemId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA-AUh.c)
 *     ?Insert@?$produce@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAXPEA_N@Z @ 0x1806283C0 (-Insert@-$produce@U-$map_impl@IUhstring@winrt@@V-$map@IUhstring@winrt@@U-$less@I@std@@V-$allocat.c)
 *     ?Insert@?$produce@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAH_KPEAXPEA_N@Z @ 0x1806284C0 (-Insert@-$produce@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$less@_K@std@@V-$allo.c)
 *     ?RemoveWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z @ 0x18062A8FC (-RemoveWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NA.c)
 *     ?UnregisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXI@Z @ 0x18062C890 (-UnregisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Wind.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall std::_Optional_destruct_base<winrt::hstring,0>::~_Optional_destruct_base<winrt::hstring,0>(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a1);
}
