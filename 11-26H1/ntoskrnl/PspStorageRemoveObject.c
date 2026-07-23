/*
 * XREFs of PspStorageRemoveObject @ 0x140805638
 * Callers:
 *     PsRemoveSiloContext @ 0x1407F42C0 (PsRemoveSiloContext.c)
 *     PsUnregisterSiloMonitor @ 0x1408018B0 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PspGetStorageArrayIfPossible @ 0x140446F60 (PspGetStorageArrayIfPossible.c)
 */

__int64 __fastcall PspStorageRemoveObject(__int64 a1, unsigned int a2, char a3, unsigned __int64 *a4)
{
  __int64 result; // rax
  struct _KLOCK_ENTRIES *v7; // r9
  int v8; // ebp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v10; // rsi
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rdi
  unsigned __int64 v14; // rdi
  unsigned int v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16[4]; // [rsp+28h] [rbp-20h] BYREF

  v15 = 0;
  v16[0] = 0LL;
  result = PspGetStorageArrayIfPossible(a1, a2, &v15, v16);
  v8 = result;
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = (unsigned __int64 *)(v16[0] + 16LL * v15);
    --CurrentThread->KernelApcDisable;
    v11 = (AutoBoost *)KeAbPreAcquire((__int64)v10, 0LL, 0LL, v7);
    v13 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v11, (__int64)v10);
    if ( v13 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v13, v12);
      else
        *((_BYTE *)v13 + 10) = 1;
    }
    v14 = v10[1];
    if ( v14 )
    {
      if ( a3 || (v14 & 1) == 0 )
      {
        v10[1] = 0LL;
        v14 &= ~1uLL;
      }
      else
      {
        v14 = 0LL;
        v8 = -1073741637;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10);
    KeAbPostRelease((unsigned __int64)v10);
    KeLeaveCriticalRegion();
    if ( v8 >= 0 )
    {
      if ( !v14 )
        return 3221226021LL;
      if ( a4 )
        *a4 = v14;
      else
        ObfDereferenceObject((PVOID)v14);
    }
    return (unsigned int)v8;
  }
  return result;
}
