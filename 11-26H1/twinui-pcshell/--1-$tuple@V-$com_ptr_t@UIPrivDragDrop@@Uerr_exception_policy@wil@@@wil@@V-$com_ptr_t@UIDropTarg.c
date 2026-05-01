/*
 * XREFs of ??1?$tuple@V?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@2@$$T@std@@QEAA@XZ @ 0x180578DA4
 * Callers:
 *     ?GetDropEndPointByTraversingParentChain@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAA?AV?$tuple@V?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIDropTarget@@Uerr_exception_policy@wil@@@2@PEAUHWND__@@@std@@PEAUHWND__@@@Z @ 0x180579D70 (-GetDropEndPointByTraversingParentChain@DragDropSimulatorComponent@implementation@DragDropSimula.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1 @ 0x18057ADF0 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_18057ADF0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall std::tuple<wil::com_ptr_t<IPrivDragDrop,wil::err_exception_policy>,wil::com_ptr_t<IDropTarget,wil::err_exception_policy>,std::nullptr_t>::~tuple<wil::com_ptr_t<IPrivDragDrop,wil::err_exception_policy>,wil::com_ptr_t<IDropTarget,wil::err_exception_policy>,std::nullptr_t>(
        __int64 a1)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 16));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 8));
}
