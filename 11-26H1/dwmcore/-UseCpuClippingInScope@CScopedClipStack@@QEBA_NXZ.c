/*
 * XREFs of ?UseCpuClippingInScope@CScopedClipStack@@QEBA_NXZ @ 0x180187910
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CScopedClipStack::UseCpuClippingInScope(CScopedClipStack *this)
{
  return *(unsigned __int8 *)(*((_QWORD *)this + 1) - 8LL);
}
