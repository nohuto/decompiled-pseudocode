/*
 * XREFs of ??$find@U?$find_iid_traits@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UDashboardManager@Shell@Internal@Windows@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@45@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1805C58B0
 * Callers:
 *     ?find_interface@?$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1801F8D20 (-find_interface@-$implements@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@U134.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::DashboardManager,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IImmersiveWindowMessageNotification,IEdgeUiTouchInvocation>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::DashboardManager>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::IDashboardManager> && v1[1] == 0x50E32078A0D59F96LL )
    return (*a1 + 16LL) & -(__int64)(*a1 != 0LL);
  else
    return winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IImmersiveWindowMessageNotification,IEdgeUiTouchInvocation>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::DashboardManager>>();
}
