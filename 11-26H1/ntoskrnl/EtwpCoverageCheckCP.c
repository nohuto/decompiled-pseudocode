/*
 * XREFs of EtwpCoverageCheckCP @ 0x140829AA4
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x140B0E008 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     EtwpCoverageValidateCP @ 0x14048D23C (EtwpCoverageValidateCP.c)
 *     TelemetryCoverageTableLocateInternal @ 0x1404F8AE0 (TelemetryCoverageTableLocateInternal.c)
 */

__int64 __fastcall EtwpCoverageCheckCP(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  struct _KLOCK_ENTRIES *v5; // r9
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v7; // rax
  void *v8; // rdx
  signed __int8 v9; // cf
  AutoBoost *v10; // rdi
  unsigned int *v11; // rdi
  int v12; // edx
  unsigned int *Internal; // rax
  int v14; // r11d
  int v16; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  v16 = 0;
  if ( (unsigned int)EtwpCoverageValidateCP((char **)a2, &v16) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.1136, 0LL, 0LL, v5);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock.1136, 0LL);
    v10 = v7;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&ExpSysDbgLock.1136, v7, (__int64)&ExpSysDbgLock.1136);
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v10, v8);
      else
        *((_BYTE *)v10 + 10) = 1;
    }
    v11 = *(unsigned int **)(a1 + 16);
    v12 = *(_DWORD *)(a2 + 8);
    EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
    Internal = TelemetryCoverageTableLocateInternal(v11, v12);
    if ( *Internal == v14 )
    {
      v4 = 1;
      *(_DWORD *)(a2 + 12) = v11[6];
    }
    else
    {
      *(_DWORD *)(a2 + 12) = 0;
    }
  }
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&ExpSysDbgLock.AutoBoostThreadState,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpSysDbgLock.1136);
    KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.1136);
    KeLeaveCriticalRegion();
  }
  return v4;
}
