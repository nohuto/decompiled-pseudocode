/*
 * XREFs of TtmpInitiateModernStandbyTransition @ 0x1407E703C
 * Callers:
 *     TtmpActivateSessionWorker @ 0x1407E6CBC (TtmpActivateSessionWorker.c)
 *     TtmpSessionWorker @ 0x1407E7560 (TtmpSessionWorker.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     PoTtmInitiatePowerStateTransition @ 0x1407DB808 (PoTtmInitiatePowerStateTransition.c)
 *     TtmiLogInitiateModernStandbyTransitionStart @ 0x1407E99A8 (TtmiLogInitiateModernStandbyTransitionStart.c)
 *     TtmiLogInitiateModernStandbyTransitionStop @ 0x1407E9A84 (TtmiLogInitiateModernStandbyTransitionStop.c)
 *     TtmpAcquireSessionLock @ 0x140A3ACCC (TtmpAcquireSessionLock.c)
 */

__int64 __fastcall TtmpInitiateModernStandbyTransition(__int64 a1, char a2, unsigned int a3)
{
  __int64 v4; // rsi
  unsigned int v6; // ebx

  v4 = a1;
  LOBYTE(a1) = a2;
  TtmiLogInitiateModernStandbyTransitionStart(a1, a3);
  *(_QWORD *)(v4 + 232) = 0LL;
  ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WriteOperationCount);
  KeLeaveCriticalRegion();
  v6 = PoTtmInitiatePowerStateTransition(a2, a3);
  TtmpAcquireSessionLock();
  *(_QWORD *)(v4 + 232) = KeGetCurrentThread();
  TtmiLogInitiateModernStandbyTransitionStop(v6);
  return v6;
}
