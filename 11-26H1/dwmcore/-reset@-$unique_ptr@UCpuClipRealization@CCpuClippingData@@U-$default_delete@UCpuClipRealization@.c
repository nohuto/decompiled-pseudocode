/*
 * XREFs of ?reset@?$unique_ptr@UCpuClipRealization@CCpuClippingData@@U?$default_delete@UCpuClipRealization@CCpuClippingData@@@std@@@std@@QEAAXPEAUCpuClipRealization@CCpuClippingData@@@Z @ 0x1800ADC50
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800A3010 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ??$?4U?$default_delete@UCpuClipRealization@CCpuClippingData@@@std@@$0A@@?$unique_ptr@UCpuClipRealization@CCpuClippingData@@U?$default_delete@UCpuClipRealization@CCpuClippingData@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AF188 (--$-4U-$default_delete@UCpuClipRealization@CCpuClippingData@@@std@@$0A@@-$unique_ptr@UCpuClipRea.c)
 * Callees:
 *     ??1CpuClipRealization@CCpuClippingData@@QEAA@XZ @ 0x1800ADC88 (--1CpuClipRealization@CCpuClippingData@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<CCpuClippingData::CpuClipRealization>::reset(
        CCpuClippingData::CpuClipRealization **a1,
        CCpuClippingData::CpuClipRealization *a2)
{
  CCpuClippingData::CpuClipRealization *v2; // rbx

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    CCpuClippingData::CpuClipRealization::~CpuClipRealization(v2);
    operator delete(v2, 0x78uLL);
  }
}
