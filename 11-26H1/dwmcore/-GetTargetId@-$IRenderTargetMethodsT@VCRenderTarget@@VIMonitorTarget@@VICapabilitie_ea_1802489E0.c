/*
 * XREFs of ?GetTargetId@?$IRenderTargetMethodsT@VCRenderTarget@@VIMonitorTarget@@VICapabilitiesContributorTarget@@@@WFA@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x1802489E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct tagCOMPOSITION_TARGET_ID *__fastcall IRenderTargetMethodsT<CRenderTarget,IMonitorTarget,ICapabilitiesContributorTarget>::GetTargetId(
        __int64 a1)
{
  return IRenderTarget::GetTargetId((IRenderTarget *)(a1 - 80));
}
