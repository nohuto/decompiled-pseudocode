/*
 * XREFs of ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x18006BCC4
 * Callers:
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18002541C (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ @ 0x180049A80 (-IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ??1CAnimationComponent@@UEAA@XZ @ 0x18006B7EC (--1CAnimationComponent@@UEAA@XZ.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18006BB58 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z @ 0x1800C7B58 (-HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z.c)
 *     _lambda_d312cc5a8d717c33b98f354ae26b71f9_::operator() @ 0x1800D1CE8 (_lambda_d312cc5a8d717c33b98f354ae26b71f9_--operator().c)
 * Callees:
 *     ?HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z @ 0x180044DF8 (-HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z.c)
 */

char __fastcall CAnimationScheduler::IsWindowCurrentlyAnimating(CAnimationScheduler *this, HWND a2, int a3, int a4)
{
  unsigned int v4; // ebp
  char result; // al
  unsigned int v6; // edi
  CStoryboard **v10; // rbx
  CStoryboard *v11; // rcx

  v4 = *((_DWORD *)this + 10);
  result = 0;
  v6 = 0;
  if ( v4 )
  {
    v10 = (CStoryboard **)*((_QWORD *)this + 2);
    do
    {
      v11 = *v10;
      if ( *((_DWORD *)*v10 + 6) != 4 && (a3 == -1 || a3 == *((_DWORD *)v11 + 18)) )
      {
        if ( !a2 )
          return 1;
        result = CStoryboard::HasAnimationComponent(v11, a2, a4);
        if ( result )
          return result;
      }
      ++v6;
      ++v10;
    }
    while ( v6 < v4 );
  }
  return result;
}
