/*
 * XREFs of ?erase@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1804F2444
 * Callers:
 *     ?RemoveView@GamingApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z @ 0x1804F1BC4 (-RemoveView@GamingApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z.c)
 *     ?RemoveView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1804F1C30 (-RemoveView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V-$fun.c)
 *     ?BringToFront@GamingApplicationViewCollection@@QEAAXPEAUIApplicationView@@@Z @ 0x1804F9750 (-BringToFront@GamingApplicationViewCollection@@QEAAXPEAUIApplicationView@@@Z.c)
 *     ?HandleFallbackForMinimizedView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804FD620 (-HandleFallbackForMinimizedView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??_G?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAAPEAXI@Z @ 0x180176CCC (--_G-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAAPEAXI@Z.c)
 *     ??4?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802B8D3C (--4-$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_polic.c)
 */

_QWORD *__fastcall std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 *v3; // rbp
  __int64 *i; // rdi
  _QWORD *result; // rax

  v3 = *(__int64 **)(a1 + 8);
  for ( i = (__int64 *)(a3 + 8); i != v3; ++i )
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData,wil::err_exception_policy>::operator=(
      i - 1,
      i);
  wil::com_ptr_t<IApplicationView,wil::err_exception_policy>::`scalar deleting destructor'((__int64 *)(*(_QWORD *)(a1 + 8) - 8LL));
  *(_QWORD *)(a1 + 8) -= 8LL;
  result = a2;
  *a2 = a3;
  return result;
}
