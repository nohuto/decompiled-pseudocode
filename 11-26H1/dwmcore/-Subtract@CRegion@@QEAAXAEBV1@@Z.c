/*
 * XREFs of ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800747C4
 * Callers:
 *     ?AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180074510 (-AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x18009DB08 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB820 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?AddValidRect@CSecondaryBitmap@@QEAAXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800E4068 (-AddValidRect@CSecondaryBitmap@@QEAAXAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x18012F9DC (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180202EAC (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     ?CalcDesktopClip@COverlayContext@@IEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802394AC (-CalcDesktopClip@COverlayContext@@IEAA_NAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gs.c)
 *     ?CalcVisibleArea@CArrayBasedCoverageSet@@QEBA_KAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x180258E80 (-CalcVisibleArea@CArrayBasedCoverageSet@@QEBA_KAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?NotifyRenderedRect@CCompSwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802A3B70 (-NotifyRenderedRect@CCompSwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSI.c)
 *     ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802AC16C (-UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180075C80 (-EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180075F40 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CRegion::Subtract(
        const struct FastRegion::Internal::CRgnData **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  const struct FastRegion::Internal::CRgnData *v4; // rdx
  const struct FastRegion::Internal::CRgnData *v5; // rcx
  int v6; // eax
  FastRegion::Internal::CRgnData *v7; // rcx
  const struct FastRegion::Internal::CRgnData *v8; // r14
  int v9; // edi
  int *v10; // r15
  int v11; // ebx
  int v12; // edx
  int v13; // edi
  char *v14; // r8
  _BYTE *v15; // r9
  _DWORD *v16; // r11
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r9
  _DWORD *v22; // rbx
  int v23; // eax
  int v24; // edi
  HANDLE ProcessHeap; // rax
  FastRegion::Internal::CRgnData *v26; // rax
  int v27; // [rsp+20h] [rbp-E0h]
  FastRegion::Internal::CRgnData *lpMem; // [rsp+28h] [rbp-D8h]
  _BYTE v29[256]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v4 = *a2;
  if ( !*(_DWORD *)v4 )
    return;
  v5 = *this;
  if ( !*(_DWORD *)v5 )
    return;
  v6 = FastRegion::Internal::CRgnData::EstimateSizeSubtract(v5, v4);
  v7 = (FastRegion::Internal::CRgnData *)v29;
  lpMem = (FastRegion::Internal::CRgnData *)v29;
  v27 = v6;
  if ( (unsigned __int64)v6 > 0x100 )
  {
    v26 = (FastRegion::Internal::CRgnData *)MIDL_user_allocate(v6);
    v7 = v26;
    if ( !v26 )
    {
      v9 = -2147024882;
      goto LABEL_24;
    }
    lpMem = v26;
  }
  FastRegion::Internal::CRgnData::Subtract(v7, *this, *a2);
  v8 = lpMem;
  v9 = 0;
  if ( !*(_DWORD *)lpMem )
  {
    *(_DWORD *)*this = 0;
    goto LABEL_15;
  }
  v10 = (int *)(this + 1);
  if ( v29 != (_BYTE *)lpMem )
  {
    v11 = v27;
    lpMem = (FastRegion::Internal::CRgnData *)v29;
    v27 = 0;
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
    *this = v8;
    *v10 = v11;
    goto LABEL_15;
  }
  v22 = *this;
  v23 = 60;
  v24 = *((_DWORD *)lpMem + 2 * *(_DWORD *)lpMem + 2)
      - *((_DWORD *)lpMem + 4)
      + 8 * *(_DWORD *)lpMem
      - 12
      + 8 * (*(_DWORD *)lpMem - 1)
      + 24;
  if ( v10 != (int *)*this )
    v23 = *v10;
  if ( v23 < v24 )
  {
    v22 = MIDL_user_allocate(v24);
    if ( !v22 )
    {
      v9 = -2147024882;
      goto LABEL_15;
    }
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
    *this = (const struct FastRegion::Internal::CRgnData *)v22;
    *v10 = v24;
  }
  v12 = *(_DWORD *)lpMem;
  v13 = 0;
  *v22 = *(_DWORD *)lpMem;
  v22[1] = *((_DWORD *)lpMem + 1);
  v22[2] = *((_DWORD *)lpMem + 2);
  v14 = (char *)&v22[2 * v12 + 3];
  v15 = (char *)lpMem + *((int *)lpMem + 4) + 12;
  if ( v12 > 0 )
  {
    v16 = v22 + 3;
    do
    {
      *v16 = *(_DWORD *)((char *)v16 + lpMem - (FastRegion::Internal::CRgnData *)v22);
      v16 += 2;
      v17 = v13++;
      v22[2 * v17 + 4] = (_DWORD)lpMem
                       + 8 * v17
                       + 4 * ((v14 - v15) >> 2)
                       + *((_DWORD *)lpMem + 2 * v17 + 4)
                       - ((_DWORD)v22
                        + 8 * v17);
    }
    while ( v13 < *v22 );
  }
  v18 = (__int64)lpMem + 8 * *(_DWORD *)lpMem + 4;
  v19 = (unsigned __int64)((int)v18 + *(_DWORD *)(v18 + 4) - *((_DWORD *)lpMem + 4) - ((int)lpMem + 12)) >> 2;
  v20 = (int)v19;
  if ( (int)v19 > 0 )
  {
    v21 = v15 - v14;
    do
    {
      *(_DWORD *)v14 = *(_DWORD *)&v14[v21];
      v14 += 4;
      --v20;
    }
    while ( v20 );
  }
  v9 = 0;
LABEL_15:
  if ( v29 != (_BYTE *)lpMem )
  {
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
  }
  if ( v9 < 0 )
LABEL_24:
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1B7,
      (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\Region.h",
      (const char *)(unsigned int)v9,
      v27);
}
