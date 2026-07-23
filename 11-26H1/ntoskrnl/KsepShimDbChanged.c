/*
 * XREFs of KsepShimDbChanged @ 0x1404DCBA4
 * Callers:
 *     KseQueryDeviceData @ 0x1409D6F80 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140B2E430 (KseQueryDeviceDataList.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     KsepShimDatabaseTime @ 0x140AFFCFC (KsepShimDatabaseTime.c)
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
    if ( KsepShimDbLock.StackLimit )
    {
      KsepShimDbLock.StackLimit = 0LL;
      v8 = 1;
    }
    else
    {
      KsepShimDbLock.StackLimit = 0LL;
    }
    if ( (int)KsepShimDatabaseTime(L"\\SystemRoot\\AppPatch\\drvpatch.sdb") >= 0 )
    {
      if ( KsepShimDbLock.SchedulingGroup )
        v8 = 1;
      KsepShimDbLock.SchedulingGroup = 0LL;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&KsepShimDbLock);
  KeLeaveCriticalRegion();
  return v8;
}
