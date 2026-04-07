/*
 * XREFs of ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x1800449FC
 * Callers:
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18003ADE0 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ @ 0x18004362C (-IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18004488C (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     _CTransitionVisualController::_StageCloneWithOwnedWindows_::_2_::_lambda_1_::operator() @ 0x180045B44 (_CTransitionVisualController--_StageCloneWithOwnedWindows_--_2_--_lambda_1_--operator().c)
 *     ??1CAnimationComponent@@UEAA@XZ @ 0x18006D9EC (--1CAnimationComponent@@UEAA@XZ.c)
 *     ?HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z @ 0x1800C1B58 (-HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z.c)
 * Callees:
 *     ?HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z @ 0x1800592E8 (-HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z.c)
 */

char __fastcall CAnimationScheduler::IsWindowCurrentlyAnimating(
        CAnimationScheduler *this,
        HWND a2,
        int a3,
        unsigned int a4)
{
  unsigned int v4; // esi
  bool HasAnimationComponent; // r10
  __int64 v6; // rbx
  __int64 v11; // r14
  CStoryboard *v12; // rcx

  v4 = *((_DWORD *)this + 10);
  HasAnimationComponent = 0;
  v6 = 0LL;
  if ( v4 )
  {
    v11 = *((_QWORD *)this + 2);
    do
    {
      v12 = *(CStoryboard **)(v11 + 8 * v6);
      if ( *((_DWORD *)v12 + 6) != 4 && (a3 == -1 || a3 == *((_DWORD *)v12 + 18)) )
      {
        if ( !a2 )
          return 1;
        HasAnimationComponent = CStoryboard::HasAnimationComponent(v12, a2, a4);
        if ( HasAnimationComponent )
          return HasAnimationComponent;
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < v4 );
  }
  return HasAnimationComponent;
}
