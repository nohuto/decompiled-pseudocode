/*
 * XREFs of KeRemoveQueueApc @ 0x140467790
 * Callers:
 *     EtwpQueueApc @ 0x14020AA10 (EtwpQueueApc.c)
 *     EtwpCancelPendingApcs @ 0x1404676B0 (EtwpCancelPendingApcs.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1405291D8 (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureCancelApcs @ 0x1406C8598 (EtwpCovSampCaptureCancelApcs.c)
 *     ExpCancelTimer @ 0x1406CECB0 (ExpCancelTimer.c)
 *     PspCriticalProcessDeathInfoCollectScheduleApc @ 0x1407FAD64 (PspCriticalProcessDeathInfoCollectScheduleApc.c)
 *     ExSwapinWorkerThreads @ 0x140956958 (ExSwapinWorkerThreads.c)
 *     CmNotifyRunDown @ 0x140ABE29C (CmNotifyRunDown.c)
 * Callees:
 *     KiReleaseThreadLockLowerIrql @ 0x1402C45E0 (KiReleaseThreadLockLowerIrql.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402C4710 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiRemoveQueueApc @ 0x1404677E0 (KiRemoveQueueApc.c)
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
