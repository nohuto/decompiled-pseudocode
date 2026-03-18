/*
 * XREFs of ??0CExternalLayer@@IEAA@AEBUD2D_POINTANDSIZE_L@@PEAVIRenderTargetBitmap@@@Z @ 0x1800F928C
 * Callers:
 *     ?Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBUMilColorTransform@@PEAPEAV1@@Z @ 0x1800C84F8 (-Create@CColorTransformLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBUMilColorTransfor.c)
 *     ??0CResampleLayer@@AEAA@AEBUD2D_POINTANDSIZE_L@@0MMW4Enum@CompositionResampleMode@@PEAVIRenderTargetBitmap@@2@Z @ 0x1800F88F4 (--0CResampleLayer@@AEAA@AEBUD2D_POINTANDSIZE_L@@0MMW4Enum@CompositionResampleMode@@PEAVIRenderTa.c)
 *     ??0CTreeEffectLayer@@AEAA@AEBUD2D_POINTANDSIZE_L@@AEBUD2D_POINTANDSIZE_F@@PEAVIRenderTargetBitmap@@PEAVCEffectBrush@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800F91F4 (--0CTreeEffectLayer@@AEAA@AEBUD2D_POINTANDSIZE_L@@AEBUD2D_POINTANDSIZE_F@@PEAVIRenderTargetBitma.c)
 *     ?Create@CColorSpaceLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAV1@@Z @ 0x18024FD1C (-Create@CColorSpaceLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@W4DXGI_COLOR_SPACE_TYPE@.c)
 *     ?Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCFilterEffect@@PEBVCVisual@@AEBUD2D_POINTANDSIZE_F@@PEAPEAV1@@Z @ 0x18025041C (-Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCFilterEffect@@PEB.c)
 *     ?Create@CSuperSampleLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x18025069C (-Create@CSuperSampleLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBV-$TMilRect_@MUD2D_R.c)
 *     ?Create@CGammaBlendLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAPEAV1@@Z @ 0x180250EF8 (-Create@CGammaBlendLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CExternalLayer *__fastcall CExternalLayer::CExternalLayer(
        CExternalLayer *this,
        const struct D2D_POINTANDSIZE_L *a2,
        struct IRenderTargetBitmap *a3)
{
  __int128 v5; // xmm0
  CExternalLayer *result; // rax

  *(_QWORD *)this = &CExternalLayer::`vftable';
  *((_QWORD *)this + 1) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)a3 + 8LL))(a3);
  v5 = *(_OWORD *)a2;
  *((_DWORD *)this + 8) = 0;
  result = this;
  *((_QWORD *)this + 5) = 0LL;
  *((_OWORD *)this + 1) = v5;
  *(_QWORD *)((char *)this + 108) = 1065353216LL;
  *((_QWORD *)this + 6) = 1065353216LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)((char *)this + 68) = 1065353216LL;
  *(_QWORD *)((char *)this + 76) = 0LL;
  *((_DWORD *)this + 21) = 0;
  *((_QWORD *)this + 11) = 1065353216LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_BYTE *)this + 113) &= 0xE9u;
  *((_BYTE *)this + 113) |= 0x29u;
  *((_BYTE *)this + 112) = -86;
  return result;
}
