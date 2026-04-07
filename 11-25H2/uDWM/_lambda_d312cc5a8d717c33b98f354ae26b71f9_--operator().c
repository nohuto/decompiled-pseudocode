/*
 * XREFs of _lambda_d312cc5a8d717c33b98f354ae26b71f9_::operator() @ 0x1800D1CE8
 * Callers:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_d312cc5a8d717c33b98f354ae26b71f9___ @ 0x1800D1BCC (CTransitionVisualController--ForEachOwnedWindow__lambda_d312cc5a8d717c33b98f354ae26b71f9___.c)
 * Callees:
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18006BB58 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x18006BCC4 (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 *     ?_StageClone@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_N2PEA_N@Z @ 0x1800997C8 (-_StageClone@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_N2PEA.c)
 */

__int64 __fastcall lambda_d312cc5a8d717c33b98f354ae26b71f9_::operator()(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v5; // r9

  v2 = 0;
  if ( *(_QWORD *)(a2 + 440)
    && CTransitionVisualController::ShouldCloneWindow(*(HWND *)(a2 + 40))
    && (*(_DWORD *)(a2 + 116) & 0x20000000) == 0
    && (*(_BYTE *)(a2 + 672) & 5) == 1
    && (*(_BYTE *)(a2 + 678) & 0x10) == 0
    && (**(_DWORD **)a1 == -1
     || !CAnimationScheduler::IsWindowCurrentlyAnimating(
           *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
           *(HWND *)(a2 + 40),
           **(_DWORD **)a1,
           0)) )
  {
    return (unsigned int)CTransitionVisualController::_StageClone(
                           *(CTransitionVisualController **)(a1 + 8),
                           *(struct tagPOINT **)(a2 + 440),
                           **(struct CContainerVisual ***)(a1 + 16),
                           v5,
                           0,
                           *(bool **)(a1 + 24));
  }
  return v2;
}
