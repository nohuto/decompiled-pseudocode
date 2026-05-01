/*
 * XREFs of ?get_local_iids@?$implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@U1345678@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@Ucomposing@8@UIApplicationOverrides@Xaml@UI@Microsoft@8@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x180453CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::XamlApplication_WASDK,winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Microsoft::UI::Xaml::IApplicationOverrides>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a2 = 3;
  *(_QWORD *)(a2 + 8) = &winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::XamlApplication_WASDK,winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider,winrt::Microsoft::UI::Xaml::IApplicationOverrides>>::value;
  return a2;
}
