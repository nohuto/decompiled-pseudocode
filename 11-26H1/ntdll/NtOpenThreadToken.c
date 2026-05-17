/*
 * XREFs of NtOpenThreadToken @ 0x18015F3C0
 * Callers:
 *     RtlRegisterWait @ 0x18004EEB0 (RtlRegisterWait.c)
 *     RtlQueueWorkItem @ 0x180066390 (RtlQueueWorkItem.c)
 *     RtlpTpRevertCapture @ 0x180067740 (RtlpTpRevertCapture.c)
 *     LdrpThreadTokenSetMainThreadToken @ 0x1800E2CEC (LdrpThreadTokenSetMainThreadToken.c)
 *     RtlAdjustPrivilege @ 0x1800E5430 (RtlAdjustPrivilege.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenThreadToken()
{
  __int64 result; // rax

  result = 36LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
