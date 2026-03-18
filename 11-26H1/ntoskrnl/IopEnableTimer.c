/*
 * XREFs of IopEnableTimer @ 0x1405CA78C
 * Callers:
 *     IoStartTimer @ 0x1405CB480 (IoStartTimer.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219B40 (KeSetCoalescableTimer.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwTraceIoTimerEvent @ 0x1406C4A0C (EtwTraceIoTimerEvent.c)
 */

void __fastcall IopEnableTimer(__int64 a1)
{
  KIRQL v2; // di

  v2 = KeAcquireSpinLockRaiseToDpc(&IopTimerLock);
  if ( !*(_WORD *)(a1 + 2) )
  {
    if ( !IopTimerCount )
      KeSetCoalescableTimer(&qword_140F85400, (LARGE_INTEGER)-10000000LL, 0x3E8u, 0x23u, &dword_140F85440);
    ++IopTimerCount;
    *(_WORD *)(a1 + 2) = 1;
  }
  KeReleaseSpinLock(&IopTimerLock, v2);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x800000) != 0 )
    EtwTraceIoTimerEvent(3933LL, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 24));
}
