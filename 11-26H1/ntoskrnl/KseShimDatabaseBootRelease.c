/*
 * XREFs of KseShimDatabaseBootRelease @ 0x140B4F3C4
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1405257B0 (PnpCompleteSystemStartProcess.c)
 *     KseShimDatabaseClose @ 0x1409E6D54 (KseShimDatabaseClose.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     KsepSdbBootRelease @ 0x1407BE614 (KsepSdbBootRelease.c)
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
  if ( LODWORD(KsepShimDbLock.FirstArgument) )
  {
    v9 = KsepShimDbRefCount;
    if ( !KsepShimDbRefCount || (--KsepShimDbRefCount, v9 == 1) )
    {
      KsepSdbBootRelease(&KsepShimDbLock.SListFaultAddress);
      KsepSdbBootRelease(&KsepShimDbLock.CurrentRunTime);
      KsepShimDbLock.TrapFrame = 0LL;
      LODWORD(KsepShimDbLock.FirstArgument) = 0;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&KsepShimDbLock);
  KeLeaveCriticalRegion();
}
