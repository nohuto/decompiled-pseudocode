/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801CEEC8
 * Callers:
 *     ??$_Emplace@AEBV?$shared_ptr@UHotKeyInfo@@@std@@@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@_N@1@AEBV?$shared_ptr@UHotKeyInfo@@@1@@Z @ 0x1801CDF08 (--$_Emplace@AEBV-$shared_ptr@UHotKeyInfo@@@std@@@-$_Tree@V-$_Tset_traits@V-$shared_ptr@UHotKeyIn.c)
 * Callees:
 *     ??_G?$shared_ptr@UHotKeyInfo@@@std@@QEAAPEAXI@Z @ 0x1801CF5D4 (--_G-$shared_ptr@UHotKeyInfo@@@std@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::shared_ptr<HotKeyInfo>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::shared_ptr<HotKeyInfo>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    std::shared_ptr<HotKeyInfo>::`scalar deleting destructor'(v2 + 32);
  return std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<_GUID,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<_GUID,void *>>>(a1);
}
