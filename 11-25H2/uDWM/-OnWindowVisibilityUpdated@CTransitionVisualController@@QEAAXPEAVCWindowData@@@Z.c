/*
 * XREFs of ?OnWindowVisibilityUpdated@CTransitionVisualController@@QEAAXPEAVCWindowData@@@Z @ 0x180018A20
 * Callers:
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x18001A208 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ @ 0x180016C40 (-GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ.c)
 */

void __fastcall CTransitionVisualController::OnWindowVisibilityUpdated(
        CTransitionVisualController *this,
        struct CWindowData *a2)
{
  CTransitionVisualController *v2; // r10

  if ( *((_DWORD *)a2 + 32) != 1
    && (int)CAnimationScheduler::GetActiveStoryboardCount(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance
                                                          + 23)) > 0 )
  {
    CTransitionVisualController::_SetupHighZOrderStaticWindows(v2);
  }
}
