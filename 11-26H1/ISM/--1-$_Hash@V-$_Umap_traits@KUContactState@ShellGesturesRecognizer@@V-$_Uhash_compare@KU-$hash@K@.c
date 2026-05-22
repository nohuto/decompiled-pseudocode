/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@KUContactState@ShellGesturesRecognizer@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180073DD4
 * Callers:
 *     ??1ShellGesturesContext@ShellGesturesProcessor@@QEAA@XZ @ 0x180073D60 (--1ShellGesturesContext@ShellGesturesProcessor@@QEAA@XZ.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180073E30 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUContactState@ShellGesturesRecognizer@.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,ShellGesturesRecognizer::ContactState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>>,0>>::~_Hash<std::_Umap_traits<unsigned long,ShellGesturesRecognizer::ContactState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>>,0>>(
        _QWORD *a1)
{
  __int64 v2; // rcx

  v2 = a1[3];
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (a1[5] - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  std::_List_node<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>,void *>>>(
    v2,
    a1[1]);
  return std::_Deallocate<16>(a1[1], 56LL);
}
