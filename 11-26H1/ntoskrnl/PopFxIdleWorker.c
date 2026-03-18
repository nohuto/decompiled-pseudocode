/*
 * XREFs of PopFxIdleWorker @ 0x140395300
 * Callers:
 *     PopFxIdleComponent @ 0x140395020 (PopFxIdleComponent.c)
 *     PopFxComponentWork @ 0x140395280 (PopFxComponentWork.c)
 * Callees:
 *     PopFxAddLogEntry @ 0x14021A640 (PopFxAddLogEntry.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxDeviceCriticalRegionEnter @ 0x1403955A8 (PopFxDeviceCriticalRegionEnter.c)
 *     PopFxDeviceCriticalRegionLeave @ 0x1403955D8 (PopFxDeviceCriticalRegionLeave.c)
 *     PopFxIdleWorkerTail @ 0x140395604 (PopFxIdleWorkerTail.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopFxIdleWorker(__int64 *BugCheckParameter2, unsigned int a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  __int64 v6; // r8
  char v7; // di

  v4 = *(_QWORD *)(BugCheckParameter2[109] + 8LL * a2);
  PopFxDeviceCriticalRegionEnter();
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 128));
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 88), 0x40000000, 0x80000000) != 0x80000000 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 128), v5);
    return PopFxDeviceCriticalRegionLeave(BugCheckParameter2);
  }
  KeResetEvent((PRKEVENT)(v4 + 104));
  *(_DWORD *)(v4 + 136) = 2;
  v7 = 0;
  if ( BugCheckParameter2[15] )
  {
    guard_dispatch_icall_no_overrides(BugCheckParameter2[24], a2, v6);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 136), 0xFFFFFFFF) != 1 )
    {
      PopFxAddLogEntry(BugCheckParameter2[6], a2, 13, 0LL);
      goto LABEL_5;
    }
  }
  else
  {
    _InterlockedAdd((volatile signed __int32 *)(v4 + 136), 0xFFFFFFFE);
  }
  v7 = 1;
LABEL_5:
  KxReleaseSpinLock((PKSPIN_LOCK)(v4 + 128));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
  __writecr8(v5);
  if ( v7 )
    PopFxIdleWorkerTail((ULONG_PTR)BugCheckParameter2);
  return PopFxDeviceCriticalRegionLeave(BugCheckParameter2);
}
