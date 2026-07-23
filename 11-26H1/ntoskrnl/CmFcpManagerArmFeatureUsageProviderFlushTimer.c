/*
 * XREFs of CmFcpManagerArmFeatureUsageProviderFlushTimer @ 0x140535188
 * Callers:
 *     CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x140310680 (CmFcpManagerArmFeatureUsageProviderFlushNotification.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushTimerDpc @ 0x1406E6F20 (CmFcpManagerArmFeatureUsageProviderFlushTimerDpc.c)
 *     CmFcManagerStartRuntimePhase @ 0x140CF6E68 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ExSetTimer @ 0x14037C1D0 (ExSetTimer.c)
 */

__int64 __fastcall CmFcpManagerArmFeatureUsageProviderFlushTimer(__int64 a1)
{
  ULONG_PTR v1; // rcx
  __int64 result; // rax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 1608);
  if ( v1 )
  {
    v3[0] = 0LL;
    v3[1] = -1LL;
    return ExSetTimer(v1, -3000000000LL, 0LL, (ULONG_PTR)v3);
  }
  return result;
}
