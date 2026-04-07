/*
 * XREFs of ?FindAnimationStoryboard@CAnimationScheduler@@QEAAPEAVCStoryboard@@QEAUHWND__@@HK@Z @ 0x1800A7810
 * Callers:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_95d8fb2efa1b08d320c8654ffeeb34da___ @ 0x180082620 (CTransitionVisualController--ForEachOwnedWindow__lambda_95d8fb2efa1b08d320c8654ffeeb34da___.c)
 * Callees:
 *     ?HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z @ 0x180044DF8 (-HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z.c)
 */

struct CStoryboard *__fastcall CAnimationScheduler::FindAnimationStoryboard(CAnimationScheduler *this, HWND a2)
{
  __int64 v2; // rbx
  unsigned int i; // edi
  CStoryboard *v6; // rcx

  v2 = 0LL;
  for ( i = 0; i < *((_DWORD *)this + 10); ++i )
  {
    v6 = *(CStoryboard **)(*((_QWORD *)this + 2) + 8LL * i);
    if ( *((_DWORD *)v6 + 6) != 4 && (!a2 || CStoryboard::HasAnimationComponent(v6, a2, 0)) )
      return v6;
  }
  return (struct CStoryboard *)v2;
}
