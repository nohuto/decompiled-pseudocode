/*
 * XREFs of IoUnregisterContainerNotification @ 0x140797540
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     ExUnregisterCallback @ 0x1404ECF50 (ExUnregisterCallback.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __stdcall IoUnregisterContainerNotification(PVOID CallbackRegistration)
{
  struct _KLOCK_ENTRIES *v1; // r9
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v4; // rax
  void *v5; // rdx
  signed __int8 v6; // cf
  AutoBoost *v7; // rbx
  struct _KTHREAD *Flink; // rax
  PVOID *v9; // rbx
  PVOID *v10; // rcx
  PVOID **v11; // rax
  signed __int64 v12; // rdx
  __int64 v13; // rtt

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (AutoBoost *)KeAbPreAcquire((__int64)&IopSessionNotificationLock, 0LL, 0LL, v1);
  v6 = _interlockedbittestandset64(&IopSessionNotificationLock.Header.Lock, 0LL);
  v7 = v4;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&IopSessionNotificationLock,
      v4,
      (__int64)&IopSessionNotificationLock);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v5);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  Flink = (struct _KTHREAD *)IopSessionNotificationLock.Header.WaitListHead.Flink;
  if ( IopSessionNotificationLock.Header.WaitListHead.Flink != &IopSessionNotificationLock.Header.WaitListHead )
  {
    while ( Flink != (struct _KTHREAD *)&IopSessionNotificationLock.Header.WaitListHead )
    {
      v9 = (PVOID *)Flink;
      Flink = *(struct _KTHREAD **)&Flink->Header.Lock;
      if ( v9[4] == CallbackRegistration )
      {
        ObfDereferenceObject(v9[2]);
        ExUnregisterCallback(CallbackRegistration);
        v10 = (PVOID *)*v9;
        if ( *((PVOID **)*v9 + 1) != v9 || (v11 = (PVOID **)v9[1], *v11 != v9) )
          __fastfail(3u);
        *v11 = v10;
        v10[1] = v11;
        ExFreePoolWithTag(v9, 0);
        break;
      }
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
