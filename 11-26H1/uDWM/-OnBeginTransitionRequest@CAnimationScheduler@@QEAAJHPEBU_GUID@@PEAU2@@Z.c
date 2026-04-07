/*
 * XREFs of ?OnBeginTransitionRequest@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAU2@@Z @ 0x18002B1B8
 * Callers:
 *     ?StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z @ 0x18002B244 (-StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z.c)
 * Callees:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x18002A5A8 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationScheduler::OnBeginTransitionRequest(
        CAnimationScheduler *this,
        unsigned int a2,
        const struct _GUID *a3,
        struct _GUID *a4)
{
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  LODWORD(a4) = CAnimationScheduler::OnBeginTransitionRequestFromStoryboard(this, a2, a3, 0LL, a4);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)a4;
}
