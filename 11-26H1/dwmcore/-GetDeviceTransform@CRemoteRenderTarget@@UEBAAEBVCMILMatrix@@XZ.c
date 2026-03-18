/*
 * XREFs of ?GetDeviceTransform@CRemoteRenderTarget@@UEBAAEBVCMILMatrix@@XZ @ 0x180247540
 * Callers:
 *     ?GetDeviceTransform@CRemoteRenderTarget@@WEI@EBAAEBVCMILMatrix@@XZ @ 0x180247550 (-GetDeviceTransform@CRemoteRenderTarget@@WEI@EBAAEBVCMILMatrix@@XZ.c)
 * Callees:
 *     <none>
 */

const struct CMILMatrix *__fastcall CRemoteRenderTarget::GetDeviceTransform(CRemoteRenderTarget *this)
{
  return (CRemoteRenderTarget *)((char *)this + 152);
}
