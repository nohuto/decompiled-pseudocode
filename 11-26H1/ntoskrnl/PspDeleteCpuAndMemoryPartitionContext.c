/*
 * XREFs of PspDeleteCpuAndMemoryPartitionContext @ 0x14077EEEC
 * Callers:
 *     PsCreateMinimalProcess @ 0x140801BC8 (PsCreateMinimalProcess.c)
 *     PspGetCpuAndMemoryPartitionContext @ 0x140AAC4C4 (PspGetCpuAndMemoryPartitionContext.c)
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PspDeleteCpuAndMemoryPartitionContext(void *a1, void *a2)
{
  LONG_PTR result; // rax

  if ( a1 )
    result = ObfDereferenceObjectWithTag(a1, 0x72437350u);
  if ( a2 )
    return ObfDereferenceObjectWithTag(a2, 0x72437350u);
  return result;
}
