/*
 * XREFs of RaCallMiniportUnitControl @ 0x14004528C
 * Callers:
 *     RaUnitLockQueueSrb @ 0x140007330 (RaUnitLockQueueSrb.c)
 *     RaidBusEnumeratorVisitUnit @ 0x140009CE4 (RaidBusEnumeratorVisitUnit.c)
 *     RaidResumeAdapterQueue @ 0x140010650 (RaidResumeAdapterQueue.c)
 *     RaUnitStartIo @ 0x140013D70 (RaUnitStartIo.c)
 *     RaidStartNextIoPacket @ 0x140018C10 (RaidStartNextIoPacket.c)
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaidInsertDeviceQueue @ 0x1400234A0 (RaidInsertDeviceQueue.c)
 *     RiGetEnqueueReason @ 0x140023E10 (RiGetEnqueueReason.c)
 *     RaUnitUnlockQueueSrb @ 0x140028080 (RaUnitUnlockQueueSrb.c)
 *     RaidStallDeviceQueue @ 0x140028300 (RaidStallDeviceQueue.c)
 *     RaidPauseUnitQueue @ 0x1400292F0 (RaidPauseUnitQueue.c)
 *     RaidResumeUnitQueue @ 0x140029480 (RaidResumeUnitQueue.c)
 *     StorResumeIoGateway @ 0x14002BBC0 (StorResumeIoGateway.c)
 *     StorPortUnitActiveConditionStep1 @ 0x14002BDC0 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitIdleState @ 0x14002C7E0 (StorPortUnitIdleState.c)
 *     RaidCreateUnit @ 0x14002D474 (RaidCreateUnit.c)
 *     StorPortUnitIdleCondition @ 0x1400300F0 (StorPortUnitIdleCondition.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x140034E94 (RaidBusEnumeratorProcessNewUnit.c)
 *     RaidUnitSendPowerToMiniport @ 0x140042800 (RaidUnitSendPowerToMiniport.c)
 *     RaUnitUnlockForwardIo @ 0x1400429E0 (RaUnitUnlockForwardIo.c)
 *     RaUnitLockForwardIo @ 0x140042F00 (RaUnitLockForwardIo.c)
 *     RaUnitCheckForwardIoOutstanding @ 0x14005AAB0 (RaUnitCheckForwardIoOutstanding.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x14007ECF0 (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitSendPoFxPowerControlToMiniport @ 0x140080C3C (RaidUnitSendPoFxPowerControlToMiniport.c)
 *     RaUnitAdapterRemove @ 0x140098F10 (RaUnitAdapterRemove.c)
 *     RaUnitClearUnresponsiveAttribute @ 0x14009A0D8 (RaUnitClearUnresponsiveAttribute.c)
 *     RaUnitDeleteDeviceIrp @ 0x14009A2C0 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x14009A788 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitSetQOSIoctl @ 0x1400A0538 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1400A13C0 (RaUnitSetUnresponsiveAttribute.c)
 *     RaUnitStorageQueryDeviceFruIdPropertyIoctl @ 0x1400A4258 (RaUnitStorageQueryDeviceFruIdPropertyIoctl.c)
 *     RaidUnitCancelPendingRequests @ 0x1400A6F5C (RaidUnitCancelPendingRequests.c)
 *     RaUnitStorageGetInternalDataIoctl @ 0x14018CBB0 (RaUnitStorageGetInternalDataIoctl.c)
 *     RaUnitSurpriseRemovalIrp @ 0x14018EB54 (RaUnitSurpriseRemovalIrp.c)
 *     RaUnitRegisterForIdleDetection @ 0x1401B7450 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStartDeviceIrp @ 0x1401BB140 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaCallMiniportUnitControl(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 (__fastcall *v2)(__int64); // rax
  int v4; // edi
  int v5; // edi

  v1 = 0;
  v2 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 232) + 200LL);
  if ( !v2 )
    return 3221225659LL;
  v4 = v2(*(_QWORD *)(a1 + 240) + 16LL);
  if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 1 )
          return (unsigned int)-1073741637;
        else
          return (unsigned int)-1073741595;
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
  }
  else
  {
    return v4 != 0 ? 0xC0000001 : 0;
  }
  return v1;
}
