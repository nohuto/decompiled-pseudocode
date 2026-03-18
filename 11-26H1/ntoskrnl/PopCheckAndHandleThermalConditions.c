/*
 * XREFs of PopCheckAndHandleThermalConditions @ 0x1404ED080
 * Callers:
 *     PopThermalWorker @ 0x140AC3C50 (PopThermalWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14026F2B4 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopThermalStandbyEndTracking @ 0x140434F64 (PopThermalStandbyEndTracking.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x1404CEE60 (PopQueueWorkItem.c)
 *     PopThermalWriteShutdownToRegistry @ 0x140500640 (PopThermalWriteShutdownToRegistry.c)
 *     PopThermalStandbyNotify @ 0x140607BF4 (PopThermalStandbyNotify.c)
 *     PopDiagTraceThermalStateChange @ 0x14060939C (PopDiagTraceThermalStateChange.c)
 *     PopTraceCr3Mitigated @ 0x140609BCC (PopTraceCr3Mitigated.c)
 *     PopTraceCr3Tripped @ 0x140609C64 (PopTraceCr3Tripped.c)
 *     PopTraceZoneCr3Mitigated @ 0x14060A390 (PopTraceZoneCr3Mitigated.c)
 *     PopTraceZoneCr3Tripped @ 0x14060A4B4 (PopTraceZoneCr3Tripped.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     PopUpdateOverThrottledCount @ 0x1407D20B8 (PopUpdateOverThrottledCount.c)
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x1407D56AC (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x1407D57A0 (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopSqmThermalCriticalShutdown @ 0x1407E357C (PopSqmThermalCriticalShutdown.c)
 *     PopSqmThermalHibernate @ 0x1407E35A0 (PopSqmThermalHibernate.c)
 *     PopIsHibernateSupported @ 0x140B2E808 (PopIsHibernateSupported.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
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
    if ( (*(_WORD *)&stru_140F10828.WaitBlockFill11[100] & 0x4000) == 0 )
    {
      PopAcquirePolicyLock(v8, v7);
      IsHibernateSupported = PopIsHibernateSupported(&stru_140F10828.WaitBlockFill11[24]);
      if ( !IsHibernateSupported )
        v3 = 1;
      PopReleasePolicyLock();
      v4 = IsHibernateSupported != 0;
      if ( !v3 )
        goto LABEL_23;
      goto LABEL_12;
    }
    ZwUpdateWnfStateData(&WNF_PO_THERMAL_HIBERNATE_OCCURRED, 0LL, 0LL, 0LL, 0LL, 0, 0);
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
  PopAcquireRwLockExclusive(&stru_140F0F620.Spare35[1], v13, v14, v15);
  if ( v4 )
    BYTE1(stru_140F0F620.SystemAffinityTokenListHead.Next) = 1;
  if ( v3 )
    BYTE3(stru_140F0F620.SystemAffinityTokenListHead.Next) = 1;
  PopReleaseRwLock((struct _KTHREAD *)&stru_140F0F620.Spare35[1]);
  PopQueueWorkItem((__int64)&stru_140F0F620.SavedApcState.ApcListHead[0].Blink, DelayedWorkQueue);
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
    PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F0F620.SchedulerAssistPriorityFloor, v17, v18, v19);
    v20 = *(_BYTE *)(a1 + 211);
    *(_BYTE *)(a1 + 72) = v20;
    if ( v20 )
    {
      if ( ++HIDWORD(stru_140F0F620.KernelShadowStackInitial) == 1 )
      {
        BYTE4(stru_140F0F620.KernelShadowStackBase) = 1;
        ++LODWORD(stru_140F0F620.KernelShadowStackBase);
        PopTraceCr3Tripped();
      }
      PopTraceZoneCr3Tripped(LODWORD(stru_140F0F620.KernelShadowStackBase), a1);
    }
    else
    {
      PopTraceZoneCr3Mitigated(LODWORD(stru_140F0F620.KernelShadowStackBase), a1);
      --HIDWORD(stru_140F0F620.KernelShadowStackInitial);
    }
    if ( HIDWORD(stru_140F0F620.KernelShadowStackInitial) )
    {
      v24 = 1;
    }
    else
    {
      v24 = 0;
      PopThermalStandbyEndTracking(0LL, v21, v23);
      PopTraceCr3Mitigated(LODWORD(stru_140F0F620.KernelShadowStackBase));
      if ( BYTE1(stru_140F0F620.KernelShadowStackInitial) )
      {
        PopThermalStandbyNotify(0LL);
        BYTE1(stru_140F0F620.KernelShadowStackInitial) = 0;
        return PopReleaseRwLock((struct _KTHREAD *)&stru_140F0F620.SchedulerAssistPriorityFloor);
      }
    }
    if ( !v4
      && v24
      && LOBYTE(stru_140F0F620.KernelShadowStackInitial)
      && !BYTE1(stru_140F0F620.KernelShadowStackInitial) )
    {
      LOBYTE(v22) = 1;
      PopThermalStandbyNotify(v22);
      LOWORD(stru_140F0F620.KernelShadowStackInitial) = 256;
    }
    return PopReleaseRwLock((struct _KTHREAD *)&stru_140F0F620.SchedulerAssistPriorityFloor);
  }
  return result;
}
