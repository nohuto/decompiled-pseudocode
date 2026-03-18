/*
 * XREFs of ?HasNonDefaultWindowBackgroundTreatmentInternal@CVisual@@QEBA_NXZ @ 0x1801601B0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::HasNonDefaultWindowBackgroundTreatmentInternal(CVisual *this)
{
  return (**((_DWORD **)this + 28) & 0x800000) != 0;
}
