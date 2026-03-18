/*
 * XREFs of PopIssueActionRequest @ 0x140A37878
 * Callers:
 *     PopPolicyWorkerAction @ 0x140A37680 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140B3D020 (PopPolicyWorkerActionPromote.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     PopSetSystemState @ 0x1404383B4 (PopSetSystemState.c)
 *     PpmEndHighPerfRequest @ 0x1404A6098 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1404A6170 (PpmBeginHighPerfRequest.c)
 *     PopQueueWorkItem @ 0x1404CEE60 (PopQueueWorkItem.c)
 *     PopSetPowerActionWatchdogState @ 0x1404FE998 (PopSetPowerActionWatchdogState.c)
 *     PopPrepareSleep @ 0x1404FF018 (PopPrepareSleep.c)
 *     RtlBootStatusDisableFlushing @ 0x1405306D0 (RtlBootStatusDisableFlushing.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopSetSystemAwayMode @ 0x1407D1390 (PopSetSystemAwayMode.c)
 *     PopDiagTraceHalPostSleepStats @ 0x1407D3654 (PopDiagTraceHalPostSleepStats.c)
 *     PopReadSystemAwayModePolicy @ 0x140A36FA8 (PopReadSystemAwayModePolicy.c)
 *     PopScreenOff @ 0x140A387B4 (PopScreenOff.c)
 *     PopSuspendApps @ 0x140A39920 (PopSuspendApps.c)
 *     PopResumeApps @ 0x140A39974 (PopResumeApps.c)
 *     PopSuspendServices @ 0x140A39A2C (PopSuspendServices.c)
 *     PopResumeServices @ 0x140A39A90 (PopResumeServices.c)
 *     PopDispatchStateCallout @ 0x140A39B10 (PopDispatchStateCallout.c)
 *     TtmNotifyLowPowerStateExited @ 0x140A39E40 (TtmNotifyLowPowerStateExited.c)
 *     TtmIsEnabled @ 0x140A3EE84 (TtmIsEnabled.c)
 *     PopDiagTracePerfTrackData @ 0x140AF4FB0 (PopDiagTracePerfTrackData.c)
 *     PopDiagTraceHiberStats @ 0x140AF5348 (PopDiagTraceHiberStats.c)
 *     PopDiagTracePowerTransitionTime @ 0x140B2B8B0 (PopDiagTracePowerTransitionTime.c)
 *     PopSetSleepMarker @ 0x140B2ECDC (PopSetSleepMarker.c)
 *     EtwShutdown @ 0x140B362AC (EtwShutdown.c)
 *     PopEnableSystemSleepCheckpoint @ 0x140B3CC20 (PopEnableSystemSleepCheckpoint.c)
 *     PopDiagTracePowerTransitionStart @ 0x140B455E4 (PopDiagTracePowerTransitionStart.c)
 *     PopPowerAggregatorNotifySuspendResume @ 0x140B46B2C (PopPowerAggregatorNotifySuspendResume.c)
 *     PopDispatchSuperfetchNotification @ 0x140B4EF08 (PopDispatchSuperfetchNotification.c)
 *     PoBlockConsoleSwitch @ 0x140B54220 (PoBlockConsoleSwitch.c)
 *     PopPotsGetActionEntryReason @ 0x140B57CB4 (PopPotsGetActionEntryReason.c)
 *     PopPotsLogPowerTransitionReliability @ 0x140B5BCF4 (PopPotsLogPowerTransitionReliability.c)
 *     PopDiagTracePowerTransitionEnd @ 0x140B623B0 (PopDiagTracePowerTransitionEnd.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140BFD138 (PoDelistPowerStateTransitionBlocker.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 *     PopCheckpointSystemSleep @ 0x140C06470 (PopCheckpointSystemSleep.c)
 *     PfPowerActionNotify @ 0x140C071B0 (PfPowerActionNotify.c)
 *     PopReleaseAwaymodeLock @ 0x140C087E0 (PopReleaseAwaymodeLock.c)
 *     PopAcquireAwaymodeLock @ 0x140C0887C (PopAcquireAwaymodeLock.c)
 *     PopPushPowerStateTransitionRecord @ 0x140C09EE4 (PopPushPowerStateTransitionRecord.c)
 *     PopTransitionSystemPowerState @ 0x140C0B030 (PopTransitionSystemPowerState.c)
 */

