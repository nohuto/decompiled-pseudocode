/*
 * XREFs of PsRegisterAltSystemCallHandler @ 0x140802040
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall PsRegisterAltSystemCallHandler(__int64 a1, unsigned int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v7; // rax
  void *v8; // rdx
  signed __int8 v9; // cf
  AutoBoost *v10; // rbx
  signed __int64 v11; // rax
  signed __int64 v12; // rdx
  __int64 v13; // rtt
  unsigned __int64 v14; // rcx

  v4 = (int)a2;
  if ( !a1 || a2 >= 2 )
    KeBugCheckEx(0x1E0u, 2uLL, 0LL, 0LL, 0LL);
  if ( !a2 )
    KeBugCheckEx(0x1E0u, 3uLL, 0LL, 0LL, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)&PsAltSystemCallRegistrationLock, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64(&PsAltSystemCallRegistrationLock.Header.Lock, 0LL);
  v10 = v7;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PsAltSystemCallRegistrationLock,
      v7,
      (__int64)&PsAltSystemCallRegistrationLock);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v8);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  _m_prefetchw(&PsAltSystemCallRegistrationLock);
  v11 = *(_QWORD *)&PsAltSystemCallRegistrationLock.Header.Lock;
  v12 = *(_QWORD *)&PsAltSystemCallRegistrationLock.Header.Lock - 16LL;
  if ( *((_QWORD *)&stru_140FC11F0.QueueListEntry.Blink + v4) )
  {
    if ( (*(_QWORD *)&PsAltSystemCallRegistrationLock.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v12 = 0LL;
    if ( (PsAltSystemCallRegistrationLock.Header.Type & 2) != 0
      || (v13 = *(_QWORD *)&PsAltSystemCallRegistrationLock.Header.Lock,
          v13 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&PsAltSystemCallRegistrationLock,
                   v12,
                   *(signed __int64 *)&PsAltSystemCallRegistrationLock.Header.Lock)) )
    {
      ExfReleasePushLock(&PsAltSystemCallRegistrationLock);
    }
    KeAbPostRelease((unsigned __int64)&PsAltSystemCallRegistrationLock);
    KeLeaveCriticalRegion();
    KeBugCheckEx(0x1E0u, 1uLL, *((_QWORD *)&stru_140FC11F0.QueueListEntry.Blink + v4), 0LL, 0LL);
  }
  v14 = *(_QWORD *)&PsAltSystemCallRegistrationLock.Header.Lock & 0xFFFFFFFFFFFFFFF0uLL;
  *((_QWORD *)&stru_140FC11F0.QueueListEntry.Blink + v4) = a1;
  if ( v14 <= 0x10 )
    v12 = 0LL;
  if ( (v11 & 2) != 0
    || v11 != _InterlockedCompareExchange64((volatile signed __int64 *)&PsAltSystemCallRegistrationLock, v12, v11) )
  {
    ExfReleasePushLock(&PsAltSystemCallRegistrationLock);
  }
  KeAbPostRelease((unsigned __int64)&PsAltSystemCallRegistrationLock);
  KeLeaveCriticalRegion();
  return 0LL;
}
