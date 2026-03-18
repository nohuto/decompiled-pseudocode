/*
 * XREFs of IoClearActivityIdThread @ 0x140499E20
 * Callers:
 *     PopAdaptiveStandbyActionWorker @ 0x1407DE5F0 (PopAdaptiveStandbyActionWorker.c)
 *     PopAdaptiveStandbyHandlePowerMessage @ 0x1407DF87C (PopAdaptiveStandbyHandlePowerMessage.c)
 *     PopAdaptiveStandbyInitialize @ 0x1407DFAF8 (PopAdaptiveStandbyInitialize.c)
 *     PopAdaptiveStandbyInitializeActivator @ 0x1407DFE6C (PopAdaptiveStandbyInitializeActivator.c)
 *     PopAdaptiveStandbyNotifyShellPhaseState @ 0x1407DFFD0 (PopAdaptiveStandbyNotifyShellPhaseState.c)
 *     PopAdaptiveStandbyPolicyTimerWorker @ 0x1407E0110 (PopAdaptiveStandbyPolicyTimerWorker.c)
 *     PopAdaptiveStandbyPowerSettingCallback @ 0x1407E0230 (PopAdaptiveStandbyPowerSettingCallback.c)
 *     PopAdaptiveStandbyWnfCallback @ 0x1407E1100 (PopAdaptiveStandbyWnfCallback.c)
 *     PiDqIrpQueryCreate @ 0x14098EFF8 (PiDqIrpQueryCreate.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14098F320 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall IoClearActivityIdThread(struct _LIST_ENTRY *a1)
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  result[1].WaitBlock[1].WaitListEntry.Flink = a1;
  return result;
}
