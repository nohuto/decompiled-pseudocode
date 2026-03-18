/*
 * XREFs of PopGracefulShutdown @ 0x140BF9180
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     KeAttachProcess @ 0x1402C6510 (KeAttachProcess.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     IoAddTriageDumpDataBlock @ 0x14044AB54 (IoAddTriageDumpDataBlock.c)
 *     PopDiagTraceEventNoPayload @ 0x1404C6954 (PopDiagTraceEventNoPayload.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x1405B15A0 (CcWaitForCurrentLazyWriterActivity.c)
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x140610A68 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     VfShutdownScheduleWatchdog @ 0x140647028 (VfShutdownScheduleWatchdog.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1407ACE4C (PnpWaitForEmptyDeviceActionQueue.c)
 *     ObShutdownSystem @ 0x1407C25A0 (ObShutdownSystem.c)
 *     PopSetCleanShutdownMarker @ 0x1407C9228 (PopSetCleanShutdownMarker.c)
 *     SshSessionManagerFlushBuffers @ 0x1407E3BB0 (SshSessionManagerFlushBuffers.c)
 *     PsShutdownSystem @ 0x1407FA284 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x1407FA724 (PsWaitForAllProcesses.c)
 *     CmShutdownSystem @ 0x140854284 (CmShutdownSystem.c)
 *     MmZeroPageFileAtShutdown @ 0x1408648B4 (MmZeroPageFileAtShutdown.c)
 *     EtwWriteEndScenario @ 0x140ADB480 (EtwWriteEndScenario.c)
 *     PopTransitionCheckpoint @ 0x140B1B69C (PopTransitionCheckpoint.c)
 *     EtwShutdown @ 0x140B362AC (EtwShutdown.c)
 *     PopDiagTraceGracefulShutdown @ 0x140BFDB68 (PopDiagTraceGracefulShutdown.c)
 *     PopShutdownSystem @ 0x140BFDFD4 (PopShutdownSystem.c)
 *     ExShutdownSystem @ 0x140BFF170 (ExShutdownSystem.c)
 *     MmShutdownSystem @ 0x140C00720 (MmShutdownSystem.c)
 *     PopBuildDeviceNotifyList @ 0x140C04CC8 (PopBuildDeviceNotifyList.c)
 *     PopSetDevicesSystemState @ 0x140C05C70 (PopSetDevicesSystemState.c)
 *     IoShutdownSystem @ 0x140C0C858 (IoShutdownSystem.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __noreturn PopGracefulShutdown()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 ReadTransferCount; // rcx
  PVOID *OtherOperationCount; // rbx
  _KTHREAD **v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct _KLOCK_ENTRIES *v18; // r9
  struct _KPROCESS *v19; // rcx
  _KTHREAD **v20; // rdx
  __int64 v21; // r8
  struct _KLOCK_ENTRIES *v22; // r9

  PopTransitionCheckpoint(10, 1);
  PopDiagTraceGracefulShutdown();
  PopAdaptivePersistSystemInitatedRebootState(v1, v0);
  *(_QWORD *)(*(_QWORD *)&qword_140F0FBA8 + 16LL) = KeGetCurrentThread();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_START);
  MmZeroPageFileAtShutdown();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_STOP);
  if ( !*(_QWORD *)&qword_140F0FBA0 )
    guard_dispatch_icall_no_overrides(v3, v2);
  VfShutdownScheduleWatchdog();
  if ( LODWORD(stru_140F10828.KernelShadowStackInitial) )
  {
    PsShutdownSystem();
    KeSetEvent((PRKEVENT)stru_140F11D08.PriorityFloorCounts, 0, 0);
    ExAcquireFastMutex((PKGUARDED_MUTEX)&stru_140F11D08.PriorityFloorSummary);
    BYTE2(stru_140E66FF0.Padding[1]) = 0;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140F11D08.PriorityFloorSummary);
    while ( 1 )
    {
      ReadTransferCount = stru_140F11D08.ReadTransferCount;
      if ( (__int64 *)stru_140F11D08.ReadTransferCount == &stru_140F11D08.ReadTransferCount )
        break;
      if ( *(struct _KTHREAD **)(stru_140F11D08.ReadTransferCount + 8) != (struct _KTHREAD *)&stru_140F11D08.ReadTransferCount
        || (v5 = *(_QWORD *)stru_140F11D08.ReadTransferCount,
            *(_QWORD *)(*(_QWORD *)stru_140F11D08.ReadTransferCount + 8LL) != stru_140F11D08.ReadTransferCount) )
      {
        __fastfail(3u);
      }
      stru_140F11D08.ReadTransferCount = *(_QWORD *)stru_140F11D08.ReadTransferCount;
      *(_QWORD *)(v5 + 8) = &stru_140F11D08.ReadTransferCount;
      guard_dispatch_icall_no_overrides(*(_QWORD *)(ReadTransferCount + 24), v4);
    }
    while ( 1 )
    {
      OtherOperationCount = (PVOID *)stru_140F11D08.OtherOperationCount;
      if ( !stru_140F11D08.OtherOperationCount )
        break;
      stru_140F11D08.OtherOperationCount = *(_QWORD *)stru_140F11D08.OtherOperationCount;
      KeWaitForSingleObject(OtherOperationCount[1], Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(OtherOperationCount[1], 0x64536F50u);
      ExFreePoolWithTag(OtherOperationCount, 0);
    }
  }
  TmShutdownSystem();
  CmShutdownSystem();
  ExShutdownSystem(0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWNSYSTEM_START);
  IoShutdownSystem(0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWNSYSTEM_STOP);
  if ( LODWORD(stru_140F10828.KernelShadowStackInitial) )
  {
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_WAITFORPROCESSES_START);
    PsWaitForAllProcesses();
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_WAITFORPROCESSES_STOP);
  }
  if ( ((__int64)stru_140F10828.KernelShadowStackInitial & 0x10) != 0 )
    ObShutdownSystem(0LL, v8, v9, v10);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_CMSHUTDOWNSYSTEM_START);
  CmShutdownSystem();
  CmShutdownSystem();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_CMSHUTDOWNSYSTEM_STOP);
  if ( byte_140E67628 )
    EtwWriteEndScenario(
      *(ULONG_PTR **)&PopSleepstudySessionLock.PriorityFloorCounts[16],
      &POP_ETW_EVENT_GRACEFULSHUTDOWN_STOP,
      &PopShutdownDiagnosticsScenarioGuid,
      0,
      0LL);
  SshSessionManagerFlushBuffers(v12, v11, v13, v14);
  EtwShutdown(0);
  ExShutdownSystem(1LL);
  MmShutdownSystem(0LL);
  PopSetCleanShutdownMarker(v16, v15, v17, v18);
  PopTransitionCheckpoint(10, 2);
  PnpWaitForEmptyDeviceActionQueue();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWN_FILE_SYSTEMS_START);
  IoShutdownSystem(1LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWN_FILE_SYSTEMS_STOP);
  CcWaitForCurrentLazyWriterActivity();
  if ( *(_QWORD *)&qword_140F0FBA0 )
  {
    v19 = *(struct _KPROCESS **)(*(_QWORD *)&qword_140F0FBA0 + 8LL);
    if ( v19 )
      KeAttachProcess(v19);
    IoAddTriageDumpDataBlock(qword_140F0FBA0, (PVOID)0x48);
    KeBugCheckEx(
      *(_DWORD *)(*(_QWORD *)&qword_140F0FBA0 + 32LL),
      *(_QWORD *)(*(_QWORD *)&qword_140F0FBA0 + 40LL),
      *(_QWORD *)(*(_QWORD *)&qword_140F0FBA0 + 48LL),
      *(_QWORD *)(*(_QWORD *)&qword_140F0FBA0 + 56LL),
      *(_QWORD *)(*(_QWORD *)&qword_140F0FBA0 + 64LL));
  }
  PopBootStatCheckpointAvailable = 0;
  *(_DWORD *)(*(_QWORD *)&qword_140F0FBA8 + 448LL) = 0;
  PopBuildDeviceNotifyList((void *)(*(_QWORD *)&qword_140F0FBA8 + 48LL));
  PopSetDevicesSystemState();
  ExShutdownSystem(2LL);
  if ( ((__int64)stru_140F10828.KernelShadowStackInitial & 0x10) != 0 )
    ObShutdownSystem((PVOID *)2, v20, v21, v22);
  MmShutdownSystem(2LL);
  PopShutdownSystem((unsigned int)qword_140F0FB64);
}
