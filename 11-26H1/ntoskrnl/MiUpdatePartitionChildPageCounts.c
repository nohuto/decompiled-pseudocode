/*
 * XREFs of MiUpdatePartitionChildPageCounts @ 0x14070EB10
 * Callers:
 *     MiDeleteDynamicPfns @ 0x1406ECE7C (MiDeleteDynamicPfns.c)
 *     MiChangePagesPartitionId @ 0x14070D318 (MiChangePagesPartitionId.c)
 *     MiMoveBadPagePartition @ 0x14070E088 (MiMoveBadPagePartition.c)
 *     MiTransferPartitionPageRun @ 0x14070E734 (MiTransferPartitionPageRun.c)
 *     MiCreateDynamicPfns @ 0x14086C278 (MiCreateDynamicPfns.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiRestrictRangeToNode @ 0x1402AC9B0 (MiRestrictRangeToNode.c)
 */

__int64 __fastcall MiUpdatePartitionChildPageCounts(ULONG *a1, ULONG *a2, ULONG_PTR a3, ULONG_PTR a4)
{
  __int64 result; // rax
  ULONG_PTR v5; // rbx
  ULONG_PTR v9; // rdi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v5 = a4;
  if ( a2 == &MiSystemPartition || a1 == &MiSystemPartition )
  {
    result = a2[1];
    if ( (result & 0x20) == 0 )
    {
      result = a1[1];
      if ( (result & 0x20) == 0 )
      {
        if ( a4 )
        {
          do
          {
            v9 = MiRestrictRangeToNode(a3, v5);
            result = MiPageToNode(a3);
            if ( a2 == &MiSystemPartition )
            {
              _InterlockedAdd64((volatile signed __int64 *)&MiState + (unsigned int)result + 5159, v9);
            }
            else if ( a1 == &MiSystemPartition )
            {
              _InterlockedAdd64((volatile signed __int64 *)&MiState + (unsigned int)result + 5159, -(__int64)v9);
            }
            a3 += v9;
            v5 -= v9;
          }
          while ( v5 );
        }
      }
    }
  }
  return result;
}
