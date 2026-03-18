/*
 * XREFs of ExReferenceHandleDebugInfo @ 0x140A78C00
 * Callers:
 *     ExpUpdateDebugInfo @ 0x14092C6E0 (ExpUpdateDebugInfo.c)
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

volatile signed __int32 *__fastcall ExReferenceHandleDebugInfo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 *v5; // rdi
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rsi
  volatile signed __int32 *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 56);
  --CurrentThread->KernelApcDisable;
  v7 = (AutoBoost *)KeAbPreAcquire(a1 + 56, 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v7, (__int64)v5);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v10 = *(volatile signed __int32 **)(a1 + 96);
  if ( v10 )
    _InterlockedIncrement(v10);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((unsigned __int64)v5);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v11, v12);
  return v10;
}
