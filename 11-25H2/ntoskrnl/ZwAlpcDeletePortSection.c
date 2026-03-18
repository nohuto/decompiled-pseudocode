/*
 * XREFs of ZwAlpcDeletePortSection @ 0x14069C180
 * Callers:
 *     CmFcpSendFeatureUsageReportAlpcMessage @ 0x1404C2E14 (CmFcpSendFeatureUsageReportAlpcMessage.c)
 *     CmFcpCreateAlpcSectionView @ 0x140ABCEFC (CmFcpCreateAlpcSectionView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcDeletePortSection(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
