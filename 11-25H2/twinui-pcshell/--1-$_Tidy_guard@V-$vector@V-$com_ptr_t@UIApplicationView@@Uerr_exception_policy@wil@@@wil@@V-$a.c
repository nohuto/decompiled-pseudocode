/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@QEAA@XZ @ 0x1804E15BC
 * Callers:
 *     ?GetLastViews@ApplicationViewCollection@@QEAA?AV?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@I@Z @ 0x1804E28C4 (-GetLastViews@ApplicationViewCollection@@QEAA-AV-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_ex.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1802CC564 (-_Tidy@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-.c)
 */

void __fastcall std::_Tidy_guard<std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>::~_Tidy_guard<std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>(
        __int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Tidy(v1);
}
