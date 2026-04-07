/*
 * XREFs of ?HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z @ 0x180044DF8
 * Callers:
 *     ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x180044D14 (-_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z.c)
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x18006BCC4 (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 *     ?FindAnimationStoryboard@CAnimationScheduler@@QEAAPEAVCStoryboard@@QEAUHWND__@@HK@Z @ 0x1800A7810 (-FindAnimationStoryboard@CAnimationScheduler@@QEAAPEAVCStoryboard@@QEAUHWND__@@HK@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CStoryboard::HasAnimationComponent(CStoryboard *this, HWND a2, int a3)
{
  char v3; // r10
  unsigned int i; // r9d
  __int64 v5; // rax

  v3 = 0;
  for ( i = 0; i < *((_DWORD *)this + 30); ++i )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 12) + 8LL * i);
    if ( a2 == *(HWND *)(v5 + 16) && (a3 & *(_DWORD *)(v5 + 24)) == a3 )
      return 1;
  }
  return v3;
}
