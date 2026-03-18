/*
 * XREFs of ?FlushOcclusionRects@COcclusionContext@@QEAAXXZ @ 0x1802037B0
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800DF2D0 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall COcclusionContext::FlushOcclusionRects(COcclusionContext *this)
{
  if ( *((_BYTE *)this + 1130) )
  {
    *((_DWORD *)this + 317) += 2;
    *((_BYTE *)this + 1130) = 0;
  }
}
