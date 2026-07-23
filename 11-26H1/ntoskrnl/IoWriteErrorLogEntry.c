/*
 * XREFs of IoWriteErrorLogEntry @ 0x1404DF340
 * Callers:
 *     IopDisassociateThreadIrp @ 0x140522674 (IopDisassociateThreadIrp.c)
 *     DifIoWriteErrorLogEntryWrapper @ 0x140662FD0 (DifIoWriteErrorLogEntryWrapper.c)
 *     IopLogBlockedDriverEvent @ 0x140797CB0 (IopLogBlockedDriverEvent.c)
 *     MiBadMemoryLogger @ 0x1408702D0 (MiBadMemoryLogger.c)
 *     PnpLogEvent @ 0x140A37B48 (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x140B54190 (MiLogFailedDriverLoad.c)
 *     FsRtlLogCcFlushError @ 0x140B5A650 (FsRtlLogCcFlushError.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __stdcall IoWriteErrorLogEntry(PVOID ElEntry)
{
  char *v1; // rbx
  KIRQL v2; // al
  _KAFFINITY_EX ****v3; // rcx
  KIRQL v4; // di
  _KAFFINITY_EX ***v5; // rbx
  bool v6; // zf
  void *v7; // rcx
  void *v8; // rcx

  v1 = (char *)ElEntry - 48;
  if ( IopErrorLogDisabledThisBoot )
  {
    v7 = (void *)*((_QWORD *)v1 + 3);
    if ( v7 )
      ObfDereferenceObjectWithTag(v7, 0x746C6644u);
    v8 = (void *)*((_QWORD *)v1 + 4);
    if ( v8 )
      ObfDereferenceObjectWithTag(v8, 0x746C6644u);
    _InterlockedAdd(&IopErrorLogAllocation, -*((unsigned __int16 *)v1 + 1));
    ExFreePoolWithTag(v1, 0);
  }
  else
  {
    *((_QWORD *)v1 + 5) = MEMORY[0xFFFFF78000000014];
    v2 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
    v3 = *(_KAFFINITY_EX *****)&IopPerfIoTrackingLock.AffinityPrimaryGroup;
    v4 = v2;
    v5 = (_KAFFINITY_EX ***)(v1 + 8);
    if ( **(struct _KTHREAD ***)&IopPerfIoTrackingLock.AffinityPrimaryGroup != (struct _KTHREAD *)&IopPerfIoTrackingLock.Affinity )
      __fastfail(3u);
    v6 = IopErrorLogSessionPending == 0;
    *v5 = &IopPerfIoTrackingLock.Affinity;
    v5[1] = (_KAFFINITY_EX **)v3;
    *v3 = v5;
    *(_QWORD *)&IopPerfIoTrackingLock.AffinityPrimaryGroup = v5;
    if ( v6 )
    {
      IopErrorLogSessionPending = 1;
      IopErrorLogWorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopErrorLogThread;
      IopErrorLogWorkItem.Parameter = 0LL;
      IopErrorLogWorkItem.List.Flink = 0LL;
      ExQueueWorkItem(&IopErrorLogWorkItem, DelayedWorkQueue);
    }
    KeReleaseSpinLock(&IopErrorLogLock, v4);
  }
}
