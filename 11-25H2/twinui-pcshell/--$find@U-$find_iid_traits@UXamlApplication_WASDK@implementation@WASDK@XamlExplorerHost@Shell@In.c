/*
 * XREFs of ??$find@U?$find_iid_traits@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UXamlApplication_WASDK@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@7@UIApplicationOverrides@Xaml@UI@Microsoft@7@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180293FD4
 * Callers:
 *     ?find_interface@?$implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@U1345678@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@Ucomposing@8@UIApplicationOverrides@Xaml@UI@Microsoft@8@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180293FB0 (-find_interface@-$implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::XamlApplication_WASDK,winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider,winrt::Microsoft::UI::Xaml::IApplicationOverrides>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::IXamlApplication_WASDK>
    && v1[1] == 0x57244500AC6B2D8FLL )
  {
    return (*a1 + 24LL) & -(__int64)(*a1 != 0LL);
  }
  else
  {
    return winrt::impl::interface_list<winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider,winrt::Microsoft::UI::Xaml::IApplicationOverrides>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK>>();
  }
}
