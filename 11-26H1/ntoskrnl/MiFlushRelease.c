/*
 * XREFs of MiFlushRelease @ 0x14036F2C0
 * Callers:
 *     MmFlushSection @ 0x14039C7A0 (MmFlushSection.c)
 *     MiFreeOverlappedFlushEntry @ 0x1403CBAA8 (MiFreeOverlappedFlushEntry.c)
 *     MmTrimSection @ 0x14045DEB0 (MmTrimSection.c)
 *     MiCommitFileBackedSection @ 0x140A65DF8 (MiCommitFileBackedSection.c)
 *     MmFlushVirtualMemory @ 0x140A69F30 (MmFlushVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x14036FA60 (MiCheckControlArea.c)
 *     MiDecrementSubsectionViewCount @ 0x140370370 (MiDecrementSubsectionViewCount.c)
 *     MiInsertUnusedSubsectionInternal @ 0x1403704C4 (MiInsertUnusedSubsectionInternal.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404CAB70 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiFlushRelease(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 v3; // rsi
  __int64 v6; // r15
  __int64 v7; // rbx
  KIRQL v8; // al
  ULONG_PTR v9; // rbx
  int v10; // edi
  unsigned int v11; // ecx
  BOOL v12; // r13d
  unsigned int v13; // ebp
  ULONG_PTR v14; // rbx
  BOOL v15; // r14d
  int v16; // ebp
  __int64 result; // rax
  __int64 v18; // [rsp+20h] [rbp-48h]
  KIRQL v20; // [rsp+78h] [rbp+10h]
  __int64 v21; // [rsp+88h] [rbp+20h]

  v3 = 0LL;
  v6 = a1;
  v7 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (*(_DWORD *)(a1 + 60) & 0x3FF));
  v18 = v7;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v20 = v8;
  if ( a2 )
  {
    v9 = a2;
    v10 = 512;
    v21 = 0LL;
    v11 = 512;
    v12 = *(_QWORD *)(*(_QWORD *)a2 + 64LL) != 0LL;
    do
    {
      v13 = v11;
      if ( *(_QWORD *)(v9 + 8) )
      {
        v21 += MiDecrementSubsectionViewCount(v9);
        if ( v12 )
        {
          if ( !*(_QWORD *)(v9 + 80) && (*(_DWORD *)(v9 + 32) & 0x10000) == 0 )
            v21 += MiInsertUnusedSubsectionInternal(v9, 0LL);
        }
      }
      if ( v9 == a2 )
        break;
      v9 = *(_QWORD *)(v9 + 16);
      v11 = v13 & 0xFFFFFFFB;
      if ( v12 )
        v11 = v13;
    }
    while ( v9 );
    v6 = a1;
    v14 = a3;
    v15 = *(_QWORD *)(*(_QWORD *)a3 + 64LL) != 0LL;
    do
    {
      v16 = v10;
      if ( *(_QWORD *)(v14 + 8) )
      {
        v3 += MiDecrementSubsectionViewCount(v14);
        if ( v15 )
        {
          if ( !*(_QWORD *)(v14 + 80) && (*(_DWORD *)(v14 + 32) & 0x10000) == 0 )
            v3 += MiInsertUnusedSubsectionInternal(v14, 0LL);
        }
      }
      if ( v14 == a3 )
        break;
      v14 = *(_QWORD *)(v14 + 16);
      v10 &= ~4u;
      if ( v15 )
        v10 = v16;
    }
    while ( v14 );
    v3 += v21;
    v8 = v20;
    v7 = v18;
  }
  --*(_QWORD *)(v6 + 40);
  result = MiCheckControlArea(v6, v8);
  if ( v3 )
    return MiReturnCrossPartitionSectionCharges(v7, 1LL, v3);
  return result;
}
