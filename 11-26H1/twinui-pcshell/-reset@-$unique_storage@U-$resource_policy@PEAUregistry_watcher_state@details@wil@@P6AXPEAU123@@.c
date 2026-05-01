/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUregistry_watcher_state@23@@Z @ 0x1801C8114
 * Callers:
 *     ?unsubscribe_from_services@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800271F0 (-unsubscribe_from_services@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXP.c)
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1800F8524 (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_st.c)
 *     ??4?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F9114 (--4-$unique_any_t@V-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watche.c)
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1800FA914 (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregist_ea_1800FA914.c)
 *     ?RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4RegistryChangeKind@wil@@PEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@8@@Z @ 0x18027B978 (-RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4R.c)
 *     ??4?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAAAEAV01@$$T@Z @ 0x1802BE0EC (--4-$unique_any_t@V-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUre_ea_1802BE0EC.c)
 *     ?remove_ConfigurationChanged@?$produce@UGamingPostureConfiguration@factory_implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureConfigurationStatics@34567@@impl@winrt@@UEAAHUevent_token@3@@Z @ 0x180337160 (-remove_ConfigurationChanged@-$produce@UGamingPostureConfiguration@factory_implementation@Postur.c)
 *     ??1StartupAppMonitor@@UEAA@XZ @ 0x180583FE0 (--1StartupAppMonitor@@UEAA@XZ.c)
 *     wistd::__function::__func__lambda_0774abe74d71d40a41a88fc2c42bbab9__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x180612B10 (wistd--__function--__func__lambda_0774abe74d71d40a41a88fc2c42bbab9__void___cdecl(enum_wil--Regis.c)
 * Callees:
 *     ?Release@registry_watcher_state@details@wil@@QEAAXXZ @ 0x1801C817C (-Release@registry_watcher_state@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
        wil::details::registry_watcher_state **a1,
        wil::details::registry_watcher_state *a2)
{
  wil::details::registry_watcher_state *v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    wil::details::registry_watcher_state::Release(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
