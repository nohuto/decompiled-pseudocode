/*
 * XREFs of ?IsDirtyCollectionEnabled@CPreComputeSubTreeContext@@AEBA_NXZ @ 0x180058460
 * Callers:
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180058488 (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPreComputeSubTreeContext::IsDirtyCollectionEnabled(CPreComputeSubTreeContext *this)
{
  return !*((_DWORD *)this + 85) && !*(_BYTE *)(*((_QWORD *)this + 40) + 2324LL);
}
