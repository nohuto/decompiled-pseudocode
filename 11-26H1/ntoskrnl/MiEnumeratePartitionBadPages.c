/*
 * XREFs of MiEnumeratePartitionBadPages @ 0x1406F5B80
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiEnumeratePartitionBadPages(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 i; // rbp
  ULONG_PTR v5; // rdx
  unsigned __int64 *PoolMm; // rbx
  volatile LONG *v7; // rdi
  KIRQL v8; // dl
  unsigned __int64 v9; // rax
  volatile LONG *v10; // rcx
  unsigned __int64 *v11; // rcx
  __int64 v12; // r8
  unsigned __int64 **v13; // rax
  volatile LONG *v14; // rcx

  for ( i = *(_QWORD *)(a1 + 7440); i; i = *(_QWORD *)(a1 + 7440) )
  {
    if ( i > 0x1FFFFFFFFFFFFFFFLL
      || (v5 = 8 * i + 32, v5 <= 8 * i)
      || (PoolMm = (unsigned __int64 *)ExAllocatePoolMm(
                                         64LL,
                                         v5,
                                         1631743309,
                                         KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000)) == 0LL )
    {
      *(_DWORD *)(a2 + 16) = -1073741670;
      return;
    }
    v7 = (volatile LONG *)(a1 + 7456);
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 7456));
    v9 = *(_QWORD *)(a1 + 7440);
    if ( !v9 )
    {
      v14 = (volatile LONG *)(a1 + 7456);
      if ( v8 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v14);
      else
        ExReleaseSpinLockExclusive(v14, v8);
      ExFreePoolWithTag(PoolMm, 0);
      return;
    }
    if ( i >= v9 )
    {
      v11 = PoolMm + 4;
      PoolMm[2] = *(_QWORD *)(a1 + 7440);
      PoolMm[3] = (unsigned __int64)(PoolMm + 4);
      v12 = *(_QWORD *)(a1 + 7424);
      if ( v12 != 0x3FFFFFFFFFLL )
      {
        do
        {
          *v11 = v12 ^ (*v11 ^ v12) & 0xFFF0000000000000uLL;
          if ( *(int *)(48 * v12 - 0x220000000000LL + 32) < 0 )
            *v11 |= 0x8000000000000000uLL;
          v12 = *(_QWORD *)(48 * v12 - 0x220000000000LL) & 0xFFFFFFFFFFLL;
          ++v11;
        }
        while ( v12 != 0x3FFFFFFFFFLL );
        v7 = (volatile LONG *)(a1 + 7456);
      }
      if ( v8 == 17 )
        ExReleaseSpinLockExclusiveFromDpcLevel(v7);
      else
        ExReleaseSpinLockExclusive(v7, v8);
      *(_QWORD *)(a2 + 24) += PoolMm[2];
      v13 = *(unsigned __int64 ***)(a2 + 8);
      if ( *v13 != (unsigned __int64 *)a2 )
        __fastfail(3u);
      *PoolMm = a2;
      PoolMm[1] = (unsigned __int64)v13;
      *v13 = PoolMm;
      *(_QWORD *)(a2 + 8) = PoolMm;
      return;
    }
    v10 = (volatile LONG *)(a1 + 7456);
    if ( v8 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    else
      ExReleaseSpinLockExclusive(v10, v8);
    ExFreePoolWithTag(PoolMm, 0);
  }
}
