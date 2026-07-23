/*
 * XREFs of PopPolicyTimeChange @ 0x140A91050
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x1404E3D88 (PopEventCalloutDispatch.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     ExAcquireTimeRefreshLockShared @ 0x140A910A0 (ExAcquireTimeRefreshLockShared.c)
 *     ExReleaseTimeRefreshLockShared @ 0x140A91120 (ExReleaseTimeRefreshLockShared.c)
 */

__int64 PopPolicyTimeChange()
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  ExAcquireTimeRefreshLockShared();
  ZwUpdateWnfStateData(&WNF_PO_SYSTEM_TIME_CHANGED, &PopTimeChangeInfo, 0x10u, 0LL, 0LL, 0, 0);
  ExReleaseTimeRefreshLockShared(v1, v0);
  PopEventCalloutDispatch(3, 0LL);
  return 0LL;
}
