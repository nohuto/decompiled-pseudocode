/*
 * XREFs of PspEnumJobsAndProcessesInJobHierarchy @ 0x14095A350
 * Callers:
 *     PspQueryJobHierarchyAccountingInformation @ 0x140772FF8 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x14077C4E4 (PspSendNoWakeChargeLimitNotification.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1407EFAF8 (PspTerminateSiloSubsystemProcesses.c)
 *     NtSetInformationJobObject @ 0x1407F4C70 (NtSetInformationJobObject.c)
 *     PspDoesJobHierarchyPermitUILimits_Old @ 0x1407F7C08 (PspDoesJobHierarchyPermitUILimits_Old.c)
 *     PspEstablishJobHierarchy @ 0x1407F836C (PspEstablishJobHierarchy.c)
 *     PspFreezeJobTree @ 0x1407F8824 (PspFreezeJobTree.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1407F8EFC (PspQueryJobHierarchyInterferenceCount.c)
 *     PspRemoveRateControl @ 0x1407F9160 (PspRemoveRateControl.c)
 *     PspSetIoPriorityLimitJobTree @ 0x1407F9304 (PspSetIoPriorityLimitJobTree.c)
 *     PspSetJobRateControl @ 0x1407F987C (PspSetJobRateControl.c)
 *     PspSetPagePriorityLimitJobTree @ 0x1407F9D6C (PspSetPagePriorityLimitJobTree.c)
 *     PspSetJobIoAttribution @ 0x140958108 (PspSetJobIoAttribution.c)
 *     PspIsSetJobIoAttribution @ 0x1409583C4 (PspIsSetJobIoAttribution.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x14095859C (PspSetEnergyTrackingStateJobTree.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x140958B14 (PspQueryJobHierarchyProcessIdList.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x140958CB0 (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspEnforceLimits @ 0x14095A0E0 (PspEnforceLimits.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1409E0694 (PspAddSchedulingGroupToJobChain.c)
 *     PspSetBackgroundJobTree @ 0x140AF7AB8 (PspSetBackgroundJobTree.c)
 *     PspRemoveIoAttribution @ 0x140AFC3A8 (PspRemoveIoAttribution.c)
 *     PspCheckEnableNotificationChannel @ 0x140B650F8 (PspCheckEnableNotificationChannel.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x140B79198 (PspDoesJobHierarchyPermitUILimits.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140258450 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastResourceShared @ 0x140276AE0 (ExAcquireFastResourceShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExInitializeFastOwnerEntry @ 0x14043D670 (ExInitializeFastOwnerEntry.c)
 *     ExReleaseFastResourceShared @ 0x140485E00 (ExReleaseFastResourceShared.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PspCallJobHierarchyCallbacks @ 0x14095A5C8 (PspCallJobHierarchyCallbacks.c)
 *     PspGetNextChildJob @ 0x14095A784 (PspGetNextChildJob.c)
 */

__int64 __fastcall PspEnumJobsAndProcessesInJobHierarchy(__int64 *Object, int a2, int a3, int a4, __int64 a5, int a6)
{
  int v6; // esi
  unsigned int v7; // r13d
  __int64 *v9; // rbx
  int v10; // r15d
  struct _KTHREAD *CurrentThread; // rdi
  __int64 NextChildJob; // rbp
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rax
  __int64 *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v20; // rdi
  ULONG_PTR v22[19]; // [rsp+30h] [rbp-98h] BYREF
  unsigned int v23; // [rsp+D0h] [rbp+8h]
  int v24; // [rsp+D8h] [rbp+10h]
  int v25; // [rsp+E0h] [rbp+18h]
  int v26; // [rsp+E8h] [rbp+20h]

  v26 = a4;
  v25 = a3;
  v24 = a2;
  v6 = a6;
  v7 = a6 & 0xFFFFFFFE;
  v9 = Object;
  if ( (a6 & 8) != 0 )
    v7 = a6 | 1;
  v10 = 0;
  v23 = v7;
  if ( (a6 & 8) != 0 )
    v6 = a6 | 1;
  while ( (v6 & 2) != 0 )
  {
LABEL_6:
    memset_0(v22, 0, 0x48uLL);
    CurrentThread = KeGetCurrentThread();
    NextChildJob = 0LL;
    ExInitializeFastOwnerEntry((__int64)v22);
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    ExAcquireFastResourceShared(v9 + 7, (ULONG_PTR)v22, 1);
    v15 = v9 + 161;
    v16 = (__int64 *)v9[161];
    while ( v16 != v15 )
    {
      if ( ObReferenceObjectSafeWithTag((__int64)(v16 - 159), 0x6E457350u) )
      {
        NextChildJob = (__int64)(v16 - 159);
        break;
      }
      v16 = (__int64 *)*v16;
      v15 = v9 + 161;
    }
    ExReleaseFastResourceShared((ULONG_PTR)(v9 + 7), (ULONG_PTR)v22, v13, v14);
    if ( CurrentThread )
    {
      if ( CurrentThread->SpecialApcDisable++ == -1
        && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v18, v17);
      }
    }
    v7 = v23;
    if ( !NextChildJob )
    {
      v20 = (__int64 *)v9[163];
      while ( v9 != Object )
      {
        if ( (v6 & 2) != 0 )
        {
          v10 = PspCallJobHierarchyCallbacks((_DWORD)v9, v24, v25, v26, a5, v23);
          if ( v10 < 0 )
            goto LABEL_20;
        }
        NextChildJob = PspGetNextChildJob(v20, v9);
        if ( NextChildJob )
          break;
        v9 = v20;
        v20 = (__int64 *)v20[163];
      }
    }
    v9 = (__int64 *)NextChildJob;
    if ( !NextChildJob )
    {
      if ( (v6 & 2) != 0 )
        return (unsigned int)PspCallJobHierarchyCallbacks((_DWORD)Object, v24, v25, v26, a5, v6);
      return (unsigned int)v10;
    }
    a4 = v26;
    a3 = v25;
    a2 = v24;
  }
  v10 = PspCallJobHierarchyCallbacks((_DWORD)v9, a2, a3, a4, a5, v6);
  if ( v10 >= 0 )
  {
    v6 = v7;
    goto LABEL_6;
  }
LABEL_20:
  if ( v9 )
  {
    while ( v9 != Object )
    {
      ObfDereferenceObjectWithTag(v9, 0x6E457350u);
      v9 = (__int64 *)v9[163];
    }
  }
  return (unsigned int)v10;
}
