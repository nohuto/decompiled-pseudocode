/*
 * XREFs of CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_StopAnimationsOfOwnedWindows_::_2_::_lambda_1___ @ 0x18008B2EC
 * Callers:
 *     ?_StopAnimationsOfOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x180070C64 (-_StopAnimationsOfOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_StopAnimationsOfOwnedWindows_::_2_::_lambda_1___ @ 0x18008B2EC (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--_StopAnimationsOfO.c)
 * Callees:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180013644 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18003CDE4 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?IsCloned@CTopLevelWindow@@QEAA_NXZ @ 0x180045CC4 (-IsCloned@CTopLevelWindow@@QEAA_NXZ.c)
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_StopAnimationsOfOwnedWindows_::_2_::_lambda_1___ @ 0x18008B2EC (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--_StopAnimationsOfO.c)
 *     ?FindAnimationStoryboard@CAnimationScheduler@@QEAAPEAVCStoryboard@@QEAUHWND__@@HK@Z @ 0x18009A1D0 (-FindAnimationStoryboard@CAnimationScheduler@@QEAAPEAVCStoryboard@@QEAUHWND__@@HK@Z.c)
 */

__int64 __fastcall CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_StopAnimationsOfOwnedWindows_::_2_::_lambda_1___(
        __int64 a1,
        __int64 a2,
        char a3)
{
  signed int v3; // r9d
  CTopLevelWindow *v6; // rcx
  __int64 i; // rdi
  __int64 v8; // rsi
  CTopLevelWindow3D *v9; // rcx
  CStoryboard *AnimationStoryboard; // rax

  v3 = 0;
  if ( !a3 || (*(_DWORD *)(a1 + 744) & 0x10000000) != 0 )
  {
    v6 = *(CTopLevelWindow **)(a1 + 440);
    if ( !v6 || !CTopLevelWindow::IsCloned(v6) )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 632); i = (unsigned int)(i + 1) )
      {
        if ( v3 < 0 )
          break;
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 608) + 8 * i);
        if ( (*(_DWORD *)(v8 + 744) & 0xFFF) == 0xFFF )
        {
          v9 = *(CTopLevelWindow3D **)(v8 + 448);
          if ( v9 )
            CTopLevelWindow3D::StopAnimation(v9);
          if ( *(_QWORD *)(v8 + 40) )
          {
            while ( 1 )
            {
              AnimationStoryboard = CAnimationScheduler::FindAnimationStoryboard(
                                      *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23),
                                      *(HWND *)(v8 + 40),
                                      a3,
                                      v3);
              if ( !AnimationStoryboard )
                break;
              CStoryboard::Abandon(AnimationStoryboard);
            }
          }
          v3 = CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_StopAnimationsOfOwnedWindows_::_2_::_lambda_1___(
                 v8,
                 a2,
                 0LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
