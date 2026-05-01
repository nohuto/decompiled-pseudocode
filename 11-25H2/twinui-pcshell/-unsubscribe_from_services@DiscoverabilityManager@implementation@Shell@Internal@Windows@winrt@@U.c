/*
 * XREFs of ?unsubscribe_from_services@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1805F9090
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180067668 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?Stop@?$consume_Windows_Devices_Enumeration_IDeviceWatcher@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180350544 (-Stop@-$consume_Windows_Devices_Enumeration_IDeviceWatcher@UIDeviceWatcher@Enumeration@Devices@W.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverability_UnHandledException_Bugfix@@@details@wil@@QEAA_NXZ @ 0x1805F8A68 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CastDiscoverability_UnHandledExce.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::unsubscribe_from_services(
        winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *this,
        struct IServiceProvider *a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  const char *v8; // r9
  int v9; // eax
  int v10; // eax
  int v11; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v3 = (__int64 *)((char *)this + 416);
  if ( *v3 )
  {
    v14 = 0LL;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(v3, &v14);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
  }
  *((_DWORD *)this + 90) = 0;
  v4 = *((_QWORD *)this + 46);
  v11 = 0;
  v12 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v4 + 120LL))(v4, a2);
  winrt::check_hresult((int *)&v14, v5, (__int64)&v11);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_CastDiscoverability_UnHandledException_Bugfix>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_CastDiscoverability_UnHandledException_Bugfix>::GetImpl'::`2'::impl) )
  {
    v6 = SmartCookie::Unregister((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)((char *)this + 104));
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x82,
        (int)"pcshell\\twinui\\discoverabilitymanager\\lib\\discoverabilitymanager.cpp",
        (const char *)(unsigned int)v6);
    v7 = SmartCookie::Unregister((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)((char *)this + 232));
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x83,
        (int)"pcshell\\twinui\\discoverabilitymanager\\lib\\discoverabilitymanager.cpp",
        (const char *)(unsigned int)v7);
    try
    {
      if ( *((_QWORD *)this + 47) )
      {
        winrt::impl::consume_Windows_Devices_Enumeration_IDeviceWatcher<winrt::Windows::Devices::Enumeration::IDeviceWatcher>::Stop((__int64 *)this + 47);
        v14 = 0LL;
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 47, &v14);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
      }
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x8D,
        (int)"pcshell\\twinui\\discoverabilitymanager\\lib\\discoverabilitymanager.cpp",
        v8);
    }
  }
  else
  {
    if ( *((_QWORD *)this + 47) )
    {
      winrt::impl::consume_Windows_Devices_Enumeration_IDeviceWatcher<winrt::Windows::Devices::Enumeration::IDeviceWatcher>::Stop((__int64 *)this + 47);
      v14 = 0LL;
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 47, &v14);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
    }
    v9 = SmartCookie::Unregister((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)((char *)this + 104));
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x96,
        (int)"pcshell\\twinui\\discoverabilitymanager\\lib\\discoverabilitymanager.cpp",
        (const char *)(unsigned int)v9);
    v10 = SmartCookie::Unregister((winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *)((char *)this + 232));
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x97,
        (int)"pcshell\\twinui\\discoverabilitymanager\\lib\\discoverabilitymanager.cpp",
        (const char *)(unsigned int)v10);
  }
}
