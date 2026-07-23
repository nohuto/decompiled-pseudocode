/*
 * XREFs of MiMergeNewProcessAffinity @ 0x1404F8524
 * Callers:
 *     MiNodeZeroConductor @ 0x140B29DD0 (MiNodeZeroConductor.c)
 *     MiInitializeZeroEngines @ 0x140B2A06C (MiInitializeZeroEngines.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

void __fastcall MiMergeNewProcessAffinity(__int64 a1)
{
  __int64 v2; // r13
  volatile LONG *v3; // rbp
  KIRQL v4; // r14
  __int64 v5; // rsi
  unsigned int *v6; // rbx
  unsigned __int16 *v7; // rdi
  unsigned int i; // r8d

  v2 = *(_QWORD *)(a1 + 48);
  v3 = (volatile LONG *)(56320LL * *(unsigned int *)(a1 + 56) + 14200 + *(_QWORD *)(v2 + 16));
  v4 = ExAcquireSpinLockExclusive(v3);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v2 + 17376));
  v5 = 0LL;
  v6 = (unsigned int *)(a1 + 248);
  do
  {
    if ( v5 )
    {
      if ( *((_QWORD *)v6 + 15) )
      {
        v7 = (unsigned __int16 *)*((_QWORD *)v6 + 13);
        memmove(v7, *((const void **)v6 + 10), 16LL * *v6);
        for ( i = 0; i < *v6; v7 += 8 )
        {
          ++i;
          *(_QWORD *)v7 &= *(_QWORD *)(v2 + 8LL * v7[4] + 17400);
        }
      }
    }
    ++v5;
    v6 += 126;
  }
  while ( v5 < 3 );
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v2 + 17376));
  if ( v4 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  else
    ExReleaseSpinLockExclusive(v3, v4);
}
