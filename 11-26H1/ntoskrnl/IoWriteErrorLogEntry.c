/*
 * XREFs of IoWriteErrorLogEntry @ 0x1404E5DA0
 * Callers:
 *     IopDisassociateThreadIrp @ 0x14051FFD0 (IopDisassociateThreadIrp.c)
 *     DifIoWriteErrorLogEntryWrapper @ 0x14065F3F0 (DifIoWriteErrorLogEntryWrapper.c)
 *     IopLogBlockedDriverEvent @ 0x140795180 (IopLogBlockedDriverEvent.c)
 *     MiBadMemoryLogger @ 0x140869EF0 (MiBadMemoryLogger.c)
 *     PnpLogEvent @ 0x140AA4138 (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x140B518F0 (MiLogFailedDriverLoad.c)
 *     FsRtlLogCcFlushError @ 0x140B57700 (FsRtlLogCcFlushError.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __stdcall IoWriteErrorLogEntry(PVOID ElEntry)
{
  char *v1; // rbx
  KIRQL v2; // al
  void **v3; // rcx
  KIRQL v4; // di
  void ***v5; // rbx
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
    _InterlockedAdd(
      (volatile signed __int32 *)&IopSessionNotificationLock.QuantumTarget,
      -*((unsigned __int16 *)v1 + 1));
    ExFreePoolWithTag(v1, 0);
  }
  else
  {
    *((_QWORD *)v1 + 5) = MEMORY[0xFFFFF78000000014];
    v2 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
    v3 = *(void ***)&IopSessionNotificationLock.ResourceIndex;
    v4 = v2;
    v5 = (void ***)(v1 + 8);
    if ( **(struct _KTHREAD ***)&IopSessionNotificationLock.ResourceIndex != (struct _KTHREAD *)&IopSessionNotificationLock.IptSaveArea )
      __fastfail(3u);
    v6 = IopErrorLogSessionPending == 0;
    *v5 = &IopSessionNotificationLock.IptSaveArea;
    v5[1] = v3;
    *v3 = v5;
    *(_QWORD *)&IopSessionNotificationLock.ResourceIndex = v5;
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
