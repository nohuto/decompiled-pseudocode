/*
 * XREFs of KseShimDatabaseClose @ 0x1409E6D54
 * Callers:
 *     KsepDbGetShimInfo @ 0x1407BCA3C (KsepDbGetShimInfo.c)
 *     KsepDbGetDriverShims @ 0x1409E45DC (KsepDbGetDriverShims.c)
 *     KsepDbCacheReadDevice @ 0x1409E6158 (KsepDbCacheReadDevice.c)
 *     KseInitialize @ 0x140CCCEE0 (KseInitialize.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     RtlAssert @ 0x140619AB0 (RtlAssert.c)
 *     KsepSdbUnmapFromMemory @ 0x1409E6EA4 (KsepSdbUnmapFromMemory.c)
 *     KseShimDatabaseBootRelease @ 0x140B4F3C4 (KseShimDatabaseBootRelease.c)
 */

void __fastcall KseShimDatabaseClose(_KTRAP_FRAME *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rdi
  int v10; // eax
  __int64 v11; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&KsepShimDbLock, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64(&KsepShimDbLock.Header.Lock, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&KsepShimDbLock, v6, (__int64)&KsepShimDbLock);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v7);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  if ( a1 != KsepShimDbLock.TrapFrame )
  {
    v11 = ((unsigned __int8)_InterlockedExchangeAdd(
                              (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                              1u)
         + 1) & 0x3F;
    *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v11 + 4] = -1073740768;
    *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v11) = 590385;
    if ( ((__int64)stru_140E66B30.StackBase & 4) != 0 )
      RtlAssert("DbHandleIn == KsepShimDbHandle", "minkernel\\ntos\\kshim\\ksesdb.c", 0x231u, 0LL);
  }
  if ( LODWORD(KsepShimDbLock.FirstArgument) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock.Header.Lock);
    KeAbPostRelease((unsigned __int64)&KsepShimDbLock);
    KeLeaveCriticalRegion();
    KseShimDatabaseBootRelease();
  }
  else
  {
    if ( KsepShimDbLock.TrapFrame )
    {
      v10 = KsepShimDbRefCount;
      if ( !KsepShimDbRefCount || (--KsepShimDbRefCount, v10 == 1) )
      {
        KsepSdbUnmapFromMemory(&KsepShimDbLock.SListFaultAddress);
        KsepSdbUnmapFromMemory(&KsepShimDbLock.CurrentRunTime);
        KsepShimDbLock.TrapFrame = 0LL;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock.Header.Lock);
    KeAbPostRelease((unsigned __int64)&KsepShimDbLock);
    KeLeaveCriticalRegion();
  }
}
