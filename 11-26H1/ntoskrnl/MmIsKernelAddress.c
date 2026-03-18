/*
 * XREFs of MmIsKernelAddress @ 0x1404579F0
 * Callers:
 *     KeSetTracepoint @ 0x1407BBB10 (KeSetTracepoint.c)
 *     MiMapCacheExceptionFilter @ 0x14086A9FC (MiMapCacheExceptionFilter.c)
 *     RtlpNewSecurityObject @ 0x1408E0FD0 (RtlpNewSecurityObject.c)
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 *     RtlValidSid @ 0x140924370 (RtlValidSid.c)
 *     RtlAddMandatoryAce @ 0x140926CB0 (RtlAddMandatoryAce.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140927020 (SepAppendAceToTokenObjectAcl.c)
 *     SepCreateImpersonationTokenDacl @ 0x1409278D0 (SepCreateImpersonationTokenDacl.c)
 *     EtwpCovSampContextAddAddresses @ 0x14093F0AC (EtwpCovSampContextAddAddresses.c)
 *     EtwpCoverageSamplerUnloadImage @ 0x14093FA28 (EtwpCoverageSamplerUnloadImage.c)
 *     EtwpIsValidImageAddress @ 0x140942A20 (EtwpIsValidImageAddress.c)
 *     NtSetValueKey @ 0x14097DE30 (NtSetValueKey.c)
 *     RtlpAddKnownAce @ 0x1409D7990 (RtlpAddKnownAce.c)
 *     RtlAddAccessAllowedAce @ 0x1409F49E0 (RtlAddAccessAllowedAce.c)
 *     ObQueryNameStringMode @ 0x1409FDA40 (ObQueryNameStringMode.c)
 *     MiCopyVmLockVad @ 0x140A22620 (MiCopyVmLockVad.c)
 *     PspGetSetContextInternal @ 0x140A31AF0 (PspGetSetContextInternal.c)
 *     VrpPreQueryKeyName @ 0x140AA9B60 (VrpPreQueryKeyName.c)
 *     MiImageLoadConfigSize @ 0x140ACAD2C (MiImageLoadConfigSize.c)
 *     WdipSemGetLoggerDroppedEventCount @ 0x140ADB33C (WdipSemGetLoggerDroppedEventCount.c)
 *     WmiQueryTraceInformation @ 0x140B69710 (WmiQueryTraceInformation.c)
 *     ExpDebuggerWorker @ 0x140C16D60 (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

bool __fastcall MmIsKernelAddress(unsigned __int64 a1)
{
  return a1 >= 0xFFFF800000000000uLL;
}
