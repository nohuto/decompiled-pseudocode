/*
 * XREFs of PspStorageEmptyArray @ 0x140AED370
 * Callers:
 *     PspStorageEmptyAll @ 0x140AED328 (PspStorageEmptyAll.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspStorageEmptyArray(struct _KTHREAD *a1, unsigned int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // esi
  __int64 v6; // rbp
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rdi
  void *v11; // rdi

  v4 = 0;
  if ( a2 )
  {
    v6 = a2;
    do
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v8 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
      v10 = v8;
      if ( _interlockedbittestandset64(&a1->Header.Lock, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, v8, (__int64)a1);
      if ( v10 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v10, v9);
        else
          *((_BYTE *)v10 + 10) = 1;
      }
      v11 = (void *)((unsigned __int64)a1->Header.WaitListHead.Flink & 0xFFFFFFFFFFFFFFFEuLL);
      a1->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)1;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
      KeAbPostRelease((unsigned __int64)a1);
      KeLeaveCriticalRegion();
      if ( v11 )
      {
        ObfDereferenceObject(v11);
        ++v4;
      }
      a1 = (struct _KTHREAD *)((char *)a1 + 16);
      --v6;
    }
    while ( v6 );
  }
  return v4;
}
