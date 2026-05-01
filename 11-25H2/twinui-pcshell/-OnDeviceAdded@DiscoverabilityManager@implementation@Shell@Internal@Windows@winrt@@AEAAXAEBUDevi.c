/*
 * XREFs of ?OnDeviceAdded@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUDeviceWatcher@Enumeration@Devices@56@AEBUDeviceInformation@8956@@Z @ 0x1805F7E00
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetMicrosoftResourceManager@?$consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics@UISystemResourceManagerStatics@Internal@Core@Resources@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180065988 (-GetMicrosoftResourceManager@-$consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemR.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?IsSystemProvided@?$consume_WindowsUdk_UI_Shell_IWebSearchProvider@UIWebSearchProvider@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801CD910 (-IsSystemProvided@-$consume_WindowsUdk_UI_Shell_IWebSearchProvider@UIWebSearchProvider@Shell@UI@.c)
 *     ?ThumbnailFactory@?$consume_Windows_Internal_ComposableShell_Multitasking_IRootSwitchItem@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUIThumbnailFactory@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x18043F39C (-ThumbnailFactory@-$consume_Windows_Internal_ComposableShell_Multitasking_IRootSwitchItem@UIRoot.c)
 *     ?Pairing@?$consume_Windows_Devices_Enumeration_IDeviceInformation2@UDeviceInformation@Enumeration@Devices@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805F7F74 (-Pairing@-$consume_Windows_Devices_Enumeration_IDeviceInformation2@UDeviceInformation@Enumeratio.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::OnDeviceAdded(
        winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *this,
        const struct winrt::Windows::Devices::Enumeration::DeviceWatcher *a2,
        const struct winrt::Windows::Devices::Enumeration::DeviceInformation *a3)
{
  volatile signed __int32 *v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  volatile signed __int32 *v7; // [rsp+68h] [rbp+20h] BYREF

  winrt::impl::consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics<winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics>::GetMicrosoftResourceManager(
    (__int64 *)a3,
    &v7);
  ++*((_DWORD *)this + 96);
  winrt::impl::consume_Windows_Devices_Enumeration_IDeviceInformation2<winrt::Windows::Devices::Enumeration::DeviceInformation>::Pairing(
    a3,
    &v6);
  if ( v6
    && winrt::impl::consume_WindowsUdk_UI_Shell_IWebSearchProvider<winrt::WindowsUdk::UI::Shell::IWebSearchProvider>::IsSystemProvided(&v6) )
  {
    v5 = v7;
    winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IRootSwitchItem<winrt::Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem>::ThumbnailFactory(
      (__int64 *)this + 49,
      (__int64 *)&v5);
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v7);
}
