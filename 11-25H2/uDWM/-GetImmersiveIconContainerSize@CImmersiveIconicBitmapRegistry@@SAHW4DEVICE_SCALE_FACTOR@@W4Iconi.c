/*
 * XREFs of ?GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4IconicRepresentationType@@@Z @ 0x1800B820C
 * Callers:
 *     ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@W4IconicRepresentationType@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1800B80F8 (-GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA_ea_1800B80F8.c)
 *     ?_RequestBitmap@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource@1@W4IconicRepresentationType@@W4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800B8904 (-_RequestBitmap@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource@1@W4IconicRepr.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800B8C50 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x1800B8F54 (-SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?_GetImmersiveSize@CImmersiveIconicBitmapRegistry@@CAHW4DEVICE_SCALE_FACTOR@@H@Z @ 0x1800B8784 (-_GetImmersiveSize@CImmersiveIconicBitmapRegistry@@CAHW4DEVICE_SCALE_FACTOR@@H@Z.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(enum DEVICE_SCALE_FACTOR a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx

  v2 = a2 - 2;
  if ( !v2 )
    goto LABEL_6;
  v3 = v2 - 1;
  if ( !v3 )
  {
    v4 = 310;
    return (unsigned int)CImmersiveIconicBitmapRegistry::_GetImmersiveSize(a1, v4) + 2;
  }
  if ( v3 != 1 )
  {
LABEL_6:
    v4 = 30;
    return (unsigned int)CImmersiveIconicBitmapRegistry::_GetImmersiveSize(a1, v4) + 2;
  }
  v4 = 620;
  return (unsigned int)CImmersiveIconicBitmapRegistry::_GetImmersiveSize(a1, v4) + 2;
}
