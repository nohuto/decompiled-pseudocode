/*
 * XREFs of KseShimDatabaseOpen @ 0x1409E63D0
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
 *     KsepDeletePatchSdb @ 0x1407BE428 (KsepDeletePatchSdb.c)
 *     KsepSdbMapToMemory @ 0x1409E6578 (KsepSdbMapToMemory.c)
 *     KsepSdbUnmapFromMemory @ 0x1409E6EA4 (KsepSdbUnmapFromMemory.c)
 */

__int64 __fastcall KseShimDatabaseOpen(_QWORD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rdi
  int v10; // edi

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
  if ( LODWORD(KsepShimDbLock.FirstArgument) )
  {
    if ( !KsepShimDbLock.TrapFrame )
    {
      *a1 = 0LL;
      goto LABEL_10;
    }
    ++KsepShimDbRefCount;
    v10 = 0;
    *a1 = KsepShimDbLock.TrapFrame;
    _InterlockedIncrement((volatile signed __int32 *)&AlpcpMessageLogLock.WaitBlockList);
  }
  else if ( KsepShimDbLock.TrapFrame )
  {
    ++KsepShimDbRefCount;
    v10 = 0;
    *a1 = KsepShimDbLock.TrapFrame;
    _InterlockedIncrement((volatile signed __int32 *)&AlpcpMessageLogLock.216);
  }
  else
  {
    v10 = KsepSdbMapToMemory(L"\\SystemRoot\\AppPatch\\drvmain.sdb");
    if ( v10 < 0 )
    {
      *a1 = 0LL;
      _InterlockedIncrement((_DWORD *)&AlpcpMessageLogLock.SwapListEntry.Next + 1);
LABEL_10:
      v10 = -1073741823;
      goto LABEL_11;
    }
    if ( (int)KsepSdbMapToMemory(L"\\SystemRoot\\AppPatch\\drvpatch.sdb") >= 0
      && LODWORD(KsepShimDbLock.CycleTime) >= KsepShimDbLock.SystemCallNumber )
    {
      KsepSdbUnmapFromMemory(&KsepShimDbLock.CurrentRunTime);
      KsepDeletePatchSdb();
    }
    ++KsepShimDbRefCount;
    KsepShimDbLock.TrapFrame = (_KTRAP_FRAME *)&KsepShimDbLock.SListFaultAddress;
    *a1 = &KsepShimDbLock.SListFaultAddress;
    _InterlockedIncrement((_DWORD *)&AlpcpMessageLogLock.WaitBlockList + 1);
  }
LABEL_11:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&KsepShimDbLock);
  KeLeaveCriticalRegion();
  return (unsigned int)v10;
}
