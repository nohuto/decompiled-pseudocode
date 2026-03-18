/*
 * XREFs of PfpScenCtxPrefetchAbortSet @ 0x140BF88B0
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1409AF298 (PfpPrefetchRequestPerform.c)
 *     PfpScenCtxScenarioSet @ 0x140C09F08 (PfpScenCtxScenarioSet.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PfpScenCtxPrefetchAbortSet(struct _KTHREAD *a1, int a2, void *a3, struct _KLOCK_ENTRIES *a4, int a5)
{
  int v5; // r14d
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rsi
  unsigned int v13; // esi
  bool v14; // zf

  v5 = (int)a4;
  if ( !a5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
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
  }
  if ( LODWORD(a1->StackLimit) != a2 )
  {
    v13 = -1073741735;
    goto LABEL_17;
  }
  v14 = v5 == 0;
  if ( !v5 )
  {
    if ( ((__int64)a1->Header.WaitListHead.Flink & 0xC) == 8 )
    {
      v13 = -1073741431;
      goto LABEL_17;
    }
    v14 = 1;
  }
  if ( !v14 )
    a3 = 0LL;
  v13 = 0;
  a1->InitialStack = a3;
LABEL_17:
  if ( !a5 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
    KeAbPostRelease((unsigned __int64)a1);
    KeLeaveCriticalRegion();
  }
  return v13;
}
