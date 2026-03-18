/*
 * XREFs of ?PurgeStateSettingEntriesFromLayer@CBatchOptimizer@@AEAAXH@Z @ 0x180071880
 * Callers:
 *     ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x1800709E0 (-ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x18007166C (-TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z.c)
 * Callees:
 *     ?ReturnBatchCommand@CDrawListBatchManager@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180071A70 (-ReturnBatchCommand@CDrawListBatchManager@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_de.c)
 *     ??R?$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z @ 0x1800C24BC (--R-$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBatchOptimizer::PurgeStateSettingEntriesFromLayer(CBatchOptimizer *this, int a2)
{
  __int64 v3; // rbp
  int v4; // ecx
  char *v5; // rsi
  __int64 v6; // r15
  char *v7; // r14
  char *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = 520LL * *((int *)this + a2 + 12);
  v4 = *(_DWORD *)((char *)this + v3 + 96) - *(_DWORD *)((char *)this + v3 + 100);
  if ( v4 )
  {
    v5 = (char *)this + v3 + 120;
    if ( v4 == -1LL || !v5 )
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    v6 = *((_QWORD *)this + 1);
    v7 = &v5[8 * v4];
    dword_1803DE350 += v4;
    v8 = (char *)this + v3 + 120;
    if ( v5 != v7 )
    {
      do
      {
        v10 = *(_QWORD *)v8;
        CDrawListBatchManager::ReturnBatchCommand(v6, &v10);
        if ( v10 )
          std::default_delete<CBatchCommand>::operator()(v9, v10);
        v8 += 8;
      }
      while ( v8 != v7 );
    }
    memmove_0((char *)this + v3 + 120, v7, 8LL * *(unsigned int *)((char *)this + v3 + 100));
    *(_DWORD *)((char *)this + v3 + 96) = *(_DWORD *)((char *)this + v3 + 100);
  }
}
