/*
 * XREFs of ??$find@U?$find_iid_traits@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@URemoteSystemProviderExtension@RemoteSystems@Shell@Internal@34@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@U1234@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1802B5068
 * Callers:
 *     ?find_interface@?$implements@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIInspectable@Foundation@56@URemoteSystemProviderExtension@RemoteSystems@3456@Uimmersive_shell_component@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1802B5040 (-find_interface@-$implements@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIIn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::Shell::RemoteSystems::RemoteSystemProviderExtension,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::CloudPCComponent>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Foundation::IInspectable> && v1[1] == 0x901E1065AAD75A9CuLL )
  {
    v2 = *a1;
    v3 = *a1 + 88;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *(_OWORD *)v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::RemoteSystems::IRemoteSystemProviderExtension> )
  {
    v2 = *a1;
    v3 = *a1 + 96;
    return v3 & -(__int64)(v2 != 0);
  }
  return winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::CloudPCComponent>>();
}
