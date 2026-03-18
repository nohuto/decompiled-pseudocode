/*
 * XREFs of TtmpSessionPowerControl @ 0x1407E74D4
 * Callers:
 *     TtmpActivateSessionWorker @ 0x1407E6CBC (TtmpActivateSessionWorker.c)
 *     TtmpSessionWorker @ 0x1407E7560 (TtmpSessionWorker.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     PoSessionPowerControl @ 0x1407DDF6C (PoSessionPowerControl.c)
 *     TtmiLogSessionPowerControlStart @ 0x1407EA4FC (TtmiLogSessionPowerControlStart.c)
 *     TtmiLogSessionPowerControlStop @ 0x1407EA5D8 (TtmiLogSessionPowerControlStop.c)
 *     TtmpAcquireSessionLock @ 0x140A3ACCC (TtmpAcquireSessionLock.c)
 */

__int64 __fastcall TtmpSessionPowerControl(int *a1, char a2, unsigned int a3)
{
  int v3; // ebx
  int *v5; // r14
  __int64 v7; // rcx

  v3 = *a1;
  v5 = a1;
  LOBYTE(a1) = a2;
  TtmiLogSessionPowerControlStart(a1, a3);
  *((_QWORD *)v5 + 29) = 0LL;
  ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WriteOperationCount);
  KeLeaveCriticalRegion();
  LOBYTE(v7) = a2;
  PoSessionPowerControl(v7, a3, v3);
  TtmpAcquireSessionLock();
  *((_QWORD *)v5 + 29) = KeGetCurrentThread();
  return TtmiLogSessionPowerControlStop();
}
