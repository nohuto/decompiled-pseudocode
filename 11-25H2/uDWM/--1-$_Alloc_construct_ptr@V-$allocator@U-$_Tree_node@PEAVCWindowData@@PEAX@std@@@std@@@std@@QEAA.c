/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800AEF34
 * Callers:
 *     ??$_Emplace@AEAPEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@std@@_N@1@AEAPEAVCWindowData@@@Z @ 0x180085E80 (--$_Emplace@AEAPEAVCWindowData@@@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowDat.c)
 *     _std::_Tree_temp_node_std::allocator_std::_Tree_node_CWindowData___void_______::_Tree_temp_node_std::allocator_std::_Tree_node_CWindowData___void________CWindowData___&__::_1_::dtor$1 @ 0x1800ED091 (_std--_Tree_temp_node_std--allocator_std--_Tree_node_CWindowData___void_______--_Tree_temp_node_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18003E6C0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<CWindowData *,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<CWindowData *,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x28);
}
