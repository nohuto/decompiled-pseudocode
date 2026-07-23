/*
 * XREFs of MiInitializeDemandCoalesceContext @ 0x140206BB0
 * Callers:
 *     MiCreateSlabEntry @ 0x140206364 (MiCreateSlabEntry.c)
 *     MiGetLargePagesForChain @ 0x140283FC4 (MiGetLargePagesForChain.c)
 *     MiCreateLargePfnList @ 0x1402F23FC (MiCreateLargePfnList.c)
 *     MiPrefetchVirtualMemory @ 0x1403A2470 (MiPrefetchVirtualMemory.c)
 *     MiValidateMdlAllocationRequest @ 0x14052943C (MiValidateMdlAllocationRequest.c)
 *     MiProcessVaContiguityInformation @ 0x1407104C0 (MiProcessVaContiguityInformation.c)
 *     MiCreatePagingFileCommit @ 0x1409894E4 (MiCreatePagingFileCommit.c)
 *     MiPfPrepareSequentialReadList @ 0x140A5A190 (MiPfPrepareSequentialReadList.c)
 *     MiGetLargePagesForSystemMapping @ 0x140B4E990 (MiGetLargePagesForSystemMapping.c)
 *     MiPartitionTransferAllocatePrepare @ 0x140B633E0 (MiPartitionTransferAllocatePrepare.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeDemandCoalesceContext(_QWORD *a1, __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 v4; // rbx
  void *v7; // rsi
  unsigned __int64 v8; // r11
  __int64 v9; // rdx
  unsigned int i; // eax
  __int64 v11; // rcx
  __int64 result; // rax
  unsigned __int64 v13; // rdx

  v4 = (unsigned __int16)KeNumberNodes;
  v7 = a1;
  v8 = 3LL;
  if ( ((unsigned __int8)a1 & 4) != 0 )
  {
    *(_DWORD *)a1 = (unsigned __int16)KeNumberNodes;
    v7 = (char *)a1 + 4;
    v8 = 2LL;
  }
  memset64(v7, v4 | (v4 << 32), v8 >> 1);
  if ( (v8 & 1) != 0 )
    *((_DWORD *)v7 + v8 - 1) = v4;
  v9 = 0LL;
  for ( i = 0; i < 3; ++i )
  {
    v11 = i;
    if ( a2 == MiPageSizes[v11] )
    {
      v9 = MiDemandLargePageCoalesceTimeBounds[v11];
      break;
    }
  }
  result = 8LL;
  if ( a3 < 8 )
    result = a3;
  v13 = result * v9;
  if ( !a4 )
  {
    v13 <<= 7;
    result = 1000000LL;
    if ( v13 >= 0xF4240 )
      v13 = 1000000LL;
  }
  a1[6] = 0LL;
  a1[7] = 0LL;
  a1[5] = v13;
  return result;
}
