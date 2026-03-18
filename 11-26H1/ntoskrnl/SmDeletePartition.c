/*
 * XREFs of SmDeletePartition @ 0x140818D10
 * Callers:
 *     MiDrainCrossPartitionUsage @ 0x1406F0580 (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     SmPartitionCleanup @ 0x140818F90 (SmPartitionCleanup.c)
 */

void __fastcall SmDeletePartition(__int64 a1)
{
  __int64 v1; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _KLOCK_ENTRIES *v4; // r9
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rsi
  __int64 v9; // r8
  _QWORD *v10; // rdx

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v1 + 2224));
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E27B08, 0LL, 0LL, v4);
    v7 = _interlockedbittestandset64(&stru_140E27B08.Header.Lock, 0LL);
    v8 = v5;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140E27B08, v5, (__int64)&stru_140E27B08);
    if ( v8 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v8, v6);
      else
        *((_BYTE *)v8 + 10) = 1;
    }
    v9 = *(_QWORD *)(v1 + 2232);
    if ( *(_QWORD *)(v9 + 8) != v1 + 2232 || (v10 = *(_QWORD **)(v1 + 2240), *v10 != v1 + 2232) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E27B08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E27B08.Header.Lock);
    KeAbPostRelease((unsigned __int64)&stru_140E27B08);
    KeLeaveCriticalRegion();
    SmPartitionCleanup(v1);
    CmSiFreeMemory((PPRIVILEGE_SET)v1);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