__int64 __fastcall PopIssueActionRequest(char a1, unsigned int a2, unsigned int a3, int a4)
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
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  bool v26; // zf
  char v27; // si
  int v28; // eax
  unsigned int v29; // r14d
  int v30; // eax
  __int64 v31; // rcx
  char v32; // r15
  int v33; // esi
  char v34; // al
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  char v39; // bl
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  char IsEnabled; // al
  __int64 v48; // rdx
  __int64 v49; // rcx
  char v50; // bl
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  int v55; // ebx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  int v62; // ecx
  __int64 v63; // rdx
  __int64 v64; // rcx
  signed __int32 v65[8]; // [rsp+0h] [rbp-70h] BYREF
  __int64 v66; // [rsp+20h] [rbp-50h]
  _DWORD v67[3]; // [rsp+28h] [rbp-48h] BYREF
  int v68; // [rsp+34h] [rbp-3Ch]
  __int128 v69; // [rsp+38h] [rbp-38h] BYREF
  __int128 v70; // [rsp+48h] [rbp-28h]
  int v71; // [rsp+58h] [rbp-18h]
  unsigned int v72; // [rsp+5Ch] [rbp-14h]
  unsigned int ActionEntryReason; // [rsp+60h] [rbp-10h]

  v68 = -1073741823;
  v5 = 0;
  v71 = 0;
  v69 = 0LL;
  v67[0] = 0;
  v70 = 0LL;
  PopAcquireAwaymodeLock();
  PopReadSystemAwayModePolicy();
  v13 = 1;
  if ( (byte_140F106D0 || byte_140F106D1)
    && a2 == 2
    && (int)a3 < 5
    && (dword_140F0FB74 & 0xFFFFFFFA) == 0
    && dword_140F0FB74 != 1 )
  {
    if ( !dword_140F106D8 )
    {
      if ( byte_140F106D1 )
      {
        if ( (*(_DWORD *)&stru_140F10828.WaitBlockFill11[100] & 0x4000000) != 0 )
          PopSetSystemState((unsigned int)(dword_140F106D8 + 4), (unsigned int)(dword_140F106D8 + 7));
      }
      else
      {
        PopReleasePolicyLock(v10, v9, v11, v12, v66);
        v5 = PopSetSystemAwayMode(1);
        PopAcquirePolicyLock(v15, v14);
      }
    }
    PopReleaseAwaymodeLock();
    return v5;
  }
  PopReleaseAwaymodeLock();
  if ( dword_140F0FB74 )
  {
    if ( dword_140F0FB74 == 6 || dword_140F0FB74 == 7 || dword_140F0FB74 == 11 )
      v17 = 21;
    else
      v17 = 20;
  }
  else
  {
    v17 = 1;
  }
  ActionEntryReason = PopPotsGetActionEntryReason((unsigned int)dword_140F0FB74, (unsigned int)dword_140F0FB78);
  if ( a2 == 8 )
  {
    if ( !PopConsoleDisplayState )
      return 3221266435LL;
    PopReleasePolicyLock(v19, v18, v20, v21, v66);
    PopScreenOff(v17, v22, v23);
    PopAcquirePolicyLock(v25, v24);
    return 0LL;
  }
  if ( a2 - 4 <= 2 )
  {
    LOBYTE(v66) = 1;
  }
  else
  {
    LOBYTE(v66) = 0;
    v13 = 0;
    PopSetPowerActionWatchdogState(1);
    v68 = PopPushPowerStateTransitionRecord(KeGetCurrentThread()->ApcState.Process, KeGetCurrentThread());
  }
  if ( !LOBYTE(PsAltSystemCallRegistrationLock.TrapFrame) || (v26 = v13 == 0, v27 = 0, !v26) )
    v27 = 1;
  v28 = a4;
  v29 = a4 & 0xFFFFFFFE;
  v30 = v28 | 1;
  if ( a4 >= 0 )
    v29 = v30;
  if ( v27 )
    LOBYTE(byte_140F0FB60) = byte_140F0FB60 & 0xFD;
  BYTE1(v66) = byte_140F0FC20;
  PopReleasePolicyLock(v19, v18, v20, v21, v66);
  PpmBeginHighPerfRequest();
  if ( a1 || v27 )
  {
    v32 = 0;
    LOBYTE(stru_140F10070.WaitBlockList) = 0;
    if ( a1 )
    {
      if ( !(_BYTE)v66 )
        goto LABEL_43;
      goto LABEL_44;
    }
  }
  else
  {
    if ( !BYTE1(v66) )
    {
      LOBYTE(v31) = 1;
      PopPowerAggregatorNotifySuspendResume(v31);
    }
    v32 = 1;
    LOBYTE(stru_140F10070.WaitBlockList) = 0;
  }
  if ( !(_BYTE)v66 )
  {
    memset_0(&stru_140F10070.WaitBlockList, 0, 0x368uLL);
    PopDiagTracePowerTransitionStart((unsigned int)dword_140F0FB74, (unsigned int)dword_140F0FB78);
    stru_140F10070.WaitListEntry.Flink = (struct _LIST_ENTRY *)KeQueryPerformanceCounter(0LL).QuadPart;
    PopEnableSystemSleepCheckpoint();
    PopCheckpointSystemSleep(1LL);
LABEL_43:
    PopSetSleepMarker(1LL);
  }
