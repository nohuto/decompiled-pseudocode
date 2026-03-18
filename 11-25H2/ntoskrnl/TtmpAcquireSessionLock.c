/*
 * XREFs of TtmpAcquireSessionLock @ 0x1406EBB64
 * Callers:
 *     TtmpStopCallout @ 0x14075A004 (TtmpStopCallout.c)
 *     TtmpInitiateModernStandbyTransition @ 0x14075ADF8 (TtmpInitiateModernStandbyTransition.c)
 *     TtmpSessionPowerControl @ 0x14075B2AC (TtmpSessionPowerControl.c)
 *     TtmpSessionWorker @ 0x14075B340 (TtmpSessionWorker.c)
 *     TtmpTerminal0PowerSettingCallback @ 0x14075B630 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x14075B924 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpCloseTerminalHandle @ 0x140760770 (TtmpCloseTerminalHandle.c)
 *     TtmpScheduledEvaluationWorker @ 0x140760940 (TtmpScheduledEvaluationWorker.c)
 *     TtmpDeleteQueue @ 0x1407613A0 (TtmpDeleteQueue.c)
 *     TtmInitCurrentSession @ 0x140A2D29C (TtmInitCurrentSession.c)
 *     TtmpAcquireSessionById @ 0x140A2DD78 (TtmpAcquireSessionById.c)
 *     TtmCleanupCurrentSession @ 0x140AA7F5C (TtmCleanupCurrentSession.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN TtmpAcquireSessionLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
}
