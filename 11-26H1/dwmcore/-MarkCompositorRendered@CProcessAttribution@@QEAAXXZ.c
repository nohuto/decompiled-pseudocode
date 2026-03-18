/*
 * XREFs of ?MarkCompositorRendered@CProcessAttribution@@QEAAXXZ @ 0x18018EA50
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CProcessAttribution::MarkCompositorRendered(CProcessAttribution *this)
{
  ++*((_DWORD *)this + 8);
}
