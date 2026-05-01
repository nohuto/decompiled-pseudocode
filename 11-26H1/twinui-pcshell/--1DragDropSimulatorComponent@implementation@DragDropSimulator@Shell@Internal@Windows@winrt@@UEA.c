/*
 * XREFs of ??1DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180578DCC
 * Callers:
 *     ??1?$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x180578D44 (--1-$module_count_wrapper@UDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Int.c)
 *     ??_GDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1805790EC (--_GDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UE.c)
 *     _wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent_::module_count_wrapper_winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent__::_1_::dtor$0 @ 0x1806DE14D (_wil--details--module_count_wrapper_winrt--Windows--Internal--Shell--DragDropSimulator--implemen.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::~DragDropSimulatorComponent(
        winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *this)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 12);
  winrt::immersive_shell_component::~immersive_shell_component(this);
}
