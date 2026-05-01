/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@QEAA@XZ @ 0x1804F7544
 * Callers:
 *     ??$_Construct_n@$$V@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAX_K@Z @ 0x1804F66B8 (--$_Construct_n@$$V@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1802C1CE0 (-_Tidy@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-.c)
 */

void __fastcall std::_Tidy_guard<std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>::~_Tidy_guard<std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>(
        __int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Tidy(v1);
}
