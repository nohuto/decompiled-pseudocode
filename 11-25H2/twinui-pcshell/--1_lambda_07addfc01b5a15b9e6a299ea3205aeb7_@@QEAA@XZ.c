/*
 * XREFs of ??1_lambda_07addfc01b5a15b9e6a299ea3205aeb7_@@QEAA@XZ @ 0x180554A14
 * Callers:
 *     ?DropDataOnWin32EndPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@AEAAKAEBV?$com_ptr_t@UIPrivDragDrop@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@9@PEAUHWND__@@AEBUtagPOINT@@_N@Z @ 0x1805557C0 (-DropDataOnWin32EndPoint@DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Inter.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnWin32EndPoint_::_1_::dtor$0 @ 0x1806CCFE0 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1806CCFE0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall _lambda_07addfc01b5a15b9e6a299ea3205aeb7_::~_lambda_07addfc01b5a15b9e6a299ea3205aeb7_(
        _lambda_07addfc01b5a15b9e6a299ea3205aeb7_ *this)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 3);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this);
}
