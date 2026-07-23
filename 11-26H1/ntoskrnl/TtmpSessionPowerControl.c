/*
 * XREFs of TtmpSessionPowerControl @ 0x1407ED02C
 * Callers:
 *     TtmpActivateSessionWorker @ 0x1407EC814 (TtmpActivateSessionWorker.c)
 *     TtmpSessionWorker @ 0x1407ED0C0 (TtmpSessionWorker.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PoSessionPowerControl @ 0x1407E259C (PoSessionPowerControl.c)
 *     TtmiLogSessionPowerControlStart @ 0x1407F005C (TtmiLogSessionPowerControlStart.c)
 *     TtmiLogSessionPowerControlStop @ 0x1407F0138 (TtmiLogSessionPowerControlStop.c)
 *     TtmpAcquireSessionLock @ 0x1409F68CC (TtmpAcquireSessionLock.c)
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
  ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WpsFeedback);
  KeLeaveCriticalRegion();
  LOBYTE(v7) = a2;
  PoSessionPowerControl(v7, a3, v3);
  TtmpAcquireSessionLock();
  *((_QWORD *)v5 + 29) = KeGetCurrentThread();
  return TtmiLogSessionPowerControlStop();
}
