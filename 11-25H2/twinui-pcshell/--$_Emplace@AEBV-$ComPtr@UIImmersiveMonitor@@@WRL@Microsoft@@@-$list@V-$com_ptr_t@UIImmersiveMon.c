/*
 * XREFs of ??$_Emplace@AEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_List_node@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@PEAX@1@QEAU21@AEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Z @ 0x1804DD0C8
 * Callers:
 *     ?GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA?AV?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAUIImmersiveMonitorManager@@@Z @ 0x1804DE1A8 (-GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA-AV-$list@V-$com_ptr_t@UIImmersiveMonitor@@U.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180029EEC (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z @ 0x1800F646C (--0-$com_ptr_t@VTaskViewFrame@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVTaskViewFrame@@@Z.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1802CA86C (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@V-$com_ptr_t@V-$CRefCountedObject@UPendin.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::list<wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>>::_Emplace<Microsoft::WRL::ComPtr<IImmersiveMonitor> const &>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  size_t size_of; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 8) == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("list too long");
  v10 = a1;
  v11 = 0LL;
  size_of = std::_Get_size_of_n<24>(1uLL);
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  wil::com_ptr_t<TaskViewFrame,wil::err_exception_policy>::com_ptr_t<TaskViewFrame,wil::err_exception_policy>(
    v7 + 2,
    *a3);
  ++*(_QWORD *)(a1 + 8);
  v8 = *(_QWORD **)(a2 + 8);
  *v7 = a2;
  v7[1] = v8;
  v11 = 0LL;
  *(_QWORD *)(a2 + 8) = v7;
  *v8 = v7;
  std::_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<wil::com_ptr_t<CRefCountedObject<WindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>,void *>>>((__int64)&v10);
  return v7;
}
