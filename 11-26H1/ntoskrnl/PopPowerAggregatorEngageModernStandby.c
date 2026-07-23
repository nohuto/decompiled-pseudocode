/*
 * XREFs of PopPowerAggregatorEngageModernStandby @ 0x1407D99CC
 * Callers:
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1409F4510 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopDirectedDripsClearDisengageReason @ 0x14047CCB8 (PopDirectedDripsClearDisengageReason.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1404E00B4 (PopGetMonitorReasonFromPowerEventId.c)
 *     Feature_PDCSuspendResumeNotifications__private_IsEnabledDeviceUsageNoInline @ 0x1405290FC (Feature_PDCSuspendResumeNotifications__private_IsEnabledDeviceUsageNoInline.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PopPowerAggregatorSuspendResumeNotify @ 0x14077C994 (PopPowerAggregatorSuspendResumeNotify.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1409AA1AC (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PopPowerRequestRevokeRequestsForSleep @ 0x1409F2EC0 (PopPowerRequestRevokeRequestsForSleep.c)
 *     PopPowerAggregatorSetCurrentState @ 0x1409F48F0 (PopPowerAggregatorSetCurrentState.c)
 *     PopSleepstudyStartNextSession @ 0x1409F4CE0 (PopSleepstudyStartNextSession.c)
 *     PopDirectedDripsNotify @ 0x140B0A610 (PopDirectedDripsNotify.c)
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x140B46EB0 (PopPowerAggregatorEngageAggressiveStandbyActions.c)
 */

struct _KTHREAD *__fastcall PopPowerAggregatorEngageModernStandby(__int64 a1)
{
  __int64 MonitorReasonFromPowerEventId; // rax
  __int64 v2; // r10
  char v3; // di
  unsigned __int8 v4; // bp
  unsigned int v5; // ebx
  bool v6; // zf
  unsigned int v7; // esi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  _OWORD v14[3]; // [rsp+40h] [rbp-38h] BYREF
  int Buffer; // [rsp+80h] [rbp+8h] BYREF
  __int64 v16; // [rsp+88h] [rbp+10h] BYREF

  MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(*(_DWORD *)(a1 + 60));
  v3 = *(_BYTE *)(v2 + 43);
  v4 = *(_BYTE *)(v2 + 42);
  v5 = MonitorReasonFromPowerEventId & 0xFFFFFF;
  v6 = *(_BYTE *)(v2 + 40) == 0;
  v7 = *(_DWORD *)(v2 + 76);
  Buffer = 1;
  if ( v6 || v3 )
    Buffer = 0;
  memset(v14, 0, 32);
  LODWORD(v14[0]) = 1;
  PopPowerAggregatorSetCurrentState(v2, v14);
  PopReleaseRwLock((struct _KTHREAD *)&PopPowerAggregatorLock);
  PopSleepstudyStartNextSession(2LL, v5);
  ZwUpdateWnfStateData(&WNF_PO_STANDBY_AUDIO_POLICY, &Buffer, 4u, 0LL, 0LL, 0, 0);
  PopPowerRequestRevokeRequestsForSleep();
  PiDmObjectManagerAcquireExclusiveLock(&PopDripsWatchdogContext);
  dword_140F0BE78 = PopDripsWatchdogDebounceTickInterval;
  dword_140F0BE74 = 0;
  byte_140F0BE90 = v4;
  PopDirectedDripsClearDisengageReason(0);
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  KeLeaveCriticalRegion();
  v16 = v4;
  PopDirectedDripsNotify(6LL, &v16);
  LOBYTE(v8) = v3;
  PopPowerAggregatorEngageAggressiveStandbyActions(v8);
  if ( (unsigned int)Feature_PDCSuspendResumeNotifications__private_IsEnabledDeviceUsageNoInline() )
  {
    LOBYTE(v9) = 1;
    PopPowerAggregatorSuspendResumeNotify(4, v9);
    if ( v3 )
    {
      LOBYTE(v9) = 1;
      PopPowerAggregatorSuspendResumeNotify(3, v9);
    }
  }
  guard_dispatch_icall_no_overrides(v7, v9);
  return PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, v10, v11, v12);
}
