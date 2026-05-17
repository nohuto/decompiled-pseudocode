/*
 * XREFs of ZwCreateKey @ 0x18015F2E0
 * Callers:
 *     RtlpGetRegistryHandle @ 0x18005A6B8 (RtlpGetRegistryHandle.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800D34B8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x1800D3BFC (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     RtlpCreateIFEOKeyFilterKey @ 0x1800D3C98 (RtlpCreateIFEOKeyFilterKey.c)
 *     RtlInitializeRXact @ 0x1800FD2D0 (RtlInitializeRXact.c)
 *     RXactpCommit @ 0x1800FD868 (RXactpCommit.c)
 *     LdrpCreateKey @ 0x180141E10 (LdrpCreateKey.c)
 *     RtlpNtCreateKey @ 0x18014F0C0 (RtlpNtCreateKey.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateKey()
{
  __int64 result; // rax

  result = 29LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
