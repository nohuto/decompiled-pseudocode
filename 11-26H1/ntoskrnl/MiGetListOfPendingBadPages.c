/*
 * XREFs of MiGetListOfPendingBadPages @ 0x14052D078
 * Callers:
 *     MiQueryBadAddresses @ 0x140870320 (MiQueryBadAddresses.c)
 *     MmEnumerateBadPages @ 0x140B6099C (MmEnumerateBadPages.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     MiReferencePageRuns @ 0x14028E44C (MiReferencePageRuns.c)
 *     MiIsPageOnBadList @ 0x14028EF30 (MiIsPageOnBadList.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiDereferencePageRuns @ 0x1403D34E4 (MiDereferencePageRuns.c)
 *     MiEnumerateBadHugeRangePages @ 0x1406F0104 (MiEnumerateBadHugeRangePages.c)
 *     MiCheckLostBadPageNode @ 0x1406F5980 (MiCheckLostBadPageNode.c)
 *     MiSortPageFramesRemoveDuplicates @ 0x1406F6BD4 (MiSortPageFramesRemoveDuplicates.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetListOfPendingBadPages(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rdi
  ULONG_PTR v3; // rdx
  __int64 PoolMm; // rax
  _QWORD *v5; // rbx
  __int64 v6; // r14
  KIRQL v7; // al
  KIRQL v8; // bp
  unsigned int *v9; // r12
  KIRQL v10; // bp
  __int64 v11; // r15
  __int64 v12; // rcx
  unsigned int v13; // r15d
  __int64 v14; // r13
  __int64 v15; // rcx
  __int64 i; // rbp
  _QWORD *v17; // rax
  _QWORD *v18; // r10
  __int64 v19; // r9
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rax
  _QWORD *v24; // rax
  __int64 v26; // [rsp+68h] [rbp+10h]

  v1 = a1;
  if ( !qword_140E2EC88 )
    return 0LL;
  v2 = qword_140E2EC88 + qword_140E2ECE8;
  if ( qword_140E2EC88 + qword_140E2ECE8 >= (unsigned __int64)qword_140E2EC88 )
  {
    while ( 1 )
    {
      if ( !v2 )
        return 0LL;
      if ( v2 > 0x1FFFFFFFFFFFFFFFLL
        || (v3 = 8 * v2 + 32, v3 <= 8 * v2)
        || (PoolMm = ExAllocatePoolMm(
                       64LL,
                       v3,
                       1631743309,
                       KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000),
            (v5 = (_QWORD *)PoolMm) == 0LL) )
      {
        *(_DWORD *)(v1 + 16) = -1073741670;
        return 3221225626LL;
      }
      v6 = PoolMm + 32;
      *(_QWORD *)(PoolMm + 24) = PoolMm + 32;
      if ( qword_140E2EC98 )
        break;
      v7 = ExAcquireSpinLockShared(&dword_140E2EC90);
      v8 = v7;
      if ( !qword_140E2EC98 && v2 >= qword_140E2ECE8 + qword_140E2EC88 )
      {
        v5[2] += MiEnumerateBadHugeRangePages(v6, v2, 2LL);
        v17 = (_QWORD *)qword_140E2EC80;
        v18 = 0LL;
        while ( v17 )
        {
          v18 = v17;
          v17 = (_QWORD *)*v17;
        }
        if ( v18 )
        {
          do
          {
            v19 = v18[3];
            *(_QWORD *)(v6 + 8LL * v5[2]) = ((v19 + 0x220000000000LL) / 48) ^ (*(_QWORD *)(v6 + 8LL * v5[2]) ^ ((v19 + 0x220000000000LL) / 48)) & 0xFFF0000000000000uLL;
            *(_QWORD *)(v6 + 8LL * v5[2]) |= 0x4000000000000000uLL;
            if ( *(int *)(v19 + 32) < 0 )
              *(_QWORD *)(v6 + 8LL * v5[2]) |= 0x8000000000000000uLL;
            ++v5[2];
            v20 = v18;
            v21 = (_QWORD *)v18[1];
            if ( v21 )
            {
              do
              {
                v18 = v21;
                v21 = (_QWORD *)*v21;
              }
              while ( v21 );
            }
            else
            {
              while ( 1 )
              {
                v18 = (_QWORD *)(v18[2] & 0xFFFFFFFFFFFFFFFCuLL);
                if ( !v18 || (_QWORD *)*v18 == v20 )
                  break;
                v20 = v18;
              }
            }
          }
          while ( v18 );
          v1 = a1;
        }
        if ( v8 == 17 )
          ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2EC90);
        else
          ExReleaseSpinLockShared(&dword_140E2EC90, v8);
LABEL_57:
        v22 = v5[2];
        if ( v22 )
        {
          *(_QWORD *)(v1 + 24) += v22;
          v24 = *(_QWORD **)(v1 + 8);
          if ( *v24 != v1 )
            __fastfail(3u);
          *v5 = v1;
          v5[1] = v24;
          *v24 = v5;
          *(_QWORD *)(v1 + 8) = v5;
        }
        else
        {
          ExFreePoolWithTag(v5, 0);
        }
        return 0LL;
      }
      if ( v7 == 17 )
        ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2EC90);
      else
        ExReleaseSpinLockShared(&dword_140E2EC90, v7);
      ExFreePoolWithTag(v5, 0);
LABEL_36:
      v2 = qword_140E2EC88 + qword_140E2ECE8;
      if ( qword_140E2EC88 + qword_140E2ECE8 < (unsigned __int64)qword_140E2EC88 )
        return 3221225626LL;
    }
    v9 = (unsigned int *)MiReferencePageRuns((__int64)&MiSystemPartition, 0);
    if ( !v9 )
    {
      *(_DWORD *)(v1 + 16) = -1073741670;
      ExFreePoolWithTag(v5, 0);
      return *(unsigned int *)(v1 + 16);
    }
    v10 = ExAcquireSpinLockShared(&dword_140E2EC90);
    v11 = MiEnumerateBadHugeRangePages(v6, v2, 2LL);
    if ( v10 == 17 )
      ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2EC90);
    else
      ExReleaseSpinLockShared(&dword_140E2EC90, v10);
    v12 = v11 + v5[2];
    v5[2] = v12;
    if ( v12 != v2 )
    {
      v13 = 0;
LABEL_20:
      if ( v13 < *v9 )
      {
        v14 = *(_QWORD *)&v9[4 * v13 + 4];
        v15 = *(_QWORD *)&v9[4 * v13 + 6];
        for ( i = 48 * v14 - 0x220000000000LL; ; i += 48LL )
        {
          v26 = v15;
          if ( !v15 )
            goto LABEL_34;
          if ( (*(_DWORD *)(i + 32) & 0x40000000) != 0 )
          {
            if ( (unsigned __int8)MiCheckLostBadPageNode(i) )
            {
              ExFreePoolWithTag(v5, 0);
              MiDereferencePageRuns((__int64)v9);
              goto LABEL_36;
            }
            *(_QWORD *)(v6 + 8LL * v5[2]) = v14 ^ (*(_QWORD *)(v6 + 8LL * v5[2]) ^ v14) & 0xFFF0000000000000uLL;
            if ( !MiIsPageOnBadList(i) )
              *(_QWORD *)(v6 + 8LL * v5[2]) |= 0x4000000000000000uLL;
            if ( *(int *)(i + 32) < 0 )
              *(_QWORD *)(v6 + 8LL * v5[2]) |= 0x8000000000000000uLL;
            if ( ++v5[2] == v2 )
            {
              v13 = *v9 - 1;
LABEL_34:
              ++v13;
              goto LABEL_20;
            }
            v15 = v26;
          }
          --v15;
          ++v14;
        }
      }
      v5[2] = MiSortPageFramesRemoveDuplicates(v6, v5[2]);
    }
    MiDereferencePageRuns((__int64)v9);
    goto LABEL_57;
  }
  return 3221225626LL;
}
