/*
 * XREFs of ?GetTargetId@CDDisplayRenderTarget@@UEBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x1801A4F10
 * Callers:
 *     ?GetTargetId@CDDisplayRenderTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x1802489F0 (-GetTargetId@CDDisplayRenderTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 *     ?GetTargetId@CDDisplayRenderTarget@@WFA@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x180248A00 (-GetTargetId@CDDisplayRenderTarget@@WFA@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 * Callees:
 *     <none>
 */

const struct tagCOMPOSITION_TARGET_ID *__fastcall CDDisplayRenderTarget::GetTargetId(CDDisplayRenderTarget *this)
{
  return (CDDisplayRenderTarget *)((char *)this + 32056);
}
