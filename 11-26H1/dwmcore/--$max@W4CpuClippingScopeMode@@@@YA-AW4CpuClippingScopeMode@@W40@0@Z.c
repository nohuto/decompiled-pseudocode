/*
 * XREFs of ??$max@W4CpuClippingScopeMode@@@@YA?AW4CpuClippingScopeMode@@W40@0@Z @ 0x18018EF7C
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x1800A3010 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall max<enum CpuClippingScopeMode>(int a1)
{
  if ( a1 <= 2 )
    return 2;
  return (unsigned int)a1;
}
