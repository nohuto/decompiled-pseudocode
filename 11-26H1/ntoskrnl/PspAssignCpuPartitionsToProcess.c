/*
 * XREFs of PspAssignCpuPartitionsToProcess @ 0x1407F8448
 * Callers:
 *     PspAssignJobCpuPartitionToProcess @ 0x140B3F674 (PspAssignJobCpuPartitionToProcess.c)
 *     PspAssignCpuPartitionsToProcessByHandle @ 0x140B715F4 (PspAssignCpuPartitionsToProcessByHandle.c)
 * Callees:
 *     KeRecomputeCpuSetAffinityProcess @ 0x140528290 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeAssignCpuPartitionsToProcess @ 0x1405F5FA0 (KeAssignCpuPartitionsToProcess.c)
 */

__int64 __fastcall PspAssignCpuPartitionsToProcess(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  int v5; // edi

  if ( *(_QWORD *)(a1 + 2056) )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    v5 = KeAssignCpuPartitionsToProcess(a2, a3, a1, a4);
    if ( v5 >= 0 && (*(_DWORD *)(a1 + 496) & 0x8000000) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 496), 0x8000000u);
      KeRecomputeCpuSetAffinityProcess(a1);
    }
  }
  return (unsigned int)v5;
}
