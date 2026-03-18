/*
 * XREFs of ?IsBackdropWalk@CDrawingContext@@AEBA_NXZ @ 0x180170510
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDrawingContext::IsBackdropWalk(CDrawingContext *this)
{
  return *((_QWORD *)this + 24) != 0LL;
}
