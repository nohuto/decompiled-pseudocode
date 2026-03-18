/*
 * XREFs of ?Reset@CBatchOptimizer@@AEAAXXZ @ 0x18017F8E0
 * Callers:
 *     ??0CBatchOptimizer@@QEAA@PEAVCDrawListBatchManager@@@Z @ 0x180058AB4 (--0CBatchOptimizer@@QEAA@PEAVCDrawListBatchManager@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBatchOptimizer::Reset(CBatchOptimizer *this)
{
  *((_BYTE *)this + 4240) = 0;
  *((_OWORD *)this + 1) = SharedStateLayer::StateBlock::kBlank;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 1;
  *((_DWORD *)this + 14) = 2;
  *((_DWORD *)this + 15) = 3;
  *((_DWORD *)this + 16) = 4;
  *((_DWORD *)this + 17) = 5;
  *((_DWORD *)this + 18) = 6;
  *((_DWORD *)this + 19) = 7;
}
