/*
 * XREFs of ?Copy@CRegion@@QEAAXAEBV1@@Z @ 0x18012F7D8
 * Callers:
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800363C0 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLAN.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B8950 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB820 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCMergedRect@@@Z @ 0x18012F240 (-GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRec.c)
 *     ?SaveDirtyForPreRender@CComputeScribbleFramebuffer@@QEAAXXZ @ 0x18012F764 (-SaveDirtyForPreRender@CComputeScribbleFramebuffer@@QEAAXXZ.c)
 *     ?BuildFromCRegion@CRegionShape@@QEAAXAEBVCRegion@@@Z @ 0x18012F7A4 (-BuildFromCRegion@CRegionShape@@QEAAXAEBVCRegion@@@Z.c)
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x18012F9DC (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x180171000 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ?CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ @ 0x1802A3460 (-CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ.c)
 *     ?Present@CCompSwapChain@@QEAAJII@Z @ 0x1802A3CDC (-Present@CCompSwapChain@@QEAAJII@Z.c)
 *     ?AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z @ 0x1802AAD50 (-AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CRegion::Copy(FastRegion::CRegion **this, FastRegion::CRegion **a2)
{
  int *v2; // rbx
  int v4; // r8d
  CRegion *v5; // rdi
  int *v6; // r14
  int v7; // eax
  int v8; // ebp
  int v9; // edx
  int v10; // esi
  __int64 v11; // r9
  _DWORD *v12; // r8
  _DWORD *v13; // r11
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r9
  int v19; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( this != a2 )
  {
    v2 = (int *)*a2;
    v4 = *(_DWORD *)*a2;
    if ( v4 )
    {
      v5 = *this;
      v6 = (int *)(this + 1);
      v7 = 60;
      v8 = v2[2 * v4 + 2] + 8 * v4 - 12 - v2[4] + 8 * (v4 - 1) + 24;
      if ( this + 1 != (FastRegion::CRegion **)*this )
        v7 = *v6;
      if ( v7 < v8 )
      {
        v5 = (CRegion *)MIDL_user_allocate(v8);
        if ( !v5 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x1A5,
            (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\Region.h",
            (const char *)0x8007000ELL,
            v19);
        FastRegion::CRegion::FreeMemory(this);
        *this = v5;
        *v6 = v8;
      }
      v9 = *v2;
      v10 = 0;
      *(_DWORD *)v5 = *v2;
      *((_DWORD *)v5 + 1) = v2[1];
      *((_DWORD *)v5 + 2) = v2[2];
      v11 = (__int64)v2 + v2[4] + 12;
      v12 = (_DWORD *)((char *)v5 + 8 * v9 + 12);
      if ( v9 > 0 )
      {
        v13 = (_DWORD *)((char *)v5 + 12);
        do
        {
          *v13 = *(_DWORD *)((char *)v13 + (char *)v2 - (char *)v5);
          v13 += 2;
          v14 = v10++;
          *((_DWORD *)v5 + 2 * v14 + 4) = (_DWORD)v2
                                        + 8 * v14
                                        + 4 * (((__int64)v12 - v11) >> 2)
                                        + v2[2 * v14 + 4]
                                        - ((_DWORD)v5
                                         + 8 * v14);
        }
        while ( v10 < *(_DWORD *)v5 );
      }
      v15 = (__int64)&v2[2 * *v2 + 1];
      v16 = (unsigned __int64)((int)v15 + *(_DWORD *)(v15 + 4) - v2[4] - ((int)v2 + 12)) >> 2;
      v17 = (int)v16;
      if ( (int)v16 > 0 )
      {
        v18 = v11 - (_QWORD)v12;
        do
        {
          *v12 = *(_DWORD *)((char *)v12 + v18);
          ++v12;
          --v17;
        }
        while ( v17 );
      }
    }
    else
    {
      *(_DWORD *)*this = 0;
    }
  }
}
