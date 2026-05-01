/*
 * XREFs of ??$emplace_back@AEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@AEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Z @ 0x1804EF914
 * Callers:
 *     ?GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA?AV?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAUIImmersiveMonitorManager@@@Z @ 0x1804F07EC (-GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA-AV-$list@V-$com_ptr_t@UIImmersiveMonitor@@U.c)
 * Callees:
 *     ??$_Emplace@AEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_List_node@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@PEAX@1@QEAU21@AEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Z @ 0x1804EF680 (--$_Emplace@AEBV-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@-$list@V-$com_ptr_t@UIImmersiveMon.c)
 */

_QWORD *__fastcall std::list<wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>>::emplace_back<Microsoft::WRL::ComPtr<IImmersiveMonitor> const &>(
        __int64 *a1,
        __int64 *a2)
{
  return std::list<wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>>::_Emplace<Microsoft::WRL::ComPtr<IImmersiveMonitor> const &>(
           (__int64)a1,
           *a1,
           a2)
       + 2;
}
