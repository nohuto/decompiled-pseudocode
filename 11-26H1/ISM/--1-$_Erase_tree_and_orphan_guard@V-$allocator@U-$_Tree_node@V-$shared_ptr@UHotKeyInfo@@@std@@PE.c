/*
 * XREFs of ??1?$_Erase_tree_and_orphan_guard@V?$allocator@U?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@QEAA@XZ @ 0x1801CEC70
 * Callers:
 *     ??$_Copy_nodes@$0A@@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@1@PEAU21@0@Z @ 0x1801CDD54 (--$_Copy_nodes@$0A@@-$_Tree@V-$_Tset_traits@V-$shared_ptr@UHotKeyInfo@@@std@@U-$less@V-$shared_p.c)
 *     _std::_Tree_std::_Tset_traits_std::shared_ptr_HotKeyInfo__std::less_std::shared_ptr_HotKeyInfo____std::allocator_std::shared_ptr_HotKeyInfo____0___::_Copy_nodes_0__::_1_::dtor$0 @ 0x1801DD70A (_std--_Tree_std--_Tset_traits_std--shared_ptr_HotKeyInfo__std--less_std--shared_ptr_ea_1801DD70A.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@1@@Z @ 0x1801CE31C (--$_Erase_tree@V-$allocator@U-$_Tree_node@V-$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@-$_T.c)
 */

__int64 __fastcall std::_Tree_val<std::_Tree_simple_types<std::shared_ptr<HotKeyInfo>>>::_Erase_tree_and_orphan_guard<std::allocator<std::_Tree_node<std::shared_ptr<HotKeyInfo>,void *>>>::~_Erase_tree_and_orphan_guard<std::allocator<std::_Tree_node<std::shared_ptr<HotKeyInfo>,void *>>>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)a1 )
    return std::_Tree_val<std::_Tree_simple_types<std::shared_ptr<HotKeyInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::shared_ptr<HotKeyInfo>,void *>>>(
             *(_QWORD *)a1,
             *(_QWORD *)(a1 + 8),
             *(__int64 **)(a1 + 16));
  return result;
}
