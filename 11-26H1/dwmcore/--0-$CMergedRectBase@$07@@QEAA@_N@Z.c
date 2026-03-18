/*
 * XREFs of ??0?$CMergedRectBase@$07@@QEAA@_N@Z @ 0x18005A1BC
 * Callers:
 *     ?AddDirtyRegionAndCalcOcclusion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x180057560 (-AddDirtyRegionAndCalcOcclusion@-$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z.c)
 *     ??0?$CTargetDirtyBase@$07@@QEAA@PEBVIVisualTreeTarget@@@Z @ 0x1801C9AA4 (--0-$CTargetDirtyBase@$07@@QEAA@PEBVIVisualTreeTarget@@@Z.c)
 * Callees:
 *     ??0?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA@XZ @ 0x18005A290 (--0-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEAA@.c)
 */

__int64 __fastcall CMergedRectBase<8>::CMergedRectBase<8>(__int64 a1, char a2)
{
  char *v4; // rsi
  __int64 v5; // rbp
  __int64 result; // rax

  *(_DWORD *)a1 = 0;
  v4 = (char *)(a1 + 4);
  v5 = 9LL;
  do
  {
    TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>(v4);
    v4 += 16;
    --v5;
  }
  while ( v5 );
  *(_BYTE *)(a1 + 436) = 0;
  result = a1;
  *(_BYTE *)(a1 + 440) = a2 - 1;
  return result;
}
