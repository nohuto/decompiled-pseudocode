/*
 * XREFs of MiMakePartitionMemoryBlock @ 0x1408829D4
 * Callers:
 *     MiClearPartitionPageBitMap @ 0x14070D4BC (MiClearPartitionPageBitMap.c)
 *     MiInsertPartitionPageNodes @ 0x14070DBDC (MiInsertPartitionPageNodes.c)
 *     MiPartitionDeleteMemoryNode @ 0x14070E194 (MiPartitionDeleteMemoryNode.c)
 *     MiRebuildPartitionMemoryBlock @ 0x14070E274 (MiRebuildPartitionMemoryBlock.c)
 *     MiReturnPartitionPagesToParent @ 0x14070E56C (MiReturnPartitionPagesToParent.c)
 *     MiFinishChildPartitionHotAdd @ 0x1408821A0 (MiFinishChildPartitionHotAdd.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiDereferencePageRuns @ 0x1403D34E4 (MiDereferencePageRuns.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiActOnPartitionNodePages @ 0x14070C91C (MiActOnPartitionNodePages.c)
 *     MiUpdatePartitionMemory @ 0x14070EBD0 (MiUpdatePartitionMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiConvertInitialMemoryBlock @ 0x14086C154 (MiConvertInitialMemoryBlock.c)
 *     MiCreateNodeLists @ 0x14086C474 (MiCreateNodeLists.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiMakePartitionMemoryBlock(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  _QWORD **v4; // rcx
  __int64 v5; // r10
  _QWORD *v6; // rax
  _QWORD *i; // rcx
  __int64 v8; // r15
  unsigned __int64 v9; // rbx
  int v10; // edi
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  void *v13; // r14
  _QWORD *v14; // rbx
  _QWORD *j; // rax
  _QWORD **v16; // rcx
  __int64 v17; // r10
  _QWORD *v18; // rax
  _QWORD *k; // rcx
  __int64 v20; // [rsp+28h] [rbp-79h] BYREF
  __int128 v21; // [rsp+30h] [rbp-71h]
  __int64 v22; // [rsp+40h] [rbp-61h]
  _QWORD v23[5]; // [rsp+48h] [rbp-59h] BYREF
  unsigned __int64 v24; // [rsp+70h] [rbp-31h]
  __int64 v25; // [rsp+78h] [rbp-29h]
  _QWORD v26[10]; // [rsp+98h] [rbp-9h] BYREF

  v20 = 0LL;
  v22 = 0LL;
  memset_0(v26, 0, 0x48uLL);
  memset_0(v23, 0, 0x48uLL);
  if ( (ULONG *)a1 != &MiSystemPartition )
  {
    v2 = *(_QWORD **)(a1 + 24);
    v3 = 0LL;
    while ( v2 )
    {
      v3 = v2;
      v2 = (_QWORD *)*v2;
    }
    while ( v3 )
    {
      v4 = (_QWORD **)v3[1];
      v5 = (__int64)v3;
      v6 = v3;
      if ( v4 )
      {
        v3 = (_QWORD *)v3[1];
        for ( i = *v4; i; i = (_QWORD *)*i )
          v3 = i;
      }
      else
      {
        while ( 1 )
        {
          v3 = (_QWORD *)(v3[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v3 || (_QWORD *)*v3 == v6 )
            break;
          v6 = v3;
        }
      }
      MiActOnPartitionNodePages(v5, 7u, 0, v23);
    }
    v8 = v25;
    v9 = v24;
    v10 = 1;
    v21 = 0LL;
    if ( !v25 )
      goto LABEL_35;
    if ( v24 <= 0x7FFFFFFFFFFFFFFLL )
    {
      CurrentProcessorColor = MmGetCurrentProcessorColor();
      PoolMm = ExAllocatePoolMm(64LL, 16 * (v9 + 1), 1817013581, CurrentProcessorColor | 0x80000000);
      v13 = (void *)PoolMm;
      if ( PoolMm )
      {
        v26[8] = PoolMm;
        *(_DWORD *)PoolMm = v9;
        v14 = 0LL;
        *(_QWORD *)(PoolMm + 8) = v8;
        for ( j = *(_QWORD **)(a1 + 24); j; j = (_QWORD *)*j )
          v14 = j;
        while ( v14 )
        {
          v16 = (_QWORD **)v14[1];
          v17 = (__int64)v14;
          v18 = v14;
          if ( v16 )
          {
            v14 = (_QWORD *)v14[1];
            for ( k = *v16; k; k = (_QWORD *)*k )
              v14 = k;
          }
          else
          {
            while ( 1 )
            {
              v14 = (_QWORD *)(v14[2] & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !v14 || (_QWORD *)*v14 == v18 )
                break;
              v18 = v14;
            }
          }
          MiActOnPartitionNodePages(v17, 8u, 0, v26);
        }
        *(_QWORD *)&v21 = MiConvertInitialMemoryBlock(a1, (__int64)v13);
        ExFreePoolWithTag(v13, 0);
        if ( (_QWORD)v21 )
        {
          *((_QWORD *)&v21 + 1) = MiCreateNodeLists(a1, v21);
          if ( *((_QWORD *)&v21 + 1) )
          {
LABEL_35:
            MiUpdatePartitionMemory(a1, (__int64)&v20, v10);
            return;
          }
          MiDereferencePageRuns(v21);
          *(_QWORD *)&v21 = 0LL;
        }
      }
    }
    v10 = 0;
    goto LABEL_35;
  }
}
