/*
 * XREFs of IoUnregisterContainerNotification @ 0x14079A070
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExUnregisterCallback @ 0x1404E6530 (ExUnregisterCallback.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __stdcall IoUnregisterContainerNotification(PVOID CallbackRegistration)
{
  struct _KLOCK_ENTRIES *v1; // r9
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v4; // rax
  void *v5; // rdx
  signed __int8 v6; // cf
  AutoBoost *v7; // rbx
  struct _KTHREAD *v8; // rax
  PVOID *v9; // rbx
  PVOID *v10; // rcx
  PVOID **v11; // rax
  signed __int64 v12; // rdx
  unsigned __int64 v13; // rtt

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (AutoBoost *)KeAbPreAcquire((__int64)&IopPerfIoTrackingLock.Padding[3], 0LL, 0LL, v1);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&IopPerfIoTrackingLock.Padding[3], 0LL);
  v7 = v4;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&IopPerfIoTrackingLock.Padding[3], v4, (__int64)&IopPerfIoTrackingLock.Padding[3]);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v5);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  v8 = (struct _KTHREAD *)IopPerfIoTrackingLock.Padding[1];
  if ( (unsigned __int64 *)IopPerfIoTrackingLock.Padding[1] != &IopPerfIoTrackingLock.Padding[1] )
  {
    while ( v8 != (struct _KTHREAD *)&IopPerfIoTrackingLock.Padding[1] )
    {
      v9 = (PVOID *)v8;
      v8 = *(struct _KTHREAD **)&v8->Header.Lock;
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
