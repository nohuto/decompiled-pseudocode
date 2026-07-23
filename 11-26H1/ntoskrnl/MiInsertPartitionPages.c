/*
 * XREFs of MiInsertPartitionPages @ 0x1408825C4
 * Callers:
 *     MmRemovePhysicalMemory @ 0x14086D840 (MmRemovePhysicalMemory.c)
 *     MiHotAddPartitionMemory @ 0x140882270 (MiHotAddPartitionMemory.c)
 *     MiPartitionTransferAllocateFinish @ 0x140882BEC (MiPartitionTransferAllocateFinish.c)
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x140200820 (RtlNumberOfSetBitsEx.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     MiComputeCommitThresholds @ 0x1404F38EC (MiComputeCommitThresholds.c)
 *     MiRemovePhysicalMemoryBatchComplete @ 0x1406EEDE8 (MiRemovePhysicalMemoryBatchComplete.c)
 *     MiInitializeHugePfnDatabase @ 0x1406F10F0 (MiInitializeHugePfnDatabase.c)
 *     MiChargeExposedCommitOnly @ 0x14070A4A0 (MiChargeExposedCommitOnly.c)
 *     MiActOnPartitionNodePages @ 0x14070C91C (MiActOnPartitionNodePages.c)
 *     MiClearPartitionPageBitMap @ 0x14070D4BC (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionPageNodes @ 0x14070D7B4 (MiDeletePartitionPageNodes.c)
 *     MiDuplicatePartitionNodeTree @ 0x14070D848 (MiDuplicatePartitionNodeTree.c)
 *     MiFreePartitionTree @ 0x14070DA30 (MiFreePartitionTree.c)
 *     MiInsertHugeRangeInPartition @ 0x14070DB08 (MiInsertHugeRangeInPartition.c)
 *     MiInsertPartitionPageNodes @ 0x14070DBDC (MiInsertPartitionPageNodes.c)
 *     MiReflectCommitRemovedFromPartition @ 0x14070E2F4 (MiReflectCommitRemovedFromPartition.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x14088314C (MiUpdatePartitionLargePfnBitMap.c)
 */

