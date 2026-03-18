/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18014C5D0
 * Callers:
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VCPreWalkVisual@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@2@PEAU32@@Z @ 0x18014C544 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VCPreWalkVisual@@V-$_Uhash_compare@PEAVCV.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802293E4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@st.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<CVisual * const,CPreWalkVisual>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<CVisual * const,CPreWalkVisual>,void *>>>(
        __int64 a1,
        _QWORD *a2)
{
  void *v2; // rcx

  v2 = (void *)a2[3];
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (a2[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    a2[3] = 0LL;
    a2[4] = 0LL;
    a2[5] = 0LL;
  }
  std::_Deallocate<16>(a2, 0x38uLL);
}
