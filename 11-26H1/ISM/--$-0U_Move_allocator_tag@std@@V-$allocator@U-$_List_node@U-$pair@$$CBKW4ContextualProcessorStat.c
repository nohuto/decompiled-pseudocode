/*
 * XREFs of ??$?0U_Move_allocator_tag@std@@V?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@1@$0A@@?$list@U?$pair@$$CBKW4ContextualProcessorState@@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@2@@std@@AEAA@U_Move_allocator_tag@1@AEAV?$allocator@U?$_List_node@U?$pair@$$CBKW4ContextualProcessorState@@@std@@PEAX@std@@@1@@Z @ 0x1801A70EC
 * Callers:
 *     ??0?$_Hash@V?$_Umap_traits@KW4ContextualProcessorState@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@$0A@@std@@@std@@IEAA@$$QEAV01@@Z @ 0x18004D8D0 (--0-$_Hash@V-$_Umap_traits@KW4ContextualProcessorState@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equ.c)
 *     ??0?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@IEAA@$$QEAV01@@Z @ 0x1801A7300 (--0-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$hash@K@std@@U-$.c)
 * Callees:
 *     ?_Alloc_sentinel_and_proxy@?$list@U?$pair@$$CBKW4ContextualProcessorState@@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@2@@std@@AEAAXXZ @ 0x18005379C (-_Alloc_sentinel_and_proxy@-$list@U-$pair@$$CBKW4ContextualProcessorState@@@std@@V-$allocator@U-.c)
 */

_QWORD *__fastcall std::list<std::pair<unsigned long const,enum ContextualProcessorState>>::list<std::pair<unsigned long const,enum ContextualProcessorState>>(
        _QWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  std::list<std::pair<unsigned long const,enum ContextualProcessorState>>::_Alloc_sentinel_and_proxy(a1);
  return a1;
}
