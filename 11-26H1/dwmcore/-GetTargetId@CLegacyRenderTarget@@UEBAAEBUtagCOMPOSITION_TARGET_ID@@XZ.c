/*
 * XREFs of ?GetTargetId@CLegacyRenderTarget@@UEBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x180196660
 * Callers:
 *     ?GetTargetId@CLegacyRenderTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x180248A10 (-GetTargetId@CLegacyRenderTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 *     ?GetTargetId@CLegacyRenderTarget@@WFA@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x180248A20 (-GetTargetId@CLegacyRenderTarget@@WFA@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 * Callees:
 *     <none>
 */

const struct tagCOMPOSITION_TARGET_ID *__fastcall CLegacyRenderTarget::GetTargetId(CLegacyRenderTarget *this)
{
  return (CLegacyRenderTarget *)((char *)this + 32032);
}
