/*
 * XREFs of ?GetOutstandingPresentCount@CDDisplayRenderTarget@@UEBAI_K@Z @ 0x180247730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayRenderTarget::GetOutstandingPresentCount(CDDisplayRenderTarget *this, unsigned __int64 a2)
{
  return CTargetStats::GetOutstandingPresents((CDDisplayRenderTarget *)((char *)this + 31992), a2);
}
