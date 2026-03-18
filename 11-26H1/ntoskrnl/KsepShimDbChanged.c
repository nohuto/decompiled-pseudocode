/*
 * XREFs of KsepShimDbChanged @ 0x1404E3604
 * Callers:
 *     KseQueryDeviceData @ 0x1409E5A00 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140B2C3B0 (KseQueryDeviceDataList.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     KsepShimDatabaseTime @ 0x140AFDC8C (KsepShimDatabaseTime.c)
 */

__int64 __fastcall KsepShimDbChanged(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v5; // rax
  signed __int8 v6; // cf
  AutoBoost *v7; // rdi
  unsigned int v8; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&KsepShimDbLock, 0LL, 0LL, a4);
  v6 = _interlockedbittestandset64(&KsepShimDbLock.Header.Lock, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&KsepShimDbLock, v5, (__int64)&KsepShimDbLock);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v7 + 33) |= 2u;
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  v8 = 0;
  if ( (int)KsepShimDatabaseTime(L"\\SystemRoot\\AppPatch\\drvmain.sdb") >= 0 )
  {
    if ( KsepShimDbLock.ThreadLock )
    {
      KsepShimDbLock.ThreadLock = 0LL;
      v8 = 1;
    }
    else
    {
      KsepShimDbLock.ThreadLock = 0LL;
    }
    if ( (int)KsepShimDatabaseTime(L"\\SystemRoot\\AppPatch\\drvpatch.sdb") >= 0 )
    {
      if ( *($353D57E818BB6F967B4B818D974CF463 *)((char *)&KsepShimDbLock.116 + 4) )
        v8 = 1;
      *($353D57E818BB6F967B4B818D974CF463 *)((char *)&KsepShimDbLock.116 + 4) = 0LL;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&KsepShimDbLock);
  KeLeaveCriticalRegion();
  return v8;
}
