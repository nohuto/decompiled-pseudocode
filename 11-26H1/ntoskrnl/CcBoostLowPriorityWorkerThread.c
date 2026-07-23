/*
 * XREFs of CcBoostLowPriorityWorkerThread @ 0x1404EA98C
 * Callers:
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140387494 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcFlushCachePreProcess @ 0x14039AF28 (CcFlushCachePreProcess.c)
 * Callees:
 *     KeSetPriorityThread @ 0x140204620 (KeSetPriorityThread.c)
 *     IoBoostThreadIoPriority @ 0x140205BAC (IoBoostThreadIoPriority.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     PsBoostThreadIo @ 0x1403053C0 (PsBoostThreadIo.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PsGetIoPriorityThread @ 0x140376E50 (PsGetIoPriorityThread.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1404AD134 (CcUpdateSharedCacheMapFlag.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall CcBoostLowPriorityWorkerThread(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v6; // rbp
  AutoBoost *v7; // rax
  void *v8; // rdx
  AutoBoost *v9; // rsi
  KSPIN_LOCK **v10; // rsi
  LegacyAutoBoost **v11; // rdi
  __int64 v12; // r8
  struct _SINGLE_LIST_ENTRY *v13; // r9
  __int64 v14; // rax

  if ( a2 && !*(_DWORD *)(a2 + 4) )
    KeBugCheckEx(0x34u, 0x5ADuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = (unsigned __int64 *)(a1 + 1280);
  v7 = (AutoBoost *)KeAbPreAcquire(a1 + 1280, 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (__int64)v6);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v10 = (KSPIN_LOCK **)(a1 + 1256);
  if ( *(_QWORD *)(a1 + 1256) && (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) > 0 )
  {
    if ( a2 )
    {
      if ( a2 != *(_QWORD *)(a1 + 1264) )
        goto LABEL_9;
      v11 = (LegacyAutoBoost **)(a1 + 1256);
    }
    else
    {
      v11 = (LegacyAutoBoost **)(a1 + 1256);
    }
    IoBoostThreadIoPriority(*v10, 2, 0);
    *(_DWORD *)(a1 + 1272) = KeSetPriorityThread((PKTHREAD)*v10, 13);
    v14 = *(_QWORD *)(a1 + 1264);
    if ( !*(_DWORD *)(v14 + 4) )
      KeBugCheckEx(0x34u, 0x5DAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (*(_DWORD *)(v14 + 152) & 0x20000000) == 0 )
    {
      PsBoostThreadIo(*v11, 0LL, v12, v13);
      CcUpdateSharedCacheMapFlag(*(_QWORD *)(a1 + 1264), 0x20000000, 1);
    }
  }
LABEL_9:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1280), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1280));
  KeAbPostRelease(a1 + 1280);
}
