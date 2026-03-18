/*
 * XREFs of PopEtProcessEnumSnapshotCallback @ 0x1407DC800
 * Callers:
 *     PopEtProcessEnumSnapshotCallback @ 0x1407DC800 (PopEtProcessEnumSnapshotCallback.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     Feature_NpuProcessAttributionDxgDeadlockFix__private_IsEnabledDeviceUsageNoInline @ 0x1404ACBEC (Feature_NpuProcessAttributionDxgDeadlockFix__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopEtEnergyTrackerQueryProcessEnergyValues @ 0x1407DC454 (PopEtEnergyTrackerQueryProcessEnergyValues.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x1407DC800 (PopEtProcessEnumSnapshotCallback.c)
 *     PopEtProcessSnapshotUpdate @ 0x140951054 (PopEtProcessSnapshotUpdate.c)
 *     PsQueryProcessEnergyValues @ 0x140952980 (PsQueryProcessEnergyValues.c)
 *     PopEtIsrDpcQuery @ 0x140AB040C (PopEtIsrDpcQuery.c)
 *     PopEtEnergyTrackerQueryDxgProcessEnergyValues @ 0x140B6D478 (PopEtEnergyTrackerQueryDxgProcessEnergyValues.c)
 */

__int64 __fastcall PopEtProcessEnumSnapshotCallback(_QWORD *a1, __int64 a2)
{
  bool v4; // zf
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v12; // rcx
  char v13; // bl
  __int64 v14; // rdx
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  __int64 v18; // [rsp+20h] [rbp-1F8h] BYREF
  _BYTE v19[448]; // [rsp+30h] [rbp-1E8h] BYREF

  memset_0(v19, 0, 0x1B8uLL);
  v4 = *(_DWORD *)(a2 + 4) == 0;
  v18 = 0LL;
  if ( v4 && a1 != PsIdleProcess )
    PopEtProcessEnumSnapshotCallback(PsIdleProcess, a2);
  if ( a1[205] )
  {
    *(_QWORD *)(a2 + 8) = a1;
    *(_QWORD *)(a2 + 24) = v19;
    if ( !(unsigned int)Feature_NpuProcessAttributionDxgDeadlockFix__private_IsEnabledDeviceUsageNoInline() )
      PopAcquireRwLockShared((volatile signed __int64 *)(a1[205] + 440LL), v5, v6, v7);
    if ( a1 == PsIdleProcess )
    {
      if ( (unsigned int)Feature_NpuProcessAttributionDxgDeadlockFix__private_IsEnabledDeviceUsageNoInline() )
        PopAcquireRwLockShared((volatile signed __int64 *)(a1[205] + 440LL), v8, v9, v10);
      PopEtIsrDpcQuery(a1, v19);
    }
    else
    {
      IsEnabledDeviceUsageNoInline = Feature_NpuProcessAttributionDxgDeadlockFix__private_IsEnabledDeviceUsageNoInline();
      v12 = *(_QWORD *)(a2 + 16);
      if ( IsEnabledDeviceUsageNoInline )
      {
        v13 = PopEtEnergyTrackerQueryDxgProcessEnergyValues(v12, a1, &v18);
        PopAcquireRwLockShared((volatile signed __int64 *)(a1[205] + 440LL), v14, v15, v16);
        if ( v13 && v18 )
          *(_QWORD *)(a1[205] + 432LL) = v18;
      }
      else
      {
        PopEtEnergyTrackerQueryProcessEnergyValues(v12, (__int64)a1);
      }
      PsQueryProcessEnergyValues(a1, v19);
    }
    PopEtProcessSnapshotUpdate(a2);
    PopReleaseRwLock((struct _KTHREAD *)(a1[205] + 440LL));
    ++*(_DWORD *)(a2 + 4);
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  return 0LL;
}
