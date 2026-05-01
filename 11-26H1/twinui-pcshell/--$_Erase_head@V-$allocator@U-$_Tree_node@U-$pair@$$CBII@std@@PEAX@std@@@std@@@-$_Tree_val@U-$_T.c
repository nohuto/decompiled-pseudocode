/*
 * XREFs of ??$_Erase_head@V?$allocator@U?$_Tree_node@U?$pair@$$CBII@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBII@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBII@std@@PEAX@std@@@1@@Z @ 0x1805AE24C
 * Callers:
 *     ??1?$map@IIU?$less@I@std@@V?$allocator@U?$pair@$$CBII@std@@@2@@std@@QEAA@XZ @ 0x1805AE54C (--1-$map@IIU-$less@I@std@@V-$allocator@U-$pair@$$CBII@std@@@2@@std@@QEAA@XZ.c)
 *     ??1MonitorIDFinder@SnapAccessibilityHelpers@@QEAA@XZ @ 0x1805AE654 (--1MonitorIDFinder@SnapAccessibilityHelpers@@QEAA@XZ.c)
 *     ?BuildMonitorIndex@MonitorIDFinder@SnapAccessibilityHelpers@@QEAAXXZ @ 0x1805BE734 (-BuildMonitorIndex@MonitorIDFinder@SnapAccessibilityHelpers@@QEAAXXZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@1@@Z @ 0x1802A912C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,unsigned int>>>::_Erase_head<std::allocator<std::_Tree_node<std::pair<unsigned int const,unsigned int>,void *>>>(
        void **a1,
        __int64 a2)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Windows::Foundation::Size>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,Windows::Foundation::Size>,void *>>>(
    (__int64)a1,
    a2,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16>(*a1, (struct std::nothrow_t *)0x28);
}
