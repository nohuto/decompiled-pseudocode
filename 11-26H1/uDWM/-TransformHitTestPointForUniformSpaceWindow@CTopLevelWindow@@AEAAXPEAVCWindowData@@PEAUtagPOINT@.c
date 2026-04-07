/*
 * XREFs of ?TransformHitTestPointForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@PEAUtagPOINT@@@Z @ 0x180016E30
 * Callers:
 *     ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x180016940 (-DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 * Callees:
 *     ?NeedsCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CA_NPEAVCWindowData@@@Z @ 0x180013CC8 (-NeedsCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CA_NPEAVCWindowData@@@Z.c)
 *     ?GetCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CAMPEAVCWindowData@@@Z @ 0x18008DA80 (-GetCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CAMPEAVCWindowData@@@Z.c)
 */

void __fastcall CTopLevelWindow::TransformHitTestPointForUniformSpaceWindow(
        CTopLevelWindow *this,
        struct CWindowData *a2,
        struct tagPOINT *a3)
{
  struct CWindowData *v3; // rcx
  int *v4; // r8
  float CorrectionScaleForUniformSpaceWindow; // xmm4_4
  float v6; // xmm0_4

  if ( (unsigned __int8)CTopLevelWindow::NeedsCorrectionScaleForUniformSpaceWindow(a2) )
  {
    CorrectionScaleForUniformSpaceWindow = CTopLevelWindow::GetCorrectionScaleForUniformSpaceWindow(v3);
    if ( CorrectionScaleForUniformSpaceWindow != 1.0 )
    {
      v6 = (float)v4[1] / CorrectionScaleForUniformSpaceWindow;
      *v4 = (int)((float)((float)*v4 / CorrectionScaleForUniformSpaceWindow) + 0.5);
      v4[1] = (int)(v6 + 0.5);
    }
  }
}
