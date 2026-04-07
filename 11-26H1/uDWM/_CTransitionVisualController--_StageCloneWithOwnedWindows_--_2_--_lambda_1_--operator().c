/*
 * XREFs of _CTransitionVisualController::_StageCloneWithOwnedWindows_::_2_::_lambda_1_::operator() @ 0x180045B44
 * Callers:
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_StageCloneWithOwnedWindows_::_2_::_lambda_1___ @ 0x180045A88 (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--_StageCloneWithOwn.c)
 * Callees:
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18004488C (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x1800449FC (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 *     ?_StageClone@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_N2PEA_N@Z @ 0x18008D00C (-_StageClone@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_N2PEA.c)
 */

__int64 __fastcall CTransitionVisualController::_StageCloneWithOwnedWindows_::_2_::_lambda_1_::operator()(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // edi
  bool v5; // r9

  v2 = 0;
  if ( *(_QWORD *)(a2 + 440)
    && CTransitionVisualController::ShouldCloneWindow(*(HWND *)(a2 + 40))
    && (*(_DWORD *)(a2 + 116) & 0x20000000) == 0
    && (*(_BYTE *)(a2 + 736) & 5) == 1
    && (*(_BYTE *)(a2 + 742) & 8) == 0
    && (**(_DWORD **)a1 == -1
     || !CAnimationScheduler::IsWindowCurrentlyAnimating(
           *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
           *(HWND *)(a2 + 40),
           **(_DWORD **)a1,
           0)) )
  {
    return (unsigned int)CTransitionVisualController::_StageClone(
                           *(CTransitionVisualController **)(a1 + 8),
                           *(struct CTopLevelWindow **)(a2 + 440),
                           **(struct CContainerVisual ***)(a1 + 16),
                           v5,
                           0,
                           *(bool **)(a1 + 24));
  }
  return v2;
}
