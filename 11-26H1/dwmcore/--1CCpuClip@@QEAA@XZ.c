/*
 * XREFs of ??1CCpuClip@@QEAA@XZ @ 0x18018F3E0
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800A3010 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCpuClip::~CCpuClip(CCpuClip *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  if ( *((_BYTE *)this + 24) )
  {
    v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 2);
    if ( v2 )
      (**v2)(v2, 1LL);
  }
  *((_QWORD *)this + 2) = 0LL;
  *((_BYTE *)this + 24) = 0;
}
