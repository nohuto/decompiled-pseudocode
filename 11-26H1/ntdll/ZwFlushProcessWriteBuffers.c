/*
 * XREFs of ZwFlushProcessWriteBuffers @ 0x180160C90
 * Callers:
 *     RtlpReleaseDescriptorPseudoGlobalLock @ 0x180061668 (RtlpReleaseDescriptorPseudoGlobalLock.c)
 *     RtlpHpEnvAcquireGlobalLockExclusive @ 0x180110FA8 (RtlpHpEnvAcquireGlobalLockExclusive.c)
 * Callees:
 *     <none>
 */

NTSTATUS ZwFlushProcessWriteBuffers(void)
{
  NTSTATUS result; // eax

  result = 243;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
