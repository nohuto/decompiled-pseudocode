/*
 * XREFs of ?Release@?$implements@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIImeContextMenuExperienceManager@@@winrt@@UEAAKXZ @ 0x180224680
 * Callers:
 *     ?Release@?$implements@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIImeContextMenuExperienceManager@@@winrt@@W7EAAKXZ @ 0x1803E0F40 (-Release@-$implements@UImeContextMenuManager@implementation@Shell@Internal@Windows@_ea_1803E0F40.c)
 *     ?Release@?$implements@VNPSMDesktopShellComponent@@Uimmersive_shell_component@winrt@@UIApplicationViewChangeListener@@@winrt@@WBA@EAAKXZ @ 0x1803E0F50 (-Release@-$implements@VNPSMDesktopShellComponent@@Uimmersive_shell_component@winrt@@UIApplicatio.c)
 *     ?Release@?$implements@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIInputSwitchExperienceManager@@@winrt@@WBI@EAAKXZ @ 0x1803E0F60 (-Release@-$implements@UInputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@Uimmer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager,winrt::immersive_shell_component,IImeContextMenuExperienceManager>::Release(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::Release((volatile signed __int64 *)(a1 + 40));
}
