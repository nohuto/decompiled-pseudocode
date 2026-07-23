/*
 * XREFs of KseShimDatabaseBootRelease @ 0x140B51C54
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x140527E20 (PnpCompleteSystemStartProcess.c)
 *     KseShimDatabaseClose @ 0x1409D5D2C (KseShimDatabaseClose.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KsepSdbBootRelease @ 0x1407C1674 (KsepSdbBootRelease.c)
 */

void __fastcall KseShimDatabaseBootRelease(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rdi
  int v9; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&KsepShimDbLock, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64(&KsepShimDbLock.Header.Lock, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&KsepShimDbLock, v5, (__int64)&KsepShimDbLock);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v6);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  if ( KsepShimDbDuringBoot )
  {
    v9 = KsepShimDbRefCount;
    if ( !KsepShimDbRefCount || (--KsepShimDbRefCount, v9 == 1) )
    {
      KsepSdbBootRelease(&KsepShimDbLock.Header.WaitListHead.Flink);
      KsepSdbBootRelease(&KsepShimDbLock.ThreadLock);
      KsepShimDbHandle = 0LL;
      KsepShimDbDuringBoot = 0;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&KsepShimDbLock);
  KeLeaveCriticalRegion();
}
