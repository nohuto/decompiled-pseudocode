/*
 * XREFs of ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x180071958
 * Callers:
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x1800701A0 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 *     ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x1800709E0 (-ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180071544 (-AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_dele.c)
 *     ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x18007166C (-TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?RecycleLayer@CBatchOptimizer@@AEAAXH@Z @ 0x180181470 (-RecycleLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListBatchManager@@AEBV?$span@PEAVCBatchCommand@@$0?0@gsl@@@Z @ 0x1801B88BC (-DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListBatchManager@@AEBV-$span@PEAVCBatchCommand@@$0-.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBatchOptimizer::DiscardEmptyLayers(CBatchOptimizer *this, int a2, unsigned int a3)
{
  __int64 v4; // rsi
  unsigned int i; // edi
  __int64 v7; // r14
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a3 )
  {
    v4 = a2;
    for ( i = 0; i < a3; ++i )
    {
      v7 = 520LL * *((int *)this + v4 + 12);
      gsl::details::extent_type<-1>::extent_type<-1>(v8, *(unsigned int *)((char *)this + v7 + 96));
      v8[1] = (char *)this + v7 + 120;
      if ( v8[0] == -1LL || !(CBatchOptimizer *)((char *)this + v7 + 120) && v8[0] )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      CBatchOptimizer::DiscardEntries(*((_QWORD *)this + 1), v8);
      *(_DWORD *)((char *)this + v7 + 96) = 0;
      CBatchOptimizer::RecycleLayer(this, v4);
    }
  }
}
