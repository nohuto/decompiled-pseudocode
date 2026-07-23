/*
 * XREFs of PopPdcCompleteResiliencyCallback @ 0x140B260FC
 * Callers:
 *     PopDirectedDripsNotifyResiliencyCompletionWorker @ 0x1404CEDC0 (PopDirectedDripsNotifyResiliencyCompletionWorker.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPdcCompleteResiliencyCallback(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(1LL, a2);
}
