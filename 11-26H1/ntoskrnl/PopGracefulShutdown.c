/*
 * XREFs of PopGracefulShutdown @ 0x140BFF180
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeAttachProcess @ 0x1403111B0 (KeAttachProcess.c)
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     PopDiagTraceEventNoPayload @ 0x1404C0304 (PopDiagTraceEventNoPayload.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x1405B3DB0 (CcWaitForCurrentLazyWriterActivity.c)
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x140613D24 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     VfShutdownScheduleWatchdog @ 0x14064AC08 (VfShutdownScheduleWatchdog.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1407AFEB0 (PnpWaitForEmptyDeviceActionQueue.c)
 *     ObShutdownSystem @ 0x1407C5600 (ObShutdownSystem.c)
 *     PopSetCleanShutdownMarker @ 0x1407CC2C8 (PopSetCleanShutdownMarker.c)
 *     SshSessionManagerFlushBuffers @ 0x1407E8EFC (SshSessionManagerFlushBuffers.c)
 *     PsShutdownSystem @ 0x1407FFCB4 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x140800154 (PsWaitForAllProcesses.c)
 *     CmShutdownSystem @ 0x14085A594 (CmShutdownSystem.c)
 *     MmZeroPageFileAtShutdown @ 0x14086AC94 (MmZeroPageFileAtShutdown.c)
 *     EtwWriteEndScenario @ 0x140AD7F30 (EtwWriteEndScenario.c)
 *     PopTransitionCheckpoint @ 0x140B1D94C (PopTransitionCheckpoint.c)
 *     EtwShutdown @ 0x140B384BC (EtwShutdown.c)
 *     PopDiagTraceGracefulShutdown @ 0x140C03B68 (PopDiagTraceGracefulShutdown.c)
 *     PopShutdownSystem @ 0x140C04024 (PopShutdownSystem.c)
 *     ExShutdownSystem @ 0x140C05380 (ExShutdownSystem.c)
 *     MmShutdownSystem @ 0x140C06930 (MmShutdownSystem.c)
 *     PopBuildDeviceNotifyList @ 0x140C0AED8 (PopBuildDeviceNotifyList.c)
 *     PopSetDevicesSystemState @ 0x140C0BE80 (PopSetDevicesSystemState.c)
 *     IoShutdownSystem @ 0x140C12A68 (IoShutdownSystem.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __noreturn PopGracefulShutdown()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  PVOID *v7; // rbx
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
  *(_QWORD *)(*(_QWORD *)&qword_140F10468 + 16LL) = KeGetCurrentThread();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_START);
  MmZeroPageFileAtShutdown();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_STOP);
  if ( !*(_QWORD *)&qword_140F10460 )
    guard_dispatch_icall_no_overrides(v3, v2);
  VfShutdownScheduleWatchdog();
  if ( PopShutdownCleanly )
  {
    PsShutdownSystem();
    KeSetEvent(&PopShutdownEvent, 0, 0);
    ExAcquireFastMutex(&PopShutdownListMutex);
    byte_140E676F0 = 0;
    KeReleaseGuardedMutex(&PopShutdownListMutex);
    while ( 1 )
    {
      v6 = PopShutdownQueue;
      if ( (__int64 *)PopShutdownQueue == &PopShutdownQueue )
        break;
      if ( *(__int64 **)(PopShutdownQueue + 8) != &PopShutdownQueue
        || (v5 = *(_QWORD *)PopShutdownQueue, *(_QWORD *)(*(_QWORD *)PopShutdownQueue + 8LL) != PopShutdownQueue) )
      {
        __fastfail(3u);
      }
      PopShutdownQueue = *(_QWORD *)PopShutdownQueue;
      *(_QWORD *)(v5 + 8) = &PopShutdownQueue;
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v6 + 24), v4);
    }
    while ( 1 )
    {
      v7 = (PVOID *)PopShutdownThreadList;
      if ( !PopShutdownThreadList )
        break;
      PopShutdownThreadList = *(PVOID *)PopShutdownThreadList;
      KeWaitForSingleObject(v7[1], Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(v7[1], 0x64536F50u);
      ExFreePoolWithTag(v7, 0);
    }
  }
  TmShutdownSystem();
  CmShutdownSystem();
  ExShutdownSystem(0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWNSYSTEM_START);
  IoShutdownSystem(0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWNSYSTEM_STOP);
  if ( PopShutdownCleanly )
  {
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_WAITFORPROCESSES_START);
    PsWaitForAllProcesses();
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_WAITFORPROCESSES_STOP);
  }
  if ( (PopShutdownCleanly & 0x10) != 0 )
    ObShutdownSystem(0LL, v8, v9, v10);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_CMSHUTDOWNSYSTEM_START);
  CmShutdownSystem();
  CmShutdownSystem();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_CMSHUTDOWNSYSTEM_STOP);
  if ( PopDiagHandleRegistered )
    EtwWriteEndScenario(
      (ULONG_PTR *)PopDiagHandle,
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
  if ( *(_QWORD *)&qword_140F10460 )
  {
    v19 = *(struct _KPROCESS **)(*(_QWORD *)&qword_140F10460 + 8LL);
    if ( v19 )
      KeAttachProcess(v19);
    IoAddTriageDumpDataBlock(qword_140F10460, (PVOID)0x48);
    KeBugCheckEx(
      *(_DWORD *)(*(_QWORD *)&qword_140F10460 + 32LL),
      *(_QWORD *)(*(_QWORD *)&qword_140F10460 + 40LL),
      *(_QWORD *)(*(_QWORD *)&qword_140F10460 + 48LL),
      *(_QWORD *)(*(_QWORD *)&qword_140F10460 + 56LL),
      *(_QWORD *)(*(_QWORD *)&qword_140F10460 + 64LL));
  }
  PopBootStatCheckpointAvailable = 0;
  *(_DWORD *)(*(_QWORD *)&qword_140F10468 + 448LL) = 0;
  PopBuildDeviceNotifyList((void *)(*(_QWORD *)&qword_140F10468 + 48LL));
  PopSetDevicesSystemState();
  ExShutdownSystem(2LL);
  if ( (PopShutdownCleanly & 0x10) != 0 )
    ObShutdownSystem((void **)2, v20, v21, v22);
  MmShutdownSystem(2LL);
  PopShutdownSystem((unsigned int)qword_140F10424);
}
