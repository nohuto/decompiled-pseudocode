/*
 * XREFs of ZwAlpcDeletePortSection @ 0x140729000
 * Callers:
 *     CmFcpSendFeatureUsageReportAlpcMessage @ 0x1404E2BF8 (CmFcpSendFeatureUsageReportAlpcMessage.c)
 *     CmFcpCreateAlpcSectionView @ 0x140B3B244 (CmFcpCreateAlpcSectionView.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcDeletePortSection(HANDLE PortHandle, ULONG Flags, ALPC_HANDLE SectionHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
