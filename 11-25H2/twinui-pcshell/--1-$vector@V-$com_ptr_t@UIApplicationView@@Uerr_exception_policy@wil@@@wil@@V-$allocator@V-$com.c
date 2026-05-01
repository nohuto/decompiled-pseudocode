/*
 * XREFs of ??1?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1802D17A4
 * Callers:
 *     _GamingPosturePositioner::GamingPosturePositioner_::_1_::dtor$14 @ 0x1806CA589 (_GamingPosturePositioner--GamingPosturePositioner_--_1_--dtor$14.c)
 *     _GamingPosturePositioner::GamingPosturePositioner_::_1_::dtor$15 @ 0x1806CA5A2 (_GamingPosturePositioner--GamingPosturePositioner_--_1_--dtor$15.c)
 *     _GamingPosturePositioner::TryGetTopTwoApplicationViews_::_1_::dtor$0 @ 0x1806CADD0 (_GamingPosturePositioner--TryGetTopTwoApplicationViews_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::~vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>(
        __int64 a1)
{
  std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Tidy(a1);
}
