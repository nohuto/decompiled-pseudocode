/*
 * XREFs of PopIssueActionRequest @ 0x1409F3438
 * Callers:
 *     PopPolicyWorkerAction @ 0x1409F3240 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140B3F1F0 (PopPolicyWorkerActionPromote.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     PopSetSystemState @ 0x1404272D4 (PopSetSystemState.c)
 *     PpmEndHighPerfRequest @ 0x14049F728 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14049F800 (PpmBeginHighPerfRequest.c)
 *     PopQueueWorkItem @ 0x1404C8890 (PopQueueWorkItem.c)
 *     PopSetPowerActionWatchdogState @ 0x1404F7F48 (PopSetPowerActionWatchdogState.c)
 *     PopPrepareSleep @ 0x1404F8808 (PopPrepareSleep.c)
 *     RtlBootStatusDisableFlushing @ 0x140532BD0 (RtlBootStatusDisableFlushing.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopSetSystemAwayMode @ 0x1407D4430 (PopSetSystemAwayMode.c)
 *     PopDiagTraceHalPostSleepStats @ 0x1407D67D4 (PopDiagTraceHalPostSleepStats.c)
 *     PopReadSystemAwayModePolicy @ 0x1409F2B60 (PopReadSystemAwayModePolicy.c)
 *     PopScreenOff @ 0x1409F4374 (PopScreenOff.c)
 *     PopSuspendApps @ 0x1409F5528 (PopSuspendApps.c)
 *     PopResumeApps @ 0x1409F557C (PopResumeApps.c)
 *     PopSuspendServices @ 0x1409F5634 (PopSuspendServices.c)
 *     PopResumeServices @ 0x1409F5698 (PopResumeServices.c)
 *     PopDispatchStateCallout @ 0x1409F5718 (PopDispatchStateCallout.c)
 *     TtmNotifyLowPowerStateExited @ 0x1409F5A40 (TtmNotifyLowPowerStateExited.c)
 *     TtmIsEnabled @ 0x1409FA8A4 (TtmIsEnabled.c)
 *     PopDiagTracePerfTrackData @ 0x140AF7650 (PopDiagTracePerfTrackData.c)
 *     PopDiagTraceHiberStats @ 0x140AF79E8 (PopDiagTraceHiberStats.c)
 *     PopDiagTracePowerTransitionTime @ 0x140B2D930 (PopDiagTracePowerTransitionTime.c)
 *     PopSetSleepMarker @ 0x140B30AB8 (PopSetSleepMarker.c)
 *     EtwShutdown @ 0x140B384BC (EtwShutdown.c)
 *     PopEnableSystemSleepCheckpoint @ 0x140B3EEA0 (PopEnableSystemSleepCheckpoint.c)
 *     PopDiagTracePowerTransitionStart @ 0x140B47620 (PopDiagTracePowerTransitionStart.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140B48B5C (PopPowerAggregatorNotifySuspendResume.c)
 *     PopDispatchSuperfetchNotification @ 0x140B51798 (PopDispatchSuperfetchNotification.c)
 *     PoBlockConsoleSwitch @ 0x140B56AC0 (PoBlockConsoleSwitch.c)
 *     PopPotsGetActionEntryReason @ 0x140B5AC04 (PopPotsGetActionEntryReason.c)
 *     PopPotsLogPowerTransitionReliability @ 0x140B5F010 (PopPotsLogPowerTransitionReliability.c)
 *     PopDiagTracePowerTransitionEnd @ 0x140B65450 (PopDiagTracePowerTransitionEnd.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140C03138 (PoDelistPowerStateTransitionBlocker.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 *     PopCheckpointSystemSleep @ 0x140C0C680 (PopCheckpointSystemSleep.c)
 *     PfPowerActionNotify @ 0x140C0D3C0 (PfPowerActionNotify.c)
 *     PopReleaseAwaymodeLock @ 0x140C0E9F0 (PopReleaseAwaymodeLock.c)
 *     PopAcquireAwaymodeLock @ 0x140C0EA8C (PopAcquireAwaymodeLock.c)
 *     PopPushPowerStateTransitionRecord @ 0x140C100F4 (PopPushPowerStateTransitionRecord.c)
 *     PopTransitionSystemPowerState @ 0x140C11240 (PopTransitionSystemPowerState.c)
 */

