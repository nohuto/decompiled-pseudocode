/*
 * XREFs of ?value@?$optional@Uhstring@winrt@@@std@@QEGAAAEAUhstring@winrt@@XZ @ 0x1802B2A6C
 * Callers:
 *     ?RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4RegistryChangeKind@wil@@PEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@8@@Z @ 0x18027B978 (-RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4R.c)
 *     ?ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18035AE30 (-ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt.c)
 *     ?ApplySizeConstraints@JointResize@@AEAAXXZ @ 0x180537D3C (-ApplySizeConstraints@JointResize@@AEAAXXZ.c)
 *     ?GetSystemId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@AEBUWindowId@UI@56@@Z @ 0x18064DB18 (-GetSystemId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA-AUh.c)
 *     ?RemoveWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z @ 0x18065039C (-RemoveWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NA.c)
 *     ?UnregisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXI@Z @ 0x1806521FC (-UnregisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Wind.c)
 * Callees:
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1802B2A8C (-_Throw_bad_optional_access@std@@YAXXZ.c)
 */

__int64 __fastcall std::optional<winrt::hstring>::value(__int64 a1)
{
  if ( !*(_BYTE *)(a1 + 8) )
    std::_Throw_bad_optional_access();
  return a1;
}
