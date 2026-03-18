/*
 * XREFs of ??$?4U?$default_delete@UCpuClipRealization@CCpuClippingData@@@std@@$0A@@?$unique_ptr@UCpuClipRealization@CCpuClippingData@@U?$default_delete@UCpuClipRealization@CCpuClippingData@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AF188
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800A3010 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 * Callees:
 *     ?reset@?$unique_ptr@UCpuClipRealization@CCpuClippingData@@U?$default_delete@UCpuClipRealization@CCpuClippingData@@@std@@@std@@QEAAXPEAUCpuClipRealization@CCpuClippingData@@@Z @ 0x1800ADC50 (-reset@-$unique_ptr@UCpuClipRealization@CCpuClippingData@@U-$default_delete@UCpuClipRealization@.c)
 */

CCpuClippingData::CpuClipRealization **__fastcall std::unique_ptr<CCpuClippingData::CpuClipRealization>::operator=<std::default_delete<CCpuClippingData::CpuClipRealization>,0>(
        CCpuClippingData::CpuClipRealization **a1,
        CCpuClippingData::CpuClipRealization **a2)
{
  CCpuClippingData::CpuClipRealization *v4; // rdx

  v4 = *a2;
  *a2 = 0LL;
  std::unique_ptr<CCpuClippingData::CpuClipRealization>::reset(a1, v4);
  return a1;
}
