/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@USinkRenderCommand@CCpuClipAntialiasSinkContext@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801B29D8
 * Callers:
 *     ??$emplace_front@IAEAUBounds@CCpuClipAntialiasSink@@@?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@QEAAAEAUSinkRenderCommand@CCpuClipAntialiasSinkContext@@$$QEAIAEAUBounds@CCpuClipAntialiasSink@@@Z @ 0x18025AEE8 (--$emplace_front@IAEAUBounds@CCpuClipAntialiasSink@@@-$list@USinkRenderCommand@CCpuClipAntialias.c)
 *     ??$emplace@AEBU?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@?$_Hash@V?$_Umap_traits@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTrackerBase@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@1@@Z @ 0x18027804C (--$emplace@AEBU-$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<CCpuClipAntialiasSinkContext::SinkRenderCommand,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<CCpuClipAntialiasSinkContext::SinkRenderCommand,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16>(v1, 0x20uLL);
}
