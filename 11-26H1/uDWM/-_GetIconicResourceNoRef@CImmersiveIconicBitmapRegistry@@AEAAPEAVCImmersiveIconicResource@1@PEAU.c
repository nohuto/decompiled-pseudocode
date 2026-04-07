/*
 * XREFs of ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x180019D08
 * Callers:
 *     ?_ClearBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAUHWND__@@@Z @ 0x180019CC4 (-_ClearBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAUHWND__@@@Z.c)
 *     ?WindowDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x180019D50 (-WindowDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?WindowCanHaveIconicBitmapChanged@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z @ 0x18004D18C (-WindowCanHaveIconicBitmapChanged@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x1800873F4 (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 *     ?IconicRepresentationDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x1800B7204 (-IconicRepresentationDestroyed@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@3@Z @ 0x1800B72E0 (-RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@H.c)
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800B7630 (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800B7C30 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
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
