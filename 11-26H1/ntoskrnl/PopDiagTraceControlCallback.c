/*
 * XREFs of PopDiagTraceControlCallback @ 0x140AC0910
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     PopDiagTraceFxRundown @ 0x14042B1A4 (PopDiagTraceFxRundown.c)
 *     PopThermalTraceRundownEvents @ 0x14043572C (PopThermalTraceRundownEvents.c)
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x1404A5D5C (PopDiagTraceSystemLatencyUpdate.c)
 *     ExTraceTimerResolution @ 0x1404EA784 (ExTraceTimerResolution.c)
 *     PopDiagTraceDeepSleepConstraintRundown @ 0x1404F2A9C (PopDiagTraceDeepSleepConstraintRundown.c)
 *     PopPlTraceLogPowerPlane @ 0x140612B9C (PopPlTraceLogPowerPlane.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopDiagTracePowerRequestCreate @ 0x140AC0BAC (PopDiagTracePowerRequestCreate.c)
 *     PopDiagTracePlatformRoleRundown @ 0x140AC0F74 (PopDiagTracePlatformRoleRundown.c)
 *     PopRundownPowerSettings @ 0x140AC1020 (PopRundownPowerSettings.c)
 *     PopDiagTracePowerStateEventRundown @ 0x140AC118C (PopDiagTracePowerStateEventRundown.c)
 *     PopLoggingInformation @ 0x140AC125C (PopLoggingInformation.c)
 *     PopRundownThermalRequests @ 0x140AC135C (PopRundownThermalRequests.c)
 *     PopDiagTraceDeviceComplianceRundown @ 0x140AC1418 (PopDiagTraceDeviceComplianceRundown.c)
 *     PopDiagTraceDynamicTickStatusRundown @ 0x140AC14D4 (PopDiagTraceDynamicTickStatusRundown.c)
 *     PopRundownPowerLimitRequests @ 0x140AC1560 (PopRundownPowerLimitRequests.c)
 *     PopDiagTraceSystemIdleRundown @ 0x140AC1618 (PopDiagTraceSystemIdleRundown.c)
 *     PopTraceStandbyConnectivityRundown @ 0x140AC16A0 (PopTraceStandbyConnectivityRundown.c)
 *     PopTransitionTelemetryOsState @ 0x140B20D08 (PopTransitionTelemetryOsState.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopDiagTraceControlCallback(
        LPCGUID SourceId,
        __int64 ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        int *CallbackContext)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  __int64 v10; // rcx
  struct _KTHREAD *i; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  struct _KLOCK_ENTRIES *v22; // r9
  PVOID v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  struct _KLOCK_ENTRIES *v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  struct _KLOCK_ENTRIES *v35; // r9
  unsigned int v36; // r15d
  char *v37; // r14
  unsigned int v38; // r12d
  char *v39; // r13
  ULONG v40; // ebx
  PEVENT_DATA_DESCRIPTOR UserDataa; // [rsp+20h] [rbp-40h]
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-40h]
  unsigned int v43; // [rsp+30h] [rbp-30h] BYREF
  BOOL v44; // [rsp+34h] [rbp-2Ch] BYREF
  PVOID P; // [rsp+38h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+40h] [rbp-20h] BYREF

  if ( (_DWORD)ControlCode == 2 )
  {
    v43 = 0;
    if ( CallbackContext == &dword_140E07598 )
    {
      if ( (MatchAnyKeyword & 0x800000000000LL) != 0 )
        PopTransitionTelemetryOsState(5LL);
      if ( PopPowerPlane )
        PopPlTraceLogPowerPlane((unsigned __int16 *)PopPowerPlane, ControlCode, Level);
    }
    else
    {
      ExTraceTimerResolution();
      PopDiagTraceSystemLatencyUpdate(1, PopFxSystemLatencyLimit);
      PopAcquireRwLockShared((volatile signed __int64 *)&stru_140F12D20.Header.Lock, v7, v8, v9);
      for ( i = (struct _KTHREAD *)stru_140F12D20.QuantumTarget;
            i != (struct _KTHREAD *)&stru_140F12D20.QuantumTarget;
            i = *(struct _KTHREAD **)&i->Header.Lock )
      {
        LOBYTE(v10) = 1;
        PopDiagTracePowerRequestCreate(v10, i);
      }
      PopReleaseRwLock(&stru_140F12D20);
      *(_QWORD *)&v46.Size = 4LL;
      v44 = dword_140F106CC == 0;
      v46.Ptr = (ULONGLONG)&v44;
      EtwWrite(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        &POP_ETW_EVENT_ACDC_STATE_RUNDOWN,
        0LL,
        1u,
        &v46);
      PopRundownPowerSettings();
      PopThermalTraceRundownEvents();
      P = 0LL;
      PopAcquirePolicyLock(v13, v12);
      v15 = PopLoggingInformation(&P, &v43, v14);
      PopReleasePolicyLock(v17, v16, v18, v19, UserDataa);
      v23 = P;
      if ( v15 >= 0 )
      {
        v36 = *(_DWORD *)P;
        v37 = (char *)P + 4;
        v38 = 0;
        if ( *(_DWORD *)P )
        {
          v39 = (char *)P + v43;
          do
          {
            if ( v37 >= v39 )
              break;
            v40 = *((_DWORD *)v37 + 3) + 16;
            v46.Ptr = (ULONGLONG)v37;
            v46.Size = v40;
            v46.Reserved = 0;
            EtwWrite(
              *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
              &POP_ETW_EVENT_SLEEP_DISABLE_REASON_RUNDOWN,
              0LL,
              1u,
              &v46);
            ++v38;
            v37 += v40;
          }
          while ( v38 < v36 );
        }
      }
      if ( v23 )
        ExFreePoolWithTag(v23, 0);
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)&PopSleepstudySessionLock.ForegroundLossTime, 1, 0) )
        ExQueueWorkItem((PWORK_QUEUE_ITEM)&PopSleepstudySessionLock.ReadOperationCount, DelayedWorkQueue);
      if ( CallbackContext == (int *)&PopSleepstudySessionLock.PriorityFloorCounts[16] )
        PopDiagTraceFxRundown(0LL, v20, v21, v22);
      PopDiagTracePlatformRoleRundown();
      PopRundownThermalRequests();
      PopRundownPowerLimitRequests();
      PopAcquirePolicyLock(v25, v24);
      PopTraceStandbyConnectivityRundown();
      PopDiagTraceDeviceComplianceRundown();
      PopReleasePolicyLock(v27, v26, v28, v29, UserData);
      PopDiagTraceDynamicTickStatusRundown();
      PopDiagTraceDeepSleepConstraintRundown();
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopWeakChargerLock.OtherOperationCount, v30, v31, v32);
      PopDiagTracePowerStateEventRundown();
      PopReleaseRwLock((struct _KTHREAD *)&PopWeakChargerLock.OtherOperationCount);
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopWeakChargerLock.SuspendEvent, v33, v34, v35);
      PopDiagTraceSystemIdleRundown();
      PopReleaseRwLock((struct _KTHREAD *)&PopWeakChargerLock.SuspendEvent);
    }
  }
}
