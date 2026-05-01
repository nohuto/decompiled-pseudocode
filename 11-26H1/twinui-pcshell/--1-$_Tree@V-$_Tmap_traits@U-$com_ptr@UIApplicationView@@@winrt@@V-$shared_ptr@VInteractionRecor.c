/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@U?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@U?$less@U?$com_ptr@UIApplicationView@@@winrt@@@4@V?$allocator@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18059D720
 * Callers:
 *     ??1InteractionTracker@SnapInteraction@@UEAA@XZ @ 0x18059DC00 (--1InteractionTracker@SnapInteraction@@UEAA@XZ.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@1@@Z @ 0x18059B920 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBU-$com_ptr@UIApplicationView@@@winrt@@V-$s.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<winrt::com_ptr<IApplicationView>,std::shared_ptr<SnapInteraction::InteractionRecord>,std::less<winrt::com_ptr<IApplicationView>>,std::allocator<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>>,0>>::~_Tree<std::_Tmap_traits<winrt::com_ptr<IApplicationView>,std::shared_ptr<SnapInteraction::InteractionRecord>,std::less<winrt::com_ptr<IApplicationView>>,std::allocator<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16>(*a1, (struct std::nothrow_t *)0x38);
}
