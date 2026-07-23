/*
 * XREFs of KeCleanupImageTracepoints @ 0x140B3AFB4
 * Callers:
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall KeCleanupImageTracepoints(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 v5; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v7; // r15
  AutoBoost *v8; // rax
  void *v9; // rdx
  signed __int8 v10; // cf
  AutoBoost *v11; // rdi
  void **v12; // rdi
  void **v13; // rbp
  void **v14; // rcx
  void **v15; // rsi
  void *v16; // rax
  signed __int32 v17[14]; // [rsp+0h] [rbp-38h] BYREF

  if ( stru_140FC11F0.OtherOperationCount )
    guard_dispatch_icall_no_overrides(a1, a2);
  if ( KsepShimDbLock.WaitBlock[1].SparePtr )
  {
    v5 = *(_QWORD *)(a1 + 48);
    CurrentThread = KeGetCurrentThread();
    v7 = v5 + *(unsigned int *)(a1 + 64) - 1LL;
    --CurrentThread->KernelApcDisable;
    v8 = (AutoBoost *)KeAbPreAcquire((__int64)&KsepShimDbLock.WaitBlock[1].Thread, 0LL, 0LL, a4);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&KsepShimDbLock.WaitBlockFill11[72], 0LL);
    v11 = v8;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&KsepShimDbLock.WaitBlock[1].Thread,
        v8,
        (__int64)&KsepShimDbLock.WaitBlock[1].Thread);
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v11, v9);
      else
        *((_BYTE *)v11 + 10) = 1;
    }
    v12 = (void **)((char *)KsepShimDbLock.WaitBlock[1].SparePtr + 8 * ((v5 >> 4) & 0x3FFF));
    v13 = (void **)((char *)KsepShimDbLock.WaitBlock[1].SparePtr + 8 * ((v7 >> 4) & 0x3FFF));
    while ( v12 <= v13 )
    {
      v14 = (void **)*v12;
      v15 = v12;
      while ( v14 )
      {
        v16 = v14[1];
        if ( (unsigned __int64)v16 < v5 || (unsigned __int64)v16 > v7 )
        {
          v15 = v14;
        }
        else
        {
          if ( *((_BYTE *)v14 + 48) )
            --*(_DWORD *)&KsepShimDbLock.WaitBlockFill11[44];
          *v15 = *v14;
          _InterlockedOr(v17, 0);
          --*(_DWORD *)&KsepShimDbLock.WaitBlockFill11[40];
          while ( *(_DWORD *)&KsepShimDbLock.WaitBlockFill11[80] )
            _mm_pause();
          ExFreePoolWithTag(v14, 0x70727446u);
        }
        v14 = (void **)*v15;
      }
      ++v12;
    }
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&KsepShimDbLock.WaitBlock[1].Thread,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock.WaitBlock[1].Thread);
    KeAbPostRelease((unsigned __int64)&KsepShimDbLock.WaitBlock[1].Thread);
    KeLeaveCriticalRegion();
  }
}
