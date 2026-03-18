/*
 * XREFs of ?GetBackdropBrushNoRef@CWindowBackgroundTreatment@@QEBAPEBVCBackdropBrush@@PEA_N@Z @ 0x1801CFAF4
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

const struct CBackdropBrush *__fastcall CWindowBackgroundTreatment::GetBackdropBrushNoRef(
        CWindowBackgroundTreatment *this,
        bool *a2)
{
  *a2 = *((_BYTE *)this + 302);
  return (const struct CBackdropBrush *)*((_QWORD *)this + 38);
}
