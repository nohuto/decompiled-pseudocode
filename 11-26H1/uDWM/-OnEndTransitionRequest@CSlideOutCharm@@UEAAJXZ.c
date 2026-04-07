/*
 * XREFs of ?OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ @ 0x1800C2500
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x180031F90 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?AbandonTransition@CAnimationScheduler@@QEAAJH@Z @ 0x18009A104 (-AbandonTransition@CAnimationScheduler@@QEAAJH@Z.c)
 *     ?FindAnimatingTarget@CAnimationScheduler@@QEAAPEAVCAnimationComponent@@HW4DWMTRANSITION_TARGET@@@Z @ 0x18009A164 (-FindAnimatingTarget@CAnimationScheduler@@QEAAPEAVCAnimationComponent@@HW4DWMTRANSITION_TARGET@@.c)
 *     ?GhostTransitionTargets@CAnimationScheduler@@QEAAXHW4DWMTRANSITION_TARGET@@@Z @ 0x18009A28C (-GhostTransitionTargets@CAnimationScheduler@@QEAAXHW4DWMTRANSITION_TARGET@@@Z.c)
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
