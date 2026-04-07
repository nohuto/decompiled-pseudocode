/*
 * XREFs of ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x18001B7FC
 * Callers:
 *     ?WindowDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18001B688 (-WindowDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_ClearBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAUHWND__@@@Z @ 0x18001B830 (-_ClearBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAUHWND__@@@Z.c)
 *     ?WindowCanHaveIconicBitmapChanged@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z @ 0x18001D50C (-WindowCanHaveIconicBitmapChanged@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x1800951FC (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 *     ?IconicRepresentationDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x1800B8248 (-IconicRepresentationDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@3@Z @ 0x1800B8324 (-RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@H.c)
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800B864C (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800B8C50 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 * Callees:
 *     <none>
 */

struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *__fastcall CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(
        CImmersiveIconicBitmapRegistry *this,
        HWND a2)
{
  __int64 v2; // r10
  unsigned int i; // r9d
  __int64 v5; // rax

  v2 = 0LL;
  for ( i = 0; i < *((_DWORD *)this + 10); ++i )
  {
    v5 = *((_QWORD *)this + 2);
    if ( **(HWND **)(v5 + 8LL * i) == a2 )
      return *(struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource **)(v5 + 8LL * i);
  }
  return (struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *)v2;
}
