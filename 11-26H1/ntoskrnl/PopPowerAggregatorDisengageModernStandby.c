/*
 * XREFs of PopPowerAggregatorDisengageModernStandby @ 0x1409F2CF8
 * Callers:
 *     PopPowerAggregatorModernStandbyEnterStateHandler @ 0x1409F2C60 (PopPowerAggregatorModernStandbyEnterStateHandler.c)
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x1409F2CB0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x1404C8890 (PopQueueWorkItem.c)
 *     Feature_PDCSuspendResumeNotifications__private_IsEnabledDeviceUsageNoInline @ 0x1405290FC (Feature_PDCSuspendResumeNotifications__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PopPowerAggregatorSuspendResumeNotify @ 0x14077C994 (PopPowerAggregatorSuspendResumeNotify.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1407CF180 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x1409F46A8 (PopPowerAggregatorEnterScreenOff.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

struct _KTHREAD *__fastcall PopPowerAggregatorDisengageModernStandby(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  unsigned __int32 v3; // eax
  __int64 v4; // rcx
  unsigned __int32 v5; // ett
  unsigned __int32 v6; // eax
  unsigned __int32 v7; // ett
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  void *ExplicitScope; // [rsp+20h] [rbp-58h]
  int Buffer; // [rsp+40h] [rbp-38h] BYREF
  __int128 v20; // [rsp+48h] [rbp-30h] BYREF
  int v21; // [rsp+58h] [rbp-20h]

  v1 = *(_DWORD *)(a1 + 76);
  v20 = 0LL;
  v21 = 0;
  PopPowerAggregatorEnterScreenOff();
  PopReleaseRwLock((struct _KTHREAD *)&PopPowerAggregatorLock);
  _m_prefetchw(&PopDirectedDripsState);
  v3 = PopDirectedDripsState;
  do
  {
    v4 = v3;
    v5 = v3;
    v3 = _InterlockedCompareExchange(&PopDirectedDripsState, v3, v3);
  }
  while ( v5 != v3 );
  if ( (v3 & 1) != 0 )
  {
    _m_prefetchw(&PopDirectedDripsState);
    v6 = PopDirectedDripsState;
    do
    {
      v4 = v6;
      v7 = v6;
      v6 = _InterlockedCompareExchange(&PopDirectedDripsState, v6, v6);
    }
    while ( v7 != v6 );
    if ( (v6 & 0x800) != 0 )
      PopDirectedDripsNotifyAppsAndServices((__int64)&PopDirectedDripsState, dword_140F12E38, 0);
  }
  PopAcquirePolicyLock(v4, v2);
  *(_DWORD *)&PopPdcDeviceListLock.SchedulerApcFill5[48] &= ~2u;
  if ( _InterlockedExchangeAdd(&PopNetGracePeriodState, 0) == 2 )
    PopQueueWorkItem((__int64)&PopPdcDeviceListLock.PriorityFloorSummary, DelayedWorkQueue);
  *(_DWORD *)&PopPdcDeviceListLock.SchedulerApcFill5[48] &= ~0x80u;
  if ( _InterlockedExchangeAdd(&PopNetGracePeriodState, 0) == 2 )
    PopQueueWorkItem((__int64)&PopPdcDeviceListLock.PriorityFloorSummary, DelayedWorkQueue);
  PopAggressiveStandbyAppliedActions = 0;
  PopIdleWakeSkippingEnabled = 0;
  PopReleasePolicyLock(v9, v8, v10, v11, ExplicitScope);
  if ( (unsigned int)Feature_PDCSuspendResumeNotifications__private_IsEnabledDeviceUsageNoInline() )
  {
    PopPowerAggregatorSuspendResumeNotify(4, 0LL);
    PopPowerAggregatorSuspendResumeNotify(3, 0LL);
  }
  else
  {
    *((_QWORD *)&v20 + 1) = 0x100000003LL;
    v21 = -1;
    if ( qword_140E677C8 )
      guard_dispatch_icall_no_overrides((__int64)&v20, v12);
    HIDWORD(v20) = 2;
    if ( qword_140E677C8 )
      guard_dispatch_icall_no_overrides((__int64)&v20, v12);
  }
  Buffer = 1;
  ZwUpdateWnfStateData(&WNF_PO_STANDBY_AUDIO_POLICY, &Buffer, 4u, 0LL, 0LL, 0, 0);
  guard_dispatch_icall_no_overrides(v1, v13);
  return PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, v14, v15, v16);
}
