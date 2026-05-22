/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180075E20
 * Callers:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801328D8 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHie.c)
 * Callees:
 *     ??1InputSiteHierarchyEntry@InputSiteHierarchyManager@@QEAA@XZ @ 0x18002C5EC (--1InputSiteHierarchyEntry@InputSiteHierarchyManager@@QEAA@XZ.c)
 */

__int64 __fastcall std::_List_node<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>,void *>>>(
        __int64 a1,
        __int64 a2)
{
  InputSiteHierarchyManager::InputSiteHierarchyEntry::~InputSiteHierarchyEntry((InputSiteHierarchyManager::InputSiteHierarchyEntry *)(a2 + 24));
  return std::_Deallocate<16>(a2, 64LL);
}
