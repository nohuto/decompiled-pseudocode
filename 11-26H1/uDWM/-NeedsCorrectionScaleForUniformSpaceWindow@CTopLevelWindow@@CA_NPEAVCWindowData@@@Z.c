/*
 * XREFs of ?NeedsCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CA_NPEAVCWindowData@@@Z @ 0x180013CC8
 * Callers:
 *     ?ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z @ 0x1800141D8 (-ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?TransformHitTestPointForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@PEAUtagPOINT@@@Z @ 0x180016E30 (-TransformHitTestPointForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@PEAUtagPOINT@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTopLevelWindow::NeedsCorrectionScaleForUniformSpaceWindow(struct CWindowData *a1)
{
  return *((_DWORD *)a1 + 93) & 1;
}
