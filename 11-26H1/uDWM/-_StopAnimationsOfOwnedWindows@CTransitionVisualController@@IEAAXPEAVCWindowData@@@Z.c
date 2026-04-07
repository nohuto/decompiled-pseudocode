/*
 * XREFs of ?_StopAnimationsOfOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x180070C64
 * Callers:
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x180070BE4 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_StopAnimationsOfOwnedWindows_::_2_::_lambda_1___ @ 0x18008B2EC (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--_StopAnimationsOfO.c)
 */

void __fastcall CTransitionVisualController::_StopAnimationsOfOwnedWindows(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        __int64 a3)
{
  CTransitionVisualController *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  LOBYTE(v3) = 0;
  LOBYTE(a3) = 1;
  CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::_StopAnimationsOfOwnedWindows_::_2_::_lambda_1___(
    a2,
    &v3,
    a3);
}
