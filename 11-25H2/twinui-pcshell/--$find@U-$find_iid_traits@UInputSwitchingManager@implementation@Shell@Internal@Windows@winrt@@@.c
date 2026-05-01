/*
 * XREFs of ??$find@U?$find_iid_traits@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@UIInputSwitchExperienceManager@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180612C24
 * Callers:
 *     ??$find@U?$find_iid_traits@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIInputSwitchExperienceManager@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180612CB8 (--$find@U-$find_iid_traits@UInputSwitchingManager@implementation@Shell@Internal@Win_ea_180612CB8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::IInspectable,IInputSwitchExperienceManager>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IInspectable> && v1[1] == 0x901E1065AAD75A9CuLL )
    return (*a1 + 32LL) & -(__int64)(*a1 != 0LL);
  if ( *v1 == winrt::impl::guid_v<IInputSwitchExperienceManager> && v1[1] == 0xFB28FC70BEB55B9CuLL )
    return *a1;
  return 0LL;
}
