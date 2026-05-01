/*
 * XREFs of ??$find@U?$find_iid_traits@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180616BCC
 * Callers:
 *     ??$find@U?$find_iid_traits@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@URemoteSystemProviderExtension@RemoteSystems@Shell@Internal@34@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@U1234@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1802BDF18 (--$find@U-$find_iid_traits@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@impl@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::CloudPCComponent>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IObjectWithSite> && v1[1] == 0x52733D00AA0029A2LL )
    return *a1;
  if ( *v1 == winrt::impl::guid_v<IServiceProvider> && v1[1] == 0xFA096000AA003480uLL )
    return (*a1 + 8) & -(__int64)(*a1 != 0);
  return winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::CloudPCComponent>>(a1);
}
