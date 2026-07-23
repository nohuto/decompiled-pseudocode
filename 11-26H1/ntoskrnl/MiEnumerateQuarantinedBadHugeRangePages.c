/*
 * XREFs of MiEnumerateQuarantinedBadHugeRangePages @ 0x14052FA68
 * Callers:
 *     MmEnumerateBadPages @ 0x140B6099C (MmEnumerateBadPages.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiEnumerateBadHugeRangePages @ 0x1406F0104 (MiEnumerateBadHugeRangePages.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiEnumerateQuarantinedBadHugeRangePages(__int64 a1)
{
  unsigned __int64 v1; // rsi
  ULONG_PTR v3; // rdx
  _QWORD *PoolMm; // rbx
  KIRQL v5; // al
  KIRQL v6; // bp
  __int64 v7; // rsi
  _QWORD *v8; // rax

  v1 = qword_140E2ECE8;
  if ( qword_140E2ECE8 )
  {
    while ( 1 )
    {
      if ( v1 > 0x1FFFFFFFFFFFFFFFLL
        || (v3 = 8 * v1 + 32, v3 <= 8 * v1)
        || (PoolMm = (_QWORD *)ExAllocatePoolMm(
                                 64LL,
                                 v3,
                                 1631743309,
                                 KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000)) == 0LL )
      {
        *(_DWORD *)(a1 + 16) = -1073741670;
        return;
      }
      v5 = ExAcquireSpinLockShared(&dword_140E2EC90);
      v6 = v5;
      if ( v1 >= qword_140E2ECE8 )
        break;
      if ( v5 == 17 )
        ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2EC90);
      else
        ExReleaseSpinLockShared(&dword_140E2EC90, v5);
      ExFreePoolWithTag(PoolMm, 0);
      v1 = qword_140E2ECE8;
      if ( !qword_140E2ECE8 )
        return;
    }
    PoolMm[3] = PoolMm + 4;
    v7 = MiEnumerateBadHugeRangePages(PoolMm + 4, v1, 1LL);
    if ( v6 == 17 )
      ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2EC90);
    else
      ExReleaseSpinLockShared(&dword_140E2EC90, v6);
    if ( v7 )
    {
      PoolMm[2] = v7;
      *(_QWORD *)(a1 + 24) += v7;
      v8 = *(_QWORD **)(a1 + 8);
      if ( *v8 != a1 )
        __fastfail(3u);
      *PoolMm = a1;
      PoolMm[1] = v8;
      *v8 = PoolMm;
      *(_QWORD *)(a1 + 8) = PoolMm;
    }
    else
    {
      ExFreePoolWithTag(PoolMm, 0);
    }
  }
}
