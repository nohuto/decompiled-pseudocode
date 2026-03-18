/*
 * XREFs of TtmNotifyLowPowerStateExited @ 0x140A2CFA4
 * Callers:
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140A2C294 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopIssueActionRequest @ 0x140A83104 (PopIssueActionRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     TtmiScheduleSessionWorker @ 0x14075A564 (TtmiScheduleSessionWorker.c)
 *     TtmiLogSessionCsExitComplete @ 0x14075E240 (TtmiLogSessionCsExitComplete.c)
 *     TtmiLogError @ 0x140A2DC20 (TtmiLogError.c)
 *     TtmpAcquireSessionById @ 0x140A2DD78 (TtmpAcquireSessionById.c)
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
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    TtmiLogError("TtmNotifyLowPowerStateExited", 3122LL, (unsigned int)v1, (unsigned int)v1);
  }
}
