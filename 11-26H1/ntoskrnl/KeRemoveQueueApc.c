/*
 * XREFs of KeRemoveQueueApc @ 0x140460EE0
 * Callers:
 *     EtwpQueueApc @ 0x14020AAF0 (EtwpQueueApc.c)
 *     EtwpCancelPendingApcs @ 0x140460E00 (EtwpCancelPendingApcs.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1406CB674 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureCancelApcs @ 0x1406CC578 (EtwpCovSampCaptureCancelApcs.c)
 *     ExpCancelTimer @ 0x1406D2CE0 (ExpCancelTimer.c)
 *     PspCriticalProcessDeathInfoCollectScheduleApc @ 0x140800794 (PspCriticalProcessDeathInfoCollectScheduleApc.c)
 *     ExSwapinWorkerThreads @ 0x14094A380 (ExSwapinWorkerThreads.c)
 *     CmNotifyRunDown @ 0x14094BC20 (CmNotifyRunDown.c)
 * Callees:
 *     KiReleaseThreadLockLowerIrql @ 0x14030F2A0 (KiReleaseThreadLockLowerIrql.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x14030F3D0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiRemoveQueueApc @ 0x140460F30 (KiRemoveQueueApc.c)
 */

char __fastcall KeRemoveQueueApc(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  unsigned __int8 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = a1;
  v4 = 0;
  KiAcquireThreadLockRaiseToDpc(v1, &v4);
  LOBYTE(v2) = KiRemoveQueueApc(v2);
  KiReleaseThreadLockLowerIrql(v1, v4);
  return v2;
}
