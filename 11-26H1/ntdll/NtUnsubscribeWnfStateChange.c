/*
 * XREFs of NtUnsubscribeWnfStateChange @ 0x180162A50
 * Callers:
 *     RtlpDereferenceWnfNameSubscription @ 0x18003ABD0 (RtlpDereferenceWnfNameSubscription.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtUnsubscribeWnfStateChange(PCWNF_STATE_NAME StateName)
{
  NTSTATUS result; // eax

  result = 481;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
