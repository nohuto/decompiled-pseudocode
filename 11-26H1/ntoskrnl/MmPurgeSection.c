/*
 * XREFs of MmPurgeSection @ 0x14039E9D4
 * Callers:
 *     CcPurgeCacheSection @ 0x14039D060 (CcPurgeCacheSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiIncrementSubsectionViewCount @ 0x1402EDF10 (MiIncrementSubsectionViewCount.c)
 *     MiCheckControlArea @ 0x14036FA60 (MiCheckControlArea.c)
 *     MiDecrementSubsections @ 0x140370100 (MiDecrementSubsections.c)
 *     MiDecrementSubsectionViewCount @ 0x140370370 (MiDecrementSubsectionViewCount.c)
 *     MiInsertUnusedSubsectionInternal @ 0x1403704C4 (MiInsertUnusedSubsectionInternal.c)
 *     MiPurgeSubsection @ 0x1404199B0 (MiPurgeSubsection.c)
 *     MiComputeDataFlushRange @ 0x140480064 (MiComputeDataFlushRange.c)
 *     MiCanFileBeTruncatedInternal @ 0x1404A5164 (MiCanFileBeTruncatedInternal.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404CAB70 (MiReturnCrossPartitionSectionCharges.c)
 */

char __fastcall MmPurgeSection(SECTION_OBJECT_POINTERS *a1, ULONG_PTR *a2, __int64 a3, char a4, _BYTE *a5)
{
  ULONG_PTR *v7; // rbx
  __int64 CanFileBeTruncatedInternal; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  volatile LONG *v12; // rcx
  ULONG_PTR v13; // rax
  KIRQL v14; // r15
  ULONG_PTR v15; // rbx
  char v16; // si
  volatile LONG *v17; // rcx
  int v18; // eax
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r14
  __int64 v23; // rbx
  ULONG_PTR v24; // [rsp+30h] [rbp-41h] BYREF
  __int64 v25[2]; // [rsp+38h] [rbp-39h] BYREF
  __int128 v26; // [rsp+48h] [rbp-29h]
  __int64 v27; // [rsp+58h] [rbp-19h]
  __int128 v28; // [rsp+60h] [rbp-11h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+70h] [rbp-1h]
  ULONG_PTR v30[8]; // [rsp+80h] [rbp+Fh]
  __int64 v31; // [rsp+D8h] [rbp+67h]
  KIRQL OldIrql; // [rsp+E8h] [rbp+77h] BYREF

  v27 = 0LL;
  OldIrql = 0;
  v24 = 0LL;
  v7 = a2;
  *a5 = 0;
  v28 = 0LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  *(_OWORD *)v30 = 0LL;
  *(_OWORD *)v25 = 0LL;
  v26 = 0LL;
  if ( a2 )
  {
    v7 = &v24;
    v24 = *a2;
  }
  v31 = 0LL;
  CanFileBeTruncatedInternal = MiCanFileBeTruncatedInternal(a1, (__int64)&OldIrql);
  LOBYTE(v9) = OldIrql;
  v10 = CanFileBeTruncatedInternal;
  if ( OldIrql == 17 )
    return 0;
  if ( !CanFileBeTruncatedInternal )
    return 1;
  if ( (a4 & 1) == 0 && *(_DWORD *)(CanFileBeTruncatedInternal + 88) )
  {
    v12 = (volatile LONG *)(CanFileBeTruncatedInternal + 72);
LABEL_9:
    ExReleaseSpinLockExclusive(v12, OldIrql);
    return 0;
  }
  if ( !*(_QWORD *)(CanFileBeTruncatedInternal + 64) )
  {
    v12 = (volatile LONG *)(CanFileBeTruncatedInternal + 72);
    goto LABEL_9;
  }
  *(_DWORD *)(CanFileBeTruncatedInternal + 56) |= 0x8000u;
  if ( !(unsigned int)MiComputeDataFlushRange(CanFileBeTruncatedInternal, v9, v7, a3, 1, &v28) )
    return 1;
  v13 = *((_QWORD *)&v28 + 1);
  v14 = 17;
  v15 = BugCheckParameter2[1];
  v16 = 1;
  while ( 1 )
  {
    v24 = v13;
    if ( v14 == 17 )
      v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 72));
    if ( *(_QWORD *)(v15 + 8) )
      break;
    if ( v15 == v30[0] )
      goto LABEL_34;
LABEL_30:
    if ( v15 == v30[0] || !v16 )
      goto LABEL_34;
    v15 = *(_QWORD *)(v15 + 16);
    v13 = *(_QWORD *)(v15 + 8);
  }
  if ( !*(_DWORD *)(v15 + 108) )
  {
    MiIncrementSubsectionViewCount((__int64 *)v15, 0);
    v17 = (volatile LONG *)(v10 + 72);
    *(_DWORD *)(v15 + 32) |= 1u;
    if ( v14 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v17);
    else
      ExReleaseSpinLockExclusive(v17, v14);
    v18 = MiPurgeSubsection((struct _KTHREAD *)v15, v24, (__int64)v25);
    if ( LOBYTE(v25[1]) )
      *a5 = 1;
    if ( v18 == -1073741800 )
      v16 = 0;
    v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 72));
    MiDecrementSubsectionViewCount(v15, 0);
    if ( !*(_QWORD *)(v15 + 80) && (*(_DWORD *)(v15 + 32) & 0x10000) == 0 )
      v31 += MiInsertUnusedSubsectionInternal(v15, 0LL);
    goto LABEL_30;
  }
  v16 = 0;
LABEL_34:
  v19 = MiDecrementSubsections((_QWORD *)BugCheckParameter2[1], (_QWORD *)BugCheckParameter2[1], 0) + v31;
  v20 = MiDecrementSubsections((_QWORD *)v30[0], (_QWORD *)v30[0], 0);
  --*(_QWORD *)(v10 + 40);
  *(_DWORD *)(v10 + 56) &= ~4u;
  v22 = v20 + v19;
  if ( v22 )
    v23 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(v10 + 60) & 0x3FF));
  else
    v23 = 0LL;
  LOBYTE(v21) = v14;
  MiCheckControlArea(v10, v21);
  if ( v22 )
    MiReturnCrossPartitionSectionCharges(v23, 1LL, v22);
  return v16;
}
