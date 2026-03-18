/*
 * XREFs of ?ValidateSDRBoost@@YAMMAEBUPixelFormatInfo@@@Z @ 0x180206D80
 * Callers:
 *     ?SetSDRBoost@CDDisplayRenderTarget@@IEAAXM@Z @ 0x180206BF8 (-SetSDRBoost@CDDisplayRenderTarget@@IEAAXM@Z.c)
 *     ?SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z @ 0x180206CF0 (-SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z.c)
 *     ?EnsureRenderTargets@CVisualCapture@@MEAAJXZ @ 0x1802864B0 (-EnsureRenderTargets@CVisualCapture@@MEAAJXZ.c)
 * Callees:
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180128A30 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

float __fastcall ValidateSDRBoost(float a1, enum DXGI_COLOR_SPACE_TYPE *a2)
{
  if ( IsDXGIColorSpaceHDR(a2[2]) )
    return fmaxf(1.0, a1);
  else
    return 0.0;
}
