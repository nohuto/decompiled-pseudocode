/*
 * XREFs of ?erase@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1804DFD04
 * Callers:
 *     ?RemoveView@ApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z @ 0x1804DF4A4 (-RemoveView@ApplicationViewCollection@@QEAA_NPEAUIApplicationView@@@Z.c)
 *     ?RemoveView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1804DF510 (-RemoveView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V-$fun.c)
 *     ?BringToFront@ApplicationViewCollection@@QEAAXPEAUIApplicationView@@@Z @ 0x1804E1F18 (-BringToFront@ApplicationViewCollection@@QEAAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??_G?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAAPEAXI@Z @ 0x180180004 (--_G-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::erase(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 *v6; // rbp
  __int64 *i; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx

  v6 = *(__int64 **)(a1 + 8);
  for ( i = (__int64 *)(a3 + 8); i != v6; ++i )
  {
    v8 = *i;
    *i = 0LL;
    v9 = *(i - 1);
    *(i - 1) = v8;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  wil::com_ptr_t<IApplicationView,wil::err_exception_policy>::`scalar deleting destructor'((__int64 *)(*(_QWORD *)(a1 + 8) - 8LL));
  *(_QWORD *)(a1 + 8) -= 8LL;
  *a2 = a3;
  return a2;
}
