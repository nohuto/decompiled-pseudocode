/*
 * XREFs of TtmpAcquireSessionLock @ 0x1409F68CC
 * Callers:
 *     TtmpStopCallout @ 0x1407EBDA4 (TtmpStopCallout.c)
 *     TtmpInitiateModernStandbyTransition @ 0x1407ECB94 (TtmpInitiateModernStandbyTransition.c)
 *     TtmpSessionPowerControl @ 0x1407ED02C (TtmpSessionPowerControl.c)
 *     TtmpSessionWorker @ 0x1407ED0C0 (TtmpSessionWorker.c)
 *     TtmpTerminal0PowerSettingCallback @ 0x1407ED3B0 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1407ED6A8 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpCloseTerminalHandle @ 0x1407F21F0 (TtmpCloseTerminalHandle.c)
 *     TtmpScheduledEvaluationWorker @ 0x1407F23C0 (TtmpScheduledEvaluationWorker.c)
 *     TtmpDeleteQueue @ 0x1407F2E00 (TtmpDeleteQueue.c)
 *     TtmCleanupCurrentSession @ 0x1409F5AB8 (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x1409F5CD4 (TtmInitCurrentSession.c)
 *     TtmpAcquireSessionById @ 0x1409F6634 (TtmpAcquireSessionById.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN TtmpAcquireSessionLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite((PERESOURCE)&PsAltSystemCallRegistrationLock.WpsFeedback, 1u);
}
