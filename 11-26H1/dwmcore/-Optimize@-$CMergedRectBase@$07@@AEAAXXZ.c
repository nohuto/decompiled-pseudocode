/*
 * XREFs of ?Optimize@?$CMergedRectBase@$07@@AEAAXXZ @ 0x18008C734
 * Callers:
 *     ?GetOcclusionContext@?$CTargetDirtyBase@$07@@UEAAPEBVCOcclusionContext@@XZ @ 0x180055950 (-GetOcclusionContext@-$CTargetDirtyBase@$07@@UEAAPEBVCOcclusionContext@@XZ.c)
 *     ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180056BA0 (-RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18005714C (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?AddDirtyRegionAndCalcOcclusion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x180057560 (-AddDirtyRegionAndCalcOcclusion@-$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z.c)
 *     ?GetOcclusionContext@CMonitorDirty@@UEAAPEBVCOcclusionContext@@XZ @ 0x18008BFD0 (-GetOcclusionContext@CMonitorDirty@@UEAAPEBVCOcclusionContext@@XZ.c)
 *     ?GetRects@?$CMergedRectBase@$07@@QEAA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x18008D01C (-GetRects@-$CMergedRectBase@$07@@QEAA-AV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800ED0CC (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?AddOcclusionRegion@CLegacyRenderTarget@@UEBA_NPEAVCRegion@@@Z @ 0x180181630 (-AddOcclusionRegion@CLegacyRenderTarget@@UEBA_NPEAVCRegion@@@Z.c)
 *     ?AddOcclusionRegion@CDDisplayRenderTarget@@UEBA_NPEAVCRegion@@@Z @ 0x180191DA0 (-AddOcclusionRegion@CDDisplayRenderTarget@@UEBA_NPEAVCRegion@@@Z.c)
 * Callees:
 *     ?Merge@?$CRectangleCollection@$07@@QEAA_NII@Z @ 0x180059864 (-Merge@-$CRectangleCollection@$07@@QEAA_NII@Z.c)
 *     ?EnsureWeights@?$CRectangleCollection@$07@@AEAAXXZ @ 0x18008D530 (-EnsureWeights@-$CRectangleCollection@$07@@AEAAXXZ.c)
 */

__int64 __fastcall CMergedRectBase<8>::Optimize(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  unsigned int i; // edx

  while ( 1 )
  {
    result = CRectangleCollection<8>::EnsureWeights(a1);
    v3 = 1LL;
LABEL_2:
    if ( (unsigned int)v3 >= *(_DWORD *)a1 )
      break;
    for ( i = 0; ; ++i )
    {
      if ( i >= (unsigned int)v3 )
      {
        v3 = (unsigned int)(v3 + 1);
        goto LABEL_2;
      }
      result = i + ((unsigned int)(v3 * (v3 - 1)) >> 1);
      if ( *(float *)(a1 + 8 * result + 152) < 0.5 )
        break;
    }
    CRectangleCollection<8>::Merge((unsigned int *)a1, i, v3);
  }
  *(_BYTE *)(a1 + 440) = 1;
  return result;
}
