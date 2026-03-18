/*
 * XREFs of PopPowerAggregatorEngageModernStandby @ 0x1407D683C
 * Callers:
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x140A38950 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopDirectedDripsClearDisengageReason @ 0x140483348 (PopDirectedDripsClearDisengageReason.c)
 *     PopGetMonitorReasonFromPowerEventId @ 0x1404E6C14 (PopGetMonitorReasonFromPowerEventId.c)
 *     Feature_PDCSuspendResumeNotifications__private_IsEnabledDeviceUsageNoInline @ 0x140526A8C (Feature_PDCSuspendResumeNotifications__private_IsEnabledDeviceUsageNoInline.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PopPowerAggregatorSuspendResumeNotify @ 0x140779A64 (PopPowerAggregatorSuspendResumeNotify.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1409D92BC (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PopPowerRequestRevokeRequestsForSleep @ 0x140A37300 (PopPowerRequestRevokeRequestsForSleep.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140A38D30 (PopPowerAggregatorSetCurrentState.c)
 *     PopSleepstudyStartNextSession @ 0x140A39120 (PopSleepstudyStartNextSession.c)
 *     PopDirectedDripsNotify @ 0x140B08694 (PopDirectedDripsNotify.c)
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x140B451B0 (PopPowerAggregatorEngageAggressiveStandbyActions.c)
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
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  _OWORD v17[3]; // [rsp+40h] [rbp-38h] BYREF
  int v18; // [rsp+80h] [rbp+8h] BYREF
  __int64 v19; // [rsp+88h] [rbp+10h] BYREF

  MonitorReasonFromPowerEventId = PopGetMonitorReasonFromPowerEventId(*(_DWORD *)(a1 + 60));
  v3 = *(_BYTE *)(v2 + 43);
  v4 = *(_BYTE *)(v2 + 42);
  v5 = MonitorReasonFromPowerEventId & 0xFFFFFF;
  v6 = *(_BYTE *)(v2 + 40) == 0;
  v7 = *(_DWORD *)(v2 + 76);
  v18 = 1;
  if ( v6 || v3 )
    v18 = 0;
  memset(v17, 0, 32);
  LODWORD(v17[0]) = 1;
  PopPowerAggregatorSetCurrentState(v2, v17);
  PopReleaseRwLock(&PopPowerAggregatorLock);
  PopSleepstudyStartNextSession(2LL, v5);
  ZwUpdateWnfStateData((__int64)WNF_PO_STANDBY_AUDIO_POLICY, (__int64)&v18);
  PopPowerRequestRevokeRequestsForSleep(v9, v8, v10);
  PiDmObjectManagerAcquireExclusiveLock(&PopAdaptiveStandbyLock.QuantumTarget);
  *(_DWORD *)&PopAdaptiveStandbyLock.WaitBlockFill11[24] = PopAdaptiveStandbyLock.Header.WaitListHead.Blink;
  PopAdaptiveStandbyLock.WaitBlock[0].SpareLong = 0;
  PopAdaptiveStandbyLock.WaitBlockFill5[48] = v4;
  PopDirectedDripsClearDisengageReason(0);
  ExReleaseResourceLite((PERESOURCE)&PopAdaptiveStandbyLock.QuantumTarget);
  KeLeaveCriticalRegion();
  v19 = v4;
  PopDirectedDripsNotify(6LL, &v19);
  LOBYTE(v11) = v3;
  PopPowerAggregatorEngageAggressiveStandbyActions(v11);
  if ( (unsigned int)Feature_PDCSuspendResumeNotifications__private_IsEnabledDeviceUsageNoInline() )
  {
    LOBYTE(v12) = 1;
    PopPowerAggregatorSuspendResumeNotify(4, v12);
    if ( v3 )
    {
      LOBYTE(v12) = 1;
      PopPowerAggregatorSuspendResumeNotify(3, v12);
    }
  }
  guard_dispatch_icall_no_overrides(v7, v12);
  return PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, v13, v14, v15);
}
