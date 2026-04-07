/*
 * XREFs of ?StopTrackingWindowAndRestoreVisual@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800CFDB8
 * Callers:
 *     ?_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800C4A84 (-_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::StopTrackingWindowAndRestoreVisual_::_2_::_lambda_1___ @ 0x1800CE16C (CTransitionVisualController--ForEachOwnedWindow__CTransitionVisualController--StopTrackingWindow.c)
 *     ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x1800D01F4 (-_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::StopTrackingWindowAndRestoreVisual(
        CTransitionVisualController *this,
        struct CWindowData *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  CTransitionVisualController *v7; // [rsp+50h] [rbp+18h] BYREF

  v4 = CTransitionVisualController::_RestoreWindowVisual(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      v4,
      0xBCBu,
      0LL);
  }
  else
  {
    v7 = this;
    CTransitionVisualController::ForEachOwnedWindow__CTransitionVisualController::StopTrackingWindowAndRestoreVisual_::_2_::_lambda_1___(
      (__int64)a2,
      (__int64)&v7,
      1);
  }
  return v5;
}
