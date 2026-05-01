/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180155F60
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@PEAX@1@@Z @ 0x18057818C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBU-$com_ptr@UIApplicationView@@@winrt@@V-$s.c)
 *     ?UpdateTelemetry@InteractionTracker@SnapInteraction@@AEAAXXZ @ 0x18058684C (-UpdateTelemetry@InteractionTracker@SnapInteraction@@AEAAXXZ.c)
 * Callees:
 *     ??1?$pair@$$CBU?$com_ptr@UIApplicationView@@@winrt@@V?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@@std@@QEAA@XZ @ 0x180156008 (--1-$pair@$$CBU-$com_ptr@UIApplicationView@@@winrt@@V-$shared_ptr@VInteractionRecord@SnapInterac.c)
 */

void __fastcall std::_Tree_node<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>,void *>>>(
        __int64 a1,
        char *a2)
{
  std::pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>::~pair<winrt::com_ptr<IApplicationView> const,std::shared_ptr<SnapInteraction::InteractionRecord>>(a2 + 32);
  operator delete(a2, (const struct std::nothrow_t *)0x38);
}
