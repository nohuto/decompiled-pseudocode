/*
 * XREFs of ExRaiseAccessViolation @ 0x1408F5DA0
 * Callers:
 *     DifExRaiseAccessViolationWrapper @ 0x1406534C0 (DifExRaiseAccessViolationWrapper.c)
 *     NtQueryKey @ 0x1408F4C30 (NtQueryKey.c)
 *     NtQuerySecurityAttributesToken @ 0x1408F55B0 (NtQuerySecurityAttributesToken.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x1408F5AA0 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpProbeMessageAttributes @ 0x1408F5B50 (AlpcpProbeMessageAttributes.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 *     AlpcpProcessSynchronousRequest @ 0x1408F7730 (AlpcpProcessSynchronousRequest.c)
 *     MiQueryValidateParameters @ 0x14091FC40 (MiQueryValidateParameters.c)
 *     IopValidateQueryInformationParameters @ 0x1409B55BC (IopValidateQueryInformationParameters.c)
 *     NtQueryAttributesFile @ 0x1409B5A50 (NtQueryAttributesFile.c)
 *     MiMapViewOfSectionCommon @ 0x1409C2EC0 (MiMapViewOfSectionCommon.c)
 *     KeUserModeCallback @ 0x140A59280 (KeUserModeCallback.c)
 *     NtEnumerateKey @ 0x140A5B7C0 (NtEnumerateKey.c)
 *     NtRemoveIoCompletionEx @ 0x140A5DAF0 (NtRemoveIoCompletionEx.c)
 *     NtQueryEvent @ 0x140A5F870 (NtQueryEvent.c)
 *     NtQueryLicenseValue @ 0x140A6A340 (NtQueryLicenseValue.c)
 *     NtAlpcQueryInformation @ 0x140A6BBE0 (NtAlpcQueryInformation.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 */

void __noreturn ExRaiseAccessViolation(void)
{
  RtlRaiseStatus(-1073741819);
}
