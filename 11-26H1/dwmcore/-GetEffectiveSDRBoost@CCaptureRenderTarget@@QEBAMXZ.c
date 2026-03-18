/*
 * XREFs of ?GetEffectiveSDRBoost@CCaptureRenderTarget@@QEBAMXZ @ 0x18021F4E8
 * Callers:
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x180123EB4 (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?UpdateRenderTargetBitmapSDRBoosts@CCaptureRenderTarget@@QEAAXXZ @ 0x1801D3930 (-UpdateRenderTargetBitmapSDRBoosts@CCaptureRenderTarget@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CCaptureRenderTarget::GetEffectiveSDRBoost(CCaptureRenderTarget *this)
{
  float result; // xmm0_4

  result = *((float *)this + 649);
  if ( result == 0.0 )
    return *((float *)this + 650);
  return result;
}
