/*
 * XREFs of ?AddRef@CProjectedShadowReceiver@@UEAAKXZ @ 0x1801842A0
 * Callers:
 *     ?AddRef@CD3DDevice@@WBA@EAAKXZ @ 0x1802249D0 (-AddRef@CD3DDevice@@WBA@EAAKXZ.c)
 *     ?AddRef@CDDisplaySwapChain@@WBI@EAAKXZ @ 0x1802249E0 (-AddRef@CDDisplaySwapChain@@WBI@EAAKXZ.c)
 *     ?AddRef@CDDisplaySwapChain@@WCA@EAAKXZ @ 0x1802249F0 (-AddRef@CDDisplaySwapChain@@WCA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WHI@EAAKXZ @ 0x180224A00 (-AddRef@CCompressedSourceBitmap@@WHI@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@WIA@EAAKXZ @ 0x180224FF0 (-AddRef@CSystemMemoryBitmap@@WIA@EAAKXZ.c)
 *     ?AddRef@CDeviceTextureTarget@@WEI@EAAKXZ @ 0x18022A760 (-AddRef@CDeviceTextureTarget@@WEI@EAAKXZ.c)
 *     ?AddRef@CCompositionSurfaceBitmap@@WFA@EAAKXZ @ 0x1802470A0 (-AddRef@CCompositionSurfaceBitmap@@WFA@EAAKXZ.c)
 *     ?AddRef@CWICBitmapRealization@@WFI@EAAKXZ @ 0x1802470B0 (-AddRef@CWICBitmapRealization@@WFI@EAAKXZ.c)
 *     ?AddRef@CDeviceTextureTarget@@WGA@EAAKXZ @ 0x1802470C0 (-AddRef@CDeviceTextureTarget@@WGA@EAAKXZ.c)
 *     ?AddRef@CSurfaceBrush@@WKA@EAAKXZ @ 0x1802470D0 (-AddRef@CSurfaceBrush@@WKA@EAAKXZ.c)
 *     ?AddRef@CLegacyRenderTarget@@WKI@EAAKXZ @ 0x1802470F0 (-AddRef@CLegacyRenderTarget@@WKI@EAAKXZ.c)
 *     ?AddRef@CDDisplayRenderTarget@@WLA@EAAKXZ @ 0x180247110 (-AddRef@CDDisplayRenderTarget@@WLA@EAAKXZ.c)
 *     ?AddRef@CGenericInk@@WJA@EAAKXZ @ 0x180247130 (-AddRef@CGenericInk@@WJA@EAAKXZ.c)
 *     ?AddRef@CIndirectSwapchainRenderTarget@@WJFA@EAAKXZ @ 0x180247150 (-AddRef@CIndirectSwapchainRenderTarget@@WJFA@EAAKXZ.c)
 *     ?AddRef@CGdiSpriteBitmap@@WGI@EAAKXZ @ 0x180265AE0 (-AddRef@CGdiSpriteBitmap@@WGI@EAAKXZ.c)
 *     ?AddRef@CLegacyStereoSwapChain@@WBAA@EAAKXZ @ 0x18029A770 (-AddRef@CLegacyStereoSwapChain@@WBAA@EAAKXZ.c)
 *     ?AddRef@CConversionSwapChain@@WCAA@EAAKXZ @ 0x1802A7170 (-AddRef@CConversionSwapChain@@WCAA@EAAKXZ.c)
 *     ?AddRef@CDeviceTextureTarget@@WBAI@EAAKXZ @ 0x1802A9B90 (-AddRef@CDeviceTextureTarget@@WBAI@EAAKXZ.c)
 *     ?AddRef@CDeviceTextureTarget@@WPA@EAAKXZ @ 0x1802A9BB0 (-AddRef@CDeviceTextureTarget@@WPA@EAAKXZ.c)
 *     ?AddRef@CDeviceTextureTarget@@WPI@EAAKXZ @ 0x1802A9BD0 (-AddRef@CDeviceTextureTarget@@WPI@EAAKXZ.c)
 *     ?AddRef@CDxHandleBitmapRealization@@WBEI@EAAKXZ @ 0x1802AA820 (-AddRef@CDxHandleBitmapRealization@@WBEI@EAAKXZ.c)
 *     ?AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WBFA@EAAKXZ @ 0x1802AA840 (-AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WBFA@EAAKXZ.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802AA860 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     ?AddRef@CDxHandleBitmapRealization@@WBFI@EAAKXZ @ 0x1802AB720 (-AddRef@CDxHandleBitmapRealization@@WBFI@EAAKXZ.c)
 *     ?AddRef@CGDIBitmapRealization@@WBJA@EAAKXZ @ 0x1802AB740 (-AddRef@CGDIBitmapRealization@@WBJA@EAAKXZ.c)
 *     ?AddRef@CStereoRenderTargetBitmap@@WII@EAAKXZ @ 0x1802B0830 (-AddRef@CStereoRenderTargetBitmap@@WII@EAAKXZ.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProjectedShadowReceiver::AddRef(CProjectedShadowReceiver *this)
{
  signed __int32 v1; // ebx
  char v2; // cc
  unsigned __int32 v3; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 1u);
  v2 = (v1 + 1 < 0) ^ __OFADD__(1, v1) | (v1 == -1);
  v3 = v1 + 1;
  if ( v2 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v5);
  return v3;
}
