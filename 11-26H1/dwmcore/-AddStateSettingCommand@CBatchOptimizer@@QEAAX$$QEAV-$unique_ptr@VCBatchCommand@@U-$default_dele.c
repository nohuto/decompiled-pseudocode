/*
 * XREFs of ?AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180071544
 * Callers:
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x1800C5AE0 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 * Callees:
 *     ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x180070E00 (-AppendLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z @ 0x180071750 (-ApplyRenderState@CBatchCommand@@QEBA_NPEAUIDrawListStateSink@@@Z.c)
 *     ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x180071958 (-DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z.c)
 *     ?GetNearestRenderingLayerUnderEmptyLayer@CBatchOptimizer@@AEBAHH@Z @ 0x180071A18 (-GetNearestRenderingLayerUnderEmptyLayer@CBatchOptimizer@@AEBAHH@Z.c)
 */

void __fastcall CBatchOptimizer::AddStateSettingCommand(CBatchOptimizer *this, CBatchCommand **a2)
{
  _OWORD *v4; // r14
  __int64 v5; // rax
  CBatchCommand *v6; // rdx
  __int64 v7; // rcx
  char *v8; // r8
  __int64 v9; // rcx
  unsigned int v10; // esi
  int NearestRenderingLayerUnderEmptyLayer; // r9d
  __int64 v12; // r8
  int *v13; // r10
  bool v14; // zf

  if ( !*((_DWORD *)this + 8) )
    CBatchOptimizer::AppendLayer(this);
  CBatchCommand::ApplyRenderState(*a2, this);
  v4 = (_OWORD *)((char *)this + 16);
  v5 = 520LL * *((int *)this + *((_DWORD *)this + 8) + 11);
  if ( *(_DWORD *)((char *)this + v5 + 100)
    || (v14 = *(_DWORD *)((char *)this + v5 + 96) == 20, *(_OWORD *)((char *)this + v5 + 80) = *v4, v14) )
  {
    *((_DWORD *)this + 6) = 24;
    *((_BYTE *)this + 28) = 2;
    CBatchOptimizer::AppendLayer(this);
  }
  v6 = *a2;
  v7 = *((int *)this + *((_DWORD *)this + 8) + 11);
  *a2 = 0LL;
  v8 = (char *)this + 520 * v7;
  v9 = *((unsigned int *)v8 + 24);
  *((_DWORD *)v8 + 24) = v9 + 1;
  *(_QWORD *)&v8[8 * v9 + 120] = v6;
  v10 = *((_DWORD *)this + 8);
  if ( v10 > 1 )
  {
    NearestRenderingLayerUnderEmptyLayer = CBatchOptimizer::GetNearestRenderingLayerUnderEmptyLayer(this, v10 - 1);
    v12 = NearestRenderingLayerUnderEmptyLayer;
    v13 = (int *)((char *)this + 4 * NearestRenderingLayerUnderEmptyLayer + 48);
    while ( v12 != v10 - 1 )
    {
      if ( *((_QWORD *)this + 65 * *v13 + 10) == *(_QWORD *)v4 )
      {
        CBatchOptimizer::DiscardEmptyLayers(
          this,
          NearestRenderingLayerUnderEmptyLayer + 1,
          v10 - NearestRenderingLayerUnderEmptyLayer - 1);
        return;
      }
      ++NearestRenderingLayerUnderEmptyLayer;
      ++v12;
      ++v13;
    }
  }
}
