/*
 * XREFs of ?_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z @ 0x180032DE8
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800324C8 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18006B854 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_MoveOwnedWindowTreeOffscreen_::_2_::_lambda_1___ @ 0x180032E24 (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--_MoveOwnedWindowTr.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18003323C (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 */

void __fastcall CTransitionVisualController::_MoveOwnedWindowTreeOffscreen(struct CTopLevelWindow **a1)
{
  __int64 v2; // r8
  char v3; // [rsp+30h] [rbp+8h] BYREF

  CTransitionVisualController::_MoveWindowOffscreen(a1[55], 1);
  LOBYTE(v2) = 1;
  v3 = 0;
  CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_MoveOwnedWindowTreeOffscreen_::_2_::_lambda_1___(
    a1,
    &v3,
    v2);
}
