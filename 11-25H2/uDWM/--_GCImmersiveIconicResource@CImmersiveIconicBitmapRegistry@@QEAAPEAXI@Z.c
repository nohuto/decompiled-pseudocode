/*
 * XREFs of ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x1800B7E30
 * Callers:
 *     ?WindowDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18001B688 (-WindowDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_ClearBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAUHWND__@@@Z @ 0x18001B830 (-_ClearBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAUHWND__@@@Z.c)
 *     ?WindowCanHaveIconicBitmapChanged@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z @ 0x18001D50C (-WindowCanHaveIconicBitmapChanged@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z.c)
 *     ??1CImmersiveIconicBitmapRegistry@@UEAA@XZ @ 0x1800B7D7C (--1CImmersiveIconicBitmapRegistry@@UEAA@XZ.c)
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800B864C (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA@XZ @ 0x1800B7DE0 (--1CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA@XZ.c)
 */

CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *__fastcall CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(
        CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *this)
{
  const struct std::nothrow_t *v2; // rdx

  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::~CImmersiveIconicResource(this);
  CDisplayBlackCurtainAnimatedVisual::operator delete(this, v2);
  return this;
}
