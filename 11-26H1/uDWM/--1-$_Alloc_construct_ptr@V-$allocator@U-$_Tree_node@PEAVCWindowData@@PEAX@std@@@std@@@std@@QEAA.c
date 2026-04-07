/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800AE8AC
 * Callers:
 *     ??$_Emplace@AEAPEAVCWindowData@@@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@std@@_N@1@AEAPEAVCWindowData@@@Z @ 0x1800AE5A4 (--$_Emplace@AEAPEAVCWindowData@@@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowDat.c)
 *     _std::_Tree_std::_Tset_traits_CWindowData___std::less_CWindowData____std::allocator_CWindowData____0___::_Emplace_CWindowData___&__::_1_::dtor$2 @ 0x1800E8FCF (_std--_Tree_std--_Tset_traits_CWindowData___std--less_CWindowData____std--allocator_CWindowData_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<CWindowData *,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<CWindowData *,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16>(v1, 0x28uLL);
}
