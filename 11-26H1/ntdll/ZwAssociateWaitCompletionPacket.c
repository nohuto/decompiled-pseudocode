/*
 * XREFs of ZwAssociateWaitCompletionPacket @ 0x180160070
 * Callers:
 *     TpSetWaitEx @ 0x180039E60 (TpSetWaitEx.c)
 *     TppInitializeTimerSubQueue @ 0x1800861C0 (TppInitializeTimerSubQueue.c)
 *     TppTimerQueueExpiration @ 0x180088790 (TppTimerQueueExpiration.c)
 *     TppSetupNextWait @ 0x1800C7470 (TppSetupNextWait.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAssociateWaitCompletionPacket(
        HANDLE WaitCompletionPacketHandle,
        HANDLE IoCompletionHandle,
        HANDLE TargetObjectHandle,
        PVOID KeyContext,
        PVOID ApcContext,
        NTSTATUS IoStatus,
        ULONG_PTR IoStatusInformation,
        PBOOLEAN AlreadySignaled)
{
  NTSTATUS result; // eax

  result = 146;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
