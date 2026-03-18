/*
 * XREFs of ??1?$_Tree@V?$_Tset_traits@PEAVCInteractionTrackerBase@@U?$less@PEAVCInteractionTrackerBase@@@std@@V?$allocator@PEAVCInteractionTrackerBase@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x180138C5C
 * Callers:
 *     ?GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@PEAV?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@Z @ 0x180136A28 (-GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrac.c)
 *     ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTrackerBase@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x180137108 (-BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteracti.c)
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1802155F4 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBa.c)
 *     ?BoundTrackersHaveActiveCustomAnimations@CInteractionTrackerBindingManager@@QEAA_NPEAVCInteractionTrackerBase@@@Z @ 0x1802785CC (-BoundTrackersHaveActiveCustomAnimations@CInteractionTrackerBindingManager@@QEAA_NPEAVCInteracti.c)
 *     ?TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@@0@Z @ 0x180278E94 (-TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTr.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@PEAVCInteractionTrackerBase@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTrackerBase@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@PEAVCInteractionTrackerBase@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVCInteractionTrackerBase@@PEAX@1@@Z @ 0x180138C8C (--$_Erase_tree@V-$allocator@U-$_Tree_node@PEAVCInteractionTrackerBase@@PEAX@std@@@std@@@-$_Tree_.c)
 */

void __fastcall std::_Tree<std::_Tset_traits<CInteractionTrackerBase *,std::less<CInteractionTrackerBase *>,std::allocator<CInteractionTrackerBase *>,0>>::~_Tree<std::_Tset_traits<CInteractionTrackerBase *,std::less<CInteractionTrackerBase *>,std::allocator<CInteractionTrackerBase *>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<CInteractionTrackerBase *>>::_Erase_tree<std::allocator<std::_Tree_node<CInteractionTrackerBase *,void *>>>(
    a1,
    a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16>(*a1, 0x28uLL);
}
