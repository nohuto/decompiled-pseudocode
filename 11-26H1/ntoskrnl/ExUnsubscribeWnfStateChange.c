/*
 * XREFs of ExUnsubscribeWnfStateChange @ 0x1409FD2E0
 * Callers:
 *     CcContainerRestoreCallBack @ 0x1405B2E70 (CcContainerRestoreCallBack.c)
 *     EtwpUnsubscribeContainerStateWnf @ 0x1406C8080 (EtwpUnsubscribeContainerStateWnf.c)
 *     PoRegisterForEffectivePowerModeNotifications @ 0x1407D24A0 (PoRegisterForEffectivePowerModeNotifications.c)
 *     PoUnregisterFromEffectivePowerModeNotifications @ 0x1407D25E0 (PoUnregisterFromEffectivePowerModeNotifications.c)
 *     RtlpCtContextFree @ 0x14080EB48 (RtlpCtContextFree.c)
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x140B05B68 (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExpWnfDeleteSubscription @ 0x1409FDBC0 (ExpWnfDeleteSubscription.c)
 */

void __fastcall ExUnsubscribeWnfStateChange(void *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExpWnfDeleteSubscription(a1);
  KeLeaveCriticalRegion();
}
