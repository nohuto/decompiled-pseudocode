/*
 * XREFs of ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800AD448
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Draw@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800AC0E0 (-Draw@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x1800CF1A8 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Draw@CRedirectedVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C7C80 (-Draw@CRedirectedVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800111B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x180074F30 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18008AF90 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniq.c)
 *     ??1CSubDrawingContext@@QEAA@XZ @ 0x1800AD644 (--1CSubDrawingContext@@QEAA@XZ.c)
 *     ?DrawVisualTree@CSubDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEBVCOcclusionContext@@@Z @ 0x1800AE0A0 (-DrawVisualTree@CSubDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_R.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?GetSharedOcclusionContext@CDesktopTree@@QEBAPEBVCOcclusionContext@@XZ @ 0x1800EE280 (-GetSharedOcclusionContext@CDesktopTree@@QEBAPEBVCOcclusionContext@@XZ.c)
 *     ?IsRectInOcclusionRegion@COcclusionContext@@QEBA_NAEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180192304 (-IsRectInOcclusionRegion@COcclusionContext@@QEBA_NAEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_P.c)
 *     ??0COcclusionContext@@QEAA@XZ @ 0x180203E84 (--0COcclusionContext@@QEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18020E8A8 (--1COcclusionContext@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::DrawSubVisualTree(__int64 a1, CDesktopTree *a2, unsigned int *a3, CMILMatrix *a4)
{
  double v4; // xmm2_8
  CMILMatrix *TopByReference; // rsi
  __int64 v9; // r13
  COcclusionContext *v10; // rbx
  COcclusionContext *v11; // rax
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // edi
  const struct COcclusionContext *SharedOcclusionContext; // r14
  _QWORD v17[2]; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-29h] BYREF
  __int128 v19; // [rsp+58h] [rbp-19h]
  __int128 v20; // [rsp+68h] [rbp-9h]
  __int64 v21; // [rsp+78h] [rbp+7h]
  __int64 v22; // [rsp+80h] [rbp+Fh]
  __int64 v23; // [rsp+88h] [rbp+17h]
  __int64 v24; // [rsp+90h] [rbp+1Fh]
  int v25; // [rsp+98h] [rbp+27h]
  char v26; // [rsp+A0h] [rbp+2Fh]

  TopByReference = a4;
  v9 = 0LL;
  v10 = 0LL;
  if ( !a4 )
    TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 280));
  if ( CMILMatrix::Is2DAxisAlignedPreserving(TopByReference) )
  {
    if ( !*(_QWORD *)(a1 + 192)
      && (*(unsigned __int8 (__fastcall **)(CDesktopTree *))(*(_QWORD *)a2 + 192LL))(a2)
      && (SharedOcclusionContext = CDesktopTree::GetSharedOcclusionContext(a2)) != 0LL
      && (PixelAlign((int *)v17, a3, v4),
          (unsigned __int8)COcclusionContext::IsRectInOcclusionRegion(SharedOcclusionContext, v17)) )
    {
      v9 = (__int64)SharedOcclusionContext;
    }
    else
    {
      v11 = (COcclusionContext *)operator new(0x578uLL);
      if ( v11 )
        v10 = COcclusionContext::COcclusionContext(v11);
      else
        v10 = 0LL;
      v12 = *(_QWORD *)(a1 + 192);
      if ( v12 )
        *((_QWORD *)v10 + 139) = v12;
      v17[0] = 1LL;
      v17[1] = a3;
      if ( !a3 )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      if ( (*(int (__fastcall **)(CDesktopTree *, _QWORD *, COcclusionContext *))(*(_QWORD *)a2 + 208LL))(a2, v17, v10) >= 0 )
        v9 = (__int64)v10;
    }
  }
  v18[0] = a1;
  v19 = 0LL;
  v20 = 0LL;
  v18[1] = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  v25 = 16843008;
  v26 = 0;
  v13 = CSubDrawingContext::DrawVisualTree((CSubDrawingContext *)v18, a2, v9);
  v14 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0xBA0u, 0LL);
  CSubDrawingContext::~CSubDrawingContext((CSubDrawingContext *)v18);
  if ( v10 )
  {
    COcclusionContext::~COcclusionContext(v10);
    operator delete(v10, 0x578uLL);
  }
  return v14;
}
