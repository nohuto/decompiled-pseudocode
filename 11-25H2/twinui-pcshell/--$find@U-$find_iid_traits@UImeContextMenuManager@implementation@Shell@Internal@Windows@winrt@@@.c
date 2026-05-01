/*
 * XREFs of ??$find@U?$find_iid_traits@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@UIImeContextMenuExperienceManager@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180614C8C
 * Callers:
 *     ??$find@U?$find_iid_traits@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIImeContextMenuExperienceManager@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180614D20 (--$find@U-$find_iid_traits@UImeContextMenuManager@implementation@Shell@Internal@Win_ea_180614D20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::IInspectable,IImeContextMenuExperienceManager>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IInspectable> && v1[1] == 0x901E1065AAD75A9CuLL )
    return (*a1 + 32LL) & -(__int64)(*a1 != 0LL);
  if ( *v1 == winrt::impl::guid_v<IImeContextMenuExperienceManager> && v1[1] == 0x9F08831B4EA77D93uLL )
    return *a1;
  return 0LL;
}
