/*
 * XREFs of ??$emplace_back@AEAPEAUIApplicationView@@@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@AEAPEAUIApplicationView@@@Z @ 0x1804EF8F4
 * Callers:
 *     ?EnterFullScreenForView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1804F0460 (-EnterFullScreenForView@KioskPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?HandleView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1804F0B10 (-HandleView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V-$fun.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::emplace_back<IApplicationView * &>(
        __int64 a1,
        __int64 *a2)
{
  if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a1 + 16) )
    return std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Emplace_reallocate<IApplicationView * &>(
             (__int64 **)a1,
             *(__int64 **)(a1 + 8),
             a2);
  else
    return (char *)std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Emplace_back_with_unused_capacity<IApplicationView * &>(
                     a1,
                     a2);
}
