/*
 * XREFs of PfpScenCtxServiceThreadSet @ 0x140BFED14
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140B60C94 (PfSetSuperfetchInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PsGetThreadId @ 0x1404793F0 (PsGetThreadId.c)
 */

void __fastcall PfpScenCtxServiceThreadSet(struct _KTHREAD *a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  HANDLE ThreadId; // rax
  __int64 v7; // rdi
  volatile unsigned __int64 v8; // r14
  struct _KTHREAD *v9; // rax
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rbp

  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    ThreadId = PsGetThreadId(CurrentThread);
    v7 = *(_QWORD *)&CurrentThread[1].Header.Lock;
    v8 = (volatile unsigned __int64)ThreadId;
  }
  else
  {
    v8 = 0LL;
    v7 = 0LL;
  }
  v9 = KeGetCurrentThread();
  --v9->KernelApcDisable;
  v10 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
  v12 = v10;
  if ( _interlockedbittestandset64(&a1->Header.Lock, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, v10, (__int64)a1);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v11);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  a1->CycleTime = v8;
  *(_QWORD *)&a1->CurrentRunTime = v7;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
  KeAbPostRelease((unsigned __int64)a1);
  KeLeaveCriticalRegion();
}
