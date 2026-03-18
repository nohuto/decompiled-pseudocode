/*
 * XREFs of ??$_Uninitialized_move@PEAURenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@V?$allocator@URenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@@std@@@std@@YAPEAURenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@QEAU12@0PEAU12@AEAV?$allocator@URenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@@0@@Z @ 0x1801AB24C
 * Callers:
 *     ??$_Emplace_reallocate@AEBURenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@@?$vector@URenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@V?$allocator@URenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@@std@@@std@@AEAAPEAURenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@QEAU23@AEBU23@@Z @ 0x1801A8E60 (--$_Emplace_reallocate@AEBURenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@@-$.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 */

char *__fastcall std::_Uninitialized_move<CCompositionSwapchainStatistics::RenderedCompositionFrameInstance *>(
        void *a1,
        __int64 a2,
        char *a3)
{
  std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
    a1,
    a2,
    a3);
  return &a3[(a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFC0uLL];
}
