/*
 * XREFs of ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@H@Z @ 0x1800B7010
 * Callers:
 *     ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@W4IconicRepresentationType@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1800B70C4 (-GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA_ea_1800B70C4.c)
 *     ?SetBitmapResource@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800B74C4 (-SetBitmapResource@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCBitmapSour.c)
 * Callees:
 *     <none>
 */

struct CBitmapSource *__fastcall CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetBitmapSourceNoRef(
        CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *this,
        int a2)
{
  __int64 v2; // rdi
  unsigned int i; // esi
  __int64 v6; // rax
  int v7; // ebx
  int v8; // ebx

  v2 = 0LL;
  for ( i = 0; i < *((_DWORD *)this + 8); ++i )
  {
    v6 = *((_QWORD *)this + 1);
    if ( *(_QWORD *)(v6 + 8LL * i) )
    {
      v7 = *(_DWORD *)(*(_QWORD *)(v6 + 8LL * i) + 128LL);
      if ( v7 > MulDiv(a2, 8, 10) )
      {
        v8 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL * i) + 128LL);
        if ( v8 < MulDiv(a2, 12, 10) )
          return *(struct CBitmapSource **)(*((_QWORD *)this + 1) + 8LL * i);
      }
    }
  }
  return (struct CBitmapSource *)v2;
}
