/*
 * XREFs of ?_RemoveSnapshotFromVisualTreeIfExists@CTransitionVisualController@@IEAAXPEAVCTransitionWindowSnapshot@@@Z @ 0x180082CA4
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180025F08 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_DiscardStoredSnapshotByIndex@CTransitionVisualController@@IEAAJH@Z @ 0x18009A49C (-_DiscardStoredSnapshotByIndex@CTransitionVisualController@@IEAAJH@Z.c)
 * Callees:
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18004BCB0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 */

void __fastcall CTransitionVisualController::_RemoveSnapshotFromVisualTreeIfExists(
        CTransitionVisualController *this,
        struct CTransitionWindowSnapshot *a2)
{
  __int64 v3; // rdx
  CContainerVisual *RootVisualForDesktop; // rax

  v3 = *(_QWORD *)(*((_QWORD *)a2 + 30) + 32LL);
  if ( v3 )
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                             *(_QWORD *)(v3 + 136));
    if ( *((CContainerVisual **)a2 + 3) == RootVisualForDesktop )
      CContainerVisual::RemoveChild(RootVisualForDesktop, (struct CVisualProxy **)a2);
  }
}
