/*
 * XREFs of ?GetRuntimeClassName@?$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIDragDropSimulator@34567@@winrt@@EEBA?AUhstring@2@XZ @ 0x1802D8E30
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$runtime_class_name@UIObjectWithSite@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x1802D9358 (-get@-$runtime_class_name@UIObjectWithSite@@X@impl@winrt@@SA-AUhstring@3@XZ.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent,winrt::immersive_shell_component,winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::GetRuntimeClassName(
        __int64 a1,
        __int64 a2)
{
  winrt::impl::runtime_class_name<IObjectWithSite,void>::get(a2);
  return a2;
}
