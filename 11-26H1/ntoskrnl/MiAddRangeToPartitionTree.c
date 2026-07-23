/*
 * XREFs of MiAddRangeToPartitionTree @ 0x14070CED0
 * Callers:
 *     MiAddMdlToPartitionTree @ 0x14070CDE4 (MiAddMdlToPartitionTree.c)
 *     MiDuplicatePartitionNodeTree @ 0x14070D848 (MiDuplicatePartitionNodeTree.c)
 *     MiAcquireAddMemoryResources @ 0x14086B334 (MiAcquireAddMemoryResources.c)
 *     MmRemovePhysicalMemory @ 0x14086D840 (MmRemovePhysicalMemory.c)
 *     MiHotAddPartitionMemory @ 0x140882270 (MiHotAddPartitionMemory.c)
 *     MiPartitionTransferAllocateHugeRange @ 0x140882D00 (MiPartitionTransferAllocateHugeRange.c)
 *     MiPartitionTransferAllocateLargePages @ 0x140882E30 (MiPartitionTransferAllocateLargePages.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140250900 (RtlClearBitsEx.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAddRangeToPartitionTree(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v6; // rbp
  char v7; // r10
  __int64 v8; // r8
  int v9; // r9d
  unsigned __int64 *v10; // rdx
  unsigned __int64 v11; // r12
  __int64 v12; // r13
  _QWORD *PoolMm; // rdi
  _QWORD *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // rsi
  unsigned __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  bool v22; // r8
  _QWORD *v23; // rdx
  unsigned __int64 v24; // rcx
  _QWORD *v25; // rax
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  __int64 *v29; // rcx
  char v30; // r10
  __int64 v31; // r8
  __int64 *v32; // r9
  bool i; // zf
  __int64 v34; // rdx
  unsigned __int64 v36; // [rsp+20h] [rbp-88h]
  int v39; // [rsp+C0h] [rbp+18h]

  v4 = 0;
  v39 = 0;
  v6 = 0LL;
  v7 = a4;
  v8 = a2;
  v9 = 0;
  v10 = a1;
  v11 = 0LL;
  while ( 1 )
  {
    v12 = v8;
    v6 = v6 & 0xC000000000000000uLL | v8 & 0x3FFFFFFFFFFC0000LL;
    v36 = (v8 + a3 + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL;
LABEL_3:
    if ( !a3 )
      break;
    PoolMm = (_QWORD *)*v10;
    v14 = 0LL;
    while ( PoolMm )
    {
      v15 = PoolMm[3];
      if ( (v6 & 0x3FFFFFFFFFFFFFFFLL) >= (v15 & 0x3FFFFFFFFFFFFFFFuLL) )
      {
        v16 = (__int64)(PoolMm + 4);
        if ( (v6 & 0x3FFFFFFFFFFFFFFFLL) < PoolMm[4] + (v15 & 0x3FFFFFFFFFFFFFFFuLL) )
        {
          if ( (v15 & 0x4000000000000000LL) == 0 || (v7 & 1) == 0 )
            PoolMm[3] = v15 & 0xBFFFFFFFFFFFFFFFuLL;
          goto LABEL_33;
        }
        PoolMm = (_QWORD *)PoolMm[1];
      }
      else
      {
        v14 = PoolMm;
        PoolMm = (_QWORD *)*PoolMm;
      }
    }
    if ( v14 )
      v17 = v14[3] & 0x3FFFFFFFFFFFFFFFLL;
    else
      v17 = v36;
    PoolMm = (_QWORD *)ExAllocatePoolMm(
                         64LL,
                         0x30uLL,
                         1886415181,
                         KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    if ( !PoolMm )
      goto LABEL_59;
    if ( (a4 & 2) == 0 )
    {
      v18 = 0x40000LL;
LABEL_20:
      v19 = 0LL;
      goto LABEL_21;
    }
    v18 = v17 - (v6 & 0x3FFFFFFFFFFFFFFFLL);
    if ( (v18 & 0x3F) == 0 )
      goto LABEL_20;
    v19 = 1LL;
LABEL_21:
    v20 = ExAllocatePoolMm(
            64LL,
            8 * (v19 + (v18 >> 6)),
            1651534157,
            KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    if ( v20 )
    {
      v16 = (__int64)(PoolMm + 4);
      PoolMm[5] = v20;
      PoolMm[4] = v18;
      v21 = v6 ^ (PoolMm[3] ^ v6) & 0xC000000000000000uLL;
      PoolMm[3] = v21;
      if ( (a4 & 1) != 0 )
      {
        v21 |= 0x4000000000000000uLL;
        PoolMm[3] = v21;
      }
      v22 = 0;
      v23 = (_QWORD *)*a1;
      if ( *a1 )
      {
        v24 = v21 & 0x3FFFFFFFFFFFFFFFLL;
        while ( 1 )
        {
          if ( v24 < (v23[3] & 0x3FFFFFFFFFFFFFFFuLL) )
          {
            v25 = (_QWORD *)*v23;
            if ( !*v23 )
            {
              v22 = 0;
              break;
            }
          }
          else
          {
            v25 = (_QWORD *)v23[1];
            if ( !v25 )
            {
              v22 = 1;
              break;
            }
          }
          v23 = v25;
        }
      }
      RtlAvlInsertNodeEx(a1, (unsigned __int64)v23, v22, PoolMm);
      v9 = v39;
      v7 = a4;
LABEL_33:
      v26 = PoolMm[4] + (PoolMm[3] & 0x3FFFFFFFFFFFFFFFLL) - v12;
      if ( v26 > a3 )
        v26 = a3;
      if ( (v7 & 4) == 0 )
      {
        v27 = v12 - (PoolMm[3] & 0x3FFFFFFFFFFFFFFFLL);
        if ( v9 )
        {
          RtlClearBitsEx(v16, v27, v26);
          PoolMm[3] &= ~0x8000000000000000uLL;
        }
        else
        {
          RtlSetBitsEx(v16, v27, v26);
          if ( v12 == (PoolMm[3] & 0x3FFFFFFFFFFFFFFFLL) && v26 == PoolMm[4] )
          {
            PoolMm[3] |= 0x8000000000000000uLL;
            goto LABEL_56;
          }
          v28 = PoolMm[4];
          if ( *(_QWORD *)v16 )
          {
            if ( v28 > 1 )
            {
              if ( *(_QWORD *)v16 >= v28 )
              {
                v29 = *(__int64 **)(v16 + 8);
                v30 = v28 - 1;
                v31 = *v29;
                v32 = &v29[(v28 - 1) >> 6];
                if ( v29 == v32 )
                {
                  if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v28)) & v31) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v28) )
                    goto LABEL_54;
                }
                else
                {
                  for ( i = v31 == -1; i; i = v34 == -1 )
                  {
                    v34 = *++v29;
                    if ( v29 == v32 )
                    {
                      if ( ((0xFFFFFFFFFFFFFFFFuLL >> ~v30) & v34) != 0xFFFFFFFFFFFFFFFFuLL >> ~v30 )
                        break;
                      goto LABEL_54;
                    }
                  }
                }
              }
            }
            else if ( v28 == 1 && _bittest64(*(const signed __int64 **)(v16 + 8), 0) )
            {
LABEL_54:
              PoolMm[3] |= 0x8000000000000000uLL;
            }
          }
        }
LABEL_56:
        v7 = a4;
      }
      v9 = v39;
      v12 += v26;
      v10 = a1;
      a3 -= v26;
      v11 += v26;
      v6 = v12 ^ (v12 ^ v6) & 0xC000000000000000uLL;
      goto LABEL_3;
    }
    ExFreePoolWithTag(PoolMm, 0);
LABEL_59:
    v9 = 1;
    v39 = 1;
    if ( !v11 )
      return 0LL;
    v10 = a1;
    a3 = v11;
    v7 = a4;
    v8 = a2;
  }
  LOBYTE(v4) = v9 == 0;
  return v4;
}
