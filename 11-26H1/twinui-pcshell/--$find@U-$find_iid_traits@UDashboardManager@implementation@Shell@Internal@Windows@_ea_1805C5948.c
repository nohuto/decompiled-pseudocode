/*
 * XREFs of ??$find@U?$find_iid_traits@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1805C5948
 * Callers:
 *     ??$find@U?$find_iid_traits@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIImmersiveWindowMessageNotification@@UIEdgeUiTouchInvocation@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1805C58EC (--$find@U-$find_iid_traits@UDashboardManager@implementation@Shell@Internal@Windows@_ea_1805C58EC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IImmersiveWindowMessageNotification,IEdgeUiTouchInvocation>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::DashboardManager>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IImmersiveWindowMessageNotification> && v1[1] == 0xF08E2D60D77179B1uLL )
    return *a1;
  if ( *v1 == winrt::impl::guid_v<IEdgeUiTouchInvocation> && v1[1] == 0xEF6CEC89E94B89BEuLL )
    return (*a1 + 8LL) & -(__int64)(*a1 != 0LL);
  return 0LL;
}
