/*
 * XREFs of IoSetActivityIdThread @ 0x140491810
 * Callers:
 *     PopAdaptiveStandbyActionWorker @ 0x1407DE5F0 (PopAdaptiveStandbyActionWorker.c)
 *     PopAdaptiveStandbyHandlePowerMessage @ 0x1407DF87C (PopAdaptiveStandbyHandlePowerMessage.c)
 *     PopAdaptiveStandbyInitialize @ 0x1407DFAF8 (PopAdaptiveStandbyInitialize.c)
 *     PopAdaptiveStandbyInitializeActivator @ 0x1407DFE6C (PopAdaptiveStandbyInitializeActivator.c)
 *     PopAdaptiveStandbyNotifyShellPhaseState @ 0x1407DFFD0 (PopAdaptiveStandbyNotifyShellPhaseState.c)
 *     PopAdaptiveStandbyPolicyTimerWorker @ 0x1407E0110 (PopAdaptiveStandbyPolicyTimerWorker.c)
 *     PopAdaptiveStandbyPowerSettingCallback @ 0x1407E0230 (PopAdaptiveStandbyPowerSettingCallback.c)
 *     PopAdaptiveStandbyWnfCallback @ 0x1407E1100 (PopAdaptiveStandbyWnfCallback.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     PiDqIrpQueryCreate @ 0x14098EFF8 (PiDqIrpQueryCreate.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14098F320 (PiDqObjectManagerServiceActionQueue.c)
 *     PnpDeviceEventWorker @ 0x1409DCD90 (PnpDeviceEventWorker.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall IoSetActivityIdThread(struct _LIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  struct _LIST_ENTRY *result; // rax

  CurrentThread = KeGetCurrentThread();
  result = CurrentThread[1].WaitBlock[1].WaitListEntry.Flink;
  CurrentThread[1].WaitBlock[1].WaitListEntry.Flink = a1;
  return result;
}
