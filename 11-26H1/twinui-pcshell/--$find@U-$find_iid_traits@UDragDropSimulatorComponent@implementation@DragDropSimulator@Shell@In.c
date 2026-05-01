/*
 * XREFs of ??$find@U?$find_iid_traits@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@UIDragDropSimulator@DragDropSimulator@Shell@Internal@34@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@12@@Z @ 0x1805783F8
 * Callers:
 *     ??$find@U?$find_iid_traits@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@impl@winrt@@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIDragDropSimulator@DragDropSimulator@Shell@Internal@56@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@12@@Z @ 0x180578484 (--$find@U-$find_iid_traits@UDragDropSimulatorComponent@implementation@DragDropSimul_ea_180578484.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::IInspectable,winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>::find<winrt::impl::find_iid_traits<winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Foundation::IInspectable> && v1[1] == 0x901E1065AAD75A9CuLL )
  {
    v2 = *a1;
    v3 = *a1 + 24;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<winrt::Windows::Internal::Shell::DragDropSimulator::IDragDropSimulator>
    && v1[1] == 0xD2571240510508A4uLL )
  {
    v2 = *a1;
    v3 = *a1 + 88;
    return v3 & -(__int64)(v2 != 0);
  }
  return 0LL;
}
