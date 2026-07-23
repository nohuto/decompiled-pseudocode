/*
 * XREFs of EtwpCoverageReset @ 0x14082FF78
 * Callers:
 *     EtwpCoverageResetWorkItemCallback @ 0x1408304C0 (EtwpCoverageResetWorkItemCallback.c)
 *     EtwSetProcessTelemetryCoverage @ 0x140B0F758 (EtwSetProcessTelemetryCoverage.c)
 *     EtwpCoverageFlushWorkItemCallback @ 0x140B45CC0 (EtwpCoverageFlushWorkItemCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     EtwTelemetryCoverageReport @ 0x140486B20 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageStringHashInternal @ 0x140501C30 (TelemetryCoverageStringHashInternal.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpCoverageFreeStringBuffers @ 0x14082FECC (EtwpCoverageFreeStringBuffers.c)
 *     EtwpCoverageFlushPending @ 0x140B452E0 (EtwpCoverageFlushPending.c)
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
    if ( (unsigned int)dword_140E08FD4 < MEMORY[0xFFFFF7800000037C] )
    {
      if ( !dword_140E08FD0 )
      {
        v12 = 0;
        dword_140E08FD0 = TelemetryCoverageStringHashInternal(off_140E08FC8, &v12);
      }
      EtwTelemetryCoverageReport(&off_140E08FC8);
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.Padding[2], 0LL, 0LL, a4);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock.Padding[2], 0LL);
    v10 = v7;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(&ExpSysDbgLock.Padding[2], v7, (__int64)&ExpSysDbgLock.Padding[2]);
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
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSysDbgLock.Padding[2], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpSysDbgLock.Padding[2]);
    KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.Padding[2]);
    KeLeaveCriticalRegion();
  }
}
