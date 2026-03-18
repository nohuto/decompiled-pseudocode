/*
 * XREFs of ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A4168
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180182C78 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV-$TMilRect_@HUtagRECT@@UMil3DRect.c)
 * Callees:
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x18000D8A0 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x18001D270 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateDrawListForOverlayColor@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListEntryBuilder@@@Z @ 0x18003DB54 (-GenerateDrawListForOverlayColor@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_RECT_F@@PEBUD.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDrawingContext::RenderOverlayColor(
        struct CDrawingContext *a1,
        const struct _D3DCOLORVALUE *a2,
        const struct D2D_RECT_F *a3,
        const struct D2D_MATRIX_3X2_F *a4)
{
  CDrawListEntryBuilder *v4; // rdi
  int DrawListForOverlayColor; // eax
  unsigned __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  int v10; // eax

  v4 = (struct CDrawingContext *)((char *)a1 + 3440);
  DrawListForOverlayColor = CDrawingContext::GenerateDrawListForOverlayColor(
                              a1,
                              a2,
                              a3,
                              a4,
                              (struct CDrawingContext *)((char *)a1 + 3440));
  v9 = DrawListForOverlayColor;
  if ( DrawListForOverlayColor < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DrawListForOverlayColor, 0x1946u, 0LL);
  }
  else
  {
    v10 = CDrawListEntryBuilder::Render(v4, a1, v7, v8);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x1948u, 0LL);
  }
  CDrawListEntryBuilder::Reset(v4);
  return v9;
}
