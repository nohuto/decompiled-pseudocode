/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@IUInput@CFilterEffect@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUInput@CFilterEffect@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180266E24
 * Callers:
 *     ?OnUpdateIdChanged@CFilterEffect@@QEAAXXZ @ 0x180267614 (-OnUpdateIdChanged@CFilterEffect@@QEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIUInput@CFilterEffect@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUInput@CFilterEffect@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUInput@CFilterEffect@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180266C60 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIUInput@CFilterEffect@@@std@@PEAX@std@@.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned int,CFilterEffect::Input,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFilterEffect::Input>>,0>>::~_Hash<std::_Umap_traits<unsigned int,CFilterEffect::Input,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CFilterEffect::Input>>,0>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (*(_QWORD *)(a1 + 40) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  std::_List_node<std::pair<unsigned int const,CFilterEffect::Input>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,CFilterEffect::Input>,void *>>>(
    (__int64)v2,
    *(_QWORD ***)(a1 + 8));
  std::_Deallocate<16>(*(void **)(a1 + 8), 0x38uLL);
}
