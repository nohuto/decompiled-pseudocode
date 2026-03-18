/*
 * XREFs of ?HasNonDefaultEffectInternal@CVisual@@QEBA_NXZ @ 0x180152BA0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::HasNonDefaultEffectInternal(CVisual *this)
{
  return *(_BYTE *)(*((_QWORD *)this + 28) + 3LL) & 1;
}
