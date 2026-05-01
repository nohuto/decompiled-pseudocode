/*
 * XREFs of ?find_interface@?$implements@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIFocusSessionComponent@3456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1801DAEE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIFocusSessionComponent@Shell@Internal@67@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1802DF79C (--$find@U-$find_iid_traits@UFocusSessionComponent@implementation@Shell@Internal@Win_ea_1802DF79C.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::IFocusSessionComponent>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = a2;
  v3[0] = a1 - 32;
  return winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::Shell::IFocusSessionComponent>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent>>(v3);
}
