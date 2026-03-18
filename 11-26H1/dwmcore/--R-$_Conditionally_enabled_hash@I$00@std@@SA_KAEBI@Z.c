/*
 * XREFs of ??R?$_Conditionally_enabled_hash@I$00@std@@SA_KAEBI@Z @ 0x180266F00
 * Callers:
 *     ??$emplace@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@?$_Hash@V?$_Umap_traits@IUInput@CFilterEffect@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBIUInput@CFilterEffect@@@1@@Z @ 0x180266C9C (--$emplace@U-$pair@$$CBIUInput@CFilterEffect@@@std@@@-$_Hash@V-$_Umap_traits@IUInput@CFilterEffe.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IUInput@CFilterEffect@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x180267AB4 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IUInput@CFilterEffect@@V-$_Uhash_compare@IU-$hash@I@std@.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@IUInput@CFilterEffect@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBIUInput@CFilterEffect@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x180267C44 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@IUInput@CFilterEffect@@V-$_Uhash_compare@IU-$hash@I@st.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IVCDDisplayFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18029B44C (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IVCDDisplayFlipAwayFence@@V-$_Uhash_compare@IU-$hash@I@s.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@IVCDDisplayFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@3@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x18029B5F0 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@IVCDDisplayFlipAwayFence@@V-$_Uhash_compare@IU-$hash@I.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IVCFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x1802A61EC (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IVCFlipAwayFence@@V-$_Uhash_compare@IU-$hash@I@std@@U-$e.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@IVCFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCFlipAwayFence@@@std@@@3@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBIVCFlipAwayFence@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1802A637C (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@IVCFlipAwayFence@@V-$_Uhash_compare@IU-$hash@I@std@@U-.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Conditionally_enabled_hash<unsigned int,1>::operator()(unsigned __int8 *a1)
{
  return std::_Fnv1a_append_bytes((__int64)a1, a1, 4uLL);
}
