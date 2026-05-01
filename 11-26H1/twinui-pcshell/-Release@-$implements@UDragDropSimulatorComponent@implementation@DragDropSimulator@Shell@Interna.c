/*
 * XREFs of ?Release@?$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIDragDropSimulator@34567@@winrt@@UEAAKXZ @ 0x1800E6920
 * Callers:
 *     ?Release@?$implements@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@U13456@Uimmersive_shell_component@6@@winrt@@W7EAAKXZ @ 0x1802D9190 (-Release@-$implements@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@U13456@Uim.c)
 *     ?Release@?$implements@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@6@UIFocusSessionComponent@3456@@winrt@@WBA@EAAKXZ @ 0x1802D91A0 (-Release@-$implements@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@Uimmer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::Release(
        __int64 a1)
{
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::Release(a1 + 32);
}
