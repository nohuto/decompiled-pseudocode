/*
 * XREFs of IopKeepAliveWorker @ 0x1404C4130
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PspAdjustKeepAliveCountProcess @ 0x140B07994 (PspAdjustKeepAliveCountProcess.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void IopKeepAliveWorker()
{
  KIRQL v0; // al
  KIRQL v1; // si
  void *v2; // rbx
  int v3; // edi
  PVOID v4; // rcx
  void **v5; // rax
  bool v6; // zf
  __int64 v7; // r9
  __int64 v8; // rcx
  KIRQL v9; // dl
  __int64 v10; // r9
  __int64 v11; // rdi

  v0 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&IopPerfIoTrackingLock.SuspendEvent.Header.WaitListHead.Blink);
  IopPerfIoTrackingLock.SchedulerSharedSystemSlot = KeGetCurrentThread();
LABEL_2:
  v1 = v0;
  while ( 1 )
  {
    v2 = *(void **)&IopPerfIoTrackingLock.SuspendEvent.Header.Lock;
    if ( *(struct _KTHREAD **)&IopPerfIoTrackingLock.SuspendEvent.Header.Lock == (struct _KTHREAD *)&IopPerfIoTrackingLock.SuspendEvent )
      break;
    v3 = *(_DWORD *)(*(_QWORD *)&IopPerfIoTrackingLock.SuspendEvent.Header.Lock + 32LL);
    *(_DWORD *)(*(_QWORD *)&IopPerfIoTrackingLock.SuspendEvent.Header.Lock + 32LL) = 0;
    if ( v3 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)&IopPerfIoTrackingLock.SuspendEvent.Header.WaitListHead.Blink, v1);
      if ( v3 > 0 )
      {
        do
        {
          ObfReferenceObjectWithTag(*((PVOID *)v2 + 3), 0x746C6644u);
          LOBYTE(v10) = *((_BYTE *)v2 + 18);
          PspAdjustKeepAliveCountProcess(*((_QWORD *)v2 + 3), 1LL, *((_QWORD *)v2 + 5), v10);
          --v3;
        }
        while ( v3 );
        goto LABEL_14;
      }
      if ( v3 != -1 )
      {
        v11 = (unsigned int)(-1 - v3);
        do
        {
          LOBYTE(v7) = *((_BYTE *)v2 + 18);
          PspAdjustKeepAliveCountProcess(*((_QWORD *)v2 + 3), 0xFFFFFFFFLL, *((_QWORD *)v2 + 5), v7);
          ObfDereferenceObjectWithTag(*((PVOID *)v2 + 3), 0x746C6644u);
          --v11;
        }
        while ( v11 );
      }
      LOBYTE(v7) = *((_BYTE *)v2 + 18);
      v8 = *((_QWORD *)v2 + 3);
      if ( (*(_DWORD *)((-(__int64)((_BYTE)v7 != 0) & 0xFFFFFFFFFFFFFFE0uLL) + v8 + 1868) & 0x7FFFFFFF) == 1 )
      {
        v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&IopPerfIoTrackingLock.SuspendEvent.Header.WaitListHead.Blink);
        if ( MEMORY[0xFFFFF78000000014] < *((_QWORD *)v2 + 6) )
        {
          --*((_DWORD *)v2 + 8);
          KeReleaseSpinLock((PKSPIN_LOCK)&IopPerfIoTrackingLock.SuspendEvent.Header.WaitListHead.Blink, v9);
          KeDelayExecutionThread(0, 1u, (PLARGE_INTEGER)v2 + 6);
LABEL_14:
          v0 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&IopPerfIoTrackingLock.SuspendEvent.Header.WaitListHead.Blink);
          goto LABEL_2;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)&IopPerfIoTrackingLock.SuspendEvent.Header.WaitListHead.Blink, v9);
        LOBYTE(v7) = *((_BYTE *)v2 + 18);
        v8 = *((_QWORD *)v2 + 3);
      }
      PspAdjustKeepAliveCountProcess(v8, 0xFFFFFFFFLL, *((_QWORD *)v2 + 5), v7);
      ObfDereferenceObjectWithTag(*((PVOID *)v2 + 3), 0x746C6644u);
      goto LABEL_14;
    }
    v4 = *(PVOID *)v2;
    if ( *(void **)(*(_QWORD *)v2 + 8LL) != v2 || (v5 = (void **)*((_QWORD *)v2 + 1), *v5 != v2) )
      __fastfail(3u);
    *v5 = v4;
    *((_QWORD *)v4 + 1) = v5;
    v6 = *((_BYTE *)v2 + 17) == 1;
    *((_BYTE *)v2 + 16) = 0;
    if ( v6 )
      ExFreePoolWithTag(v2, 0);
  }
  IopPerfIoTrackingLock.AbWaitEntryCount = 0;
  IopPerfIoTrackingLock.SchedulerSharedSystemSlot = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&IopPerfIoTrackingLock.SuspendEvent.Header.WaitListHead.Blink, v1);
}
