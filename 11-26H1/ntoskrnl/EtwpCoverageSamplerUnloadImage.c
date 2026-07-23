/*
 * XREFs of EtwpCoverageSamplerUnloadImage @ 0x140A32B38
 * Callers:
 *     PerfLogImageUnload @ 0x140ABB148 (PerfLogImageUnload.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MmIsKernelAddress @ 0x14044F260 (MmIsKernelAddress.c)
 *     EtwpCovSampProcessRemoveModule @ 0x140A33DDC (EtwpCovSampProcessRemoveModule.c)
 *     EtwpCovSampReleaseSamplerRundown @ 0x140A34084 (EtwpCovSampReleaseSamplerRundown.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x140A340F8 (EtwpCovSampAcquireSamplerRundown.c)
 */

__int64 __fastcall EtwpCoverageSamplerUnloadImage(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  struct _KLOCK_ENTRIES *v6; // r9
  unsigned __int64 v7; // rsi
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // rbp
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0LL;
  if ( (int)EtwpCovSampAcquireSamplerRundown(&v13) >= 0 )
  {
    if ( MmIsKernelAddress(a2) )
    {
      v7 = ExpSysDbgLock.UserWaitTime + 1264;
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 1904);
      if ( !v7 )
        return EtwpCovSampReleaseSamplerRundown(v13);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = (AutoBoost *)KeAbPreAcquire(v7 + 8, 0LL, 0LL, v6);
    v11 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 8), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v7 + 8), v9, v7 + 8);
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v11, v10);
      else
        *((_BYTE *)v11 + 10) = 1;
    }
    *(_QWORD *)(v7 + 16) = KeGetCurrentThread();
    EtwpCovSampProcessRemoveModule(v7, a2, a3);
    *(_QWORD *)(v7 + 16) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v7 + 8));
    KeAbPostRelease(v7 + 8);
    KeLeaveCriticalRegion();
  }
  return EtwpCovSampReleaseSamplerRundown(v13);
}
