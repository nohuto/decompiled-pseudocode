/*
 * XREFs of KseShimDatabaseOpen @ 0x1409D6414
 * Callers:
 *     KsepDbGetShimInfo @ 0x1407BFA9C (KsepDbGetShimInfo.c)
 *     KsepDbCacheReadDevice @ 0x1409D6A58 (KsepDbCacheReadDevice.c)
 *     KsepDbGetDriverShims @ 0x1409D8DF4 (KsepDbGetDriverShims.c)
 *     KseInitialize @ 0x140CD3040 (KseInitialize.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KsepDeletePatchSdb @ 0x1407C1488 (KsepDeletePatchSdb.c)
 *     KsepSdbUnmapFromMemory @ 0x1409D5E7C (KsepSdbUnmapFromMemory.c)
 *     KsepSdbMapToMemory @ 0x1409D65BC (KsepSdbMapToMemory.c)
 */

__int64 __fastcall KseShimDatabaseOpen(LIST_ENTRY **a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
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
  if ( KsepShimDbDuringBoot )
  {
    if ( !KsepShimDbHandle )
    {
      *a1 = 0LL;
      goto LABEL_10;
    }
    ++KsepShimDbRefCount;
    v10 = 0;
    *a1 = (LIST_ENTRY *)KsepShimDbHandle;
    _InterlockedIncrement((volatile signed __int32 *)&AlpcpMessageLogLock.ApcStateFill[16]);
  }
  else if ( KsepShimDbHandle )
  {
    ++KsepShimDbRefCount;
    v10 = 0;
    *a1 = (LIST_ENTRY *)KsepShimDbHandle;
    _InterlockedIncrement((volatile signed __int32 *)&AlpcpMessageLogLock.ApcStateFill[24]);
  }
  else
  {
    v10 = KsepSdbMapToMemory(L"\\SystemRoot\\AppPatch\\drvmain.sdb");
    if ( v10 < 0 )
    {
      *a1 = 0LL;
      _InterlockedIncrement((volatile signed __int32 *)&AlpcpMessageLogLock.ApcStateFill[28]);
LABEL_10:
      v10 = -1073741823;
      goto LABEL_11;
    }
    if ( (int)KsepSdbMapToMemory(L"\\SystemRoot\\AppPatch\\drvpatch.sdb") >= 0
      && LODWORD(KsepShimDbLock.StackBase) >= *(_DWORD *)&KsepShimDbLock.WaitRegister.Flags )
    {
      KsepSdbUnmapFromMemory(&KsepShimDbLock.ThreadLock);
      KsepDeletePatchSdb();
    }
    ++KsepShimDbRefCount;
    KsepShimDbHandle = (__int64)&KsepShimDbLock.Header.WaitListHead;
    *a1 = &KsepShimDbLock.Header.WaitListHead;
    _InterlockedIncrement((volatile signed __int32 *)&AlpcpMessageLogLock.ApcStateFill[20]);
  }
LABEL_11:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&KsepShimDbLock);
  KeLeaveCriticalRegion();
  return (unsigned int)v10;
}
