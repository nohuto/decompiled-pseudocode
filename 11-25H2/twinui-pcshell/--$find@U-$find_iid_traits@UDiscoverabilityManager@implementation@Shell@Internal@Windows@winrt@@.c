/*
 * XREFs of ??$find@U?$find_iid_traits@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UDiscoverabilityManager@Shell@Internal@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@45@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180294FF8
 * Callers:
 *     ?find_interface@?$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@U13456@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@Uimmersive_shell_component@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180294FD0 (-find_interface@-$implements@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::DiscoverabilityManager,IApplicationViewChangeListener,IWindowSnappingEvents,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::IDiscoverabilityManager>
    && v1[1] == 0xBF39E5058F3263B3uLL )
  {
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return winrt::impl::interface_list<IApplicationViewChangeListener,IWindowSnappingEvents,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager>>();
  }
}
