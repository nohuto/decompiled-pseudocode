/*
 * XREFs of MiPagesInChildPartitions @ 0x1404CF078
 * Callers:
 *     MiUpdatePartitionAgeTrimConfiguration @ 0x1404D3164 (MiUpdatePartitionAgeTrimConfiguration.c)
 *     MiAllocateCrcList @ 0x140B55EB8 (MiAllocateCrcList.c)
 * Callees:
 *     <none>
 */

__int64 MiPagesInChildPartitions()
{
  __int64 result; // rax
  PVOID *p_Object; // r8
  unsigned int i; // ecx

  result = 0LL;
  p_Object = &stru_140E36558.WaitBlock[0].Object;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++p_Object )
  {
    ++i;
    result += (__int64)*p_Object;
  }
  return result;
}
