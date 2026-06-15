/*
 * XREFs of ?allocate@?$allocator@U?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@_K@Z @ 0x18003F6D4
 * Callers:
 *     ??0CResourcePriorityTracker@@QEAA@K@Z @ 0x18003EC8C (--0CResourcePriorityTracker@@QEAA@K@Z.c)
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x18003F240 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18003F4BC (--$_Try_emplace@AEBK$$V@-$map@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@@std@@AEAA-AU.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18003F858 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1800A9E70 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 */

LPVOID std::allocator<std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *>>::allocate()
{
  SIZE_T size_of; // rax
  __int64 v1; // rcx

  size_of = std::_Get_size_of_n<40>(1LL);
  v1 = 0LL;
  if ( size_of )
  {
    if ( size_of < 0x1000 )
      return operator new(size_of);
    else
      return (LPVOID)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(size_of);
  }
  return (LPVOID)v1;
}
