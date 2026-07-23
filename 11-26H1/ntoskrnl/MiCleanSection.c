/*
 * XREFs of MiCleanSection @ 0x1404D9074
 * Callers:
 *     MiCheckControlArea @ 0x14036FA60 (MiCheckControlArea.c)
 *     MiAttemptSectionDelete @ 0x1404B8D88 (MiAttemptSectionDelete.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInsertUnusedSegment @ 0x14047A120 (MiInsertUnusedSegment.c)
 *     MiMarkControlAreaDeleted @ 0x140486A28 (MiMarkControlAreaDeleted.c)
 *     MiFlushSection @ 0x1404A70A8 (MiFlushSection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404CAB70 (MiReturnCrossPartitionSectionCharges.c)
 *     MiDestroySection @ 0x1404E0004 (MiDestroySection.c)
 */

__int64 __fastcall MiCleanSection(__int64 a1, __int128 *a2, char a3)
{
  int v3; // eax
  BOOL v4; // r13d
  KIRQL v5; // di
  int v7; // r14d
  volatile LONG *v8; // r15
  ULONG_PTR v9; // r12
  __int128 **v10; // rsi
  int v11; // r12d
  KIRQL v12; // al
  __int128 *v13; // rcx
  __int128 *v14; // rax
  volatile LONG *v15; // rcx
  unsigned __int64 inserted; // rsi
  __int64 v17; // rbx
  __int64 v19; // [rsp+28h] [rbp-58h]
  __int128 v20; // [rsp+40h] [rbp-40h] BYREF
  __int128 v21; // [rsp+50h] [rbp-30h] BYREF
  __int128 v22; // [rsp+60h] [rbp-20h]
  __int128 v23; // [rsp+70h] [rbp-10h] BYREF

  v3 = *(_DWORD *)(a1 + 56);
  v4 = *(_QWORD *)(a1 + 64) != 0LL;
  v5 = (unsigned __int8)a2;
  v7 = 1;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( (v3 & 0x20) != 0 )
  {
LABEL_13:
    LOBYTE(a2) = v5;
    *(_QWORD *)(a1 + 40) = 0LL;
    MiMarkControlAreaDeleted(a1, (__int64)a2);
    v15 = (volatile LONG *)(a1 + 72);
    if ( v5 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v15);
    else
      ExReleaseSpinLockExclusive(v15, v5);
    MiDestroySection(a1);
    return 1LL;
  }
  else
  {
    v8 = (volatile LONG *)(a1 + 72);
    v9 = a1 + 128;
    v10 = (__int128 **)(a1 + 80);
    while ( 1 )
    {
      *((_QWORD *)&v21 + 1) = 4LL;
      *((_QWORD *)&v23 + 1) = &v23;
      *(_QWORD *)&v23 = &v23;
      *(_QWORD *)&v21 = *v10;
      *v10 = &v21;
      WORD4(v22) = 263;
      BYTE10(v22) = 6;
      HIDWORD(v22) = 0;
      if ( v5 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      else
        ExReleaseSpinLockExclusive(v8, v5);
      LODWORD(v19) = 0x80000000;
      v11 = MiFlushSection(0LL, 0LL, v9, 0LL, 0LL, v19, 0LL, &v20);
      v12 = ExAcquireSpinLockExclusive(v8);
      v13 = *v10;
      v5 = v12;
      a2 = (__int128 *)v10;
      v14 = *(__int128 **)*v10;
      while ( v13 != &v21 )
      {
        a2 = v13;
        v13 = v14;
        v14 = *(__int128 **)v14;
      }
      *(_QWORD *)a2 = v14;
      if ( !HIDWORD(v21) )
        break;
      if ( *(_QWORD *)(a1 + 40) != 1LL || *(_QWORD *)(a1 + 24) )
        goto LABEL_17;
      v9 = a1 + 128;
      if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
        goto LABEL_13;
    }
    if ( v11 >= 0 )
      goto LABEL_13;
    v7 = 2;
LABEL_17:
    --*(_QWORD *)(a1 + 40);
    if ( a3 )
      *(_DWORD *)(a1 + 56) |= 0x40000u;
    inserted = 0LL;
    if ( v7 == 2 && (inserted = MiInsertUnusedSegment(a1)) != 0 )
      v17 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(a1 + 60) & 0x3FF));
    else
      v17 = 0LL;
    if ( v5 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v8);
    else
      ExReleaseSpinLockExclusive(v8, v5);
    if ( inserted )
      MiReturnCrossPartitionSectionCharges(v17, v4, inserted);
    return 0LL;
  }
}
