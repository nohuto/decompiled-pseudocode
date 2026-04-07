/*
 * XREFs of ?_StageClone@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_N2PEA_N@Z @ 0x1800997C8
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800033F8 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180025F08 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@HW4StagedBackgroundPolicy@1@@Z @ 0x18008E25C (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContain.c)
 *     _lambda_d312cc5a8d717c33b98f354ae26b71f9_::operator() @ 0x1800D1CE8 (_lambda_d312cc5a8d717c33b98f354ae26b71f9_--operator().c)
 * Callees:
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_NPEAVCVisual@@22PEA_N@Z @ 0x1800829AC (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual.c)
 */

__int64 __fastcall CTransitionVisualController::_StageClone(
        CTransitionVisualController *this,
        struct tagPOINT *a2,
        struct CContainerVisual *a3,
        __int64 a4,
        bool a5,
        bool *a6)
{
  return CTransitionVisualController::_StageCloneRelative(this, a2, a3, 0, 0LL, a5, 1, a6);
}
