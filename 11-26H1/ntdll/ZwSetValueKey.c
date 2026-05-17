/*
 * XREFs of ZwSetValueKey @ 0x18015FB30
 * Callers:
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800D2134 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800D34B8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlInitializeRXact @ 0x1800FD2D0 (RtlInitializeRXact.c)
 *     RtlApplyRXact @ 0x1800FD710 (RtlApplyRXact.c)
 *     RXactpCommit @ 0x1800FD868 (RXactpCommit.c)
 *     RtlSetImageMitigationPolicy @ 0x180103380 (RtlSetImageMitigationPolicy.c)
 *     RtlWriteRegistryValue @ 0x1801069C0 (RtlWriteRegistryValue.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x180123C1C (RtlpSetTimeZoneInformationWorker.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x18014303C (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1801431B0 (RtlpSetPreferredUILanguages.c)
 *     RtlpNtSetValueKey @ 0x18014F110 (RtlpNtSetValueKey.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetValueKey()
{
  __int64 result; // rax

  result = 96LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
