/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1801C351C
 * Callers:
 *     ??1WindowingEnvironmentConfig@@UEAA@XZ @ 0x1801C34BC (--1WindowingEnvironmentConfig@@UEAA@XZ.c)
 *     ??1?$map@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@@std@@QEAA@XZ @ 0x1802C24CC (--1-$map@KUDisplayRegionInfo@@U-$less@K@std@@V-$allocator@U-$pair@$$CBKUDisplayRegionInfo@@@std@.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@1@@Z @ 0x1801C354C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@std@@@std@.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::~_Tree<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>(
        _QWORD *a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,DisplayRegionInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,DisplayRegionInfo>,void *>>>(
    a1,
    a1,
    *(_QWORD *)(*a1 + 8LL));
  return std::_Deallocate<16>(*a1, 64LL);
}
