/*
 * XREFs of ??$find@U?$find_iid_traits@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@@?$interface_list@UISearchAppHost4@Shell@UI@WindowsUdk@winrt@@UISearchAppHost5@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@@12@@Z @ 0x1803A04D8
 * Callers:
 *     ??$find@U?$find_iid_traits@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@@?$interface_list@UISearchAppHost2@Shell@UI@WindowsUdk@winrt@@UISearchAppHost3@2345@UISearchAppHost4@2345@UISearchAppHost5@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@@12@@Z @ 0x1803A047C (--$find@U-$find_iid_traits@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@@impl@winrt@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::WindowsUdk::UI::Shell::ISearchAppHost4,winrt::WindowsUdk::UI::Shell::ISearchAppHost5>::find<winrt::impl::find_iid_traits<winrt::WindowsUdk::UI::Shell::implementation::SearchAppHost>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::ISearchAppHost4> && v1[1] == 0x4A236E019E7CDA95LL )
  {
    v2 = *a1;
    v3 = *a1 + 40;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::ISearchAppHost5> && v1[1] == 0x9DDED7A5D34BC19BuLL )
  {
    v2 = *a1;
    v3 = *a1 + 48;
    return v3 & -(__int64)(v2 != 0);
  }
  return 0LL;
}
