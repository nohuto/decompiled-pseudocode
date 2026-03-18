/*
 * XREFs of ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800ECDBC
 * Callers:
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800363C0 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLAN.c)
 *     ?AddDirtyRegionAndCalcOcclusion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x180057560 (-AddDirtyRegionAndCalcOcclusion@-$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z.c)
 *     ?NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180057844 (-NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINT.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB820 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800ECB30 (-NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTAN.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800ED0CC (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800ED6B8 (-NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z @ 0x1800ED904 (-AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x1800EDF9C (-AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV-$span@PEBVCVisual@@$0-0@gsl@@@Z.c)
 *     ?RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800EE760 (-RenderAndPresent@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x18012DBA4 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?UpdateClientBounds@CVisualTree@@IEAAXXZ @ 0x180140CFC (-UpdateClientBounds@CVisualTree@@IEAAXXZ.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x180171000 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ?DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEBUCSM_RGNDATA_@@PEBUScrollOptimization@@PEAVCRegion@@@Z @ 0x18018634C (-DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEBUCSM_RGNDATA_@@PEBUScrollOp.c)
 *     ?RetireTransientRegion@CSwapChainBuffer@@UEAAXXZ @ 0x1801B63C0 (-RetireTransientRegion@CSwapChainBuffer@@UEAAXXZ.c)
 *     ?NotifyRenderedRect@CDDASwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801BB580 (-NotifyRenderedRect@CDDASwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZ.c)
 *     ?AddTransientRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z @ 0x1801D5CC0 (-AddTransientRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z.c)
 *     ?AddToTightDirtyRegion@@YAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAVCRegion@@@Z @ 0x1802373D4 (-AddToTightDirtyRegion@@YAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotN.c)
 *     ?CalcDesktopClip@COverlayContext@@IEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802394AC (-CalcDesktopClip@COverlayContext@@IEAA_NAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gs.c)
 *     ?CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ @ 0x1802A3460 (-CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ.c)
 *     ?NotifyRenderedRect@CCompSwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802A3B70 (-NotifyRenderedRect@CCompSwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSI.c)
 *     ?NotifyRenderedRect@CConversionSwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802A7960 (-NotifyRenderedRect@CConversionSwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POIN.c)
 *     ?NotifyRenderedRect@CLegacyRemotingSwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802A8A50 (-NotifyRenderedRect@CLegacyRemotingSwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x1800EB930 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800EBC90 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x180144D20 (-CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CRegion::Union(
        const struct FastRegion::Internal::CRgnData **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  const struct FastRegion::Internal::CRgnData *v2; // rdi
  int v5; // r8d
  _DWORD *v6; // rbx
  int *v7; // r15
  int v8; // eax
  int v9; // r14d
  int v10; // edx
  int v11; // esi
  __int64 v12; // r9
  _DWORD *v13; // r8
  _DWORD *v14; // r11
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r9
  int v20; // edi
  int v21; // eax
  FastRegion::Internal::CRgnData *v22; // rcx
  struct FastRegion::Internal::CRgnData *v23; // r14
  int v24; // ebx
  FastRegion::Internal::CRgnData *v25; // rax
  int v26; // [rsp+20h] [rbp-E0h]
  struct FastRegion::Internal::CRgnData *v27; // [rsp+28h] [rbp-D8h]
  _BYTE v28[256]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v2 = *a2;
  v5 = *(_DWORD *)*a2;
  if ( v5 )
  {
    v6 = *this;
    if ( *(_DWORD *)*this )
    {
      v21 = FastRegion::Internal::CRgnData::EstimateSizeUnion(*this, v2);
      v22 = (FastRegion::Internal::CRgnData *)v28;
      v27 = (struct FastRegion::Internal::CRgnData *)v28;
      v26 = v21;
      if ( (unsigned __int64)v21 > 0x100 )
      {
        v25 = (FastRegion::Internal::CRgnData *)MIDL_user_allocate(v21);
        v22 = v25;
        if ( !v25 )
        {
          v20 = -2147024882;
          goto LABEL_21;
        }
        v27 = v25;
      }
      FastRegion::Internal::CRgnData::Union(v22, *this, *a2);
      v23 = v27;
      v20 = 0;
      if ( *(_DWORD *)v27 )
      {
        if ( v28 == (_BYTE *)v27 )
        {
          v20 = FastRegion::CRegion::CopyData((FastRegion::CRegion *)this, v27);
        }
        else
        {
          v24 = v26;
          v27 = (struct FastRegion::Internal::CRgnData *)v28;
          v26 = 0;
          FastRegion::CRegion::FreeMemory(this);
          *this = v23;
          *((_DWORD *)this + 2) = v24;
        }
      }
      else
      {
        *(_DWORD *)*this = 0;
      }
      if ( v28 != (_BYTE *)v27 )
        operator delete(v27);
    }
    else
    {
      if ( this == a2 )
      {
LABEL_13:
        v20 = 0;
        goto LABEL_14;
      }
      v7 = (int *)(this + 1);
      v8 = 60;
      v9 = *((_DWORD *)v2 + 2 * v5 + 2) + 8 * v5 - 12 - *((_DWORD *)v2 + 4) + 8 * (v5 - 1) + 24;
      if ( this + 1 != (const struct FastRegion::Internal::CRgnData **)v6 )
        v8 = *v7;
      if ( v8 >= v9 )
      {
LABEL_7:
        v10 = *(_DWORD *)v2;
        v11 = 0;
        *v6 = *(_DWORD *)v2;
        v6[1] = *((_DWORD *)v2 + 1);
        v6[2] = *((_DWORD *)v2 + 2);
        v12 = (__int64)v2 + *((int *)v2 + 4) + 12;
        v13 = &v6[2 * v10 + 3];
        if ( v10 > 0 )
        {
          v14 = v6 + 3;
          do
          {
            *v14 = *(_DWORD *)((char *)v14 + v2 - (const struct FastRegion::Internal::CRgnData *)v6);
            v14 += 2;
            v15 = v11++;
            v6[2 * v15 + 4] = (_DWORD)v2
                            + 8 * v15
                            + 4 * (((__int64)v13 - v12) >> 2)
                            + *((_DWORD *)v2 + 2 * v15 + 4)
                            - ((_DWORD)v6
                             + 8 * v15);
          }
          while ( v11 < *v6 );
        }
        v16 = (__int64)v2 + 8 * *(_DWORD *)v2 + 4;
        v17 = (unsigned __int64)((int)v16 + *(_DWORD *)(v16 + 4) - *((_DWORD *)v2 + 4) - ((int)v2 + 12)) >> 2;
        v18 = (int)v17;
        if ( (int)v17 > 0 )
        {
          v19 = v12 - (_QWORD)v13;
          do
          {
            *v13 = *(_DWORD *)((char *)v13 + v19);
            ++v13;
            --v18;
          }
          while ( v18 );
        }
        goto LABEL_13;
      }
      v6 = MIDL_user_allocate(v9);
      if ( v6 )
      {
        FastRegion::CRegion::FreeMemory(this);
        *this = (const struct FastRegion::Internal::CRgnData *)v6;
        *v7 = v9;
        goto LABEL_7;
      }
      v20 = -2147024882;
    }
LABEL_14:
    if ( v20 >= 0 )
      return;
LABEL_21:
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1AB,
      (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\Region.h",
      (const char *)(unsigned int)v20,
      v26);
  }
}
