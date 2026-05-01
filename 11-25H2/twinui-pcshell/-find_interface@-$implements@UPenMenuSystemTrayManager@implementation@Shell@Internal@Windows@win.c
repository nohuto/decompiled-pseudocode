/*
 * XREFs of ?find_interface@?$implements@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIPenMenuSystemTrayManager@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18020A7A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIPenMenuSystemTrayManager@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1803E0A58 (--$find@U-$find_iid_traits@UPenMenuSystemTrayManager@implementation@Shell@Internal@_ea_1803E0A58.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager,winrt::immersive_shell_component,IPenMenuSystemTrayManager>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = a2;
  v3[0] = a1 - 40;
  return winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IPenMenuSystemTrayManager>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>>(v3);
}
