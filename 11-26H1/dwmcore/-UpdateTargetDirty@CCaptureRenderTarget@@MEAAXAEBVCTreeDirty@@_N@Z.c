/*
 * XREFs of ?UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x1801FD0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDirtyRegion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x18005571C (-AddDirtyRegion@-$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z.c)
 *     ?AddDirtyRects@?$CTargetDirtyBase@$07@@QEAAXAEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x1800557B0 (-AddDirtyRects@-$CTargetDirtyBase@$07@@QEAAXAEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_.c)
 *     ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800566F0 (-GetRectangles@CRegion@@QEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ?AddDirtyRegionAndCalcOcclusion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x180057560 (-AddDirtyRegionAndCalcOcclusion@-$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x180057900 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x18019F3A8 (-GetRects@-$CMergedRectBase@$03@@QEAA-AV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?Reset@?$CMergedRectBase@$03@@QEAAXXZ @ 0x1801A46C4 (-Reset@-$CMergedRectBase@$03@@QEAAXXZ.c)
 *     ?AddCursorInvalidRects@CCaptureRenderTarget@@IEAAXXZ @ 0x1802088B0 (-AddCursorInvalidRects@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_DirtyRegionOcclusion@@@details@wil@@QEAA_NXZ @ 0x180258160 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_DirtyRegionOcclusion@@@de.c)
 */

void __fastcall CCaptureRenderTarget::UpdateTargetDirty(
        CCaptureRenderTarget *this,
        const struct CTreeDirty *a2,
        char a3)
{
  char *v6; // rsi
  __int64 v7; // r15
  char v8; // bp
  _DWORD *v9; // rdi
  _QWORD *Rects; // rax
  __int64 v11; // rax
  int **v12; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v6 = (char *)this + 408;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_DirtyRegionOcclusion>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_DirtyRegionOcclusion>::GetImpl'::`2'::impl) )
  {
    CTargetDirtyBase<8>::AddDirtyRegionAndCalcOcclusion((__int64)v6, (__int64)a2);
    v7 = (__int64)v6;
  }
  else
  {
    v7 = (__int64)v6;
    CTargetDirtyBase<8>::AddDirtyRegion((__int64)v6, (__int64)a2);
  }
  if ( *((_BYTE *)this + 2588) && (v8 = 1, *((_DWORD *)this + 46) == 1) )
  {
    v9 = (_DWORD *)((char *)this + 424);
  }
  else
  {
    v8 = 0;
    v9 = (_DWORD *)((char *)this + 424);
    if ( !*((_DWORD *)this + 106) )
      goto LABEL_12;
  }
  if ( *((_DWORD *)this + 604) )
  {
    Rects = CMergedRectBase<4>::GetRects((unsigned int *)this + 604, v13);
    CTargetDirtyBase<8>::AddDirtyRects(v7, Rects);
    CMergedRectBase<4>::Reset((__int64)this + 2416);
  }
  if ( v8 )
    CCaptureRenderTarget::AddCursorInvalidRects(this);
LABEL_12:
  if ( a3 )
  {
    v11 = *((_QWORD *)this + 348);
    if ( v11 != *((_QWORD *)this + 349) )
      *((_QWORD *)this + 349) = v11;
    if ( *v9 )
    {
      v12 = (int **)*((_QWORD *)this + 109);
      if ( v12 )
        CRegion::GetRectangles(v12, (_QWORD *)this + 348);
      if ( *((_DWORD *)this + 44) != 2 )
        CTargetDirtyBase<8>::SetFullDirty((__int64)v6);
    }
  }
  *((_BYTE *)this + 2588) = 0;
}
