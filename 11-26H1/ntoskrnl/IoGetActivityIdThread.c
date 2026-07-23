/*
 * XREFs of IoGetActivityIdThread @ 0x140468BC0
 * Callers:
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140799330 (IoRegisterFsRegistrationChangeMountAware.c)
 *     PopAdaptiveStandbyActionWorker @ 0x1407E2C70 (PopAdaptiveStandbyActionWorker.c)
 *     PopAdaptiveStandbyCheckHibernateBudgetAction @ 0x1407E2E8C (PopAdaptiveStandbyCheckHibernateBudgetAction.c)
 *     PopAdaptiveStandbyCheckHibernateReserveAction @ 0x1407E34AC (PopAdaptiveStandbyCheckHibernateReserveAction.c)
 *     PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction @ 0x1407E38AC (PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction.c)
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x1407E3E3C (PopAdaptiveStandbyHandleBatteryUpdate.c)
 *     PopAdaptiveStandbyHandlePowerMessage @ 0x1407E4270 (PopAdaptiveStandbyHandlePowerMessage.c)
 *     PopAdaptiveStandbyQueryReserveConfiguration @ 0x1407E4E04 (PopAdaptiveStandbyQueryReserveConfiguration.c)
 *     PopAdaptiveStandbySessionStart @ 0x1407E4FE4 (PopAdaptiveStandbySessionStart.c)
 *     PopAdaptiveStandbySessionStop @ 0x1407E5384 (PopAdaptiveStandbySessionStop.c)
 *     PopAdaptiveStandbyWnfCallback @ 0x1407E6000 (PopAdaptiveStandbyWnfCallback.c)
 *     PnpInsertEventInQueue @ 0x1409AB21C (PnpInsertEventInQueue.c)
 *     IopMountVolume @ 0x140B208FC (IopMountVolume.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *IoGetActivityIdThread()
{
  return KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink;
}