LABEL_44:
  if ( v27 )
  {
    v33 = PopTransitionSystemPowerState(a2, a3, v29);
  }
  else
  {
    LOBYTE(v70) = a1;
    *(_QWORD *)((char *)&v70 + 4) = __PAIR64__(a3, a2);
    HIDWORD(v70) = v29;
    v72 = v17;
    v71 = 1;
    v33 = PopDispatchStateCallout(&v69, 0LL);
    v34 = a1;
    if ( !a1 )
    {
      if ( v33 >= 0 && !BYTE1(v66) )
        PopPrepareSleep((__int64)&v69);
      v67[0] = PoBlockConsoleSwitch(&v69);
      v34 = 0;
    }
    if ( v33 >= 0 && !v34 )
    {
      v35 = ((int)v29 >> 31) & 2 | 4u;
      if ( (v29 & 8) == 0 )
        v35 = ((int)v29 >> 31) & 2;
      PfPowerActionNotify(0LL, v35);
      BYTE4(stru_140F10828.KernelShadowStackInitial) = 1;
      _InterlockedOr(v65, 0);
      if ( !BYTE1(v66) )
      {
        PopSuspendApps(&v69);
        PopSuspendServices(&v69);
      }
      if ( (v29 & 8) != 0 )
      {
        LOBYTE(v36) = 1;
        EtwShutdown(v36);
      }
      PopDispatchSuperfetchNotification(v29, a3);
      v33 = PopTransitionSystemPowerState(a2, a3, v29);
      PopAcquirePolicyLock(v38, v37);
      v39 = byte_140F0FC20;
      PopReleasePolicyLock(v41, v40, v42, v43, v66);
      BYTE4(stru_140F10828.KernelShadowStackInitial) = 0;
      _InterlockedOr(v65, 0);
      if ( v39 )
      {
        v32 = 0;
      }
      else
      {
        PopResumeServices(&v69);
        PopPowerAggregatorNotifySuspendResume(0LL);
        v32 = 0;
        PopResumeApps(&v69);
      }
      PfPowerActionNotify(7LL, 0LL);
    }
    v71 = 8;
    PopDispatchStateCallout(&v69, 0LL);
    IsEnabled = TtmIsEnabled(v45, v44, v46);
    if ( !a1 )
    {
      if ( IsEnabled )
      {
        PopAcquirePolicyLock(v49, v48);
        v50 = byte_140F11080;
        LOBYTE(stru_140F110C0.QuantumTarget) = 0;
        PopReleasePolicyLock(v52, v51, v53, v54, v66);
        v26 = v50 == 0;
        v55 = v67[0];
        if ( !v26 )
        {
          TtmNotifyLowPowerStateExited(v67[0]);
          PopAcquirePolicyLock(v57, v56);
          byte_140F11080 = 0;
          PopReleasePolicyLock(v59, v58, v60, v61, v66);
        }
      }
      else
      {
        v55 = v67[0];
      }
      v67[0] = v55;
      v71 = 7;
      PopDispatchStateCallout(&v69, v67);
    }
  }
  if ( v32 )
    PopPowerAggregatorNotifySuspendResume(0LL);
  if ( !a1 && !(_BYTE)v66 )
  {
    if ( v33 >= 0 )
    {
      *(LARGE_INTEGER *)&stru_140F10070.Timer.Header.Lock = KeQueryPerformanceCounter(0LL);
      PopDiagTraceHiberStats(v29);
      PopDiagTracePowerTransitionTime();
      PopDiagTracePerfTrackData(v29);
      PopDiagTraceHalPostSleepStats();
      unk_140F12AA0 = 0LL;
      LODWORD(stru_140F10070.WpsFeedback) = a2;
      HIDWORD(stru_140F10070.WpsFeedback) = a3;
      LOBYTE(stru_140F10070.WaitBlockList) = 1;
    }
    PopCheckpointSystemSleep(41LL);
    PopBootStatCheckpointAvailable = 1;
    RtlBootStatusDisableFlushing(0);
    PopQueueWorkItem((__int64)&stru_140F12D20.AbCompletedIoQoSBoostCount, (WORK_QUEUE_TYPE)(v62 + 1));
    PopDiagTracePowerTransitionEnd((unsigned int)v33);
    PopPotsLogPowerTransitionReliability((unsigned int)v33, a3, ActionEntryReason);
  }
  PpmEndHighPerfRequest(2);
  PopAcquirePolicyLock(v64, v63);
  if ( v68 >= 0 )
    PoDelistPowerStateTransitionBlocker();
  PopSetPowerActionWatchdogState(0);
  return (unsigned int)v33;
}
