/*
 * XREFs of ??0CBatchOptimizer@@QEAA@PEAVCDrawListBatchManager@@@Z @ 0x180058AB4
 * Callers:
 *     ?CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ @ 0x1801CAC48 (-CreateRenderingResources@CDrawListBatchManager@@IEAAJXZ.c)
 * Callees:
 *     ??0SharedStateLayer@@QEAA@XZ @ 0x18005A054 (--0SharedStateLayer@@QEAA@XZ.c)
 *     ?Reset@CBatchOptimizer@@AEAAXXZ @ 0x18017F8E0 (-Reset@CBatchOptimizer@@AEAAXXZ.c)
 */

CBatchOptimizer *__fastcall CBatchOptimizer::CBatchOptimizer(CBatchOptimizer *this, struct CDrawListBatchManager *a2)
{
  SharedStateLayer *v2; // rdi
  __int64 v4; // rsi

  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &CBatchOptimizer::`vftable';
  v2 = (CBatchOptimizer *)((char *)this + 80);
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  v4 = 8LL;
  do
  {
    SharedStateLayer::SharedStateLayer(v2);
    v2 = (SharedStateLayer *)((char *)v2 + 520);
    --v4;
  }
  while ( v4 );
  CBatchOptimizer::Reset(this);
  return this;
}
