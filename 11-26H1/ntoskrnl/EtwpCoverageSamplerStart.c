/*
 * XREFs of EtwpCoverageSamplerStart @ 0x14083773C
 * Callers:
 *     EtwpSetCoverageSamplerInformation @ 0x140837A74 (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MmEnumerateSystemImages @ 0x1404DE6F0 (MmEnumerateSystemImages.c)
 *     KeStartProfile @ 0x1405F5C68 (KeStartProfile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     KeInitializeProfileCallback @ 0x1407BDD88 (KeInitializeProfileCallback.c)
 *     KeSetIntervalProfile @ 0x1407BDF28 (KeSetIntervalProfile.c)
 *     EtwpCovSampCaptureContextStart @ 0x14083699C (EtwpCovSampCaptureContextStart.c)
 *     PsEnumProcesses @ 0x1409BBF0C (PsEnumProcesses.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1409FF720 (EtwpUpdateGlobalGroupMasks.c)
 *     EtwpCoverageSamplerAllocateTable @ 0x140A3295C (EtwpCoverageSamplerAllocateTable.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140B32DB0 (PsSetLoadImageNotifyRoutineEx.c)
 */

__int64 __fastcall EtwpCoverageSamplerStart(unsigned __int64 a1)
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
  struct _LIST_ENTRY *Blink; // r15
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
  v11 = (AutoBoost *)KeAbPreAcquire((__int64)&ExpSysDbgLock.AbWaitObject, 0LL, 0LL, v4);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpSysDbgLock.AbWaitObject, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&ExpSysDbgLock.AbWaitObject,
      v11,
      (__int64)&ExpSysDbgLock.AbWaitObject);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v12);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  *(_QWORD *)&ExpSysDbgLock.ReservedPreviousReadyTimeValue = KeGetCurrentThread();
  if ( ExpSysDbgLock.UserWaitTime )
  {
    ImageNotifyRoutine = -1073740008;
    goto LABEL_33;
  }
  ImageNotifyRoutine = EtwpCovSampCaptureContextStart((_DWORD *)(a1 + 24));
  if ( ImageNotifyRoutine >= 0 )
  {
    Blink = ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
    PsReferenceSiloContext((void *)a1);
    ExpSysDbgLock.UserWaitTime = a1;
    _InterlockedExchange64((volatile __int64 *)&ExpSysDbgLock.GlobalUpdateVpThreadPriorityListEntry.Flink, 0LL);
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
        KeInitializeProfileCallback(&Blink[1], (__int64)EtwpCovSampProfileInterrupt, (__int64)Blink, 0);
        KeSetIntervalProfile(v2, SLOWORD(Blink[39].Flink));
        ImageNotifyRoutine = KeStartProfile((ULONG_PTR)&Blink[1]);
        if ( ImageNotifyRoutine < 0 )
          goto LABEL_33;
        *(_DWORD *)(a1 + 1660) |= 8u;
      }
      ImageNotifyRoutine = 0;
    }
  }
LABEL_33:
  if ( *(struct _KTHREAD **)&ExpSysDbgLock.ReservedPreviousReadyTimeValue == KeGetCurrentThread() )
  {
    *(_QWORD *)&ExpSysDbgLock.ReservedPreviousReadyTimeValue = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSysDbgLock.AbWaitObject, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpSysDbgLock.AbWaitObject);
    KeAbPostRelease((unsigned __int64)&ExpSysDbgLock.AbWaitObject);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)ImageNotifyRoutine;
}
