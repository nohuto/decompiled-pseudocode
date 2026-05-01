/*
 * XREFs of ??$find@U?$find_inspectable_traits@Uimmersive_shell_component@winrt@@@impl@winrt@@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SA?A_PAEBU?$find_inspectable_traits@Uimmersive_shell_component@winrt@@@12@@Z @ 0x1802DF8DC
 * Callers:
 *     ?find_inspectable@?$implements@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIFocusSessionComponent@3456@@winrt@@UEBAPEAUtype@?$abi@UIInspectable@Foundation@Windows@winrt@@X@impl@2@XZ @ 0x1802E04F0 (-find_inspectable@-$implements@UFocusSessionComponent@implementation@Shell@Internal@Windows@winr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::impl::find_inspectable_traits<winrt::immersive_shell_component>>(
        _QWORD *a1)
{
  return (*a1 + 24LL) & -(__int64)(*a1 != 0LL);
}
