/*
 * XREFs of NtDeleteKey @ 0x180160AB0
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800D34B8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlInitializeRXact @ 0x1800FD2D0 (RtlInitializeRXact.c)
 *     RXactpCommit @ 0x1800FD868 (RXactpCommit.c)
 *     RtlpDeleteEmptyImageFileOptionsKey @ 0x18013BF5C (RtlpDeleteEmptyImageFileOptionsKey.c)
 *     RtlpCleanupRegistryKeys @ 0x180142090 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x180142B80 (RtlpSetInstallLanguage.c)
 *     RtlpNtMakeTemporaryKey @ 0x18014F100 (RtlpNtMakeTemporaryKey.c)
 * Callees:
 *     <none>
 */

__int64 NtDeleteKey()
{
  __int64 result; // rax

  result = 220LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
