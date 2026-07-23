/*
 * XREFs of MiReleasePartitionHugeIoSpace @ 0x1406F2314
 * Callers:
 *     MiReturnPartitionPagesToParent @ 0x14070E56C (MiReturnPartitionPagesToParent.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x1406F1D1C (MiMoveBadHugeRangeCrossPartition.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140B632C4 (MiAllocatePartitionPhysicalPages.c)
 */

void __fastcall MiReleasePartitionHugeIoSpace(ULONG_PTR BugCheckParameter2)
{
  unsigned __int16 *v2; // rsi
  __int64 v3; // r8
  KIRQL v4; // al
  _QWORD *v5; // rcx
  KIRQL v6; // r8
  _QWORD *v7; // rdx
  _QWORD **v8; // rcx
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  _QWORD *i; // rcx
  _QWORD *j; // rax
  __int64 v13; // rdi
  ULONG_PTR v14; // r9

  v2 = **(unsigned __int16 ***)(*(_QWORD *)(BugCheckParameter2 + 256) + 72LL);
  do
  {
    v3 = *(_QWORD *)(BugCheckParameter2 + 17048);
    if ( v3 )
      MiAllocatePartitionPhysicalPages(BugCheckParameter2, (_DWORD)v2, (_DWORD)v3 << 18, 0, 769);
    v4 = ExAcquireSpinLockShared(&dword_140E2EC90);
    v5 = (_QWORD *)qword_140E2ECE0;
    v6 = v4;
    v7 = 0LL;
    while ( v5 )
    {
      v7 = v5;
      v5 = (_QWORD *)*v5;
    }
    while ( v7 )
    {
      v8 = (_QWORD **)v7[1];
      v9 = v7;
      v10 = v7;
      if ( v8 )
      {
        v7 = (_QWORD *)v7[1];
        for ( i = *v8; i; i = (_QWORD *)*i )
          v7 = i;
      }
      else
      {
        while ( 1 )
        {
          v7 = (_QWORD *)(v7[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v7 || (_QWORD *)*v7 == v10 )
            break;
          v10 = v7;
        }
      }
      if ( ((*(_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8LL * (v9[3] & 0x3FFFFF)) >> 4) & 0x7FFLL) == *(_WORD *)BugCheckParameter2 )
      {
        if ( v6 == 17 )
          ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2EC90);
        else
          ExReleaseSpinLockShared(&dword_140E2EC90, v6);
        MiMoveBadHugeRangeCrossPartition(v9[3], (_WORD *)BugCheckParameter2, v2);
        v6 = ExAcquireSpinLockShared(&dword_140E2EC90);
        v7 = 0LL;
        for ( j = (_QWORD *)qword_140E2ECE0; j; j = (_QWORD *)*j )
          v7 = j;
      }
    }
    v13 = *(_QWORD *)(BugCheckParameter2 + 17048);
    if ( v6 == 17 )
      ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2EC90);
    else
      ExReleaseSpinLockShared(&dword_140E2EC90, v6);
  }
  while ( v13 );
  v14 = *(_QWORD *)(BugCheckParameter2 + 496);
  if ( v14 )
    KeBugCheckEx(0x1Au, 0x4100AuLL, BugCheckParameter2, v14, *(_QWORD *)(BugCheckParameter2 + 17048));
}
