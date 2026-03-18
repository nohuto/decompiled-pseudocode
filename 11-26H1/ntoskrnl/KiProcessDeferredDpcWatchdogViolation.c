/*
 * XREFs of KiProcessDeferredDpcWatchdogViolation @ 0x14032D1E8
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x14032D7C0 (KiCallInterruptServiceRoutine.c)
 * Callees:
 *     VslKernelShadowStackAssist @ 0x140368500 (VslKernelShadowStackAssist.c)
 */

void (__fastcall __noreturn *__fastcall KiProcessDeferredDpcWatchdogViolation(__int64 a1))()
{
  void (__fastcall __noreturn *result)(); // rax

  KsepShimDbLock.MutantListHead.Blink = (struct _LIST_ENTRY *)1;
  *(_OWORD *)&KsepShimDbLock.SchedulerApcFill5[80] = 0LL;
  KsepShimDbLock.SuspendEvent.Header.WaitListHead = 0LL;
  KsepShimDbLock.ThreadListEntry = 0LL;
  LOWORD(KsepShimDbLock.ThreadListEntry.Flink) = *(_WORD *)(a1 + 392);
  KsepShimDbLock.SuspendEvent.Header.WaitListHead.Blink = *(struct _LIST_ENTRY **)(a1 + 384);
  LODWORD(KsepShimDbLock.SuspendEvent.Header.WaitListHead.Flink) = *(_DWORD *)(a1 + 376);
  LOWORD(KsepShimDbLock.SuspendEvent.Header.Lock) = *(_WORD *)(a1 + 368);
  *(_QWORD *)&KsepShimDbLock.SchedulerApcFill5[80] = *(_QWORD *)(a1 + 360);
  KsepShimDbLock.ThreadListEntry.Blink = *(struct _LIST_ENTRY **)(a1 + 56);
  *(_QWORD *)(a1 + 56) = &KsepShimDbLock.SchedulerApcFill5[80];
  result = KiDeferredDpcWatchdogViolation;
  *(_QWORD *)(a1 + 360) = KiDeferredDpcWatchdogViolation;
  if ( (_BYTE)KiKernelCetEnabled )
    return (void (__fastcall __noreturn *)())VslKernelShadowStackAssist(
                                               3,
                                               *(_QWORD *)(a1 + 216),
                                               0,
                                               0,
                                               (__int64)KiDeferredDpcWatchdogViolation,
                                               4);
  return result;
}
