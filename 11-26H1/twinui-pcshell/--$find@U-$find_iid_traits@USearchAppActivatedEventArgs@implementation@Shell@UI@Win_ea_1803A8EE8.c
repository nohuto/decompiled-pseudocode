/*
 * XREFs of ??$find@U?$find_iid_traits@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@@?$interface_list@UIActivatedEventArgsWithUser@Activation@ApplicationModel@Windows@winrt@@UIPrelaunchActivatedEventArgs@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@12@@Z @ 0x1803A8EE8
 * Callers:
 *     ??$find@U?$find_iid_traits@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@@?$interface_list@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@winrt@@UILaunchActivatedEventArgs2@2345@UIActivatedEventArgsWithUser@2345@UIPrelaunchActivatedEventArgs@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@12@@Z @ 0x1803A8F44 (--$find@U-$find_iid_traits@USearchAppActivatedEventArgs@implementation@Shell@UI@Win_ea_1803A8F44.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>::find<winrt::impl::find_iid_traits<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser>
    && v1[1] == 0x8C5CAEE8C8AFFF80uLL )
  {
    v2 = *a1;
    v3 = *a1 + 64;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>
    && v1[1] == 0x74AA6E8222CF46B0LL )
  {
    v2 = *a1;
    v3 = *a1 + 72;
    return v3 & -(__int64)(v2 != 0);
  }
  return 0LL;
}
