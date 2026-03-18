/*
 * XREFs of PopPowerAggregatorDisengageModernStandby @ 0x140A37138
 * Callers:
 *     PopPowerAggregatorModernStandbyEnterStateHandler @ 0x140A370A0 (PopPowerAggregatorModernStandbyEnterStateHandler.c)
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x140A370F0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x1404CEE60 (PopQueueWorkItem.c)
 *     Feature_PDCSuspendResumeNotifications__private_IsEnabledDeviceUsageNoInline @ 0x140526A8C (Feature_PDCSuspendResumeNotifications__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PopPowerAggregatorSuspendResumeNotify @ 0x140779A64 (PopPowerAggregatorSuspendResumeNotify.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1407CC0E0 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140A38AE8 (PopPowerAggregatorEnterScreenOff.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
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
  __int64 v18; // [rsp+20h] [rbp-58h]
  int v19; // [rsp+40h] [rbp-38h] BYREF
  __int128 v20; // [rsp+48h] [rbp-30h] BYREF
  int v21; // [rsp+58h] [rbp-20h]

  v1 = *(_DWORD *)(a1 + 76);
  v20 = 0LL;
  v21 = 0;
  PopPowerAggregatorEnterScreenOff();
  PopReleaseRwLock(&PopPowerAggregatorLock);
  _m_prefetchw(dword_140F12AC0);
  v3 = dword_140F12AC0[0];
  do
  {
    v4 = v3;
    v5 = v3;
    v3 = _InterlockedCompareExchange(dword_140F12AC0, v3, v3);
  }
  while ( v5 != v3 );
  if ( (v3 & 1) != 0 )
  {
    _m_prefetchw(dword_140F12AC0);
    v6 = dword_140F12AC0[0];
    do
    {
      v4 = v6;
      v7 = v6;
      v6 = _InterlockedCompareExchange(dword_140F12AC0, v6, v6);
    }
    while ( v7 != v6 );
    if ( (v6 & 0x800) != 0 )
      PopDirectedDripsNotifyAppsAndServices((__int64)dword_140F12AC0, dword_140F12AF8, 0);
  }
  PopAcquirePolicyLock(v4, v2);
  HIDWORD(stru_140F0C428.Header.WaitListHead.Blink) &= ~2u;
  if ( _InterlockedExchangeAdd(&PopNetGracePeriodState, 0) == 2 )
    PopQueueWorkItem((__int64)&stru_140F0C428.WaitBlockFill11[64], DelayedWorkQueue);
  HIDWORD(stru_140F0C428.Header.WaitListHead.Blink) &= ~0x80u;
  if ( _InterlockedExchangeAdd(&PopNetGracePeriodState, 0) == 2 )
    PopQueueWorkItem((__int64)&stru_140F0C428.WaitBlockFill11[64], DelayedWorkQueue);
  unk_140F10F10 = 0;
  PopIdleWakeSkippingEnabled = 0;
  PopReleasePolicyLock(v9, v8, v10, v11, v18);
  if ( (unsigned int)Feature_PDCSuspendResumeNotifications__private_IsEnabledDeviceUsageNoInline() )
  {
    PopPowerAggregatorSuspendResumeNotify(4, 0LL);
    PopPowerAggregatorSuspendResumeNotify(3, 0LL);
  }
  else
  {
    *((_QWORD *)&v20 + 1) = 0x100000003LL;
    v21 = -1;
    if ( qword_140E67568 )
      guard_dispatch_icall_no_overrides((__int64)&v20, v12);
    HIDWORD(v20) = 2;
    if ( qword_140E67568 )
      guard_dispatch_icall_no_overrides((__int64)&v20, v12);
  }
  v19 = 1;
  ZwUpdateWnfStateData((__int64)WNF_PO_STANDBY_AUDIO_POLICY, (__int64)&v19);
  guard_dispatch_icall_no_overrides(v1, v13);
  return PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, v14, v15, v16);
}
