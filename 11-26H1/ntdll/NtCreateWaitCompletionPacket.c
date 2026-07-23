/*
 * XREFs of NtCreateWaitCompletionPacket @ 0x180160870
 * Callers:
 *     TpAllocWait @ 0x1800399E0 (TpAllocWait.c)
 *     TppInitializeTimerSubQueue @ 0x1800861C0 (TppInitializeTimerSubQueue.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCreateWaitCompletionPacket(
        PHANDLE WaitCompletionPacketHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 210;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
