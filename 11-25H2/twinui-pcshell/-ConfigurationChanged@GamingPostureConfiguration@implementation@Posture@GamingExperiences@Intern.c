/*
 * XREFs of ?ConfigurationChanged@GamingPostureConfiguration@implementation@Posture@GamingExperiences@Internal@Windows@winrt@@SA?AUevent_token@7@AEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@67@@Z @ 0x180335D90
 * Callers:
 *     ?add_ConfigurationChanged@?$produce@UGamingPostureConfiguration@factory_implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIGamingPostureConfigurationStatics@34567@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x180337340 (-add_ConfigurationChanged@-$produce@UGamingPostureConfiguration@factory_implementation@Posture@G.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x18005BC88 (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ??4?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C0EE0 (--4-$unique_any_t@V-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watche.c)
 *     ?make_registry_watcher_nothrow@wil@@YA?AV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@1@PEAUHKEY__@@PEBG_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1800C37CC (-make_registry_watcher_nothrow@wil@@YA-AV-$unique_any_t@V-$registry_watcher_t@V-$unique_storage@.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?add@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAA?AUevent_token@2@AEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@2@@Z @ 0x18022D360 (-add@-$event@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18029A45C (--1-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1-.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::ConfigurationChanged(
        __int64 a1)
{
  wil::details::registry_watcher_state **registry_watcher_nothrow; // rax
  wil::details::registry_watcher_state **v3; // rax
  __int64 v4; // rbx
  wil::details::registry_watcher_state *v6; // [rsp+30h] [rbp-39h] BYREF
  RTL_SRWLOCK *v7; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v8[8]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v9[13]; // [rsp+48h] [rbp-21h] BYREF
  _QWORD *v10; // [rsp+B0h] [rbp+47h]

  wil::AcquireSRWLockExclusive(
    &v7,
    &winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::s_lock);
  if ( !winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::s_configRegistryWatcherHklm )
  {
    v9[0] = off_180708EC0;
    v10 = v9;
    registry_watcher_nothrow = (wil::details::registry_watcher_state **)wil::make_registry_watcher_nothrow(&v6);
    wil::unique_any_t<wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>>::operator=(
      (wil::details::registry_watcher_state **)&winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::s_configRegistryWatcherHklm,
      registry_watcher_nothrow);
    wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>(&v6);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v8);
  }
  if ( !winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::s_configRegistryWatcherHkcu )
  {
    v9[0] = off_180708EC0;
    v10 = v9;
    v3 = (wil::details::registry_watcher_state **)wil::make_registry_watcher_nothrow(&v6);
    wil::unique_any_t<wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>>::operator=(
      (wil::details::registry_watcher_state **)&winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::s_configRegistryWatcherHkcu,
      v3);
    wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>(&v6);
    wistd::function<bool (long)>::~function<bool (long)>((__int64)v8);
  }
  v4 = *(_QWORD *)winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>::add(
                    (__int64)&winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureConfiguration::s_configurationChangedEvent,
                    (__int64)&v6,
                    a1);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
  return v4;
}
