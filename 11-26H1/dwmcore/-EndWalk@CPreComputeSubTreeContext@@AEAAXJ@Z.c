/*
 * XREFs of ?EndWalk@CPreComputeSubTreeContext@@AEAAXJ@Z @ 0x18016F1F0
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x18008D838 (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A01C4 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?EndPreCompute@CVisualTree@@QEAAXJ@Z @ 0x18008D260 (-EndPreCompute@CVisualTree@@QEAAXJ@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x18009FD9C (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ @ 0x18016F230 (-CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ.c)
 */

void __fastcall CPreComputeSubTreeContext::EndWalk(CVisualTree **this, int a2)
{
  CVisualTree::EndPreCompute(this[41], a2);
  CBspPreComputeHelper::CleanupAfterWalking((CBspPreComputeHelper *)this);
  if ( *((_BYTE *)this + 344) )
  {
    CThreadContext::UnregisterGraphWalkRoot();
    *((_BYTE *)this + 344) = 0;
  }
}
