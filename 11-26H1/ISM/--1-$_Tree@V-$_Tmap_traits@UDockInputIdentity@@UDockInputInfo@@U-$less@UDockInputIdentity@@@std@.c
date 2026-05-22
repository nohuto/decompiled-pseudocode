/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UDockInputInfo@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180182ED8
 * Callers:
 *     ??1?$map@UDockInputIdentity@@UDockInputInfo@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@4@@std@@QEAA@XZ @ 0x180182F74 (--1-$map@UDockInputIdentity@@UDockInputInfo@@U-$less@UDockInputIdentity@@@std@@V-$allocator@U-$p.c)
 *     ??1DeviceDockServer@@UEAA@XZ @ 0x180182FB4 (--1DeviceDockServer@@UEAA@XZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@PEAX@1@@Z @ 0x180182B88 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<DockInputIdentity,DockInputInfo,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DockInputInfo>>,0>>::~_Tree<std::_Tmap_traits<DockInputIdentity,DockInputInfo,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,DockInputInfo>>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,DockInputInfo>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16>(*a1, (struct std::nothrow_t *)0x90);
}
