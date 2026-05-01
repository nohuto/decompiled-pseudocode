/*
 * XREFs of ?_Alloc_sentinel_and_proxy@?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1804DFB38
 * Callers:
 *     SnapFlyoutHost::HideAsync$_ResumeCoro$1 @ 0x180271AC0 (SnapFlyoutHost--HideAsync$_ResumeCoro$1.c)
 *     ?GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA?AV?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAUIImmersiveMonitorManager@@@Z @ 0x1804DE1A8 (-GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA-AV-$list@V-$com_ptr_t@UIImmersiveMonitor@@U.c)
 *     SnapFlyoutHost::ShutdownSnapFlyoutsAsync$_InitCoro$2 @ 0x180590A3C (SnapFlyoutHost--ShutdownSnapFlyoutsAsync$_InitCoro$2.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180029EEC (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>>::_Alloc_sentinel_and_proxy(
        _QWORD *a1)
{
  size_t size_of; // rax
  _QWORD *result; // rax

  size_of = std::_Get_size_of_n<24>(1uLL);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *result = result;
  result[1] = result;
  *a1 = result;
  return result;
}
