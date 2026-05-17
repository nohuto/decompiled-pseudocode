/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x180162550
 * Callers:
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x18003F520 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpLfhSubsegmentPrefetchRange @ 0x1800C1570 (RtlpHpLfhSubsegmentPrefetchRange.c)
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800C7114 (RtlpGuardGrantSuppressedCallAccess.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationVirtualMemory()
{
  __int64 result; // rax

  result = 433LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
