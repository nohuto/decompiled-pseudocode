/*
 * XREFs of ?OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ @ 0x1800C84F0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x180069860 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?AbandonTransition@CAnimationScheduler@@QEAAJH@Z @ 0x1800A7744 (-AbandonTransition@CAnimationScheduler@@QEAAJH@Z.c)
 *     ?FindAnimatingTarget@CAnimationScheduler@@QEAAPEAVCAnimationComponent@@HW4DWMTRANSITION_TARGET@@@Z @ 0x1800A77A4 (-FindAnimatingTarget@CAnimationScheduler@@QEAAPEAVCAnimationComponent@@HW4DWMTRANSITION_TARGET@@.c)
 *     ?GhostTransitionTargets@CAnimationScheduler@@QEAAXHW4DWMTRANSITION_TARGET@@@Z @ 0x1800A8608 (-GhostTransitionTargets@CAnimationScheduler@@QEAAXHW4DWMTRANSITION_TARGET@@@Z.c)
 */

__int64 __fastcall CSlideOutCharm::OnEndTransitionRequest(CStoryboard **this)
{
  CStoryboard **v1; // rbx

  v1 = this;
  this[17] = CAnimationScheduler::FindAnimatingTarget(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23));
  LODWORD(v1) = CStoryboard::OnEndTransitionRequest(v1);
  CAnimationScheduler::AbandonTransition(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23), 5);
  CAnimationScheduler::GhostTransitionTargets(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23));
  return (unsigned int)v1;
}