__int64 __fastcall MiInsertPartitionPages(ULONG *a1, ULONG *a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 *v7; // r12
  int updated; // esi
  char v9; // al
  unsigned int *v10; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  _QWORD **v13; // rcx
  __int64 v14; // r10
  _QWORD *v15; // rax
  _QWORD *i; // rcx
  int v17; // ecx
  unsigned int *v18; // rbx
  ULONG *v19; // rcx
  unsigned int v20; // r8d
  unsigned int v21; // eax
  ULONG *v22; // rcx
  unsigned int v23; // eax
  _QWORD *v24; // rax
  _QWORD *v25; // rcx
  _QWORD *v26; // rbx
  __m128i v27; // xmm0
  __int64 v28; // xmm1_8
  _QWORD *v29; // rax
  _QWORD **v30; // rcx
  __int64 v31; // rdi
  _QWORD *v32; // rax
  _QWORD *j; // rcx
  _QWORD *v34; // rax
  _QWORD *v35; // rbx
  _QWORD **v36; // rcx
  __int64 v37; // r15
  _QWORD *v38; // rax
  _QWORD *k; // rcx
  unsigned __int64 v40; // r14
  int inserted; // eax
  __m128i v43[4]; // [rsp+28h] [rbp-79h] BYREF
  __int64 v44; // [rsp+68h] [rbp-39h]
  _QWORD v45[2]; // [rsp+78h] [rbp-29h] BYREF
  __m128i v46; // [rsp+88h] [rbp-19h]
  __m128i v47; // [rsp+98h] [rbp-9h]
  __m128i v48; // [rsp+A8h] [rbp+7h]
  __int64 v49; // [rsp+B8h] [rbp+17h]
  unsigned __int64 v50; // [rsp+108h] [rbp+67h] BYREF
  ULONG *v51; // [rsp+110h] [rbp+6Fh]
  unsigned __int64 v52; // [rsp+120h] [rbp+7Fh]

  v52 = a4;
  v51 = a2;
  memset_0(v43, 0, 0x48uLL);
  memset_0(v45, 0, 0x48uLL);
  v7 = *(unsigned __int64 **)a3;
  updated = 0;
  v9 = *(_DWORD *)(a3 + 24) & 0xC;
  v50 = 0LL;
  v43[0].m128i_i64[1] = (__int64)a1;
  v10 = (unsigned int *)(a3 + 24);
  v43[0].m128i_i64[0] = (__int64)a2;
  if ( v9 == 4 )
  {
    if ( !(unsigned int)MiDuplicatePartitionNodeTree(&v50, (_QWORD **)v7) )
    {
LABEL_3:
      updated = -1073741670;
      goto LABEL_79;
    }
    v10 = (unsigned int *)(a3 + 24);
  }
  if ( (*(_DWORD *)(a3 + 24) & 2) != 0 )
  {
    v11 = (_QWORD *)*v7;
    v12 = 0LL;
    v10 = (unsigned int *)(a3 + 24);
    if ( *v7 )
    {
      do
      {
        v12 = v11;
        v11 = (_QWORD *)*v11;
      }
      while ( v11 );
      v10 = (unsigned int *)(a3 + 24);
    }
    if ( v12 )
    {
      do
      {
        v13 = (_QWORD **)v12[1];
        v14 = (__int64)v12;
        v15 = v12;
        if ( v13 )
        {
          v12 = (_QWORD *)v12[1];
          for ( i = *v13; i; i = (_QWORD *)*i )
            v12 = i;
        }
        else
        {
          while ( 1 )
          {
            v12 = (_QWORD *)(v12[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v12 || (_QWORD *)*v12 == v15 )
              break;
            v15 = v12;
          }
        }
        MiActOnPartitionNodePages(v14, 0xAu, 0, v43);
      }
      while ( v12 );
      v10 = (unsigned int *)(a3 + 24);
    }
  }
  v17 = *(_DWORD *)(a3 + 24) & 0x10;
  if ( (*(_DWORD *)(a3 + 24) & 8) != 0 )
  {
    if ( v17 )
    {
      updated = MiUpdatePartitionLargePfnBitMap(a1, v7);
      if ( updated < 0 )
        goto LABEL_79;
    }
  }
  else
  {
    v18 = v10;
    if ( v17 )
    {
      if ( !(unsigned int)MiInitializeHugePfnDatabase() )
        goto LABEL_3;
      v19 = v51;
      v20 = *(_DWORD *)(a3 + 24) | 4;
      *v10 = v20;
      updated = MiFreePartitionTree((__int64)v19, v7, v20, 1);
      if ( updated < 0 )
      {
        MiFreePartitionTree((__int64)a1, v7, 0x401u, 1);
        goto LABEL_79;
      }
      v51 = 0LL;
      v18 = (unsigned int *)(a3 + 24);
      v7 = 0LL;
    }
    v21 = *v10;
    if ( a1 == &MiSystemPartition )
    {
      if ( (v21 & 0x84) == 0 )
        MiChargeExposedCommitOnly((__int64)a1, v52);
    }
    else
    {
      if ( (v21 & 0x10) == 0 )
        MiClearPartitionPageBitMap((__int64)a1, (_QWORD **)v7);
      MiReflectCommitRemovedFromPartition((__int64)a1, v52);
    }
    v10 = v18;
  }
  v22 = v51;
  if ( v51 != &MiSystemPartition )
    goto LABEL_59;
  updated = MiFreePartitionTree((__int64)v51, v7, *v10, 1);
  if ( (*v10 & 4) != 0 )
    MiRemovePhysicalMemoryBatchComplete();
  if ( updated < 0 )
  {
    v23 = *v10;
    if ( (*v10 & 0x10) != 0 )
    {
      v24 = (_QWORD *)*v7;
      v25 = 0LL;
      while ( v24 )
      {
        v25 = v24;
        v24 = (_QWORD *)*v24;
      }
      MiInsertHugeRangeInPartition(v25[3] & 0x3FFFFFFFFFFFFFFFLL, 0);
      goto LABEL_79;
    }
    v22 = a1;
    v26 = 0LL;
    v45[1] = v43[0].m128i_i64[0];
    v46 = v43[1];
    v27 = v43[3];
    v47 = v43[2];
    v28 = v44;
    v45[0] = _mm_srli_si128(v43[0], 8).m128i_u64[0];
    *v10 = v23 & 0xFFFFFFFB;
    v48 = v27;
    v49 = v28;
    v29 = (_QWORD *)*v7;
    v51 = a1;
    while ( v29 )
    {
      v26 = v29;
      v29 = (_QWORD *)*v29;
    }
    if ( v26 )
    {
      do
      {
        v30 = (_QWORD **)v26[1];
        v31 = (__int64)v26;
        v32 = v26;
        if ( v30 )
        {
          v26 = (_QWORD *)v26[1];
          for ( j = *v30; j; j = (_QWORD *)*j )
            v26 = j;
        }
        else
        {
          while ( 1 )
          {
            v26 = (_QWORD *)(v26[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v26 || (_QWORD *)*v26 == v32 )
              break;
            v32 = v26;
          }
        }
        RtlNumberOfSetBitsEx((__int64 *)(v31 + 32));
        if ( (*(_DWORD *)(a3 + 24) & 2) != 0 )
          MiActOnPartitionNodePages(v31, 0xAu, 0, v45);
      }
      while ( v26 );
      v22 = v51;
    }
LABEL_59:
    if ( v22 )
    {
      v34 = (_QWORD *)*v7;
      v35 = 0LL;
      while ( v34 )
      {
        v35 = v34;
        v34 = (_QWORD *)*v34;
      }
      if ( v35 )
      {
        do
        {
          v36 = (_QWORD **)v35[1];
          v37 = (__int64)v35;
          v38 = v35;
          if ( v36 )
          {
            v35 = (_QWORD *)v35[1];
            for ( k = *v36; k; k = (_QWORD *)*k )
              v35 = k;
          }
          else
          {
            while ( 1 )
            {
              v35 = (_QWORD *)(v35[2] & 0xFFFFFFFFFFFFFFFCuLL);
              if ( !v35 || (_QWORD *)*v35 == v38 )
                break;
              v38 = v35;
            }
          }
          RtlAvlRemoveNode(v7, v37);
          v40 = *(_QWORD *)(v37 + 24) & 0x3FFFFFFFFFFFFFFFLL;
          inserted = MiInsertPartitionPageNodes((__int64)v51, a3, v37, (__int64)&v50);
          if ( inserted < 0 && updated >= 0 )
          {
            updated = inserted;
            if ( (*(_DWORD *)(a3 + 24) & 0x10) != 0 )
              MiInsertHugeRangeInPartition(v40, 0);
          }
        }
        while ( v35 );
        v22 = v51;
      }
      if ( (*(_DWORD *)(a3 + 24) & 8) == 0 )
        MiComputeCommitThresholds((__int64)v22, 0);
    }
  }
LABEL_79:
  MiDeletePartitionPageNodes(&v50);
  return (unsigned int)updated;
}
