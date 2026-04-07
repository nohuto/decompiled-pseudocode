/*
 * XREFs of ?ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z @ 0x1800141D8
 * Callers:
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x180014060 (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x180023778 (-InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?NeedsCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CA_NPEAVCWindowData@@@Z @ 0x180013CC8 (-NeedsCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CA_NPEAVCWindowData@@@Z.c)
 *     ?GetCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CAMPEAVCWindowData@@@Z @ 0x18008DA80 (-GetCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CAMPEAVCWindowData@@@Z.c)
 */

void __fastcall CTopLevelWindow::ApplyCorrectionScaleForUniformSpaceWindow(
        CTopLevelWindow *this,
        struct CWindowData *a2)
{
  struct CWindowData *v2; // rcx
  float CorrectionScaleForUniformSpaceWindow; // xmm0_4
  __int64 v4; // r8

  if ( (unsigned __int8)CTopLevelWindow::NeedsCorrectionScaleForUniformSpaceWindow(a2) )
  {
    CorrectionScaleForUniformSpaceWindow = CTopLevelWindow::GetCorrectionScaleForUniformSpaceWindow(v2);
    CVisual::SetScale(
      *(CVisual **)(v4 + 232),
      CorrectionScaleForUniformSpaceWindow,
      CorrectionScaleForUniformSpaceWindow);
  }
}
