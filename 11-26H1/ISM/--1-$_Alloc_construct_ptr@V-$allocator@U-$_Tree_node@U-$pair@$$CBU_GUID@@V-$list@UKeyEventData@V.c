/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18008A740
 * Callers:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18008A734 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBKV-$array@G$0BE@@std@@@std@@P.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18008B47C (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CB_KUInputSiteHierarchyEntry@In.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18015375C (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBKUMessageInfo@ResizeProcessor.c)
 *     ??$_Emplace@AEBUDockInputIdentity@@AEA_K@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@_KU?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@_K@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@_K@std@@PEAX@std@@_N@1@AEBUDockInputIdentity@@AEA_K@Z @ 0x1801961FC (--$_Emplace@AEBUDockInputIdentity@@AEA_K@-$_Tree@V-$_Tmap_traits@UDockInputIdentity@@_KU-$less@U.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBUtagMsgRoutingInfo@@V?$ComPtr@UIRemoteViewHitTestClient@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801A2958 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBUtagMsgRoutingInfo@@V-$ComPtr.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801B600C (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBU_GUID@@V-$list@UKeyEventData@Virtua.c)
 *     _InputSiteHierarchyManager::GetInputSiteListToRoot_::_1_::dtor$10 @ 0x1801D5D3C (_InputSiteHierarchyManager--GetInputSiteListToRoot_--_1_--dtor$10.c)
 *     _std::map__GUID_std::list_VirtualHotKeyTracker::KeyEventData_std::allocator_VirtualHotKeyTracker::KeyEventData____VirtualHotKeyTracker::CompareGuids_std::allocator_std::pair__GUID_const__std::list_VirtualHotKeyTracker::KeyEventData_std::allocator_VirtualHotKeyTracker::KeyEventData_________::_Try_emplace__GUID_const_&__::_1_::dtor$2 @ 0x1801D5E1F (_std--map__GUID_std--list_VirtualHotKeyTracker--KeyEventData_std--allocator_VirtualHotKeyTracker.c)
 *     _std::_Tree_std::_Tmap_traits_DockInputIdentity_unsigned___int64_std::less_DockInputIdentity__std::allocator_std::pair_DockInputIdentity_const__unsigned___int64____0___::_Emplace_DockInputIdentity_const_&_unsigned___int64_&__::_1_::dtor$2 @ 0x1801D77F0 (_std--_Tree_std--_Tmap_traits_DockInputIdentity_unsigned___int64_std--less_DockInputIdentity__st.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>,void *>>>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    return std::_Deallocate<16>(v1, 64LL);
  return result;
}
