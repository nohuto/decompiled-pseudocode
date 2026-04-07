/*
 * XREFs of ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x18001579C
 * Callers:
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180016C80 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCContainerVisual@@@Z @ 0x180028CA4 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCContainerVisual@@@Z.c)
 * Callees:
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x1800091B0 (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180015874 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800158D0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z @ 0x180015914 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180015B04 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowList::MoveTransitionAndTouchVisualToFront(CWindowList *this)
{
  int v2; // esi
  CAnimationEngine *v3; // rax
  CAnimationEngine *v4; // rdi
  __int64 v5; // rbx
  CVisual *v6; // rcx
  CVisual *OverlayRootVisualForDesktop; // rax
  CVisual *v8; // rbx

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
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 8) + 88LL))(*(_QWORD *)(v5 + 8));
          if ( v2 >= 0 )
          {
            OverlayRootVisualForDesktop = CWindowList::GetOverlayRootVisualForDesktop(this, *(_QWORD *)(v5 + 96), 0);
            v8 = OverlayRootVisualForDesktop;
            if ( OverlayRootVisualForDesktop )
            {
              CVisual::MoveToFront(OverlayRootVisualForDesktop, 0);
              (*(void (__fastcall **)(CVisual *))(*(_QWORD *)v8 + 88LL))(v8);
            }
          }
        }
      }
    }
    CAnimationEngine::Release(v4);
  }
  return (unsigned int)v2;
}
