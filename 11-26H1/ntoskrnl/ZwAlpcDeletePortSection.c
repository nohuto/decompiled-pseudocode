/*
 * XREFs of ZwAlpcDeletePortSection @ 0x140724430
 * Callers:
 *     CmFcpSendFeatureUsageReportAlpcMessage @ 0x1404E9848 (CmFcpSendFeatureUsageReportAlpcMessage.c)
 *     CmFcpCreateAlpcSectionView @ 0x140B39034 (CmFcpCreateAlpcSectionView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcDeletePortSection(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
