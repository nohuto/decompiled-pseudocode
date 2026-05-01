/*
 * XREFs of ?find_inspectable@?$implements@VNPSMDesktopShellComponent@@Uimmersive_shell_component@winrt@@UIApplicationViewChangeListener@@@winrt@@UEBAPEAUtype@?$abi@UIInspectable@Foundation@Windows@winrt@@X@impl@2@XZ @ 0x1803EA6A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_inspectable_traits@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIPenMenuSystemTrayManager@@@impl@winrt@@SA?A_PAEBU?$find_inspectable_traits@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1803E9D60 (--$find@U-$find_inspectable_traits@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windo.c)
 */

__int64 __fastcall winrt::implements<NPSMDesktopShellComponent,winrt::immersive_shell_component,IApplicationViewChangeListener>::find_inspectable(
        __int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 - 40;
  return winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,IPenMenuSystemTrayManager>::find<winrt::impl::find_inspectable_traits<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>>(&v2);
}
