/*
 * XREFs of ?OnClipChanged@CCpuClippingData@@QEAAXXZ @ 0x18021FC90
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800A3010 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 * Callees:
 *     <none>
 */

void __fastcall CCpuClippingData::OnClipChanged(CCpuClippingData *this)
{
  *((_BYTE *)this + 66) = 1;
}
