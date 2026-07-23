/*
 * XREFs of TtmNotifyLowPowerStateExited @ 0x1409F5A40
 * Callers:
 *     PopIssueActionRequest @ 0x1409F3438 (PopIssueActionRequest.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x1409F4A04 (PopPowerAggregatorNotifyCsStateExited.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     TtmiScheduleSessionWorker @ 0x1407EC304 (TtmiScheduleSessionWorker.c)
 *     TtmiLogSessionCsExitComplete @ 0x1407EFDC0 (TtmiLogSessionCsExitComplete.c)
 *     TtmpAcquireSessionById @ 0x1409F6634 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1409F66D8 (TtmiLogError.c)
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
    ExReleaseResourceLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WpsFeedback);
    KeLeaveCriticalRegion();
  }
  else
  {
    TtmiLogError("TtmNotifyLowPowerStateExited", 3120LL, (unsigned int)v1, (unsigned int)v1);
  }
}
