/*
 * XREFs of PspRemoveEnclaveThreadWait @ 0x1407FF03C
 * Callers:
 *     PsCallEnclave @ 0x1407FE1F0 (PsCallEnclave.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspRemoveEnclaveThreadWait(__int64 a1, __int64 *a2, unsigned int a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rbp
  __int64 v11; // rax
  __int64 **v12; // rcx

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 112);
  --CurrentThread->KernelApcDisable;
  v8 = (AutoBoost *)KeAbPreAcquire(a1 + 112, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v8, (__int64)v5);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  v11 = *a2;
  if ( *a2 )
  {
    if ( *(__int64 **)(v11 + 8) != a2 || (v12 = (__int64 **)a2[1], *v12 != a2) )
      __fastfail(3u);
    *v12 = (__int64 *)v11;
    *(_QWORD *)(v11 + 8) = v12;
  }
  else
  {
    a3 = *((_DWORD *)a2 + 10);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((unsigned __int64)v5);
  KeLeaveCriticalRegion();
  return a3;
}
