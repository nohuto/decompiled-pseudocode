/*
 * XREFs of ?NotifyBeginFrame@CRenderPerf@@QEAAXW4Type@IRenderTarget@@@Z @ 0x180236934
 * Callers:
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x1800F0E50 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800D5790 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?reserve_region@?$vector_facade@W4Type@IRenderTarget@@V?$buffer_impl@W4Type@IRenderTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAW4Type@IRenderTarget@@_K0@Z @ 0x180236E58 (-reserve_region@-$vector_facade@W4Type@IRenderTarget@@V-$buffer_impl@W4Type@IRenderTarget@@$03$0.c)
 */

CComposition *__fastcall CRenderPerf::NotifyBeginFrame(__int64 a1, int a2)
{
  CComposition *result; // rax
  LARGE_INTEGER *v5; // rcx
  LARGE_INTEGER *v6; // rdi
  LARGE_INTEGER v7; // r8

  result = GetCurrentFrameId();
  if ( (CComposition *)v5->QuadPart == result )
  {
    v6 = v5 + 1;
    v7 = v5[1];
    if ( v5[2].QuadPart == v7.QuadPart )
    {
      QueryPerformanceCounter(v5 + 16);
      v7 = *v6;
    }
    if ( a2 == 5 )
    {
      ++*(_DWORD *)(a1 + 204);
    }
    else if ( a2 == 6 )
    {
      ++*(_DWORD *)(a1 + 208);
    }
    result = (CComposition *)detail::vector_facade<enum IRenderTarget::Type,detail::buffer_impl<enum IRenderTarget::Type,4,1,detail::liberal_expansion_policy>>::reserve_region(
                               v6,
                               (v6[1].QuadPart - v7.QuadPart) >> 2);
    *(_DWORD *)result = a2;
  }
  return result;
}
