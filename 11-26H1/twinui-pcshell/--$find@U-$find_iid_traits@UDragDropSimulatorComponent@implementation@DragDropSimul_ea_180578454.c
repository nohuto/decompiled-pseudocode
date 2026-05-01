/*
 * XREFs of ??$find@U?$find_iid_traits@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIDragDropSimulator@DragDropSimulator@Shell@Internal@67@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180578454
 * Callers:
 *     ?find_interface@?$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIDragDropSimulator@34567@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180203FD0 (-find_interface@-$implements@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IObjectWithSite> && v1[1] == 0x52733D00AA0029A2LL )
    return *a1;
  else
    return winrt::impl::interface_list<IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>>();
}
