/*
 * XREFs of ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x180013DA4
 * Callers:
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x18001E590 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCContainerVisual@@@Z @ 0x18007FDD4 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCContainerVisual@@@Z.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJ_K@Z @ 0x1800DFC1C (-BringDesktopToFront@CWindowList@@QEAAJ_K@Z.c)
 * Callees:
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z @ 0x180013990 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180013B20 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180013B64 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180013F60 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x18001D650 (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 */

__int64 __fastcall CWindowList::MoveTransitionAndTouchVisualToFront(CWindowList *this)
{
  int v2; // esi
  CAnimationEngine *v3; // rax
  CAnimationEngine *v4; // rbx
  __int64 v5; // rdi
  CVisual *v6; // rcx
  CVisual *OverlayRootVisualForDesktop; // rax
  CVisual *v8; // rdi

  v2 = 0;
  v3 = CDesktopManager::AcquireAnimationEngine();
  v4 = v3;
  if ( v3 )
  {
    if ( !CAnimationEngine::IsIdle(v3) )
    {
      v5 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
      if ( v5 )
      {
        v6 = *(CVisual **)(v5 + 8);
        if ( v6 )
        {
          v2 = CVisual::MoveToFront(v6, 0);
          CVisual::SetOpacity(*(CVisual **)(v5 + 8), 1.0);
          if ( v2 >= 0 )
          {
            OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(this, *(_QWORD *)(v5 + 96), 0);
            v8 = OverlayRootVisualForDesktop;
            if ( OverlayRootVisualForDesktop )
            {
              CVisual::MoveToFront(OverlayRootVisualForDesktop, 0);
              CVisual::SetOpacity(v8, 1.0);
            }
          }
        }
      }
    }
    CAnimationEngine::Release(v4);
  }
  return (unsigned int)v2;
}
