/*
 * XREFs of ??0SharedStateLayer@@QEAA@XZ @ 0x18005A054
 * Callers:
 *     ??0CBatchOptimizer@@QEAA@PEAVCDrawListBatchManager@@@Z @ 0x180058AB4 (--0CBatchOptimizer@@QEAA@PEAVCDrawListBatchManager@@@Z.c)
 * Callees:
 *     ??0?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA@XZ @ 0x18005A290 (--0-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA@.c)
 */

SharedStateLayer *__fastcall SharedStateLayer::SharedStateLayer(SharedStateLayer *this)
{
  char *v1; // rdi
  __int64 v3; // rsi

  *((_QWORD *)this + 2) = 0LL;
  v1 = (char *)this + 200;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  v3 = 20LL;
  do
  {
    TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>(v1);
    v1 += 16;
    --v3;
  }
  while ( v3 );
  return this;
}
