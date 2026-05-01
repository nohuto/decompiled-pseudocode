/*
 * XREFs of ??$_Get_size_of_n@$0GA@@std@@YA_K_K@Z @ 0x180228484
 * Callers:
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@1@V?$tuple@$$V@1@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180481A8C (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@1@V-$tuple@$$V@1@@-$_List_node_emplace_op2@V-$.c)
 *     ??$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@AEAAPEAUSecondaryViewInfo@JointResize@@QEAU23@$$QEAU23@@Z @ 0x1805368EC (--$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@-$vector@USecondaryViewInfo@JointResize@.c)
 *     ??$?0AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV01@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@2@Z @ 0x1805736E4 (--$-0AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEBV01@@-$_Tree_temp_node@.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1802B9568 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<96>(unsigned __int64 a1)
{
  if ( a1 > 0x2AAAAAAAAAAAAAALL )
    std::_Throw_bad_array_new_length();
  return 96 * a1;
}
