/*
 * XREFs of PspDeleteCpuAndMemoryPartitionContext @ 0x14077C3F8
 * Callers:
 *     PsCreateMinimalProcess @ 0x1407FC198 (PsCreateMinimalProcess.c)
 *     PspGetCpuAndMemoryPartitionContext @ 0x140AAE864 (PspGetCpuAndMemoryPartitionContext.c)
 *     NtCreateUserProcess @ 0x140B77FE0 (NtCreateUserProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
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
