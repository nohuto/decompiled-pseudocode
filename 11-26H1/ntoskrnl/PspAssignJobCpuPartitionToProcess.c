/*
 * XREFs of PspAssignJobCpuPartitionToProcess @ 0x140B3D5A4
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x140984FA8 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140AC5D48 (PspAssignProcessToJob.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     PspAssignCpuPartitionsToProcess @ 0x1407F28E8 (PspAssignCpuPartitionsToProcess.c)
 */

__int64 __fastcall PspAssignJobCpuPartitionToProcess(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 == *(__int64 **)(a1 + 2056) )
    return 0LL;
  v5 = *a2;
  result = PspAssignCpuPartitionsToProcess(a1, (__int64)&v5, 1u, 1);
  if ( (int)result >= 0 )
  {
    ObfReferenceObjectWithTag(a2, 0x73507350u);
    *(_QWORD *)(a1 + 2056) = a2;
    return 0LL;
  }
  return result;
}
