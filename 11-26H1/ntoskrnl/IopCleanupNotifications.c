/*
 * XREFs of IopCleanupNotifications @ 0x1404E4DE8
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x1403DB7A0 (IopDeleteFileObjectExtension.c)
 *     IopDeleteDevice @ 0x14090E9D0 (IopDeleteDevice.c)
 *     IopUnloadDriver @ 0x140B2ADF8 (IopUnloadDriver.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     ExUnregisterCallback @ 0x1404ECF50 (ExUnregisterCallback.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopCleanupNotifications(struct _LIST_ENTRY *a1, void *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v7; // rax
  void *v8; // rdx
  signed __int8 v9; // cf
  AutoBoost *v10; // rbx
  struct _KTHREAD *Flink; // rbx
  signed __int64 v12; // rdx
  __int64 v13; // rtt
  struct _KTHREAD *v14; // rdi
  struct _KTHREAD *v15; // r14
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v17; // rcx
  struct _LIST_ENTRY *v18; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)&IopSessionNotificationLock, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64(&IopSessionNotificationLock.Header.Lock, 0LL);
  v10 = v7;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&IopSessionNotificationLock,
      v7,
      (__int64)&IopSessionNotificationLock);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v8);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  Flink = (struct _KTHREAD *)IopSessionNotificationLock.Header.WaitListHead.Flink;
  while ( Flink != (struct _KTHREAD *)&IopSessionNotificationLock.Header.WaitListHead )
  {
    v14 = Flink;
    v15 = Flink;
    Flink = *(struct _KTHREAD **)&Flink->Header.Lock;
    Blink = v14->Header.WaitListHead.Blink;
    if ( Blink == a1 && (!a2 || v14->InitialStack == a2) )
    {
      ObfDereferenceObjectWithTag(Blink, 0x746C6644u);
      ExUnregisterCallback((PVOID)v14->QuantumTarget);
      v17 = *(struct _LIST_ENTRY **)&v15->Header.Lock;
      if ( *(struct _KTHREAD **)(*(_QWORD *)&v15->Header.Lock + 8LL) != v14
        || (v18 = v14->Header.WaitListHead.Flink, (struct _KTHREAD *)v18->Flink != v14) )
      {
        __fastfail(3u);
      }
      v18->Flink = v17;
      v17->Blink = v18;
      ExFreePoolWithTag(v14, 0);
    }
  }
  _m_prefetchw(&IopSessionNotificationLock);
  v12 = *(_QWORD *)&IopSessionNotificationLock.Header.Lock - 16LL;
  if ( (*(_QWORD *)&IopSessionNotificationLock.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v12 = 0LL;
  if ( (IopSessionNotificationLock.Header.Type & 2) != 0
    || (v13 = *(_QWORD *)&IopSessionNotificationLock.Header.Lock,
        v13 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&IopSessionNotificationLock,
                 v12,
                 *(signed __int64 *)&IopSessionNotificationLock.Header.Lock)) )
  {
    ExfReleasePushLock(&IopSessionNotificationLock);
  }
  KeAbPostRelease((unsigned __int64)&IopSessionNotificationLock);
  KeLeaveCriticalRegion();
}
