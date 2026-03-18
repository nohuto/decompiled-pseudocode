/*
 * XREFs of TtmNotifyLowPowerStateExited @ 0x140A39E40
 * Callers:
 *     PopIssueActionRequest @ 0x140A37878 (PopIssueActionRequest.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140A38E44 (PopPowerAggregatorNotifyCsStateExited.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     TtmiScheduleSessionWorker @ 0x1407E67A4 (TtmiScheduleSessionWorker.c)
 *     TtmiLogSessionCsExitComplete @ 0x1407EA260 (TtmiLogSessionCsExitComplete.c)
 *     TtmpAcquireSessionById @ 0x140A3AA34 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x140A3AAD8 (TtmiLogError.c)
 */

void __fastcall TtmNotifyLowPowerStateExited(unsigned int a1)
{
  int v1; // eax
  __int64 v2; // rcx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v1 = TtmpAcquireSessionById(&v3, a1);
  if ( v1 >= 0 )
  {
    TtmiLogSessionCsExitComplete();
    v2 = v3;
    *(_DWORD *)(v3 + 4) &= 0xFFFFFCFF;
    TtmiScheduleSessionWorker(v2, 4);
    ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WriteOperationCount);
    KeLeaveCriticalRegion();
  }
  else
  {
    TtmiLogError("TtmNotifyLowPowerStateExited", 3120LL, (unsigned int)v1, (unsigned int)v1);
  }
}
