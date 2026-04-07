/*
 * XREFs of ?OnEndTransitionRequest@CAnimationScheduler@@QEAAJH@Z @ 0x180069BC0
 * Callers:
 *     ?EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z @ 0x180069B28 (-EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z.c)
 * Callees:
 *     ?OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z @ 0x180069C28 (-OnEndTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEAVCStoryboard@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationScheduler::OnEndTransitionRequest(CAnimationScheduler *this, int a2)
{
  unsigned int v4; // ebx

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = CAnimationScheduler::OnEndTransitionRequestFromStoryboard(this, a2, 0LL);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
