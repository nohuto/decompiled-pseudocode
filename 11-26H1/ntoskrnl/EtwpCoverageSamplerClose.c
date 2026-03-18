/*
 * XREFs of EtwpCoverageSamplerClose @ 0x1408311B0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     EtwpCoverageSamplerStop @ 0x140A84B18 (EtwpCoverageSamplerStop.c)
 */

void __fastcall EtwpCoverageSamplerClose(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  char v6; // bp
  AutoBoost *v7; // rax
  void *v8; // rdx
  signed __int8 v9; // cf
  AutoBoost *v10; // rdi
  int v11; // eax

  if ( a4 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0;
    --CurrentThread->KernelApcDisable;
    v7 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.ReadTransferCount, 0LL, 0LL, (struct _KLOCK_ENTRIES *)1);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock.ReadTransferCount, 0LL);
    v10 = v7;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&ExpSysDbgLock.ReadTransferCount,
        v7,
        (__int64)&ExpSysDbgLock.ReadTransferCount);
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v10, v8);
      else
        *((_BYTE *)v10 + 10) = 1;
    }
    ExpSysDbgLock.WriteTransferCount = (__int64)KeGetCurrentThread();
    v11 = *(_DWORD *)(a2 + 1728);
    if ( (v11 & 1) == 0 )
    {
      v6 = 1;
      *(_DWORD *)(a2 + 1728) = v11 | 1;
    }
    ExpSysDbgLock.WriteTransferCount = 0LL;
    if ( (_InterlockedExchangeAdd64(&ExpSysDbgLock.ReadTransferCount, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&ExpSysDbgLock.ReadTransferCount);
    KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.ReadTransferCount);
    KeLeaveCriticalRegion();
    if ( v6 )
      EtwpCoverageSamplerStop(a2);
  }
}
