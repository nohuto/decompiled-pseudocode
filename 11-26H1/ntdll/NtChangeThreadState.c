/*
 * XREFs of NtChangeThreadState @ 0x180160250
 * Callers:
 *     RtlpHpLfhPrivateSlotListCompact @ 0x180016B50 (RtlpHpLfhPrivateSlotListCompact.c)
 *     RtlpHpEnvThreadSuspend @ 0x18010C3F0 (RtlpHpEnvThreadSuspend.c)
 *     RtlWow64ChangeThreadState @ 0x180138610 (RtlWow64ChangeThreadState.c)
 *     RtlpWow64ChangeThreadStateSuspend @ 0x180138908 (RtlpWow64ChangeThreadStateSuspend.c)
 * Callees:
 *     <none>
 */

__int64 NtChangeThreadState()
{
  __int64 result; // rax

  result = 153LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
