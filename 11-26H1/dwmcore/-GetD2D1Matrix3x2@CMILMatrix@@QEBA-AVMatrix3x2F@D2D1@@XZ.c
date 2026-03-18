/*
 * XREFs of ?GetD2D1Matrix3x2@CMILMatrix@@QEBA?AVMatrix3x2F@D2D1@@XZ @ 0x180178C20
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800A3010 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CMILMatrix::GetD2D1Matrix3x2(_DWORD *a1, _DWORD *a2)
{
  *a2 = *a1;
  a2[1] = a1[1];
  a2[2] = a1[4];
  a2[3] = a1[5];
  a2[4] = a1[12];
  a2[5] = a1[13];
  return a2;
}
