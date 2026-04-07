/*
 * XREFs of ?GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSnapshot@@@Z @ 0x180032A64
 * Callers:
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x180014E80 (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 *     ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x180028C4C (-Initialize@CSecondaryWindowRepresentation@@IEAAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUIS.c)
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x180031018 (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18003ADE0 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18006B854 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?ResizeToSnapshot@CStoryboard@@SAXPEAUHWND__@@AEBUtagRECT@@PEAU3@@Z @ 0x18008B550 (-ResizeToSnapshot@CStoryboard@@SAXPEAUHWND__@@AEBUtagRECT@@PEAU3@@Z.c)
 * Callees:
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180032A84 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::GetStoredSnapshotNoRef(
        CTransitionVisualController *this,
        HWND a2,
        struct CTransitionWindowSnapshot **a3)
{
  int SnapshotIndex; // eax
  CTransitionVisualController *v4; // rcx
  struct CTransitionWindowSnapshot **v5; // r11

  SnapshotIndex = CTransitionVisualController::_GetSnapshotIndex(this, a2);
  return CTransitionVisualController::GetStoredSnapshotNoRefByIndex(v4, SnapshotIndex, v5);
}
