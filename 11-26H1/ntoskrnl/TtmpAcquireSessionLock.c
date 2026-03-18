/*
 * XREFs of TtmpAcquireSessionLock @ 0x140A3ACCC
 * Callers:
 *     TtmpStopCallout @ 0x1407E6244 (TtmpStopCallout.c)
 *     TtmpInitiateModernStandbyTransition @ 0x1407E703C (TtmpInitiateModernStandbyTransition.c)
 *     TtmpSessionPowerControl @ 0x1407E74D4 (TtmpSessionPowerControl.c)
 *     TtmpSessionWorker @ 0x1407E7560 (TtmpSessionWorker.c)
 *     TtmpTerminal0PowerSettingCallback @ 0x1407E7850 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1407E7B48 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpCloseTerminalHandle @ 0x1407EC690 (TtmpCloseTerminalHandle.c)
 *     TtmpScheduledEvaluationWorker @ 0x1407EC860 (TtmpScheduledEvaluationWorker.c)
 *     TtmpDeleteQueue @ 0x1407ED2A0 (TtmpDeleteQueue.c)
 *     TtmCleanupCurrentSession @ 0x140A39EB8 (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x140A3A0D4 (TtmInitCurrentSession.c)
 *     TtmpAcquireSessionById @ 0x140A3AA34 (TtmpAcquireSessionById.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN TtmpAcquireSessionLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WriteOperationCount, 1u);
}
