/*
 * XREFs of ZwSetValueKey @ 0x18015FA30
 * Callers:
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800CF8A4 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800D18C8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlInitializeRXact @ 0x1800FCA20 (RtlInitializeRXact.c)
 *     RtlApplyRXact @ 0x1800FCE60 (RtlApplyRXact.c)
 *     RXactpCommit @ 0x1800FCFB8 (RXactpCommit.c)
 *     RtlSetImageMitigationPolicy @ 0x180102700 (RtlSetImageMitigationPolicy.c)
 *     RtlWriteRegistryValue @ 0x1801063C0 (RtlWriteRegistryValue.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x18012398C (RtlpSetTimeZoneInformationWorker.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x180142F3C (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1801430B0 (RtlpSetPreferredUILanguages.c)
 *     RtlpNtSetValueKey @ 0x18014EFC0 (RtlpNtSetValueKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        ULONG TitleIndex,
        ULONG Type,
        PVOID Data,
        ULONG DataSize)
{
  NTSTATUS result; // eax

  result = 96;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
