/*
 * XREFs of ??1?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1802B7330
 * Callers:
 *     _UwpAppPackageInfo::GetActiveViews_::_1_::dtor$0 @ 0x1806F4F4E (_UwpAppPackageInfo--GetActiveViews_--_1_--dtor$0.c)
 *     _UwpAppStateManager::TerminateApp_::_1_::dtor$0 @ 0x1806F4F7B (_UwpAppStateManager--TerminateApp_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::~vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>(
        _QWORD *a1)
{
  return std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy(a1);
}
