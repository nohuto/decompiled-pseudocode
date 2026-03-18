/*
 * XREFs of ??1?$unique_ptr@UCpuClipRealization@CCpuClippingData@@U?$default_delete@UCpuClipRealization@CCpuClippingData@@@std@@@std@@QEAA@XZ @ 0x1800ADC20
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800A3010 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 * Callees:
 *     ??1CpuClipRealization@CCpuClippingData@@QEAA@XZ @ 0x1800ADC88 (--1CpuClipRealization@CCpuClippingData@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<CCpuClippingData::CpuClipRealization>::~unique_ptr<CCpuClippingData::CpuClipRealization>(
        CCpuClippingData::CpuClipRealization **a1)
{
  CCpuClippingData::CpuClipRealization *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CCpuClippingData::CpuClipRealization::~CpuClipRealization(*a1);
    operator delete(v1, 0x78uLL);
  }
}
