/*
 * XREFs of ?GetIconicRepresentationTypeFromSize@CImmersiveIconicBitmapRegistry@@QEAA?AW4IconicRepresentationType@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x1800B7190
 * Callers:
 *     ?_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource@1@PEAUHWND__@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@4@Z @ 0x1800B7788 (-_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource.c)
 * Callees:
 *     ?_Get100ScaleSize@CImmersiveIconicBitmapRegistry@@CAHW4DEVICE_SCALE_FACTOR@@H@Z @ 0x1800B7748 (-_Get100ScaleSize@CImmersiveIconicBitmapRegistry@@CAHW4DEVICE_SCALE_FACTOR@@H@Z.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::GetIconicRepresentationTypeFromSize(
        __int64 a1,
        int a2,
        enum DEVICE_SCALE_FACTOR a3)
{
  unsigned int v3; // ebx
  int v4; // eax

  v3 = 2;
  v4 = CImmersiveIconicBitmapRegistry::_Get100ScaleSize(a3, a2);
  if ( v4 >= 320 )
    return (unsigned int)(v4 >= 800) + 3;
  return v3;
}
