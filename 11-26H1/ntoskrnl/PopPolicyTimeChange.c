/*
 * XREFs of PopPolicyTimeChange @ 0x140A8BD80
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x1404EA9D8 (PopEventCalloutDispatch.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     ExAcquireTimeRefreshLockShared @ 0x140A8BDD0 (ExAcquireTimeRefreshLockShared.c)
 *     ExReleaseTimeRefreshLockShared @ 0x140A8BE50 (ExReleaseTimeRefreshLockShared.c)
 */

__int64 PopPolicyTimeChange()
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  ExAcquireTimeRefreshLockShared();
  ZwUpdateWnfStateData((__int64)&WNF_PO_SYSTEM_TIME_CHANGED, (__int64)&stru_140F12D20.SchedulerSharedSystemSlot);
  ExReleaseTimeRefreshLockShared(v1, v0);
  PopEventCalloutDispatch(3, 0LL);
  return 0LL;
}
