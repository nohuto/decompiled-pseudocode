/*
 * XREFs of ??$find@U?$find_iid_traits@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@@?$interface_list@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@winrt@@UILaunchActivatedEventArgs2@2345@UIActivatedEventArgsWithUser@2345@UIPrelaunchActivatedEventArgs@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@12@@Z @ 0x1803A03C4
 * Callers:
 *     ??$find@U?$find_iid_traits@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@@?$interface_list@UIActivatedEventArgs@Activation@ApplicationModel@Windows@winrt@@UIInitializeActivatedEventArgs@2345@UILaunchActivatedEventArgs@2345@UILaunchActivatedEventArgs2@2345@UIActivatedEventArgsWithUser@2345@UIPrelaunchActivatedEventArgs@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@12@@Z @ 0x1803A030C (--$find@U-$find_iid_traits@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>::find<winrt::impl::find_iid_traits<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs>
    && v1[1] == 0x52AF20D9BE33B082LL )
  {
    v2 = *a1;
    v3 = *a1 + 48;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>
    && v1[1] == 0x455356D495BDCE9ALL )
  {
    v2 = *a1;
    v3 = *a1 + 56;
    return v3 & -(__int64)(v2 != 0);
  }
  return winrt::impl::interface_list<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>::find<winrt::impl::find_iid_traits<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>>(a1);
}
