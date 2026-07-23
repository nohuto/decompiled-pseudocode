/*
 * XREFs of NtDeleteKey @ 0x1801609B0
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800D18C8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlInitializeRXact @ 0x1800FCA20 (RtlInitializeRXact.c)
 *     RXactpCommit @ 0x1800FCFB8 (RXactpCommit.c)
 *     RtlpDeleteEmptyImageFileOptionsKey @ 0x18013BE1C (RtlpDeleteEmptyImageFileOptionsKey.c)
 *     RtlpCleanupRegistryKeys @ 0x180141F90 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x180142A80 (RtlpSetInstallLanguage.c)
 *     RtlpNtMakeTemporaryKey @ 0x18014EFB0 (RtlpNtMakeTemporaryKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtDeleteKey(HANDLE KeyHandle)
{
  NTSTATUS result; // eax

  result = 220;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
