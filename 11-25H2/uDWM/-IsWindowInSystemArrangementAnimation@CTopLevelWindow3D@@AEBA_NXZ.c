/*
 * XREFs of ?IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ @ 0x180049A80
 * Callers:
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180003EAC (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x180049720 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x18006BCC4 (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 */

char __fastcall CTopLevelWindow3D::IsWindowInSystemArrangementAnimation(CTopLevelWindow3D *this)
{
  HWND v1; // rdi
  CAnimationScheduler *v2; // rsi
  char v3; // bl

  v1 = *(HWND *)(*((_QWORD *)this + 36) + 40LL);
  v2 = (CAnimationScheduler *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
  v3 = 0;
  if ( CAnimationScheduler::IsWindowCurrentlyAnimating(v2, v1, 50, 0)
    || CAnimationScheduler::IsWindowCurrentlyAnimating(v2, v1, 67, 0) )
  {
    return 1;
  }
  return v3;
}
