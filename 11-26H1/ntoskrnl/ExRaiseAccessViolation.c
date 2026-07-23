/*
 * XREFs of ExRaiseAccessViolation @ 0x140925D30
 * Callers:
 *     DifExRaiseAccessViolationWrapper @ 0x1406570A0 (DifExRaiseAccessViolationWrapper.c)
 *     KeUserModeCallback @ 0x140923D90 (KeUserModeCallback.c)
 *     MiQueryValidateParameters @ 0x1409247B0 (MiQueryValidateParameters.c)
 *     NtQueryKey @ 0x140924BC0 (NtQueryKey.c)
 *     NtQuerySecurityAttributesToken @ 0x140925540 (NtQuerySecurityAttributesToken.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x140925A30 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpProbeMessageAttributes @ 0x140925AE0 (AlpcpProbeMessageAttributes.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     AlpcpProcessSynchronousRequest @ 0x1409276C0 (AlpcpProcessSynchronousRequest.c)
 *     IopValidateQueryInformationParameters @ 0x14098667C (IopValidateQueryInformationParameters.c)
 *     NtQueryAttributesFile @ 0x140986B10 (NtQueryAttributesFile.c)
 *     MiMapViewOfSectionCommon @ 0x140993EA0 (MiMapViewOfSectionCommon.c)
 *     NtEnumerateKey @ 0x140A68780 (NtEnumerateKey.c)
 *     NtRemoveIoCompletionEx @ 0x140A6AAB0 (NtRemoveIoCompletionEx.c)
 *     NtQueryEvent @ 0x140A6C830 (NtQueryEvent.c)
 *     NtQueryLicenseValue @ 0x140A76CE0 (NtQueryLicenseValue.c)
 *     NtAlpcQueryInformation @ 0x140A7D210 (NtAlpcQueryInformation.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 */

void __noreturn ExRaiseAccessViolation(void)
{
  RtlRaiseStatus(-1073741819);
}
