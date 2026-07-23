/*
 * XREFs of CcApplyLowIoPriorityToThread @ 0x140387538
 * Callers:
 *     CcWriteBehindPreProcess @ 0x140386674 (CcWriteBehindPreProcess.c)
 *     CcWriteBehindReleaseFile @ 0x140387F44 (CcWriteBehindReleaseFile.c)
 * Callees:
 *     KeSetPriorityThread @ 0x140204620 (KeSetPriorityThread.c)
 *     PsSetIoPriorityThread @ 0x140239BF4 (PsSetIoPriorityThread.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     PsBoostThreadIo @ 0x1403053C0 (PsBoostThreadIo.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     CcIsWriteBehindThreadpoolAtLowPriority @ 0x140385398 (CcIsWriteBehindThreadpoolAtLowPriority.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1404AD134 (CcUpdateSharedCacheMapFlag.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

void __fastcall CcApplyLowIoPriorityToThread(__int64 a1, char a2, _DWORD *a3, struct _KLOCK_ENTRIES *a4)
{
  LegacyAutoBoost *CurrentThread; // r14
  __int64 v7; // rcx
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  unsigned __int64 *v10; // rdi
  AutoBoost *v11; // rax
  void *v12; // rdx
  __int64 v13; // r8
  struct _SINGLE_LIST_ENTRY *v14; // r9
  AutoBoost *v15; // rbp
  AutoBoost *v16; // rax
  void *v17; // rdx
  AutoBoost *v18; // rbp
  __int64 v19; // r8
  struct _SINGLE_LIST_ENTRY *v20; // r9
  __int64 v21; // r8
  struct _SINGLE_LIST_ENTRY *v22; // r9
  __int64 v23; // rdx

  CurrentThread = (LegacyAutoBoost *)KeGetCurrentThread();
  if ( !a3[1] )
    KeBugCheckEx(0x34u, 0x51FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( a2 )
  {
    if ( !CcIsWriteBehindThreadpoolAtLowPriority(a1)
      || *(_QWORD *)(v7 + 1256)
      || *(_DWORD *)(v8 + 524)
      || (*(_DWORD *)(v8 + 152) & 0x10000) != 0 )
    {
      return;
    }
    v10 = (unsigned __int64 *)(v7 + 1280);
    v16 = (AutoBoost *)KeAbPreAcquire(v7 + 1280, 0LL, 0LL, v9);
    v18 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v16, (__int64)v10);
    if ( v18 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v18, v17);
      else
        *((_BYTE *)v18 + 10) = 1;
    }
    if ( CcIsWriteBehindThreadpoolAtLowPriority(a1) && !*(_QWORD *)(a1 + 1256) && !a3[131] && (a3[38] & 0x10000) == 0 )
    {
      *(_QWORD *)(a1 + 1256) = CurrentThread;
      *(_QWORD *)(a1 + 1264) = a3;
      *(_DWORD *)(a1 + 1276) = PsSetIoPriorityThread(CurrentThread, 0, v19, v20);
    }
  }
  else
  {
    if ( *(LegacyAutoBoost **)(a1 + 1256) != CurrentThread )
      return;
    v10 = (unsigned __int64 *)(a1 + 1280);
    v11 = (AutoBoost *)KeAbPreAcquire(a1 + 1280, 0LL, 0LL, a4);
    v15 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v11, (__int64)v10);
    if ( v15 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v15, v12);
      else
        *((_BYTE *)v15 + 10) = 1;
    }
    PsSetIoPriorityThread(CurrentThread, *(_DWORD *)(a1 + 1276), v13, v14);
    v23 = *(unsigned int *)(a1 + 1272);
    if ( (_DWORD)v23 != 32 )
      KeSetPriorityThread(KeGetCurrentThread(), v23);
    if ( (a3[38] & 0x20000000) != 0 )
    {
      LOBYTE(v23) = 1;
      PsBoostThreadIo(CurrentThread, v23, v21, v22);
      CcUpdateSharedCacheMapFlag(a3, 0x20000000LL, 0LL);
    }
    *(_QWORD *)(a1 + 1256) = 0LL;
    *(_QWORD *)(a1 + 1264) = 0LL;
    *(_DWORD *)(a1 + 1276) = 5;
    *(_DWORD *)(a1 + 1272) = 32;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v10);
  KeAbPostRelease((unsigned __int64)v10);
}
