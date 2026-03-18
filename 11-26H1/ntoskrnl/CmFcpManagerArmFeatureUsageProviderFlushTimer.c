/*
 * XREFs of CmFcpManagerArmFeatureUsageProviderFlushTimer @ 0x140532CE8
 * Callers:
 *     CmFcpManagerArmFeatureUsageProviderFlushNotification @ 0x1402C59E4 (CmFcpManagerArmFeatureUsageProviderFlushNotification.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushTimerDpc @ 0x1406E2C40 (CmFcpManagerArmFeatureUsageProviderFlushTimerDpc.c)
 *     CmFcManagerStartRuntimePhase @ 0x140CF0AF0 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     ExSetTimer @ 0x14037A420 (ExSetTimer.c)
 */

__int64 __fastcall CmFcpManagerArmFeatureUsageProviderFlushTimer(__int64 a1)
{
  ULONG_PTR v1; // rcx
  __int64 result; // rax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 1536);
  if ( v1 )
  {
    v3[0] = 0LL;
    v3[1] = -1LL;
    return ExSetTimer(v1, -3000000000LL, 0LL, (ULONG_PTR)v3);
  }
  return result;
}
