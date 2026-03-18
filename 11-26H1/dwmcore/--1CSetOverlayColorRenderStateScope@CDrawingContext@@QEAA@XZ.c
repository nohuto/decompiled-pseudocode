/*
 * XREFs of ??1CSetOverlayColorRenderStateScope@CDrawingContext@@QEAA@XZ @ 0x1801BE62C
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180182C78 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV-$TMilRect_@HUtagRECT@@UMil3DRect.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawingContext::CSetOverlayColorRenderStateScope::~CSetOverlayColorRenderStateScope(
        CDrawingContext::CSetOverlayColorRenderStateScope *this)
{
  if ( *(_QWORD *)this )
    --*(_DWORD *)(*(_QWORD *)this + 644LL);
}
