/*
 * XREFs of ?_GetImmersiveSize@CImmersiveIconicBitmapRegistry@@CAHW4DEVICE_SCALE_FACTOR@@H@Z @ 0x1800B8784
 * Callers:
 *     ?GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4IconicRepresentationType@@@Z @ 0x1800B820C (-GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4Iconi.c)
 * Callees:
 *     <none>
 */

int __fastcall CImmersiveIconicBitmapRegistry::_GetImmersiveSize(int a1, int a2)
{
  return MulDiv(a2, a1, 100);
}
