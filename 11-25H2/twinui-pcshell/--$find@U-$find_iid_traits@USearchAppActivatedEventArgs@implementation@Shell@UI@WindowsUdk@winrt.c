/*
 * XREFs of ??$find@U?$find_iid_traits@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@@?$interface_list@UIActivatedEventArgs@Activation@ApplicationModel@Windows@winrt@@UIInitializeActivatedEventArgs@2345@UILaunchActivatedEventArgs@2345@UILaunchActivatedEventArgs2@2345@UIActivatedEventArgsWithUser@2345@UIPrelaunchActivatedEventArgs@2345@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@12@@Z @ 0x1803A030C
 * Callers:
 *     ??$find@U?$find_iid_traits@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@@?$interface_list@USearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@UISearchAppActivatedEventArgs2@2345@UIActivatedEventArgs@Activation@ApplicationModel@Windows@5@UIInitializeActivatedEventArgs@89Windows@5@UILaunchActivatedEventArgs@89Windows@5@UILaunchActivatedEventArgs2@89Windows@5@UIActivatedEventArgsWithUser@89Windows@5@UIPrelaunchActivatedEventArgs@89Windows@5@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@12@@Z @ 0x1803A0420 (--$find@U-$find_iid_traits@USearchAppActivatedEventArgs@implementation@Shell@UI@Win_ea_1803A0420.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>::find<winrt::impl::find_iid_traits<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs>
    && v1[1] == 0x2E4E54B681A297B6LL )
  {
    v2 = *a1;
    v3 = *a1 + 32;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>
    && v1[1] == 0x88171B1D337604BFuLL )
  {
    v2 = *a1;
    v3 = *a1 + 40;
    return v3 & -(__int64)(v2 != 0);
  }
  return winrt::impl::interface_list<winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>::find<winrt::impl::find_iid_traits<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>>();
}
