/*
 * XREFs of ??$find@U?$find_iid_traits@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1805F46B0
 * Callers:
 *     ??$find@U?$find_iid_traits@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UDiscoverabilityManager@Shell@Internal@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@45@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180294FF8 (--$find@U-$find_iid_traits@UDiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IApplicationViewChangeListener,IWindowSnappingEvents,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IApplicationViewChangeListener> && v1[1] == 0x5C48281337B642A9LL )
    return *a1;
  if ( *v1 == winrt::impl::guid_v<IWindowSnappingEvents> && v1[1] == 0x72E24D564197CDAFLL )
    return (*a1 + 8LL) & -(__int64)(*a1 != 0LL);
  return winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager>>();
}
