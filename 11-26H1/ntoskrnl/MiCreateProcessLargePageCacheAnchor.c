/*
 * XREFs of MiCreateProcessLargePageCacheAnchor @ 0x140528BB4
 * Callers:
 *     MiAllocateLargeProcessPagesFromCache @ 0x1402F278C (MiAllocateLargeProcessPagesFromCache.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateProcessLargePageCacheAnchor(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rdi
  void *v4; // rsi
  volatile _KAFFINITY_EX *ActiveProcessors; // r14
  KIRQL v6; // r15
  _QWORD *v7; // rcx
  volatile LONG *v8; // rcx

  result = ExAllocatePoolMm(
             64LL,
             192LL * (unsigned __int16)KeNumberNodes + 32,
             1884055885,
             KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  v3 = (_QWORD *)result;
  if ( result )
  {
    v4 = 0LL;
    ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
    *(_QWORD *)(result + 16) = (char *)ActiveProcessors + 896;
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 16832));
    if ( ActiveProcessors[4].StaticBitmap[14] )
    {
      v4 = v3;
      v3 = (_QWORD *)ActiveProcessors[4].StaticBitmap[14];
    }
    else
    {
      ActiveProcessors[4].StaticBitmap[14] = (unsigned __int64)v3;
    }
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)&ActiveProcessors[4].StaticBitmap[15]);
    v7 = *(_QWORD **)(a1 + 16848);
    if ( *v7 != a1 + 16840 )
      __fastfail(3u);
    v3[1] = v7;
    *v3 = a1 + 16840;
    *v7 = v3;
    *(_QWORD *)(a1 + 16848) = v3;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&ActiveProcessors[4].StaticBitmap[15]);
    v8 = (volatile LONG *)(a1 + 16832);
    if ( v6 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v8);
    else
      ExReleaseSpinLockExclusive(v8, v6);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    return (__int64)v3;
  }
  return result;
}
