/*
 * XREFs of ?OnEndTransitionRequest@CDialogSwitch@@UEAAJXZ @ 0x1800C2260
 * Callers:
 *     <none>
 * Callees:
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x180031F90 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?AbandonTransition@CAnimationScheduler@@QEAAJH@Z @ 0x18009A104 (-AbandonTransition@CAnimationScheduler@@QEAAJH@Z.c)
 */

__int64 __fastcall CDialogSwitch::OnEndTransitionRequest(CStoryboard **this)
{
  unsigned int v1; // ebx

  v1 = CStoryboard::OnEndTransitionRequest(this);
  CAnimationScheduler::AbandonTransition(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23), 18);
  return v1;
}
