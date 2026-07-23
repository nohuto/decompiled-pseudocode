/*
 * XREFs of ZwManageWobTicket @ 0x1801611B0
 * Callers:
 *     RtlQueryPriorityForWobTicket @ 0x180143E10 (RtlQueryPriorityForWobTicket.c)
 *     RtlQueryQosForWobTicket @ 0x180143E80 (RtlQueryQosForWobTicket.c)
 * Callees:
 *     <none>
 */

__int64 ZwManageWobTicket()
{
  __int64 result; // rax

  result = 284LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
