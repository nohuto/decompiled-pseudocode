/*
 * XREFs of IopEnableTimer @ 0x1405CD05C
 * Callers:
 *     IoStartTimer @ 0x1405CDD50 (IoStartTimer.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219CA0 (KeSetCoalescableTimer.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwTraceIoTimerEvent @ 0x1406C864C (EtwTraceIoTimerEvent.c)
 */

void __fastcall IopEnableTimer(__int64 a1)
{
  KIRQL v2; // di

  v2 = KeAcquireSpinLockRaiseToDpc(&IopTimerLock);
  if ( !*(_WORD *)(a1 + 2) )
  {
    if ( !*(_DWORD *)&IopPerfIoTrackingLock.WaitBlockFill11[80] )
      KeSetCoalescableTimer(
        (PKTIMER)&IopPerfIoTrackingLock.WaitBlockFill11[160],
        (LARGE_INTEGER)-10000000LL,
        0x3E8u,
        0x23u,
        (PKDPC)&IopPerfIoTrackingLock.WaitBlockFill11[96]);
    ++*(_DWORD *)&IopPerfIoTrackingLock.WaitBlockFill11[80];
    *(_WORD *)(a1 + 2) = 1;
  }
  KeReleaseSpinLock(&IopTimerLock, v2);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x800000) != 0 )
    EtwTraceIoTimerEvent(3933LL, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 24));
}
