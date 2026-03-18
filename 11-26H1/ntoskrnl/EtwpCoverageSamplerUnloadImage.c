/*
 * XREFs of EtwpCoverageSamplerUnloadImage @ 0x14093FA28
 * Callers:
 *     PerfLogImageUnload @ 0x140AB9C84 (PerfLogImageUnload.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     MmIsKernelAddress @ 0x1404579F0 (MmIsKernelAddress.c)
 *     EtwpCovSampProcessRemoveModule @ 0x140940CCC (EtwpCovSampProcessRemoveModule.c)
 *     EtwpCovSampReleaseSamplerRundown @ 0x140940F74 (EtwpCovSampReleaseSamplerRundown.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x140940FE8 (EtwpCovSampAcquireSamplerRundown.c)
 */

__int64 __fastcall EtwpCoverageSamplerUnloadImage(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  struct _KLOCK_ENTRIES *v6; // r9
  unsigned __int64 *v7; // rsi
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
      v7 = (unsigned __int64 *)&ExpSysDbgLock.QueuedScb[2].ReadyListHead[11];
    }
    else
    {
      v7 = *(unsigned __int64 **)(a1 + 1904);
      if ( !v7 )
        return EtwpCovSampReleaseSamplerRundown(v13);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = (AutoBoost *)KeAbPreAcquire((__int64)(v7 + 1), 0LL, 0LL, v6);
    v11 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7 + 2, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7 + 1, v9, (__int64)(v7 + 1));
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v11, v10);
      else
        *((_BYTE *)v11 + 10) = 1;
    }
    v7[2] = (unsigned __int64)KeGetCurrentThread();
    EtwpCovSampProcessRemoveModule(v7, a2, a3);
    v7[2] = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7 + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7 + 1);
    KeAbPostRelease((unsigned __int64)(v7 + 1));
    KeLeaveCriticalRegion();
  }
  return EtwpCovSampReleaseSamplerRundown(v13);
}
