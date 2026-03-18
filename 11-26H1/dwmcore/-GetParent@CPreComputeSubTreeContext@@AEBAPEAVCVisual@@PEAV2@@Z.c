/*
 * XREFs of ?GetParent@CPreComputeSubTreeContext@@AEBAPEAVCVisual@@PEAV2@@Z @ 0x180171E90
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A01C4 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall CPreComputeSubTreeContext::GetParent(CPreComputeSubTreeContext *this, struct CVisual *a2)
{
  if ( a2 == *(struct CVisual **)(*((_QWORD *)this + 41) + 72LL) )
    return 0LL;
  else
    return (struct CVisual *)*((_QWORD *)a2 + 11);
}
