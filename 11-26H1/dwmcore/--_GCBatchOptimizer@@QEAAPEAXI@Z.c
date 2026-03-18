/*
 * XREFs of ??_GCBatchOptimizer@@QEAAPEAXI@Z @ 0x180135388
 * Callers:
 *     ??1CDrawListBatchManager@@IEAA@XZ @ 0x180136480 (--1CDrawListBatchManager@@IEAA@XZ.c)
 * Callees:
 *     ??1SharedStateLayer@@QEAA@XZ @ 0x1801353F0 (--1SharedStateLayer@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

CBatchOptimizer *__fastcall CBatchOptimizer::`scalar deleting destructor'(CBatchOptimizer *this)
{
  SharedStateLayer *v2; // rdi
  __int64 v3; // rsi

  *(_QWORD *)this = &CBatchOptimizer::`vftable';
  v2 = (CBatchOptimizer *)((char *)this + 4240);
  v3 = 8LL;
  do
  {
    v2 = (SharedStateLayer *)((char *)v2 - 520);
    SharedStateLayer::~SharedStateLayer(v2);
    --v3;
  }
  while ( v3 );
  operator delete(this, 0x1098uLL);
  return this;
}
