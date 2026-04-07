/*
 * XREFs of ?GetCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CAMPEAVCWindowData@@@Z @ 0x18008DA80
 * Callers:
 *     ?ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z @ 0x1800141D8 (-ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?TransformHitTestPointForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@PEAUtagPOINT@@@Z @ 0x180016E30 (-TransformHitTestPointForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@PEAUtagPOINT@.c)
 * Callees:
 *     <none>
 */

float __fastcall CTopLevelWindow::GetCorrectionScaleForUniformSpaceWindow(struct CWindowData *a1)
{
  int v1; // edx
  int v2; // eax
  float result; // xmm0_4

  v1 = *((_DWORD *)a1 + 87);
  v2 = *((_DWORD *)a1 + 86);
  result = FLOAT_1_0;
  if ( v2 != v1 )
    return (float)v2 / (float)v1;
  return result;
}
