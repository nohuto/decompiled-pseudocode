/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180192754
 * Callers:
 *     ??1?$unordered_map@GV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@U?$hash@G@2@U?$equal_to@G@2@V?$allocator@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18019280C (--1-$unordered_map@GV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@std@@U-$hash@G@2@U-$e.c)
 *     ??1PenHapticInterface@@UEAA@XZ @ 0x180192818 (--1PenHapticInterface@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBGV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180192264 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBGV-$unique_ptr@$$BY0A@EU-$default_delet.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned short,std::unique_ptr<unsigned char [0]>,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>>,0>>::~_Hash<std::_Umap_traits<unsigned short,std::unique_ptr<unsigned char [0]>,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>>,0>>(
        __int64 *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[3];
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (struct std::nothrow_t *)((a1[5] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  std::_List_node<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned short const,std::unique_ptr<unsigned char [0]>>,void *>>>(
    (__int64)v2,
    a1[1]);
  std::_Deallocate<16>((void *)a1[1], (struct std::nothrow_t *)0x20);
}
