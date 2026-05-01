/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18033E0D8
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHSTRING__@@V?$shared_ptr@VIAssistantLight@Lighting@TwinUI@@@std@@@std@@PEAX@1@@Z @ 0x1802A1180 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUHSTRING__@@V-$shared_ptr@VIAssistantLight@.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@std@@PEAX@1@@Z @ 0x18033DE58 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIV-$shared_ptr@ULaunchForResultsQueuedOper.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@std@@@2@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x180351E10 (-_Erase@-$_Tree@V-$_Tmap_traits@IV-$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverla.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Tree_node<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<HSTRING__ * const,std::shared_ptr<TwinUI::Lighting::IAssistantLight>>,void *>>>(
        __int64 a1,
        _QWORD *a2)
{
  std::_Ref_count_base *v2; // rcx

  v2 = (std::_Ref_count_base *)a2[6];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x38);
}
