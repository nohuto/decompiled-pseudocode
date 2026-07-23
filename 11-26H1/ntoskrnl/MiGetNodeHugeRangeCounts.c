/*
 * XREFs of MiGetNodeHugeRangeCounts @ 0x140510168
 * Callers:
 *     MmFillEtwHugeIoSpaceInformation @ 0x1406E818C (MmFillEtwHugeIoSpaceInformation.c)
 *     MmManagePartitionMemoryInformation @ 0x140ABB3FC (MmManagePartitionMemoryInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetNodeHugeRangeCounts(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v4; // r11
  unsigned __int64 v5; // rbx
  unsigned int i; // edi
  __int64 v7; // r10
  unsigned __int64 result; // rax

  v4 = 0LL;
  v5 = 0LL;
  for ( i = 0; i < (unsigned __int8)byte_140E2D898; v5 += *(_QWORD *)(a1 + 8 * v7 + 13928) )
  {
    v7 = i++;
    v4 += *(_QWORD *)(a1 + 8 * v7 + 13912);
  }
  result = *(_QWORD *)(a1 + 13904);
  *a2 = result;
  if ( v4 <= result )
  {
    result -= v4;
    if ( v5 > result )
      v5 = result;
  }
  else
  {
    v4 = result;
  }
  *a3 = v4;
  *a4 = v5;
  return result;
}
