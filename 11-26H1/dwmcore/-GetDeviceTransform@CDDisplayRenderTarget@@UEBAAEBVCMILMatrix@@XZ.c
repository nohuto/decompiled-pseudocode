/*
 * XREFs of ?GetDeviceTransform@CDDisplayRenderTarget@@UEBAAEBVCMILMatrix@@XZ @ 0x1800EDC30
 * Callers:
 *     ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800EDCF8 (-Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetDeviceTransform@CDDisplayRenderTarget@@WEI@EBAAEBVCMILMatrix@@XZ @ 0x180247510 (-GetDeviceTransform@CDDisplayRenderTarget@@WEI@EBAAEBVCMILMatrix@@XZ.c)
 *     ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1802543B0 (-RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     <none>
 */

const struct CMILMatrix *__fastcall CDDisplayRenderTarget::GetDeviceTransform(CDDisplayRenderTarget *this)
{
  bool v1; // al

  v1 = 0;
  if ( *((_BYTE *)this + 19196) )
    v1 = *((_DWORD *)this + 4798) != 0;
  return (CDDisplayRenderTarget *)((char *)this + (v1 ? 30052LL : 29916LL));
}
