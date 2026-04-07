/*
 * XREFs of ?_Get100ScaleSize@CImmersiveIconicBitmapRegistry@@CAHW4DEVICE_SCALE_FACTOR@@H@Z @ 0x1800B8764
 * Callers:
 *     ?GetIconicRepresentationTypeFromSize@CImmersiveIconicBitmapRegistry@@QEAA?AW4IconicRepresentationType@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x1800B81D4 (-GetIconicRepresentationTypeFromSize@CImmersiveIconicBitmapRegistry@@QEAA-AW4IconicRepresentatio.c)
 * Callees:
 *     <none>
 */

int __fastcall CImmersiveIconicBitmapRegistry::_Get100ScaleSize(int a1, int a2)
{
  return MulDiv(a2, 100, a1);
}
