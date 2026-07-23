/*
 * XREFs of MiEnforcePartitionAffinity @ 0x140501548
 * Callers:
 *     MiInitializeAffinityWalker @ 0x1407163EC (MiInitializeAffinityWalker.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     PsQueryProcessAvailableCpus @ 0x140535050 (PsQueryProcessAvailableCpus.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiEnforcePartitionAffinity(__int64 a1, unsigned int *a2)
{
  volatile LONG *v2; // rbp
  unsigned int v5; // esi
  __int64 v6; // r12
  volatile LONG *v7; // rcx
  KIRQL v8; // r14
  __int64 v9; // r8
  int i; // edx
  __int64 v11; // r8
  unsigned int v12; // r9d
  unsigned int j; // r10d
  unsigned __int64 v14; // rax
  unsigned int v15; // eax

  v2 = (volatile LONG *)(a1 + 17376);
  v5 = 0;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 120LL);
  v7 = (volatile LONG *)(a1 + 17376);
  if ( KeGetCurrentIrql() == 2 )
  {
    v8 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v7);
  }
  else
  {
    v8 = ExAcquireSpinLockExclusive(v7);
  }
  v9 = (unsigned __int16)KiMaximumGroups;
  *(_WORD *)(a1 + 17394) = KiMaximumGroups;
  *(_WORD *)(a1 + 17392) = 1;
  *(_DWORD *)(a1 + 17396) = 0;
  memset_0((void *)(a1 + 17400), 0, 8 * v9);
  PsQueryProcessAvailableCpus(v6, a1 + 17392, 0LL, a1 + 17384);
  for ( i = 0; i < 3; ++i )
  {
    while ( 1 )
    {
      v11 = *((_QWORD *)a2 + 2);
      if ( !v11 )
        goto LABEL_13;
      if ( i )
        break;
      v5 += *a2;
      i = 1;
      a2 += 8;
    }
    v12 = 0;
    for ( j = 0; j < a2[3]; v12 += __popcnt(v14) )
    {
      ++j;
      *(_QWORD *)v11 &= *(_QWORD *)(a1 + 8LL * *(unsigned __int16 *)(v11 + 8) + 17400);
      v14 = *(_QWORD *)v11;
      v11 += 16LL;
    }
    v15 = *a2;
    if ( *a2 > v12 )
    {
      *a2 = v12;
      v15 = v12;
    }
    v5 += v15;
LABEL_13:
    a2 += 8;
  }
  if ( v8 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  else
    ExReleaseSpinLockExclusive(v2, v8);
  return v5;
}
