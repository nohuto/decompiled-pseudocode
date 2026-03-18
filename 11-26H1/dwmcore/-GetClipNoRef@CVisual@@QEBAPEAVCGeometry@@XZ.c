/*
 * XREFs of ?GetClipNoRef@CVisual@@QEBAPEAVCGeometry@@XZ @ 0x18021FC40
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800A3010 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 * Callees:
 *     <none>
 */

struct CGeometry *__fastcall CVisual::GetClipNoRef(CVisual *this)
{
  return (struct CGeometry *)*((_QWORD *)this + 30);
}
