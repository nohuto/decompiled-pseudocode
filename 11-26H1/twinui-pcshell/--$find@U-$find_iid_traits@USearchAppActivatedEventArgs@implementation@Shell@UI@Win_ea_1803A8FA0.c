/*
 * XREFs of ??$find@U?$find_iid_traits@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@@?$interface_list@USearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@UISearchAppActivatedEventArgs2@2345@UIActivatedEventArgs@Activation@ApplicationModel@Windows@5@UIInitializeActivatedEventArgs@89Windows@5@UILaunchActivatedEventArgs@89Windows@5@UILaunchActivatedEventArgs2@89Windows@5@UIActivatedEventArgsWithUser@89Windows@5@UIPrelaunchActivatedEventArgs@89Windows@5@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@12@@Z @ 0x1803A8FA0
 * Callers:
 *     ?find_interface@?$implements@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@U13456@UISearchAppActivatedEventArgs2@3456@UIActivatedEventArgs@Activation@ApplicationModel@Windows@6@UIInitializeActivatedEventArgs@9ApplicationModel@Windows@6@UILaunchActivatedEventArgs@9ApplicationModel@Windows@6@UILaunchActivatedEventArgs2@9ApplicationModel@Windows@6@UIActivatedEventArgsWithUser@9ApplicationModel@Windows@6@UIPrelaunchActivatedEventArgs@9ApplicationModel@Windows@6@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1801A7FF0 (-find_interface@-$implements@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@win.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>::find<winrt::impl::find_iid_traits<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs>
    && v1[1] == 0xA9ECCE9AE83C5F91uLL )
  {
    v2 = *a1;
    v3 = *a1 + 16;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs2>
    && v1[1] == 0x4CFC80014C69C4B6LL )
  {
    v2 = *a1;
    v3 = *a1 + 24;
    return v3 & -(__int64)(v2 != 0);
  }
  return winrt::impl::interface_list<winrt::Windows::ApplicationModel::Activation::IActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,winrt::Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,winrt::Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>::find<winrt::impl::find_iid_traits<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>>(a1);
}
