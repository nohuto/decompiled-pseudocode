/*
 * XREFs of IoGetActivityIdThread @ 0x14046F440
 * Callers:
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140796800 (IoRegisterFsRegistrationChangeMountAware.c)
 *     PopAdaptiveStandbyActionWorker @ 0x1407DE5F0 (PopAdaptiveStandbyActionWorker.c)
 *     PopAdaptiveStandbyCheckHibernateBudgetAction @ 0x1407DE80C (PopAdaptiveStandbyCheckHibernateBudgetAction.c)
 *     PopAdaptiveStandbyCheckHibernateReserveAction @ 0x1407DEC7C (PopAdaptiveStandbyCheckHibernateReserveAction.c)
 *     PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction @ 0x1407DF07C (PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction.c)
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x1407DF44C (PopAdaptiveStandbyHandleBatteryUpdate.c)
 *     PopAdaptiveStandbyHandlePowerMessage @ 0x1407DF87C (PopAdaptiveStandbyHandlePowerMessage.c)
 *     PopAdaptiveStandbySessionStart @ 0x1407E03B4 (PopAdaptiveStandbySessionStart.c)
 *     PopAdaptiveStandbySessionStop @ 0x1407E05F8 (PopAdaptiveStandbySessionStop.c)
 *     PopAdaptiveStandbyWnfCallback @ 0x1407E1100 (PopAdaptiveStandbyWnfCallback.c)
 *     PnpInsertEventInQueue @ 0x14090965C (PnpInsertEventInQueue.c)
 *     IopMountVolume @ 0x140B1E87C (IopMountVolume.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *IoGetActivityIdThread()
{
  return KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink;
}
