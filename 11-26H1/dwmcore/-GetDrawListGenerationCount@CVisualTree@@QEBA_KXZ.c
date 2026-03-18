/*
 * XREFs of ?GetDrawListGenerationCount@CVisualTree@@QEBA_KXZ @ 0x18021FC80
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800A3010 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CVisualTree::GetDrawListGenerationCount(CVisualTree *this)
{
  return *((_QWORD *)this + 325);
}
