/*
 * XREFs of EtwpCoverageReset @ 0x140829D38
 * Callers:
 *     EtwpCoverageResetWorkItemCallback @ 0x14082A280 (EtwpCoverageResetWorkItemCallback.c)
 *     EtwSetProcessTelemetryCoverage @ 0x140B0E008 (EtwSetProcessTelemetryCoverage.c)
 *     EtwpCoverageFlushWorkItemCallback @ 0x140B43DD0 (EtwpCoverageFlushWorkItemCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     EtwTelemetryCoverageReport @ 0x14048CFE0 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x14050814C (TelemetryCoverageStringHashInternal.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     EtwpCoverageFreeStringBuffers @ 0x140829C8C (EtwpCoverageFreeStringBuffers.c)
 *     EtwpCoverageFlushPending @ 0x140B433F0 (EtwpCoverageFlushPending.c)
 */

void __fastcall EtwpCoverageReset(__int64 a1, char a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v7; // rax
  void *v8; // rdx
  signed __int8 v9; // cf
  AutoBoost *v10; // rsi
  __int64 v11; // rcx
  int v12; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL) )
  {
    if ( (unsigned int)dword_140E0905C < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140E09058 )
      {
        v12 = 0;
        dword_140E09058 = TelemetryCoverageStringHashInternal(off_140E09050, &v12);
      }
      EtwTelemetryCoverageReport(&off_140E09050);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.1136, 0LL, 0LL, a4);
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
    EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
    if ( (a2 & 4) == 0 || (*(_DWORD *)(a1 + 36) & 1) != 0 )
    {
      if ( (a2 & 1) != 0
        || (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
         - *(_DWORD *)(a1 + 24) > 0x927C0 )
      {
        *(_DWORD *)(a1 + 36) &= ~1u;
        EtwpCoverageFlushPending(a1);
        memset_0((void *)(*(_QWORD *)(a1 + 16) + 52LL), 0, 4LL * *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4LL));
        EtwpCoverageFreeStringBuffers(a1, 1);
        *(_DWORD *)(*(_QWORD *)a1 + 4LL) = 0;
        **(_DWORD **)a1 = ++*(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
        v11 = *(_QWORD *)(a1 + 16);
        if ( (*(_BYTE *)(v11 + 2) & 1) == 0 )
          *(_DWORD *)(MmWriteableSharedUserData + 892) = *(_DWORD *)(v11 + 24);
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 20LL) = (MEMORY[0xFFFFF78000000320]
                                                  * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        *(_DWORD *)(*(_QWORD *)a1 + 20LL) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 20LL);
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL) = 0;
      }
      else
      {
        *(_DWORD *)(a1 + 36) |= 1u;
      }
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
}
