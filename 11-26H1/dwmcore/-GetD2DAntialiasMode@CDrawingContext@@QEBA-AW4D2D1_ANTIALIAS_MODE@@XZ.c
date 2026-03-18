/*
 * XREFs of ?GetD2DAntialiasMode@CDrawingContext@@QEBA?AW4D2D1_ANTIALIAS_MODE@@XZ @ 0x180176760
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CDrawingContext::GetD2DAntialiasMode(CDrawingContext *this)
{
  return *((_DWORD *)this + 59) != 0;
}
