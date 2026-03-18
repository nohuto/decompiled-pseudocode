/*
 * XREFs of ?SubgraphHasWindowBackdropInput@CVisual@@QEBA_NXZ @ 0x180185E20
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::SubgraphHasWindowBackdropInput(CVisual *this)
{
  return *((_DWORD *)this + 65) > 0;
}
