/*
 * XREFs of MmIsKernelAddress @ 0x14044F260
 * Callers:
 *     KeSetTracepoint @ 0x1407BEB70 (KeSetTracepoint.c)
 *     MiMapCacheExceptionFilter @ 0x140870DDC (MiMapCacheExceptionFilter.c)
 *     RtlpNewSecurityObject @ 0x1408E7590 (RtlpNewSecurityObject.c)
 *     RtlValidSid @ 0x1408FFE80 (RtlValidSid.c)
 *     RtlAddMandatoryAce @ 0x1409027C0 (RtlAddMandatoryAce.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140902B30 (SepAppendAceToTokenObjectAcl.c)
 *     SepCreateImpersonationTokenDacl @ 0x1409033E0 (SepCreateImpersonationTokenDacl.c)
 *     ObQueryNameStringMode @ 0x140922640 (ObQueryNameStringMode.c)
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     NtSetValueKey @ 0x14093FE40 (NtSetValueKey.c)
 *     RtlpAddKnownAce @ 0x1409A8880 (RtlpAddKnownAce.c)
 *     RtlAddAccessAllowedAce @ 0x1409E0730 (RtlAddAccessAllowedAce.c)
 *     MiCopyVmLockVad @ 0x140A2BC40 (MiCopyVmLockVad.c)
 *     EtwpCovSampContextAddAddresses @ 0x140A321BC (EtwpCovSampContextAddAddresses.c)
 *     EtwpCoverageSamplerUnloadImage @ 0x140A32B38 (EtwpCoverageSamplerUnloadImage.c)
 *     EtwpIsValidImageAddress @ 0x140A35B30 (EtwpIsValidImageAddress.c)
 *     PspGetSetContextInternal @ 0x140A4CA50 (PspGetSetContextInternal.c)
 *     VrpPreQueryKeyName @ 0x140AA5E64 (VrpPreQueryKeyName.c)
 *     MiImageLoadConfigSize @ 0x140ACCE3C (MiImageLoadConfigSize.c)
 *     WdipSemGetLoggerDroppedEventCount @ 0x140AD7DEC (WdipSemGetLoggerDroppedEventCount.c)
 *     WmiQueryTraceInformation @ 0x140B6C6A0 (WmiQueryTraceInformation.c)
 *     ExpDebuggerWorker @ 0x140C1CD60 (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

bool __fastcall MmIsKernelAddress(unsigned __int64 a1)
{
  return a1 >= 0xFFFF800000000000uLL;
}
