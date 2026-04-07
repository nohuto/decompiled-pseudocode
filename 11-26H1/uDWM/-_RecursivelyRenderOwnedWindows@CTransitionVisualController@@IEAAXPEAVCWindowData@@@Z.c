/*
 * XREFs of ?_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x1800D01B4
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18006B854 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?RenderRecursive@CContainerVisual@@UEAAXXZ @ 0x1800853F0 (-RenderRecursive@CContainerVisual@@UEAAXXZ.c)
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_RecursivelyRenderOwnedWindows_::_5_::_lambda_1___ @ 0x1800CE338 (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--_RecursivelyRender.c)
 */

void __fastcall CTransitionVisualController::_RecursivelyRenderOwnedWindows(
        CTransitionVisualController *this,
        struct CWindowData *a2)
{
  CContainerVisual *v2; // rcx
  CTransitionVisualController *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = this;
  v2 = (CContainerVisual *)*((_QWORD *)a2 + 55);
  if ( v2 )
  {
    CContainerVisual::RenderRecursive(v2);
    LOBYTE(v4) = 0;
    CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_RecursivelyRenderOwnedWindows_::_5_::_lambda_1___(
      (__int64)a2,
      (__int64)&v4,
      1);
  }
}
