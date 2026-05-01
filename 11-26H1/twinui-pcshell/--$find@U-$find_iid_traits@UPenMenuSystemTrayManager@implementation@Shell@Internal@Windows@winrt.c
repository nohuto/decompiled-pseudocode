/*
 * XREFs of ??$find@U?$find_iid_traits@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@UIPenMenuSystemTrayManager@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1803E9C70
 * Callers:
 *     ??$find@U?$find_iid_traits@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIPenMenuSystemTrayManager@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1803E9D04 (--$find@U-$find_iid_traits@UPenMenuSystemTrayManager@implementation@Shell@Internal@_ea_1803E9D04.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::IInspectable,IPenMenuSystemTrayManager>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Foundation::IInspectable> && v1[1] == 0x901E1065AAD75A9CuLL )
    return (*a1 + 32LL) & -(__int64)(*a1 != 0LL);
  if ( *v1 == winrt::impl::guid_v<IPenMenuSystemTrayManager> && v1[1] == 0x144BD754BD4B7C80LL )
    return *a1;
  return 0LL;
}
