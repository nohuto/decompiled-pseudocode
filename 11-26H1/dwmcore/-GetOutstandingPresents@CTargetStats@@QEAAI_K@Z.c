/*
 * XREFs of ?GetOutstandingPresents@CTargetStats@@QEAAI_K@Z @ 0x18016D010
 * Callers:
 *     ?GetOutstandingPresentCount@CDDisplayRenderTarget@@UEBAI_K@Z @ 0x180247730 (-GetOutstandingPresentCount@CDDisplayRenderTarget@@UEBAI_K@Z.c)
 *     ?GetOutstandingPresentCount@CLegacyRenderTarget@@UEBAI_K@Z @ 0x180247750 (-GetOutstandingPresentCount@CLegacyRenderTarget@@UEBAI_K@Z.c)
 *     ?GetSyncLockCount@CLegacyRenderTarget@@UEBAI_KI@Z @ 0x180252F30 (-GetSyncLockCount@CLegacyRenderTarget@@UEBAI_KI@Z.c)
 *     ?GetSyncLockCount@CDDisplayRenderTarget@@UEBAI_KI@Z @ 0x180253EC0 (-GetSyncLockCount@CDDisplayRenderTarget@@UEBAI_KI@Z.c)
 * Callees:
 *     ?Update@CTargetStats@@IEAAX_K@Z @ 0x18016D050 (-Update@CTargetStats@@IEAAX_K@Z.c)
 */

__int64 __fastcall CTargetStats::GetOutstandingPresents(CTargetStats *this, unsigned __int64 a2)
{
  if ( !*((_QWORD *)this + 4) )
    return 0LL;
  if ( a2 )
    CTargetStats::Update(this, a2);
  return *((unsigned int *)this + 63);
}
