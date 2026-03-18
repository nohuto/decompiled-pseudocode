/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18014DF90
 * Callers:
 *     ??$_Try_emplace@AEBQEAVCVisual@@$$T@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VCPreWalkVisual@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@_N@1@AEBQEAVCVisual@@$$QEA$$T@Z @ 0x18014C3A0 (--$_Try_emplace@AEBQEAVCVisual@@$$T@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VCPreWalkVisual@@V-$_Uh.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<CVisual * const,CPreWalkVisual>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<CVisual * const,CPreWalkVisual>,void *>>>(
        __int64 a1)
{
  _QWORD *v1; // rbx
  void *v4; // rcx

  v1 = *(_QWORD **)(a1 + 8);
  if ( v1 )
  {
    v4 = (void *)v1[3];
    if ( v4 )
    {
      std::_Deallocate<16>(v4, (v1[5] - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
      v1[3] = 0LL;
      v1[4] = 0LL;
      v1[5] = 0LL;
    }
  }
  return std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned int const,CDDisplayFlipAwayFence>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned int const,CDDisplayFlipAwayFence>,void *>>>(a1);
}
