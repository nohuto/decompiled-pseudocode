/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@IVCDDisplayFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x18029A324
 * Callers:
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x18029A3D8 (--1CDDisplaySwapChain@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180299D64 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@PEAX@st.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned int,CDDisplayFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CDDisplayFlipAwayFence>>,0>>::~_Hash<std::_Umap_traits<unsigned int,CDDisplayFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CDDisplayFlipAwayFence>>,0>>(
        __int64 *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[3];
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  std::_List_node<std::pair<unsigned int const,CDDisplayFlipAwayFence>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,CDDisplayFlipAwayFence>,void *>>>(
    (__int64)v2,
    a1[1]);
  std::_Deallocate<16>((void *)a1[1], 0x38uLL);
}
