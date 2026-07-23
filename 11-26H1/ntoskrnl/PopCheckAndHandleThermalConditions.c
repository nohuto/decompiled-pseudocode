/*
 * XREFs of PopCheckAndHandleThermalConditions @ 0x1404E6660
 * Callers:
 *     PopThermalWorker @ 0x140AC58C0 (PopThermalWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026E824 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopThermalStandbyEndTracking @ 0x140423E3C (PopThermalStandbyEndTracking.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x1404C8890 (PopQueueWorkItem.c)
 *     PopThermalWriteShutdownToRegistry @ 0x1404F9E30 (PopThermalWriteShutdownToRegistry.c)
 *     PopThermalStandbyNotify @ 0x14060A7A4 (PopThermalStandbyNotify.c)
 *     PopDiagTraceThermalStateChange @ 0x14060BF5C (PopDiagTraceThermalStateChange.c)
 *     PopTraceCr3Mitigated @ 0x14060C78C (PopTraceCr3Mitigated.c)
 *     PopTraceCr3Tripped @ 0x14060C824 (PopTraceCr3Tripped.c)
 *     PopTraceZoneCr3Mitigated @ 0x14060CF50 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x14060D074 (PopTraceZoneCr3Tripped.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     PopUpdateOverThrottledCount @ 0x1407D5158 (PopUpdateOverThrottledCount.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x1407D8864 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x1407D8958 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalShutdown @ 0x1407E860C (PopSqmThermalCriticalShutdown.c)
 *     PopSqmThermalHibernate @ 0x1407E8630 (PopSqmThermalHibernate.c)
 *     PopIsHibernateSupported @ 0x140B30758 (PopIsHibernateSupported.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopCheckAndHandleThermalConditions(__int64 a1)
{
  __int64 v1; // rbp
  char v3; // si
  bool v4; // r14
  char v5; // dl
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v10; // rbx
  __int64 v11; // r8
  char IsHibernateSupported; // bl
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  struct _KLOCK_ENTRIES *v19; // r9
  char v20; // al
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  char v24; // bl

  v1 = *(_QWORD *)(a1 + 48);
  v3 = 0;
  v4 = 0;
  if ( *(_BYTE *)(a1 + 210) && !*(_BYTE *)(a1 + 71) )
  {
    v3 = 1;
    PopSqmThermalCriticalShutdown();
    PopDiagTraceZoneCriticalTripPointExceeded(a1 + 112, v1);
    *(_BYTE *)(a1 + 71) = 1;
  }
  if ( *(_BYTE *)(a1 + 209) )
  {
    PopDiagTraceZoneS4TripPointExceeded(a1 + 112, v1);
    PopSqmThermalHibernate(a1);
    if ( (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 0x4000) == 0 )
    {
      PopAcquirePolicyLock(v8, v7);
      IsHibernateSupported = PopIsHibernateSupported(&PpmIdlePolicyLock.Padding[1]);
      if ( !IsHibernateSupported )
        v3 = 1;
      PopReleasePolicyLock();
      v4 = IsHibernateSupported != 0;
      if ( !v3 )
        goto LABEL_23;
      goto LABEL_12;
    }
    ZwUpdateWnfStateData(&WNF_PO_THERMAL_HIBERNATE_OCCURRED, 0LL, 0, 0LL, 0LL, 0, 0);
  }
  if ( !v3 )
    goto LABEL_4;
LABEL_12:
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(v1, 0x6D546F50u);
  v10 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
    v11 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
  else
    v11 = 0LL;
  v16 = a1 + 128;
  if ( *(_BYTE *)(a1 + 228) )
    v16 = 0LL;
  PopThermalWriteShutdownToRegistry((v11 + 128) & -(__int64)(v11 != 0), v16, -v11);
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x6D546F50u);
LABEL_23:
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopThermalStateTransitionContext, v13, v14, v15);
  if ( v4 )
    byte_140F0FCF1 = 1;
  if ( v3 )
    byte_140F0FCF3 = 1;
  PopReleaseRwLock((struct _KTHREAD *)&PopThermalStateTransitionContext);
  PopQueueWorkItem((__int64)&PopThermalStateTransitionWorkItem, DelayedWorkQueue);
LABEL_4:
  v5 = *(_BYTE *)(a1 + 224) != 0;
  if ( *(_BYTE *)(a1 + 73) != v5 )
  {
    *(_BYTE *)(a1 + 73) = v5;
    PopUpdateOverThrottledCount(a1);
  }
  result = *(unsigned __int8 *)(a1 + 211);
  if ( *(_BYTE *)(a1 + 72) != (_BYTE)result )
  {
    PopDiagTraceThermalStateChange(
      *(_QWORD *)(a1 + 48),
      *(unsigned __int8 *)(a1 + 211),
      POP_ETW_EVENT_THERMAL_ZONE_THERMAL_STANDBY_UPDATE);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopSystemThermalInfo, v17, v18, v19);
    v20 = *(_BYTE *)(a1 + 211);
    *(_BYTE *)(a1 + 72) = v20;
    if ( v20 )
    {
      if ( ++dword_140F0FE74 == 1 )
      {
        byte_140F0FE7C = 1;
        ++dword_140F0FE78;
        PopTraceCr3Tripped();
      }
      PopTraceZoneCr3Tripped((unsigned int)dword_140F0FE78, a1);
    }
    else
    {
      PopTraceZoneCr3Mitigated((unsigned int)dword_140F0FE78, a1);
      --dword_140F0FE74;
    }
    if ( dword_140F0FE74 )
    {
      v24 = 1;
    }
    else
    {
      v24 = 0;
      PopThermalStandbyEndTracking(0LL, v21, v23);
      PopTraceCr3Mitigated((unsigned int)dword_140F0FE78);
      if ( HIBYTE(word_140F0FE70) )
      {
        PopThermalStandbyNotify(0LL);
        HIBYTE(word_140F0FE70) = 0;
        return PopReleaseRwLock((struct _KTHREAD *)&PopSystemThermalInfo);
      }
    }
    if ( !v4 && v24 && (_BYTE)word_140F0FE70 && !HIBYTE(word_140F0FE70) )
    {
      LOBYTE(v22) = 1;
      PopThermalStandbyNotify(v22);
      word_140F0FE70 = 256;
    }
    return PopReleaseRwLock((struct _KTHREAD *)&PopSystemThermalInfo);
  }
  return result;
}
