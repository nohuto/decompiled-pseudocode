/*
 * XREFs of PopFxClearDirectedDripsCandidateDeviceList @ 0x1404C7D84
 * Callers:
 *     PopDirectedDripsEngage @ 0x1404C7D1C (PopDirectedDripsEngage.c)
 *     PopDirectedDripsResumeDevices @ 0x140AC5364 (PopDirectedDripsResumeDevices.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall PopFxClearDirectedDripsCandidateDeviceList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v5; // rax
  void *v6; // rdx
  struct _KLOCK_ENTRIES *v7; // r9
  signed __int8 v8; // cf
  AutoBoost *v9; // rdi
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rdi
  ULONG_PTR i; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140F12420, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64(&stru_140F12420.Header.Lock, 0LL);
  v9 = v5;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140F12420, v5, (__int64)&stru_140F12420);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v6);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v10 = (AutoBoost *)KeAbPreAcquire((__int64)&qword_140F123D0, 0LL, 0LL, v7);
  v8 = _interlockedbittestandset64(&qword_140F123D0.Header.Lock, 0LL);
  v12 = v10;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&qword_140F123D0, v10, (__int64)&qword_140F123D0);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v11);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  for ( i = qword_140F123E0; (ULONG_PTR *)i != &qword_140F123E0; i = *(_QWORD *)i )
    _InterlockedAnd((volatile signed __int32 *)(i + 864), 0xFFFFFFBF);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140F123D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140F123D0.Header.Lock);
  KeAbPostRelease((unsigned __int64)&qword_140F123D0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140F12420, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140F12420.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140F12420);
  KeLeaveCriticalRegion();
}
