/*
 * XREFs of ExUnsubscribeWnfStateChange @ 0x140A41930
 * Callers:
 *     CcContainerRestoreCallBack @ 0x1405B0660 (CcContainerRestoreCallBack.c)
 *     EtwpUnsubscribeContainerStateWnf @ 0x1406C4440 (EtwpUnsubscribeContainerStateWnf.c)
 *     PoRegisterForEffectivePowerModeNotifications @ 0x1407CF400 (PoRegisterForEffectivePowerModeNotifications.c)
 *     PoUnregisterFromEffectivePowerModeNotifications @ 0x1407CF540 (PoUnregisterFromEffectivePowerModeNotifications.c)
 *     RtlpCtContextFree @ 0x1408090B8 (RtlpCtContextFree.c)
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x140B03F58 (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExpWnfDeleteSubscription @ 0x140A42210 (ExpWnfDeleteSubscription.c)
 */

void __fastcall ExUnsubscribeWnfStateChange(void *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExpWnfDeleteSubscription(a1);
  KeLeaveCriticalRegion();
}
