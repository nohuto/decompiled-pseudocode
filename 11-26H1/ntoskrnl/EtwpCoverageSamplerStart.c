/*
 * XREFs of EtwpCoverageSamplerStart @ 0x1408314FC
 * Callers:
 *     EtwpSetCoverageSamplerInformation @ 0x140831834 (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     MmEnumerateSystemImages @ 0x1404E5150 (MmEnumerateSystemImages.c)
 *     KeStartProfile @ 0x1405F32A8 (KeStartProfile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     KeInitializeProfileCallback @ 0x1407BAD28 (KeInitializeProfileCallback.c)
 *     KeSetIntervalProfile @ 0x1407BAEC8 (KeSetIntervalProfile.c)
 *     EtwpCovSampCaptureContextStart @ 0x14083075C (EtwpCovSampCaptureContextStart.c)
 *     EtwpCoverageSamplerAllocateTable @ 0x14093F84C (EtwpCoverageSamplerAllocateTable.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140959E60 (EtwpUpdateGlobalGroupMasks.c)
 *     PsEnumProcesses @ 0x14096E8BC (PsEnumProcesses.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140B30BB0 (PsSetLoadImageNotifyRoutineEx.c)
 */

__int64 __fastcall EtwpCoverageSamplerStart(__int64 a1)
{
  int v2; // r14d
  _QWORD *Table; // rax
  struct _KLOCK_ENTRIES *v4; // r9
  int ImageNotifyRoutine; // edi
  _QWORD *v6; // rdx
  unsigned int v7; // ecx
  unsigned int v8; // edi
  int v9; // eax
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rdi
  __int64 v14; // r15
  __int64 v15; // rcx
  int v16; // edx

  v2 = 0;
  Table = (_QWORD *)EtwpCoverageSamplerAllocateTable(*(unsigned int *)(a1 + 36));
  *(_QWORD *)(a1 + 1664) = Table;
  if ( !Table )
  {
    ImageNotifyRoutine = -1073741670;
    goto LABEL_33;
  }
  ++*(_DWORD *)(a1 + 1696);
  v6 = *(_QWORD **)(a1 + 1688);
  if ( *v6 != a1 + 1680 )
    __fastfail(3u);
  *Table = a1 + 1680;
  Table[1] = v6;
  *v6 = Table;
  *(_QWORD *)(a1 + 1688) = Table;
  v7 = *(_DWORD *)(a1 + 68);
  v8 = *(_DWORD *)(a1 + 64);
  if ( v7 )
    v8 /= v7;
  v9 = *(_DWORD *)(a1 + 24);
  if ( (v9 & 4) == 0 )
  {
    if ( (v9 & 2) == 0 )
    {
      guard_dispatch_icall_no_overrides(1LL, 24LL);
      if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
      {
        ImageNotifyRoutine = -1073741637;
        goto LABEL_33;
      }
    }
    v2 = 10 * v8;
    if ( (BYTE4(PerfGlobalGroupMask) & 2) != 0 )
      v2 = EtwpProfileInterval;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.ReadTransferCount, 0LL, 0LL, v4);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock.ReadTransferCount, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&ExpSysDbgLock.ReadTransferCount,
      v11,
      (__int64)&ExpSysDbgLock.ReadTransferCount);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v12);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  ExpSysDbgLock.WriteTransferCount = (__int64)KeGetCurrentThread();
  if ( ExpSysDbgLock.QueuedScb )
  {
    ImageNotifyRoutine = -1073740008;
    goto LABEL_33;
  }
  ImageNotifyRoutine = EtwpCovSampCaptureContextStart((_DWORD *)(a1 + 24));
  if ( ImageNotifyRoutine >= 0 )
  {
    v14 = ExpSysDbgLock.TracingPrivate[0];
    PsReferenceSiloContext((void *)a1);
    ExpSysDbgLock.QueuedScb = (_KSCB *)a1;
    _InterlockedExchange64((volatile __int64 *)&ExpSysDbgLock.ThreadTimerDelay, 0LL);
    *(_DWORD *)(a1 + 1660) |= 1u;
    ImageNotifyRoutine = PsSetLoadImageNotifyRoutineEx(EtwpCovSampImageNotify, 0LL);
    if ( ImageNotifyRoutine >= 0 )
    {
      *(_DWORD *)(a1 + 1660) |= 2u;
      PsEnumProcesses(EtwpCovSampEnumerateProcess, a1 + 16);
      MmEnumerateSystemImages((__int64)EtwpCovSampEnumerateDriver, a1 + 16);
      v15 = EtwpHostSiloState;
      v16 = *(_DWORD *)(EtwpHostSiloState + 4844) | 4;
      *(_DWORD *)(EtwpHostSiloState + 4844) = v16;
      if ( (*(_DWORD *)(a1 + 24) & 8) == 0 )
        *(_DWORD *)(v15 + 4848) |= 4u;
      if ( (*(_DWORD *)(a1 + 24) & 0x10) == 0 )
        *(_DWORD *)(v15 + 4848) |= 0x200u;
      if ( (*(_DWORD *)(a1 + 24) & 0x20) == 0 )
        *(_DWORD *)(v15 + 4844) = v16 | 0x1000;
      EtwpUpdateGlobalGroupMasks(v15, 0LL, 9LL);
      *(_DWORD *)(a1 + 1660) |= 4u;
      if ( (*(_DWORD *)(a1 + 24) & 4) == 0 )
      {
        KeInitializeProfileCallback((_DWORD *)(v14 + 16), (__int64)EtwpCovSampProfileInterrupt, v14, 0);
        KeSetIntervalProfile(v2, *(__int16 *)(v14 + 624));
        ImageNotifyRoutine = KeStartProfile(v14 + 16);
        if ( ImageNotifyRoutine < 0 )
          goto LABEL_33;
        *(_DWORD *)(a1 + 1660) |= 8u;
      }
      ImageNotifyRoutine = 0;
    }
  }
LABEL_33:
  if ( (struct _KTHREAD *)ExpSysDbgLock.WriteTransferCount == KeGetCurrentThread() )
  {
    ExpSysDbgLock.WriteTransferCount = 0LL;
    if ( (_InterlockedExchangeAdd64(&ExpSysDbgLock.ReadTransferCount, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&ExpSysDbgLock.ReadTransferCount);
    KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.ReadTransferCount);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)ImageNotifyRoutine;
}