__int64 __fastcall PopIssueActionRequest(char a1, POWER_ACTION a2, SYSTEM_POWER_STATE a3, int a4)
{
  unsigned int v5; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // si
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  bool v24; // zf
  char v25; // si
  int v26; // eax
  unsigned int v27; // r14d
  int v28; // eax
  __int64 v29; // rcx
  char v30; // r15
  int v31; // esi
  char v32; // al
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  char v37; // bl
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  char IsEnabled; // al
  __int64 v43; // rdx
  __int64 v44; // rcx
  char v45; // bl
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // ebx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  int v57; // ecx
  __int64 v58; // rdx
  __int64 v59; // rcx
  signed __int32 v60[8]; // [rsp+0h] [rbp-70h] BYREF
  __int64 v61; // [rsp+20h] [rbp-50h]
  _DWORD v62[3]; // [rsp+28h] [rbp-48h] BYREF
  int v63; // [rsp+34h] [rbp-3Ch]
  __int128 v64; // [rsp+38h] [rbp-38h] BYREF
  __int128 v65; // [rsp+48h] [rbp-28h]
  int v66; // [rsp+58h] [rbp-18h]
  unsigned int v67; // [rsp+5Ch] [rbp-14h]
  unsigned int ActionEntryReason; // [rsp+60h] [rbp-10h]

  v63 = -1073741823;
  v5 = 0;
  v66 = 0;
  v64 = 0LL;
  v62[0] = 0;
  v65 = 0LL;
  PopAcquireAwaymodeLock();
  PopReadSystemAwayModePolicy();
  v13 = 1;
  if ( LOWORD(PpmIdlePolicyLock.IoSelfBoostsEntry.Next)
    && a2 == PowerActionSleep
    && a3 < PowerSystemHibernate
    && (dword_140F10434 & 0xFFFFFFFA) == 0
    && dword_140F10434 != 1 )
  {
    if ( !*(_DWORD *)PpmIdlePolicyLock.PriorityFloorCounts )
    {
      if ( BYTE1(PpmIdlePolicyLock.IoSelfBoostsEntry.Next) )
      {
        if ( (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 0x4000000) != 0 )
          PopSetSystemState(
            (unsigned int)(*(_DWORD *)PpmIdlePolicyLock.PriorityFloorCounts + 4),
            (unsigned int)(*(_DWORD *)PpmIdlePolicyLock.PriorityFloorCounts + 7));
      }
      else
      {
        PopReleasePolicyLock(v10, v9, v11, v12, v61);
        v5 = PopSetSystemAwayMode(1);
        PopAcquirePolicyLock(v15, v14);
      }
    }
    PopReleaseAwaymodeLock();
    return v5;
  }
  PopReleaseAwaymodeLock();
  if ( dword_140F10434 )
  {
    if ( dword_140F10434 == 6 || dword_140F10434 == 7 || dword_140F10434 == 11 )
      v17 = 21;
    else
      v17 = 20;
  }
  else
  {
    v17 = 1;
  }
  ActionEntryReason = PopPotsGetActionEntryReason((unsigned int)dword_140F10434, (unsigned int)dword_140F10438);
  if ( a2 == PowerActionDisplayOff )
  {
    if ( !PopConsoleDisplayState )
      return 3221266435LL;
    PopReleasePolicyLock(v19, v18, v20, v21, v61);
    PopScreenOff(v17);
    PopAcquirePolicyLock(v23, v22);
    return 0LL;
  }
  if ( (unsigned int)(a2 - 4) <= 2 )
  {
    LOBYTE(v61) = 1;
  }
  else
  {
    LOBYTE(v61) = 0;
    v13 = 0;
    PopSetPowerActionWatchdogState(1);
    v63 = PopPushPowerStateTransitionRecord(KeGetCurrentThread()->ApcState.Process, KeGetCurrentThread());
  }
  if ( !BYTE1(PsAltSystemCallRegistrationLock.Timer.DueTime.LowPart) || (v24 = v13 == 0, v25 = 0, !v24) )
    v25 = 1;
  v26 = a4;
  v27 = a4 & 0xFFFFFFFE;
  v28 = v26 | 1;
  if ( a4 >= 0 )
    v27 = v28;
  if ( v25 )
    LOBYTE(PopAction) = PopAction & 0xFD;
  BYTE1(v61) = byte_140F104E0;
  PopReleasePolicyLock(v19, v18, v20, v21, v61);
  PpmBeginHighPerfRequest();
  if ( a1 || v25 )
  {
    v30 = 0;
    PopSleepStats = 0;
    if ( a1 )
    {
      if ( !(_BYTE)v61 )
        goto LABEL_42;
      goto LABEL_43;
    }
  }
  else
  {
    if ( !BYTE1(v61) )
    {
      LOBYTE(v29) = 1;
      PopPowerAggregatorNotifySuspendResume(v29);
    }
    v30 = 1;
    PopSleepStats = 0;
  }
  if ( !(_BYTE)v61 )
  {
    memset_0(&PopSleepStats, 0, 0x368uLL);
    PopDiagTracePowerTransitionStart((unsigned int)dword_140F10434, (unsigned int)dword_140F10438);
    qword_140F109E8 = KeQueryPerformanceCounter(0LL).QuadPart;
    PopEnableSystemSleepCheckpoint();
    PopCheckpointSystemSleep(1LL);
LABEL_42:
    PopSetSleepMarker(1LL);
  }
LABEL_43:
  if ( v25 )
  {
    v31 = PopTransitionSystemPowerState((unsigned int)a2, (unsigned int)a3, v27);
  }
  else
  {
    LOBYTE(v65) = a1;
    *(_QWORD *)((char *)&v65 + 4) = __PAIR64__(a3, a2);
    HIDWORD(v65) = v27;
    v67 = v17;
    v66 = 1;
    v31 = PopDispatchStateCallout(&v64, 0LL);
    v32 = a1;
    if ( !a1 )
    {
      if ( v31 >= 0 && !BYTE1(v61) )
        PopPrepareSleep((__int64)&v64);
      v62[0] = PoBlockConsoleSwitch(&v64);
      v32 = 0;
    }
    if ( v31 >= 0 && !v32 )
    {
      v33 = ((int)v27 >> 31) & 2 | 4u;
      if ( (v27 & 8) == 0 )
        v33 = ((int)v27 >> 31) & 2;
      PfPowerActionNotify(0LL, v33);
      PopNoMoreInput = 1;
      _InterlockedOr(v60, 0);
      if ( !BYTE1(v61) )
      {
        PopSuspendApps(&v64);
        PopSuspendServices(&v64);
      }
      if ( (v27 & 8) != 0 )
      {
        LOBYTE(v34) = 1;
        EtwShutdown(v34);
      }
      PopDispatchSuperfetchNotification(v27, (unsigned int)a3);
      v31 = PopTransitionSystemPowerState((unsigned int)a2, (unsigned int)a3, v27);
      PopAcquirePolicyLock(v36, v35);
      v37 = byte_140F104E0;
      PopReleasePolicyLock(v39, v38, v40, v41, v61);
      PopNoMoreInput = 0;
      _InterlockedOr(v60, 0);
      if ( v37 )
      {
        v30 = 0;
      }
      else
      {
        PopResumeServices(&v64);
        PopPowerAggregatorNotifySuspendResume(0LL);
        v30 = 0;
        PopResumeApps(&v64);
      }
      PfPowerActionNotify(7LL, 0LL);
    }
    v66 = 8;
    PopDispatchStateCallout(&v64, 0LL);
    IsEnabled = TtmIsEnabled();
    if ( !a1 )
    {
      if ( IsEnabled )
      {
        PopAcquirePolicyLock(v44, v43);
        v45 = PopTtmIsSxCompleteNotificationPending;
        PopTtmIsSxTransitionInProgress = 0;
        PopReleasePolicyLock(v47, v46, v48, v49, v61);
        v24 = v45 == 0;
        v50 = v62[0];
        if ( !v24 )
        {
          TtmNotifyLowPowerStateExited(v62[0]);
          PopAcquirePolicyLock(v52, v51);
          PopTtmIsSxCompleteNotificationPending = 0;
          PopReleasePolicyLock(v54, v53, v55, v56, v61);
        }
      }
      else
      {
        v50 = v62[0];
      }
      v62[0] = v50;
      v66 = 7;
      PopDispatchStateCallout(&v64, v62);
    }
  }
  if ( v30 )
    PopPowerAggregatorNotifySuspendResume(0LL);
  if ( !a1 && !(_BYTE)v61 )
  {
    if ( v31 >= 0 )
    {
      qword_140F10A10 = KeQueryPerformanceCounter(0LL).QuadPart;
      PopDiagTraceHiberStats(v27);
      PopDiagTracePowerTransitionTime();
      PopDiagTracePerfTrackData(v27);
      PopDiagTraceHalPostSleepStats();
      PopShutdownButtonPressTime = 0LL;
      SystemAction = a2;
      LightestSystemState = a3;
      PopSleepStats = 1;
    }
    PopCheckpointSystemSleep(41LL);
    PopBootStatCheckpointAvailable = 1;
    RtlBootStatusDisableFlushing(0);
    PopQueueWorkItem((__int64)&PopBsdFlushWorkItem, (WORK_QUEUE_TYPE)(v57 + 1));
    PopDiagTracePowerTransitionEnd((unsigned int)v31);
    PopPotsLogPowerTransitionReliability((unsigned int)v31, (unsigned int)a3, ActionEntryReason);
  }
  PpmEndHighPerfRequest(2);
  PopAcquirePolicyLock(v59, v58);
  if ( v63 >= 0 )
    PoDelistPowerStateTransitionBlocker();
  PopSetPowerActionWatchdogState(0);
  return (unsigned int)v31;
}
