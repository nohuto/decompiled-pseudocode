/*
 * XREFs of IopCleanupNotifications @ 0x1404DE388
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x1403DE990 (IopDeleteFileObjectExtension.c)
 *     IopDeleteDevice @ 0x1409B0B00 (IopDeleteDevice.c)
 *     IopUnloadDriver @ 0x140B2CE78 (IopUnloadDriver.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExUnregisterCallback @ 0x1404E6530 (ExUnregisterCallback.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopCleanupNotifications(struct _LIST_ENTRY *a1, void *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v7; // rax
  void *v8; // rdx
  signed __int8 v9; // cf
  AutoBoost *v10; // rbx
  struct _KTHREAD *v11; // rbx
  signed __int64 v12; // rdx
  unsigned __int64 v13; // rtt
  struct _KTHREAD *v14; // rdi
  struct _KTHREAD *v15; // r14
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v17; // rcx
  struct _LIST_ENTRY *Flink; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)&IopPerfIoTrackingLock.Padding[3], 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&IopPerfIoTrackingLock.Padding[3], 0LL);
  v10 = v7;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&IopPerfIoTrackingLock.Padding[3], v7, (__int64)&IopPerfIoTrackingLock.Padding[3]);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v8);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  v11 = (struct _KTHREAD *)IopPerfIoTrackingLock.Padding[1];
  while ( v11 != (struct _KTHREAD *)&IopPerfIoTrackingLock.Padding[1] )
  {
    v14 = v11;
    v15 = v11;
    v11 = *(struct _KTHREAD **)&v11->Header.Lock;
    Blink = v14->Header.WaitListHead.Blink;
    if ( Blink == a1 && (!a2 || v14->InitialStack == a2) )
    {
      ObfDereferenceObjectWithTag(Blink, 0x746C6644u);
      ExUnregisterCallback((PVOID)v14->QuantumTarget);
      v17 = *(struct _LIST_ENTRY **)&v15->Header.Lock;
      if ( *(struct _KTHREAD **)(*(_QWORD *)&v15->Header.Lock + 8LL) != v14
        || (Flink = v14->Header.WaitListHead.Flink, (struct _KTHREAD *)Flink->Flink != v14) )
      {
        __fastfail(3u);
      }
      Flink->Flink = v17;
      v17->Blink = Flink;
      ExFreePoolWithTag(v14, 0);
    }
  }
  _m_prefetchw(&IopPerfIoTrackingLock.Padding[3]);
  v12 = IopPerfIoTrackingLock.Padding[3] - 16;
  if ( (IopPerfIoTrackingLock.Padding[3] & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v12 = 0LL;
  if ( (IopPerfIoTrackingLock.Padding[3] & 2) != 0
    || (v13 = IopPerfIoTrackingLock.Padding[3],
        v13 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&IopPerfIoTrackingLock.Padding[3],
                 v12,
                 IopPerfIoTrackingLock.Padding[3])) )
  {
    ExfReleasePushLock(&IopPerfIoTrackingLock.Padding[3]);
  }
  KeAbPostRelease((unsigned __int64)&IopPerfIoTrackingLock.Padding[3]);
  KeLeaveCriticalRegion();
}
