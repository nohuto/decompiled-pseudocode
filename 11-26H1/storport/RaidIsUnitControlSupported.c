/*
 * XREFs of RaidIsUnitControlSupported @ 0x14001A534
 * Callers:
 *     RaUnitLockQueueSrb @ 0x140007330 (RaUnitLockQueueSrb.c)
 *     RaidBusEnumeratorVisitUnit @ 0x140009CE4 (RaidBusEnumeratorVisitUnit.c)
 *     RaidResumeAdapterQueue @ 0x140010650 (RaidResumeAdapterQueue.c)
 *     RaUnitStartIo @ 0x140013D70 (RaUnitStartIo.c)
 *     RaidStartNextIoPacket @ 0x140018C10 (RaidStartNextIoPacket.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x14001A3CC (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidUnitSubmitIrpRequest @ 0x140021420 (RaidUnitSubmitIrpRequest.c)
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
 *     StorPortUnitPowerNotRequiredStep1 @ 0x140033520 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x140033610 (StorPortUnitPowerRequiredStep1.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1400339DC (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x140034E94 (RaidBusEnumeratorProcessNewUnit.c)
 *     RaidUnitSendPowerToMiniport @ 0x140042800 (RaidUnitSendPowerToMiniport.c)
 *     RaUnitUnlockForwardIo @ 0x1400429E0 (RaUnitUnlockForwardIo.c)
 *     RaUnitLockForwardIo @ 0x140042F00 (RaUnitLockForwardIo.c)
 *     RaUnitCheckForwardIoOutstanding @ 0x14005AAB0 (RaUnitCheckForwardIoOutstanding.c)
 *     RaUnitWaitForForwardIoQuiescence @ 0x14005CF04 (RaUnitWaitForForwardIoQuiescence.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x14007ECF0 (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitSendPoFxPowerControlToMiniport @ 0x140080C3C (RaidUnitSendPoFxPowerControlToMiniport.c)
 *     StorPortUnitDirectedPowerDown @ 0x140081D30 (StorPortUnitDirectedPowerDown.c)
 *     StorPortUnitDirectedPowerUp @ 0x140082200 (StorPortUnitDirectedPowerUp.c)
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
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     RaMiniportIsFeatureSupported @ 0x14005073C (RaMiniportIsFeatureSupported.c)
 */

char __fastcall RaidIsUnitControlSupported(__int64 a1, int a2)
{
  _DWORD *v2; // rax
  char v3; // di
  __int64 v4; // rsi
  _DWORD *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v11; // rcx
  _DWORD *v12; // r9
  int v13; // edx
  __int64 v14; // rcx
  _DWORD *v15; // r9
  __int64 v16; // rcx
  _DWORD *v17; // r9
  __int64 v18; // rcx
  _DWORD *v19; // r9
  unsigned int v20; // r10d
  __int64 v21; // rcx
  _DWORD *v22; // r9

  v2 = *(_DWORD **)(a1 + 24);
  v3 = 0;
  v4 = a2;
  if ( *v2 == 1094997074 )
  {
    v5 = v2 + 94;
    v6 = (__int64)(v2 + 158);
    v7 = (__int64)(v2 + 160);
    v8 = (__int64)(v2 + 162);
    v9 = (__int64)(v2 + 164);
  }
  else if ( *v2 == 1314275652 )
  {
    v5 = v2 + 42;
    v6 = (__int64)(v2 + 106);
    v7 = (__int64)(v2 + 108);
    v8 = (__int64)(v2 + 110);
    v9 = (__int64)(v2 + 112);
  }
  else
  {
    v6 = 256LL;
    v5 = 0LL;
    v7 = 264LL;
    v8 = 272LL;
    v9 = 280LL;
  }
  if ( **((_DWORD **)v5 + 29) == 208 )
  {
    if ( (v5[62] & 0x10) != 0 )
      return *((_BYTE *)v5 + v4 + 256);
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)v7 = 0LL;
    *(_QWORD *)v8 = 0LL;
    *(_QWORD *)v9 = 0LL;
    v5[63] = 12;
    if ( (unsigned __int8)RaMiniportIsFeatureSupported(v5, 0LL) )
      *v12 = 13;
    if ( (unsigned __int8)RaMiniportIsFeatureSupported(v11, 1LL) )
      *v15 = v13 + 13;
    if ( (unsigned __int8)RaMiniportIsFeatureSupported(v14, 4LL) )
      *v17 = 15;
    if ( (unsigned __int8)RaMiniportIsFeatureSupported(v16, 11LL) )
      v5[72] = 16;
    if ( (*(_DWORD *)(*((_QWORD *)v5 + 29) + 184LL) & 0x20000) != 0 )
      *v19 = 17;
    if ( (unsigned __int8)RaMiniportIsFeatureSupported(v18, v20) )
      *v22 = 32;
    if ( (int)RaCallMiniportUnitControl(v21, 0LL, v22) >= 0 )
    {
      v5[62] |= 0x10u;
      return *((_BYTE *)v5 + v4 + 256);
    }
  }
  return v3;
}
