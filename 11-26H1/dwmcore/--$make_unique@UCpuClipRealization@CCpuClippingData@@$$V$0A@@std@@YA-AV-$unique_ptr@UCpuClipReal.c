/*
 * XREFs of ??$make_unique@UCpuClipRealization@CCpuClippingData@@$$V$0A@@std@@YA?AV?$unique_ptr@UCpuClipRealization@CCpuClippingData@@U?$default_delete@UCpuClipRealization@CCpuClippingData@@@std@@@0@XZ @ 0x1800E8838
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800A3010 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

_QWORD *__fastcall std::make_unique<CCpuClippingData::CpuClipRealization,,0>(_QWORD *a1)
{
  void *v2; // rax
  void *v3; // rbx

  v2 = operator new(0x78uLL);
  v3 = v2;
  if ( v2 )
    memset_0(v2, 0, 0x78uLL);
  else
    v3 = 0LL;
  *a1 = v3;
  return a1;
}
