/*
 * XREFs of ?IsCloned@CTopLevelWindow@@QEAA_NXZ @ 0x180045CC4
 * Callers:
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_MoveOwnedWindowTreeOffscreen_::_2_::_lambda_1___ @ 0x180032E24 (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--_MoveOwnedWindowTr.c)
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_StageCloneWithOwnedWindows_::_2_::_lambda_1___ @ 0x180045A88 (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--_StageCloneWithOwn.c)
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_StopAnimationsOfOwnedWindows_::_2_::_lambda_1___ @ 0x18008B2EC (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--_StopAnimationsOfO.c)
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::GetClonableOwnedWindowCount_::_2_::_lambda_1___ @ 0x1800CE0AC (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--GetClonableOwnedWi.c)
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::StopTrackingWindowAndRestoreVisual_::_2_::_lambda_1___ @ 0x1800CE16C (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--StopTrackingWindow.c)
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::GetOwnedInclusiveClipRect_::_5_::_lambda_1___ @ 0x1800CE220 (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--GetOwnedInclusiveC.c)
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_RecursivelyRenderOwnedWindows_::_5_::_lambda_1___ @ 0x1800CE338 (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--_RecursivelyRender.c)
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::RestoreWindow_::_26_::_lambda_1___ @ 0x1800CE404 (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--RestoreWindow_--_2.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow::IsCloned(CTopLevelWindow *this)
{
  return (*((_BYTE *)this + 184) & 0x18) != 0;
}
