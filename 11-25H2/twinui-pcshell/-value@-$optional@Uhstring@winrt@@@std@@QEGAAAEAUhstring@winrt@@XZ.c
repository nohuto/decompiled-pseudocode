/*
 * XREFs of ?value@?$optional@Uhstring@winrt@@@std@@QEGAAAEAUhstring@winrt@@XZ @ 0x1802BBF6C
 * Callers:
 *     ?RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4RegistryChangeKind@wil@@PEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@8@@Z @ 0x180284418 (-RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4R.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032F7A0 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPosture_ea_18032F7A0.c)
 *     ?ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@AEAAXUwrite_lock_required@wil@@@Z @ 0x180354590 (-ApplyPendingValues@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt.c)
 *     ?ApplySizeConstraints@JointResize@@AEAAXXZ @ 0x18051516C (-ApplySizeConstraints@JointResize@@AEAAXXZ.c)
 *     ?GetSystemId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@AEBUWindowId@UI@56@@Z @ 0x180628018 (-GetSystemId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA-AUh.c)
 *     ?RemoveWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUWindowId@UI@56@@Z @ 0x18062A8FC (-RemoveWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NA.c)
 *     ?UnregisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXI@Z @ 0x18062C890 (-UnregisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Wind.c)
 * Callees:
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1802BBF8C (-_Throw_bad_optional_access@std@@YAXXZ.c)
 */

__int64 __fastcall std::optional<winrt::hstring>::value(__int64 a1)
{
  if ( !*(_BYTE *)(a1 + 8) )
    std::_Throw_bad_optional_access();
  return a1;
}
