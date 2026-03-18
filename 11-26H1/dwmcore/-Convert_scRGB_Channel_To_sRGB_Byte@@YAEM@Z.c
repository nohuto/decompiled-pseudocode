/*
 * XREFs of ?Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z @ 0x180158CF0
 * Callers:
 *     ?InitColorKey@CColorKeyBitmap@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x180158AB8 (-InitColorKey@CColorKeyBitmap@@IEAAJAEBUPixelFormatInfo@@@Z.c)
 *     ?Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x180158C44 (-Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB@@YA-AU_D3DCOLORVALUE@@PEBU1@@Z.c)
 *     ?Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x180292984 (-Convert_D2D_COLOR_F_scRGB_To_D2D_COLOR_F_sRGB@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 *     ?Convert_scRGB_float_To_sRGB_UINT16@@YAGM@Z @ 0x180292A74 (-Convert_scRGB_float_To_sRGB_UINT16@@YAGM@Z.c)
 *     ?GammaConvert_128bppABGR_32bppARGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802B5E20 (-GammaConvert_128bppABGR_32bppARGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z.c)
 * Callees:
 *     floorf_0 @ 0x1802B9708 (floorf_0.c)
 */

unsigned __int8 __fastcall Convert_scRGB_Channel_To_sRGB_Byte(float a1)
{
  if ( a1 <= 0.0 )
    return 0;
  if ( a1 < 1.0 )
    return GammaLUT_scRGB_to_sRGB[floorf_0((float)(a1 * 3354.0) + 0.5)];
  return -1;
}
