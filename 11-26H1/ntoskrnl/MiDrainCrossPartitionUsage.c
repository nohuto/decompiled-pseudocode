/*
 * XREFs of MiDrainCrossPartitionUsage @ 0x1406F51F0
 * Callers:
 *     MiDeletePartition @ 0x14086F1C4 (MiDeletePartition.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x140484BD0 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     ExRundownCompletedCacheAware @ 0x140487360 (ExRundownCompletedCacheAware.c)
 *     MiDecrementControlAreaCount @ 0x1404A9360 (MiDecrementControlAreaCount.c)
 *     MiDecrementCloneHeaderCount @ 0x140506AAC (MiDecrementCloneHeaderCount.c)
 *     CcExitPartition @ 0x1405B4ED4 (CcExitPartition.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1406EC344 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiStoreDeletePartition @ 0x14070EF98 (MiStoreDeletePartition.c)
 *     SmDeletePartition @ 0x14081EF20 (SmDeletePartition.c)
 */

void __fastcall MiDrainCrossPartitionUsage(__int64 a1)
{
  volatile LONG *v2; // rbx
  KIRQL v3; // r14
  KIRQL v4; // r14
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  volatile LONG *v7; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v8; // rcx
  struct _KEVENT Object; // [rsp+30h] [rbp-20h] BYREF

  *(_QWORD *)&Object.Header.Lock = 393216LL;
  Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
  Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
  v2 = (volatile LONG *)(a1 + 2112);
  v3 = ExAcquireSpinLockExclusive(&dword_140E2ED00);
  ExAcquireSpinLockExclusiveAtDpcLevel(v2);
  _InterlockedOr((volatile signed __int32 *)(a1 + 4), 1u);
  *(_QWORD *)(a1 + 3160) = &Object;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 2112));
  if ( v3 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2ED00);
  else
    ExReleaseSpinLockExclusive(&dword_140E2ED00, v3);
  MiDecrementControlAreaCount(a1, (volatile signed __int64 *)(a1 + 2128));
  MiDecrementControlAreaCount(a1, (volatile signed __int64 *)(a1 + 2120));
  MiMakeUnusedSegmentDeleteOnClose(a1);
  CcExitPartition(*(_QWORD **)(a1 + 256), 0);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 2112));
  v5 = (_QWORD *)(a1 + 3088);
  v6 = 7LL;
  while ( !*v5 )
  {
    ++v6;
    v5 += 4;
    if ( v6 >= 9 )
      goto LABEL_9;
  }
  KeResetEvent(&Object);
  *(_QWORD *)(a1 + 3152) = &Object;
LABEL_9:
  v7 = (volatile LONG *)(a1 + 2112);
  if ( v4 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  else
    ExReleaseSpinLockExclusive(v7, v4);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  KeResetEvent(&Object);
  *(_QWORD *)(a1 + 3168) = &Object;
  MiDecrementCloneHeaderCount(a1);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  CcExitPartition(*(_QWORD **)(a1 + 256), 1);
  MiStoreDeletePartition(a1);
  SmDeletePartition(*(_QWORD *)(a1 + 256));
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 22152));
  _InterlockedExchange64((volatile __int64 *)(a1 + 22152), 1LL);
  v8 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 3176);
  if ( v8 )
  {
    ExWaitForRundownProtectionReleaseCacheAware(v8);
    ExRundownCompletedCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 3176));
  }
}
