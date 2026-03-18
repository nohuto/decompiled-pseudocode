/*
 * XREFs of ?GetDeviceTransform@CLegacyRenderTarget@@UEBAAEBVCMILMatrix@@XZ @ 0x18018C120
 * Callers:
 *     ?GetDeviceTransform@CLegacyRenderTarget@@WEI@EBAAEBVCMILMatrix@@XZ @ 0x180247520 (-GetDeviceTransform@CLegacyRenderTarget@@WEI@EBAAEBVCMILMatrix@@XZ.c)
 * Callees:
 *     <none>
 */

const struct CMILMatrix *__fastcall CLegacyRenderTarget::GetDeviceTransform(CLegacyRenderTarget *this)
{
  bool v1; // al

  v1 = 0;
  if ( *((_BYTE *)this + 19180) )
    v1 = *((_DWORD *)this + 4794) != 0;
  return (CLegacyRenderTarget *)((char *)this + (v1 ? 30036LL : 29900LL));
}
