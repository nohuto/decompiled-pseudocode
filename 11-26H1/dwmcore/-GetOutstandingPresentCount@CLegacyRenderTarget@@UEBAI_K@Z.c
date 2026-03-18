/*
 * XREFs of ?GetOutstandingPresentCount@CLegacyRenderTarget@@UEBAI_K@Z @ 0x180247750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::GetOutstandingPresentCount(CLegacyRenderTarget *this, unsigned __int64 a2)
{
  return CTargetStats::GetOutstandingPresents((CLegacyRenderTarget *)((char *)this + 31968), a2);
}
