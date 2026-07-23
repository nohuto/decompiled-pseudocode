/*
 * XREFs of PfpScenCtxPrefetchStateSet @ 0x140BFE9BC
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140B60C94 (PfSetSuperfetchInformation.c)
 *     PfpScenCtxScenarioSet @ 0x140C10118 (PfpScenCtxScenarioSet.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PfpScenCtxPrefetchStateSet(struct _KTHREAD *a1, int a2, int a3, struct _KLOCK_ENTRIES *a4)
{
  int v4; // r14d
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // rsi
  unsigned int v12; // esi
  int Flink; // ecx

  v4 = (int)a4;
  if ( !(_DWORD)a4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
    v11 = v9;
    if ( _interlockedbittestandset64(&a1->Header.Lock, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, v9, (__int64)a1);
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v11, v10);
      else
        *((_BYTE *)v11 + 10) = 1;
    }
  }
  if ( LODWORD(a1->StackLimit) == a2 )
  {
    if ( a3 == 1 && ((__int64)a1->Header.WaitListHead.Flink & 0xC) == 8 )
    {
      v12 = -1073741431;
    }
    else
    {
      Flink = (int)a1->Header.WaitListHead.Flink;
      if ( (Flink & 0xC) == 4 )
      {
        KeSetEvent((PRKEVENT)&a1->Header.WaitListHead.Blink, 1, 0);
        LODWORD(a1->Header.WaitListHead.Flink) &= 0xFFFFFFF3;
        Flink = (int)a1->Header.WaitListHead.Flink;
      }
      LODWORD(a1->Header.WaitListHead.Flink) = Flink ^ ((unsigned __int8)a3 ^ (unsigned __int8)Flink) & 3;
      v12 = 0;
    }
  }
  else
  {
    v12 = -1073741735;
  }
  if ( !v4 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
    KeAbPostRelease((unsigned __int64)a1);
    KeLeaveCriticalRegion();
  }
  return v12;
}
