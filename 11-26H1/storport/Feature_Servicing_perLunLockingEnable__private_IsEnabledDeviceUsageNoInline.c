/*
 * XREFs of Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline @ 0x140097F6C
 * Callers:
 *     RaUnitLockQueueSrb @ 0x140007330 (RaUnitLockQueueSrb.c)
 *     RaidResumeAdapterQueue @ 0x140010650 (RaidResumeAdapterQueue.c)
 *     RaUnitStartIo @ 0x140013D70 (RaUnitStartIo.c)
 *     RaidStartNextIoPacket @ 0x140018C10 (RaidStartNextIoPacket.c)
 *     RaidInsertDeviceQueue @ 0x1400234A0 (RaidInsertDeviceQueue.c)
 *     RiGetEnqueueReason @ 0x140023E10 (RiGetEnqueueReason.c)
 *     RaUnitUnlockQueueSrb @ 0x140028080 (RaUnitUnlockQueueSrb.c)
 *     RaidStallDeviceQueue @ 0x140028300 (RaidStallDeviceQueue.c)
 *     RaidPauseUnitQueue @ 0x1400292F0 (RaidPauseUnitQueue.c)
 *     RaidResumeUnitQueue @ 0x140029480 (RaidResumeUnitQueue.c)
 *     StorResumeIoGateway @ 0x14002BBC0 (StorResumeIoGateway.c)
 *     StorPortUnitActiveConditionStep1 @ 0x14002BDC0 (StorPortUnitActiveConditionStep1.c)
 *     RaidCreateUnit @ 0x14002D474 (RaidCreateUnit.c)
 *     StorPortUnitIdleCondition @ 0x1400300F0 (StorPortUnitIdleCondition.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x140034E94 (RaidBusEnumeratorProcessNewUnit.c)
 *     RaUnitUnlockForwardIo @ 0x1400429E0 (RaUnitUnlockForwardIo.c)
 *     RaUnitLockForwardIo @ 0x140042F00 (RaUnitLockForwardIo.c)
 *     RaUnitCheckForwardIoOutstanding @ 0x14005AAB0 (RaUnitCheckForwardIoOutstanding.c)
 *     RaUnitClearUnresponsiveAttribute @ 0x14009A0D8 (RaUnitClearUnresponsiveAttribute.c)
 *     RaUnitSetQOSIoctl @ 0x1400A0538 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1400A13C0 (RaUnitSetUnresponsiveAttribute.c)
 *     RaidUnitCancelPendingRequests @ 0x1400A6F5C (RaidUnitCancelPendingRequests.c)
 * Callees:
 *     Feature_Servicing_perLunLockingEnable__private_IsEnabledFallback @ 0x140097FA8 (Feature_Servicing_perLunLockingEnable__private_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_perLunLockingEnable__private_featureState & 0x10) != 0 )
    return Feature_Servicing_perLunLockingEnable__private_featureState & 1;
  else
    return Feature_Servicing_perLunLockingEnable__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_perLunLockingEnable__private_featureState,
             3LL);
}
